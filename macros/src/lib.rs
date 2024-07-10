extern crate proc_macro;
use proc_macro::TokenStream;

use darling::{FromDeriveInput};
use quote::{quote};
use syn::{DeriveInput, ItemFn};

mod flux_struct;
mod flux_curl;
mod curl_derive;
mod flux_impl;
mod flux_derive;
mod flux_finalize_derive;
mod flux_initialize_derive;
mod flux_common;
mod flux_main;
mod test_file;

#[proc_macro_attribute]
pub fn flux_struct(_args: TokenStream, input: TokenStream) -> TokenStream {
    let receiver = flux_struct::FluxInput::from_derive_input(&syn::parse_macro_input!(input as DeriveInput)).unwrap();
    quote!(#receiver).into()
}

#[proc_macro_derive(FluxBase, attributes(flux))]
pub fn flux_base_derive(input: TokenStream) -> TokenStream {
    let input = syn::parse_macro_input!(input as DeriveInput);
    let name = &input.ident;
    let gen = quote! {
        impl FluxBase for #name {
            fn initialize(&mut self, _context: &mut dyn FluxContext) -> Result<(), FluxError> {
                Ok(())
            }
            fn as_any(&self) -> &dyn Any {
                self
            }
        }
    };
    gen.into()
}

#[proc_macro_derive(Flux, attributes(flux))]
pub fn flux_derive(input: TokenStream) -> TokenStream {
    flux_derive::process_flux_derive(input).into()
}

#[proc_macro_derive(FluxInitialize, attributes(flux))]
pub fn flux_initialize_derive(input: TokenStream) -> TokenStream {
    flux_initialize_derive::process_flux_initialize_derive(input).into()
}

#[proc_macro_derive(FluxFinalize, attributes(flux))]
pub fn flux_finalize_derive(input: TokenStream) -> TokenStream {
    flux_finalize_derive::process_flux_finalize_derive(input).into()
}

#[proc_macro_attribute]
pub fn flux_main(attr: TokenStream, item: TokenStream) -> TokenStream {
    flux_main::generate_flux_methods(attr.into(), item.into()).unwrap().into()
}

#[proc_macro_attribute]
pub fn curl(_args: TokenStream, input: TokenStream) -> TokenStream {
    flux_curl::process_curl_fn(_args, input).into()
}

#[proc_macro_attribute]
pub fn flux_method(_attr: TokenStream, item: TokenStream) -> TokenStream {
    let input = syn::parse_macro_input!(item as ItemFn);

    // Extract the function name and the block of the function
    let fn_name = &input.sig.ident;
    // let block = &input.block;

    // Generate the trait implementation outside of the impl block
    let output = quote! {
        impl TestFlux {
            #input
        }

        impl FluxUpdate for TestFlux {
            fn update(&self, context: &dyn FluxContext) -> Result<(), FluxError> {
                self.#fn_name(context)
            }

            fn has_update(&self) -> bool {
                true
            }
        }
    };

    output.into()
}

#[proc_macro_attribute]
pub fn flux_impl(
    attr: TokenStream,
    item: TokenStream,
) -> TokenStream {
    flux_impl::process_flux_impl(attr, item).into()
}
