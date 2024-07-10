//! # keyflux Macro Package
//!
//! The `keyflux` macro package provides a set of macros to facilitate the creation of proxy methods
//! and inner structs for Rust structs. This is particularly useful when dealing with nested or
//! complex data structures, allowing for cleaner and more manageable code.
//!
//! ## Features
//!
//! - Automatically generates an inner struct with the suffix `Inner`.
//! - Creates proxy methods for accessing fields of the inner struct.
//! - Allows for custom prefixes and suffixes for the proxy methods.
//!
//! ## Usage
//!
//! To use the `keyflux` macros, you need to annotate your struct with the `#[derive(Flux)]` attribute
//! and optionally provide `#[flux(...)]` attributes to customize the behavior.
//!
//! ### Example
//!
//! ```rust
//! use keyflux_macros::flux_struct;
//!
//! #[flux_struct]
//! struct MyStruct {
//!     #[flux(proxy_name = "custom_field")]
//!     field1: String,
//!     field2: i32,
//! }
//! ```
//!
//! This will generate an inner struct `MyStructInner` and proxy methods `custom_field` and `field2_field`
//! to access the respective fields.
//!
//! ## Attributes
//!
//! - `#[flux(proxy_name = "name")]`: Specifies a custom name for the proxy method.
//!
//! ## Implementation Details
//!
//! The implementation relies on the `darling` crate to parse and process the macro attributes,
//! and uses the `proc_macro2`, `quote`, and `syn` crates to generate the necessary code.

#![allow(dead_code)]

use darling::{ast, FromDeriveInput, FromField};
use proc_macro2::{Ident, Span, TokenStream};
use quote::{quote, ToTokens};

static INNER_STRUCT_SUFFIX: &str = "Inner";
static INNER_FIELD_NAME: &str = "__inner";
static PROXY_METHOD_SUFFIX: &str = "_field";
static PROXY_METHOD_PREFIX: &str = "";

/// Represents the main derive input for the Flux macro.
#[derive(Debug, FromDeriveInput)]
#[darling(attributes(flux), supports(struct_named))]
pub struct FluxInput {
    pub(crate) ident: syn::Ident,
    pub(crate) vis: syn::Visibility,
    attrs: Vec<syn::Attribute>,
    generics: syn::Generics,
    data: ast::Data<(), FluxFieldReceiver>,
    proxy_prefix: Option<String>,
    proxy_suffix: Option<String>,
}

/// Helper struct containing utility methods for generating inner structs and proxy methods.
struct Helper {}

impl Helper {
    /// Static method for getting the proxy prefix.
    fn get_proxy_prefix(proxy_prefix: &Option<String>) -> &str {
        proxy_prefix.as_deref().unwrap_or(PROXY_METHOD_PREFIX)
    }

    /// Static method for getting the proxy suffix.
    fn get_proxy_suffix(proxy_suffix: &Option<String>) -> &str {
        proxy_suffix.as_deref().unwrap_or(PROXY_METHOD_SUFFIX)
    }

    /// Static method to generate the inner struct's token stream.
    fn generate_inner_struct(ident: &syn::Ident, visibility: &syn::Visibility, generics: &syn::Generics, data: &ast::Data<(), FluxFieldReceiver>) -> TokenStream {
        let inner_struct_name = format!("{}{}", ident, INNER_STRUCT_SUFFIX);
        let inner_ident = Ident::new(&inner_struct_name, ident.span());
        let binding = data.as_ref().take_struct().unwrap();
        let fields = binding.fields.iter().map(|f| {
            let field_name = &f.ident;
            let field_ty = &f.ty;
            let field_attrs = &f.attrs;
            quote! {
                #(#field_attrs),*
                #field_name: #field_ty
            }
        });
        quote! {
            #[derive(Debug, serde::Serialize, serde::Deserialize)]
            #visibility struct #inner_ident #generics {
                #(#fields),*
            }
        }
    }

    /// Static method to generate proxy methods' token stream.
    fn generate_proxy_methods(data: &ast::Data<(), FluxFieldReceiver>, proxy_prefix: &str, proxy_suffix: &str) -> TokenStream {
        let inner_field_name = Ident::new(INNER_FIELD_NAME, Span::call_site());
        data.as_ref().take_struct().unwrap().fields.iter().map(|f| {
            let field_ident = &f.ident;
            let name = format!("{}{}{}", proxy_prefix, field_ident.as_ref().unwrap(), proxy_suffix);
            let proxy_name = f.proxy_name.as_ref().unwrap_or_else(|| {
                &name
            });
            let field_ty = &f.ty;
            let proxy_ident = Ident::new(&proxy_name, field_ident.as_ref().unwrap().span());
            quote! {
                pub fn #proxy_ident(&self) -> &#field_ty {
                    if let Some(inner) = &self.#inner_field_name {
                        &inner.#field_ident
                    } else {
                        &self.#field_ident
                    }
                }
            }
        }).collect()
    }

    /// Static method to generate the original struct's token stream.
    fn generate_original_struct(ident: &syn::Ident, visibility: &syn::Visibility, generics: &syn::Generics, data: &ast::Data<(), FluxFieldReceiver>) -> TokenStream {
        let inner_struct_name = format!("{}{}", ident, INNER_STRUCT_SUFFIX);
        let inner_ident = Ident::new(&inner_struct_name, ident.span());
        let inner_field_name = Ident::new(INNER_FIELD_NAME, Span::call_site());
        let binding = data.as_ref().take_struct().unwrap();
        let fields = binding.fields.iter().map(|f| {
            let field_name = &f.ident;
            let field_ty = &f.ty;
            let field_attrs = &f.attrs;
            quote! {
                #(#field_attrs),*
                #field_name: #field_ty
            }
        });


        quote! {



            #[derive(Debug, Default, serde::Serialize, serde::Deserialize)]
            #visibility struct #ident #generics {
                #(#fields),*,
                #[serde(skip, default)]
                #inner_field_name: Option<#inner_ident>
            }


        }
    }
}

impl ToTokens for FluxInput {
    fn to_tokens(&self, tokens: &mut TokenStream) {
        let ident = &self.ident;
        let inner_struct = Helper::generate_inner_struct(&self.ident, &self.vis, &self.generics, &self.data);
        let inner_struct_name = format!("{}{}", ident, INNER_STRUCT_SUFFIX);
        let inner_ident = Ident::new(&inner_struct_name, ident.span());
        let original_struct = Helper::generate_original_struct(&self.ident, &self.vis, &self.generics, &self.data);
        let proxy_methods = Helper::generate_proxy_methods(&self.data, Helper::get_proxy_prefix(&self.proxy_prefix), Helper::get_proxy_suffix(&self.proxy_suffix));
        let inner_field_name = Ident::new(INNER_FIELD_NAME, Span::call_site());
        let output = quote! {
            #original_struct
            #inner_struct
            impl #ident {
                #proxy_methods
                pub fn inner(&self) -> Option<&#inner_ident> {
                    self.#inner_field_name.as_ref()
                }
            }
            impl keyflux_traits::FluxInner for #ident {
                fn set_inner_value(&mut self, inner: serde_json::Value) {
                    self.#inner_field_name = Some(serde_json::from_value(inner).unwrap());
                }

            }
        };
        tokens.extend(output);
    }
}

/// Represents a field receiver for the Flux macro.
#[derive(Debug, FromField)]
#[darling(attributes(flux))]
struct FluxFieldReceiver {
    ident: Option<syn::Ident>,
    ty: syn::Type,
    attrs: Vec<syn::Attribute>,
    proxy_name: Option<String>,
}

