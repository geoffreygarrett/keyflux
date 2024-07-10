use proc_macro2::{Ident, Span, TokenStream};
use quote::quote;
use syn::{ImplItem, Type};

#[derive(Default)]
pub struct ImplementedOperations {
    pub update: Option<ImplItem>,
    pub delete: Option<ImplItem>,
    pub insert: Option<ImplItem>,
    pub select: Option<ImplItem>,
    pub upsert: Option<ImplItem>,
    pub initialize: Option<ImplItem>,
    pub finalize: Option<ImplItem>,
}

#[derive(Default, deluxe::ParseMetaItem, deluxe::ExtractAttributes)]
#[deluxe(attributes(flux))]
pub struct Flux {
    pub name: Option<String>
}

#[derive(deluxe::ExtractAttributes)]
#[deluxe(attributes(flux))]
pub enum Operation {
    Update,
    Delete,
    Insert,
    Select,
    Upsert,
    Initialize,
    Finalize
}


pub(crate) fn generate_impl(
    trait_name: &str,
    method_name: &str,
    operation: &Option<ImplItem>,
    return_type: TokenStream,
    ident: &Box<Type>,
    input_type: Option<&str>,
) -> proc_macro2::TokenStream {
    let trait_ident = Ident::new(trait_name, Span::call_site());
    let has_method = Ident::new(&format!("has_{}", method_name), Span::call_site());
    let method_name_ident = Ident::new(method_name, Span::call_site());

    match operation {
        None => {
            let tokens = if let Some(input_type) = input_type {
                let input_ident = Ident::new(input_type, Span::call_site());
                quote! {

                    #[async_trait]
                    impl #trait_ident for #ident {
                        fn #has_method(&self) -> bool { false }
                        async fn #method_name_ident(&self, _input: #input_ident, _context: &dyn FluxContext) -> Result<#return_type> {
                            Err(Error::Undefined { message: format!("{} is not defined for {}", stringify!(#method_name_ident), stringify!(#trait_ident)) })
                        }
                    }
                }
            } else {
                quote! {

                    #[async_trait]
                    impl #trait_ident for #ident {
                        fn #has_method(&self) -> bool { false }
                        async fn #method_name_ident(&mut self, _context: &dyn FluxContext) -> Result<#return_type> {
                            Err(Error::Undefined { message: format!("{} is not defined for {}", stringify!(#method_name_ident), stringify!(#trait_ident)) })
                        }
                    }
                }
            };
            tokens.into()
        }
        Some(ImplItem::Fn(method_item)) => {
            let method_ident = &method_item.sig.ident;
            let tokens = if let Some(input_type) = input_type {
                let input_ident = Ident::new(input_type, Span::call_site());
                quote! {
                    #[async_trait]
                    impl #trait_ident for #ident {
                        fn #has_method(&self) -> bool { true }
                        async fn #method_name_ident(&self, input: #input_ident, context: &dyn FluxContext) -> Result<#return_type> {
                            self.#method_ident(input, context).await
                        }
                    }
                }
            } else {
                quote! {
                    #[async_trait]
                    impl #trait_ident for #ident {
                        fn #has_method(&self) -> bool { true }
                        async fn #method_name_ident(&mut self, context: &dyn FluxContext) -> Result<#return_type> {
                            self.#method_ident(context).await
                        }
                    }
                }
            };
            tokens.into()
        }
        _ => {
            let tokens = quote! {};
            tokens.into()
        }
    }
}
