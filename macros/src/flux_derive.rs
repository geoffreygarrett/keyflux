use proc_macro2::{TokenStream};
use quote::quote;
use crate::flux_common::Flux;

pub(crate) fn process_flux_derive(
    item: proc_macro::TokenStream,
) -> TokenStream {
    let mut input = syn::parse::<syn::DeriveInput>(item).unwrap();
    // Parsing functions suffixed with `_optional` can be used to continue
    // parsing after an error. Any errors will get accumulated into an `Errors`
    // structure, which can then be manually included in the token output to
    // produce compile errors.
    let errors = deluxe::Errors::new();
    let Flux { name } = deluxe::extract_attributes_optional(&mut input, &errors);
    let ident = &input.ident;
    let typetag: TokenStream;
    match name {
        Some(name) => {
            typetag = quote! {
                #[typetag::serde(name = #name)]
            };
        }
        None => {
            typetag = quote! {
                #[typetag::serde]
            };
        }
    }
    let flux_impl = quote! {
        #typetag
        impl Flux for #ident {}
    };
    let tokens = quote! {
        #errors
        #flux_impl
    };
    tokens.into()
}

