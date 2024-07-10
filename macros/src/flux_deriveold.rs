use std::io::BufRead;
// use darling::FromDeriveInput;
// use proc_macro2::{Ident, TokenStream};
// use quote::{IdentFragment, quote, ToTokens};
//
// /// Represents the main derive input for the Flux macro.
// #[derive(Debug, FromDeriveInput)]
// #[darling(attributes(flux), supports(struct_any))]
// pub struct FluxDeriveInput {
//     ident: syn::Ident,
//     vis: syn::Visibility,
//     attrs: Vec<syn::Attribute>,
//     generics: syn::Generics,
//     update: Option<String>,
//     delete: Option<String>,
//     insert: Option<String>,
//     select: Option<String>,
//     upsert: Option<String>,
// }
//
//
// impl ToTokens for FluxDeriveInput {
//     fn to_tokens(&self, tokens: &mut TokenStream) {
//
//         let ident = &self.ident;
//
//         let generate_impl = |method_name: &str, arg: &Option<String>, return_type: TokenStream| -> TokenStream {
//             arg.as_ref().map_or_else(
//                 || {
//                     let has_method = Ident::new(&format!("has_{}", method_name), proc_macro2::Span::call_site());
//                     let method = Ident::new(method_name, proc_macro2::Span::call_site());
//                     quote! {
//                         fn #has_method(&self) -> bool { false }
//                         fn #method(&self, _context: &dyn FluxContext) -> #return_type {
//                             Err(FluxError::default())
//                         }
//                     }
//                 },
//                 |arg| {
//                     if arg.starts_with("self.") {
//                         let method = Ident::new(&arg[5..], proc_macro2::Span::call_site());
//                         let has_method = Ident::new(&format!("has_{}", method_name), proc_macro2::Span::call_site());
//                         let method_name_ident = Ident::new(method_name, proc_macro2::Span::call_site());
//                         quote! {
//                             fn #has_method(&self) -> bool { true }
//                             fn #method_name_ident(&self, context: &dyn FluxContext) -> #return_type {
//                                 self.#method(context)
//                             }
//                         }
//                     } else {
//                         let function = syn::parse_str::<syn::Expr>(arg).unwrap();
//                         let has_method = Ident::new(&format!("has_{}", method_name), proc_macro2::Span::call_site());
//                         let method_name_ident = Ident::new(method_name, proc_macro2::Span::call_site());
//                         quote! {
//                             fn #has_method(&self) -> bool { true }
//                             fn #method_name_ident(&self, context: &dyn FluxContext) -> #return_type {
//                                 #function(context)
//                             }
//                         }
//                     }
//                 },
//             )
//         };
//
//         let update_impl = generate_impl("update", &self.update, quote! { Result<(), FluxError> });
//         let delete_impl = generate_impl("delete", &self.delete, quote! { Result<(), FluxError> });
//         let insert_impl = generate_impl("insert", &self.insert, quote! { Result<(), FluxError> });
//         let select_impl = generate_impl("select", &self.select, quote! { Result<Box<dyn Any>, FluxError> });
//         let upsert_impl = generate_impl("upsert", &self.upsert, quote! { Result<(), FluxError> });
//
//         let impl_block = quote! {
//             impl Flux for #ident {
//                 #update_impl
//                 #delete_impl
//                 #insert_impl
//                 #select_impl
//                 #upsert_impl
//             }
//         };
//
//         tokens.extend(impl_block);
//     }
// }
//
use darling::FromDeriveInput;
use proc_macro2::{Ident, TokenStream};
use quote::{quote, ToTokens};
use syn::spanned::Spanned;

#[derive(Debug, FromDeriveInput)]
#[darling(attributes(flux), supports(struct_any))]
pub struct FluxDeriveInput {
    ident: syn::Ident,
    vis: syn::Visibility,
    attrs: Vec<syn::Attribute>,
    generics: syn::Generics,
    update: Option<String>,
    delete: Option<String>,
    insert: Option<String>,
    select: Option<String>,
    upsert: Option<String>,
    ignore: Option<String>,
}

impl ToTokens for FluxDeriveInput {
    fn to_tokens(&self, tokens: &mut TokenStream) {
        let ident = &self.ident;

        let generate_impl = |trait_name: &str, method_name: &str, arg: &Option<String>, return_type: TokenStream| -> TokenStream {
            let trait_ident = Ident::new(trait_name, proc_macro2::Span::call_site());
            arg.as_ref().map_or_else(
                || {
                    if !self.ignore.is_none() {
                        let ignore_str = self.ignore.clone().unwrap();
                        let ignore_list: Vec<&str> = ignore_str.split(',').collect();
                        if ignore_list.iter().any(|&ignore| ignore == method_name) {
                            return quote! {};
                        }
                    }

                    let has_method = Ident::new(&format!("has_{}", method_name), proc_macro2::Span::call_site());
                    let method = Ident::new(method_name, proc_macro2::Span::call_site());
                    quote! {
                        impl #trait_ident for #ident {
                            fn #has_method(&self) -> bool { false }
                            fn #method(&self, _context: &dyn FluxContext) -> #return_type {
                                Err(FluxError::default())
                            }
                        }
                    }
                },
                |arg| {
                    if arg.starts_with("self.") {
                        let method = Ident::new(&arg[5..], proc_macro2::Span::call_site());
                        let has_method = Ident::new(&format!("has_{}", method_name), proc_macro2::Span::call_site());
                        let method_name_ident = Ident::new(method_name, proc_macro2::Span::call_site());
                        quote! {
                            impl #trait_ident for #ident {
                                fn #has_method(&self) -> bool { true }
                                fn #method_name_ident(&self, context: &dyn FluxContext) -> #return_type {
                                    self.#method(context)
                                }
                            }
                        }
                    } else {
                        let function = syn::parse_str::<syn::Expr>(arg).unwrap();
                        let has_method = Ident::new(&format!("has_{}", method_name), proc_macro2::Span::call_site());
                        let method_name_ident = Ident::new(method_name, proc_macro2::Span::call_site());
                        quote! {
                            impl #trait_ident for #ident {
                                fn #has_method(&self) -> bool { true }
                                fn #method_name_ident(&self, context: &dyn FluxContext) -> #return_type {
                                    #function(context)
                                }
                            }
                        }
                    }
                },
            )
        };

        let update_impl = generate_impl("FluxUpdate", "update", &self.update, quote! { Result<(), FluxError> });
        let delete_impl = generate_impl("FluxDelete", "delete", &self.delete, quote! { Result<(), FluxError> });
        let insert_impl = generate_impl("FluxInsert", "insert", &self.insert, quote! { Result<(), FluxError> });
        let select_impl = generate_impl("FluxSelect", "select", &self.select, quote! { Result<Box<dyn Any>, FluxError> });
        let upsert_impl = generate_impl("FluxUpsert", "upsert", &self.upsert, quote! { Result<(), FluxError> });

        let impl_block = quote! {
            #update_impl
            #delete_impl
            #insert_impl
            #select_impl
            #upsert_impl
        };

        tokens.extend(impl_block);
    }
}
