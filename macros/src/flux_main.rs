extern crate proc_macro;

use proc_macro2::{Ident, TokenStream};
use quote::{format_ident, quote, ToTokens};

#[derive(Default, deluxe::ParseMetaItem, deluxe::ExtractAttributes)]
#[deluxe(attributes(flux))]
struct Operations {
    ops: Vec<String>,
}

/// Executes an asynchronous operation within a new Tokio runtime.
fn async_to_sync(op_body: TokenStream) -> TokenStream {
    quote! {
        tokio::task::block_in_place(|| {
            tokio::runtime::Handle::current().block_on(async move {
                 #op_body
            })
        })
    }
}

/// Generates a future that concurrently runs an async operation on each item in a list.
fn single_async_to_many_async(async_single_op: &Ident, items: &TokenStream) -> TokenStream {
    quote! {
        let tasks = #items.iter().map(|item| self.#async_single_op(*item));
        let results: Vec<Result<KeyResponse>> = futures::future::join_all(tasks).await;
        results.into_iter().collect()
    }
}

/// Generates a future that concurrently runs a sync operation on each item in a list, within an async context.
fn single_sync_to_many_async(sync_single_op: &Ident, items: &TokenStream) -> TokenStream {
    quote! {
        let tasks = #items.iter().map(|item| async { self.#sync_single_op(*item) });
        let results: Vec<Result<KeyResponse>> = futures::future::join_all(tasks).await;
        results.into_iter().collect()
    }
}


/// Executes an async method for a single item and handles the result within a new Tokio runtime.
fn single_async_to_single_sync(method: &Ident, item: &TokenStream) -> TokenStream {
    async_to_sync(quote! {
        self.#method(#item).await
    })
}

