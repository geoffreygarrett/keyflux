// use std::path::PathBuf;
// use darling::FromDeriveInput;
// use proc_macro2::{Ident, TokenStream};
// use quote::{quote, ToTokens};
//
// /// Represents the main derive input for the Flux macro.
// #[derive(Debug, FromDeriveInput)]
// #[darling(attributes(flux), supports(struct_any))]
// pub struct CurlDeriveInput {
//     ident: syn::Ident,
//     vis: syn::Visibility,
//     attrs: Vec<syn::Attribute>,
//     generics: syn::Generics,
//     file: Option<PathBuf>,
//     template: Option<String>,
// }
//
// impl ToTokens for CurlDeriveInput {
//     fn to_tokens(&self, tokens: &mut TokenStream) {
//         let ident = &self.ident;
//
//         let update_impl = self.update.as_ref().map_or_else(
//             || {
//                 quote! {
//                     fn has_update(&self) -> bool { false }
//                     fn update(&self, _context: &dyn FluxContext) -> Result<(), FluxError> {
//                         Err(FluxError::default())
//                     }
//                 }
//             },
//             |function| {
//                 quote! {
//                     fn has_update(&self) -> bool { true }
//                     fn update(&self, context: &dyn FluxContext) -> Result<(), FluxError> {
//                         #function(context)
//                     }
//                 }
//             },
//         );
//
//         let delete_impl = self.delete.as_ref().map_or_else(
//             || {
//                 quote! {
//                     fn has_delete(&self) -> bool { false }
//                     fn delete(&self, _context: &dyn FluxContext) -> Result<(), FluxError> {
//                         Err(FluxError::default())
//                     }
//                 }
//             },
//             |function| {
//                 quote! {
//                     fn has_delete(&self) -> bool { true }
//                     fn delete(&self, context: &dyn FluxContext) -> Result<(), FluxError> {
//                         #function(context)
//                     }
//                 }
//             },
//         );
//
//         let insert_impl = self.insert.as_ref().map_or_else(
//             || {
//                 quote! {
//                     fn has_insert(&self) -> bool { false }
//                     fn insert(&self, _context: &dyn FluxContext) -> Result<(), FluxError> {
//                         Err(FluxError::default())
//                     }
//                 }
//             },
//             |function| {
//                 quote! {
//                     fn has_insert(&self) -> bool { true }
//                     fn insert(&self, context: &dyn FluxContext) -> Result<(), FluxError> {
//                         #function(context)
//                     }
//                 }
//             },
//         );
//
//         let select_impl = self.select.as_ref().map_or_else(
//             || {
//                 quote! {
//                     fn has_select(&self) -> bool { false }
//                     fn select(&self, _context: &dyn FluxContext) -> Result<Box<dyn Any>, FluxError> {
//                         Err(FluxError::default())
//                     }
//                 }
//             },
//             |function| {
//                 quote! {
//                     fn has_select(&self) -> bool { true }
//                     fn select(&self, context: &dyn FluxContext) -> Result<Box<dyn Any>, FluxError> {
//                         #function(context)
//                     }
//                 }
//             },
//         );
//
//         let upsert_impl = self.upsert.as_ref().map_or_else(
//             || {
//                 quote! {
//                     fn has_upsert(&self) -> bool { false }
//                     fn upsert(&self, _context: &dyn FluxContext) -> Result<(), FluxError> {
//                         Err(FluxError::default())
//                     }
//                 }
//             },
//             |function| {
//                 quote! {
//                     fn has_upsert(&self) -> bool { true }
//                     fn upsert(&self, context: &dyn FluxContext) -> Result<(), FluxError> {
//                         #function(context)
//                     }
//                 }
//             },
//         );
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
