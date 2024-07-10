use proc_macro2::{TokenStream};
use quote::quote;

#[derive(Default, deluxe::ParseMetaItem, deluxe::ExtractAttributes)]
pub struct FluxFinalize {}


pub fn process_flux_finalize_derive(
    item: proc_macro::TokenStream,
) -> TokenStream {
    let input = syn::parse::<syn::DeriveInput>(item).unwrap();
    // Parsing functions suffixed with `_optional` can be used to continue
    // parsing after an error. Any errors will get accumulated into an `Errors`
    // structure, which can then be manually included in the token output to
    // produce compile errors.
    let errors = deluxe::Errors::new();
    let ident = &input.ident;
    let flux_impl = quote! {
        impl FluxFinalize for #ident { }
    };
    let tokens = quote! {
        #errors
        #flux_impl
    };
    tokens.into()
}