/// Executes an async batch operation as a fallback for a single item, extracting the first result.
fn many_sync_to_many_async(batch_method: &Ident, item: &TokenStream) -> TokenStream {
    quote! {
        let runtime = tokio::runtime::Runtime::new().context(TokioSnafu {})?;
        runtime.block_on(self.#batch_method(&vec![#item.clone()])).map(|mut responses| responses.remove(0))
    }
}

/// Helper to create and execute a synchronous single operation for each key in a batch, wrapped in an async block.
fn single_async_to_many_sync(method: &Ident, keys: &TokenStream) -> TokenStream {
    quote! {
        let tasks = #keys.iter().map(|key| async { self.#method(*key) });
        let runtime = tokio::runtime::Runtime::new().context(TokioSnafu {})?;
        let results: Vec<Result<KeyResponse>> = runtime.block_on(async { futures::future::join_all(tasks).await });
        results.into_iter().collect()
    }
}

/// Helper to handle sync batch operations correctly without directly awaiting.
fn many_sync_to_single_sync(batch_method: &Ident, item: &TokenStream) -> TokenStream {
    quote! {
        // Clone the item and create a slice from it to pass to the batch method
        // let cloned_item = #item.clone();
        // let result = self.#batch_method(&[cloned_item])?;
        let result = self.#batch_method(&[#item])?;
        result.into_iter().next().context(NoResultSnafu
        {
            message: "No result found for single key upsert."
        })
    }
}

/// Generates batch methods using the provided operation names.
fn generate_batch_methods(ops: &[String]) -> Vec<TokenStream> {
    ops.iter().map(|op| {
        let method_name = format_ident!("{}_many", op);
        let async_batch = format_ident!("{}_many_async", op);
        let async_single = format_ident!("{}_single_async", op);
        let sync_single = format_ident!("{}_single", op);
        let keys = quote! { keys };

        let has_async_batch = format_ident!("has_{}_many_async", op);
        let has_async_single = format_ident!("has_{}_single_async", op);
        let has_sync_single = format_ident!("has_{}_single", op);

        let execute_async_batch = async_to_sync(quote! {
            self.#async_batch(#keys).await
        });

        let execute_sync_single = quote! {
            let runtime = tokio::runtime::Runtime::new().context(TokioSnafu {})?;
            let tasks = #keys.iter().map(|item| async { self.#sync_single(*item) });
            let results: Vec<Result<KeyResponse>> = runtime.block_on(async { futures::future::join_all(tasks).await });
            results.into_iter().collect()
        };

        quote! {
            fn #method_name(&self, keys: &[&dyn Key]) -> Result<Vec<KeyResponse>> {
                debug!("Attempting batch operation: {}", stringify!(#async_batch));
                if self.#has_async_batch() || self.#has_async_single() {
                    #execute_async_batch
                } else if self.#has_sync_single() {
                    #execute_sync_single
                } else {
                    error!("No implementation found for {}", stringify!(#async_batch));
                    Err(Error::NotImplementedError { message: format!("No implementation found for {}", stringify!(#async_batch)) })
                }
            }
        }
    }).collect()
}


/// Generates single methods using the provided operation names, ensuring async and sync fallbacks are handled correctly.
fn generate_single_operation_methods(ops: &[String]) -> Vec<TokenStream> {
    ops.iter().map(|op| {
        let single_method = format_ident!("{}_single", op);
        let single_async_method = format_ident!("{}_single_async", op);
        let many_async_method = format_ident!("{}_many_async", op);
        let many_method = format_ident!("{}_many", op);
        let key = quote! { key };

        // Resolving async operation code blocks before quoting
        let blocked_async_single_operation = async_to_sync(quote! { self.#single_async_method(key).await });
        let async_batch_fallback = async_to_sync(quote! { self.#many_async_method(&[key.clone()]).await.map(|mut result| result.remove(0)) });
        let sync_batch_fallback = many_sync_to_single_sync(&many_method, &key);

        // Determining availability of methods
        let has_single_async_method = format_ident!("has_{}_single_async", op);
        let has_many_async_method = format_ident!("has_{}_many_async", op);
        let has_single_method = format_ident!("has_{}_single", op);
        let has_many_method = format_ident!("has_{}_many", op);

        quote! {
            fn #single_method(&self, key: &dyn Key) -> Result<KeyResponse> {
                debug!("Attempting single operation: {}", stringify!(#single_method));
                if self.#has_single_async_method() {
                    trace!("{} is available for key: {:?}", stringify!(#single_method), key);
                    #blocked_async_single_operation
                } else if self.#has_many_async_method() {
                    debug!("Falling back to async batch version for a single key.");
                    #async_batch_fallback
                } else if self.#has_many_method() {
                    debug!("Falling back to sync batch version for a single key.");
                    #sync_batch_fallback
                } else {
                    error!("No implementation found for {}", stringify!(#single_method));
                    Err(Error::NotImplementedError { message: format!("No implementation or fallback found for {}", stringify!(#single_method)) })
                }
            }
        }
    }).collect()
}
/// Generates single asynchronous methods using the provided operation names.
fn generate_single_async_methods(ops: &[String]) -> Vec<TokenStream> {
    ops.iter().map(|op| {
        let single_async_method_name = format_ident!("{}_single_async", op);
        let many_async_method_name = format_ident!("{}_many_async", op);
        let single_method_name = format_ident!("{}_single", op);
        let many_method_name = format_ident!("{}_many", op);
        let has_single_fn_name = format_ident!("has_{}_single", op);
        let has_many_async_fn_name = format_ident!("has_{}_many_async", op);
        let has_many_fn_name = format_ident!("has_{}_many", op);
        quote! {
            async fn #single_async_method_name(&self, key: &dyn Key) -> Result<KeyResponse> {
                debug!("Attempting async single operation: {}", stringify!(#single_async_method_name));
                if self.#has_single_fn_name() {
                    trace!("{} is available for key: {:?}", stringify!(#single_async_method_name), key);
                    self.#single_method_name(key)
                } else if self.#has_many_async_fn_name() {
                    self.#many_async_method_name(&[key.clone()]).await.map(|mut result| result.remove(0))
                } else if self.#has_many_fn_name() {
                    self.#many_method_name(&[key.clone()]).map(|mut result| result.remove(0))
                } else {
                    error!("No implementation found for {}", stringify!(#single_async_method_name));
                    Err(Error::NotImplementedError { message: format!("No implementation found for {}", stringify!(#single_async_method_name)) })
                }
            }
        }
    }).collect()
}

/// Generates batch asynchronous methods using the provided operation names.
fn generate_batch_async_methods(ops: &[String]) -> Vec<TokenStream> {
    ops.iter().map(|op| {
        let many_async_method_name = format_ident!("{}_many_async", op);
        let single_async_method_name = format_ident!("{}_single_async", op);
        let many_method_name = format_ident!("{}_many", op);
        let single_method_name = format_ident!("{}_single", op);
        let has_many_fn_name = format_ident!("has_{}_many", op);
        let has_single_async_fn_name = format_ident!("has_{}_single_async", op);
        let has_single_fn_name = format_ident!("has_{}_single", op);
        quote! {
            async fn #many_async_method_name(&self, keys: &[&dyn Key]) -> Result<Vec<KeyResponse>> {
                debug!("Attempting async batch operation: {}", stringify!(#many_async_method_name));
                if self.#has_many_fn_name() {
                    self.#many_method_name(keys)
                } else if self.#has_single_async_fn_name() {
                    let tasks = keys.iter().map(|key| async { self.#single_async_method_name(*key).await });
                    futures::future::try_join_all(tasks).await.map(|results| results.into_iter().collect())
                } else if self.#has_single_fn_name() {
                    let tasks = keys.iter().map(|key| async { self.#single_method_name(*key) });
                    futures::future::try_join_all(tasks).await.map(|results| results.into_iter().collect())
                } else {
                    error!("No implementation found for {}", stringify!(#many_async_method_name));
                    Err(Error::NotImplementedError { message: format!("No implementation found for {}", stringify!(#many_async_method_name)) })
                }
            }
        }
    }).collect()
}


/// Generates the list method implementations, ensuring async and sync fallbacks are handled correctly.
fn generate_list_method() -> TokenStream {
    let list_method = format_ident!("list");
    let list_async_method = format_ident!("list_async");

    let has_list_method = format_ident!("has_list");
    let has_list_async_method = format_ident!("has_list_async");

    let async_conversion = async_to_sync(quote! {
        self.#list_async_method(value).await
    });

    // Generating the synchronous list method with fallbacks
    let sync_list_tokens = quote! {
        fn #list_method(&self, value: Value) -> Result<Vec<KeyResponse>> {
            debug!("Attempting list operation: {}", stringify!(#list_method));
            if self.#has_list_async_method() {
                debug!("Falling back to async list version for synchronous call.");
                #async_conversion
            } else {
                error!("No implementation found for {}", stringify!(#list_method));
                Err(Error::NotImplementedError { message: format!("No implementation or fallback found for {}", stringify!(#list_method)) })
            }
        }
    };

    // Generating the asynchronous list method
    let async_list_tokens = quote! {
        async fn #list_async_method(&self, value: Value) -> Result<Vec<KeyResponse>> {
            debug!("Attempting async list operation: {}", stringify!(#list_async_method));
            if self.#has_list_method() {
                self.#list_method(value)
            } else {
                error!("No implementation found for {}", stringify!(#list_async_method));
                Err(Error::NotImplementedError { message: format!("No implementation found for {}", stringify!(#list_async_method)) })
            }
        }
    };

    // Generating the method to check if synchronous list is available
    let has_list_tokens = quote! {
        fn #has_list_method(&self) -> bool {
            false
        }
    };

    // Generating the method to check if asynchronous list is available
    let has_list_async_tokens = quote! {
        fn #has_list_async_method(&self) -> bool {
            false
        }
    };

    // Combine all parts to form the full implementation
    quote! {
        #sync_list_tokens
        #async_list_tokens
        #has_list_tokens
        #has_list_async_tokens
    }
}


pub fn generate_flux_methods(attr: TokenStream, item: TokenStream) -> deluxe::Result<proc_macro2::TokenStream> {
    let errors = deluxe::Errors::new();
    let mut input = syn::parse::<syn::ItemTrait>(item.into()).unwrap();

    let Operations { ops } = deluxe::parse2::<Operations>(attr.into())?;

    let mut single_methods = generate_single_operation_methods(&ops);
    let mut batch_methods = generate_batch_methods(&ops);
    let mut single_async_methods = generate_single_async_methods(&ops);
    let mut batch_async_methods = generate_batch_async_methods(&ops);
    let mut has_single_methods = vec![];
    let mut has_many_methods = vec![];
    let mut has_single_async_methods = vec![];
    let mut has_many_async_methods = vec![];

    let helper = quote! {
       #[derive(Debug, Serialize, Deserialize)]
        pub struct FluxResponse<T = serde_json::Value, E = serde_json::Value> {
            data: Option<T>,  // Optional data, presence indicates success
            error: Option<E>,  // Optional error, presence indicates failure or partial success
        }
    };

    for op in ops.iter() {
        let single_method_name = format_ident!("{}_single", op);
        let many_method_name = format_ident!("{}_many", op);
        let single_async_method_name = format_ident!("{}_single_async", op);
        let many_async_method_name = format_ident!("{}_many_async", op);

        let has_single_fn_name = format_ident!("has_{}", single_method_name);
        let has_many_fn_name = format_ident!("has_{}", many_method_name);
        let has_single_async_fn_name = format_ident!("has_{}", single_async_method_name);
        let has_many_async_fn_name = format_ident!("has_{}", many_async_method_name);
        let has_single_method = quote! {
            fn #has_single_fn_name(&self) -> bool { false }
        };
        has_single_methods.push(has_single_method);

        let has_many_method = quote! {
            fn #has_many_fn_name(&self) -> bool { false }
        };
        has_many_methods.push(has_many_method);

        let has_single_async_method = quote! {
            fn #has_single_async_fn_name(&self) -> bool { false }
        };
        has_single_async_methods.push(has_single_async_method);

        let has_many_async_method = quote! {
            fn #has_many_async_fn_name(&self) -> bool { false }
        };
        has_many_async_methods.push(has_many_async_method);
    }

    let impl_name = &input.ident;
    let vis = &input.vis;
    let existing_macros = &input.attrs;

    let list_method = generate_list_method();

    let expanded = quote! {

        #(#existing_macros)*
        #vis trait #impl_name: Sync + Send + Debug + FluxInitialize {
            #(#single_methods)*
            #(#batch_methods)*
            #(#single_async_methods)*
            #(#batch_async_methods)*
            #list_method

            #(#has_single_methods)*
            #(#has_many_methods)*
            #(#has_single_async_methods)*
            #(#has_many_async_methods)*
        }
    };
    Ok(expanded)
}


