#![allow(warnings)]
extern crate proc_macro;

use proc_macro::{TokenStream};
use quote::{quote, ToTokens};
use syn::{parse_macro_input, Ident, DeriveInput, ItemFn, Field, Meta, ItemStruct, MetaNameValue, Lit, LitStr, ItemImpl};
use syn::parse::Parser;
use syn::spanned::Spanned;


#[proc_macro_attribute]
pub fn conditional_import(attr: TokenStream, input: TokenStream) -> TokenStream {
    let condition = parse_macro_input!(attr as LitStr).value();
    let input_fn = parse_macro_input!(input as ItemFn);

    let maybe_import = if condition == "enable" {
        quote! {
            use crate::JsonSchema;
        }
    } else {
        quote! {}
    };

    let output = quote! {
        #maybe_import
        #input_fn
    };

    TokenStream::from(output)
}

fn add_field_to_struct(data: &mut syn::Data, field_quote: proc_macro2::TokenStream) {
    if let syn::Data::Struct(ref mut data_struct) = data {
        if let syn::Fields::Named(ref mut fields) = data_struct.fields {
            let extra_field = Field::parse_named.parse2(field_quote).unwrap();
            fields.named.push(extra_field);
        }
    }
}


fn add_field_to_fields(fields: &mut Vec<proc_macro2::TokenStream>, field_quote: proc_macro2::TokenStream) {
    fields.push(field_quote);
}


// fn get_proxy_name(attrs: &[syn::Attribute]) -> Option<Ident> {
//     for attr in attrs {
//         if attr.path.is_ident("proxy_name") {
//             if let Ok(syn::Meta::NameValue(meta)) = attr.parse_meta() {
//                 if let syn::Lit::Str(lit) = meta.lit {
//                     return Some(syn::Ident::new(&lit.value(), lit.span()));
//                 }
//             }
//         }
//     }
//     None
// }

fn create_proxy_fields(data: &syn::Data) -> Vec<proc_macro2::TokenStream> {
    if let syn::Data::Struct(ref data) = data {
        if let syn::Fields::Named(ref fields) = data.fields {
            fields.named.iter().map(|f| {
                let ident = &f.ident;
                quote! {
                    #ident: self.#ident.clone()
                }
            }).collect::<Vec<_>>()
        } else {
            unimplemented!()
        }
    } else {
        unimplemented!()
    }
}

static INNER_STRUCT_SUFFIX: &str = "Inner";

static INNER_FIELD_NAME: &str = "__inner";

static PROXY_METHOD_SUFFIX: &str = "_field";

fn get_proxy_name(attrs: &[syn::Attribute]) -> Option<Ident> {
    for attr in attrs {
        println!("Attribute: {:?}", attr.to_token_stream().to_string());
        if attr.path.is_ident("abc") {
            if let Ok(syn::Meta::List(meta_list)) = attr.parse_meta() {
                for nested_meta in meta_list.nested.iter() {
                    if let syn::NestedMeta::Meta(syn::Meta::NameValue(meta_name_value)) = nested_meta {
                        if meta_name_value.path.is_ident("proxy_name") {
                            if let syn::Lit::Str(lit) = &meta_name_value.lit {
                                return Some(syn::Ident::new(&lit.value(), lit.span()));
                            }
                        }
                    }
                }
            }
        }
    }
    None
}

// Define the macro
#[proc_macro_derive(ProxyMethods, attributes(proxy_name))]
pub fn proxy_methods(input: TokenStream) -> TokenStream {
    let input = parse_macro_input!(input as DeriveInput);
    let struct_name = input.ident;
    let (impl_generics, ty_generics, where_clause) = input.generics.split_for_impl();
    let proxy_fields = create_proxy_fields(&input.data);
    let expanded = quote! {
        impl #impl_generics #struct_name #ty_generics #where_clause {
            pub fn proxy(&self) -> #struct_name #ty_generics {
                #struct_name {
                    #(#proxy_fields),*
                }
            }
        }
    };
    TokenStream::from(expanded)
}

#[proc_macro_attribute]
pub fn flux(args: TokenStream, input: TokenStream) -> TokenStream {
    let input = parse_macro_input!(input as ItemStruct); // Assume it's used on structs only for simplicity
    let args = parse_macro_input!(args as Meta); // Parse the attribute's arguments

    // Example: Handle the arguments
    if let Meta::List(meta_list) = args {
        for nested_meta in meta_list.nested {
            if let syn::NestedMeta::Meta(Meta::NameValue(MetaNameValue { path, lit, .. })) = nested_meta {
                if path.is_ident("proxy_name") {
                    if let Lit::Str(proxy_name) = lit {
                        println!("Proxy name specified: {}", proxy_name.value());
                        // You could modify the struct or generate additional code based on this
                    }
                }
            }
        }
    }

    // Just return the struct as it was, without modification, for now
    TokenStream::from(quote! {
        #input
    })
}


// Function to create proxy methods based on the fields and their attributes
fn create_proxy_methods(data: &syn::Data) -> Vec<proc_macro2::TokenStream> {
    if let syn::Data::Struct(ref data) = data {
        if let syn::Fields::Named(ref fields) = data.fields {
            fields.named.iter().map(|f| {
                let field_name = &f.ident;
                let field_ty = &f.ty;
                let proxy_name = match get_proxy_name(&f.attrs) {
                    Some(name) => name,
                    None => Ident::new(&format!("{}{}", field_name.as_ref().unwrap(), PROXY_METHOD_SUFFIX), field_name.span())
                };
                let inner_field_name = Ident::new(INNER_FIELD_NAME, field_name.span());
                quote! {
                    pub fn #proxy_name(&self) -> &#field_ty {
                        if let Some(inner) = &self.#inner_field_name {
                            &inner.#field_name
                        } else {
                            &self.#field_name
                        }
                    }
                }
            }).collect()
        } else {
            unimplemented!()
        }
    } else {
        unimplemented!()
    }
}


// fields.iter().map(|f| {
//     let field_name = &f.ident;
//     let field_ty = &f.ty;
//     let proxy_name = match get_proxy_name(&f.attrs) {
//         Some(name) => name,
//         None => Ident::new(&format!("{}_field", field_name.as_ref().unwrap()), field_name.span())
//     };
//
//     quote! {
//         pub fn #proxy_name(&self) -> &#field_ty {
//             &self.#field_name
//         }
//     }
// }).collect()

fn collect_fields(data: &syn::Data) -> Vec<proc_macro2::TokenStream> {
    if let syn::Data::Struct(ref data) = data {
        if let syn::Fields::Named(ref fields) = data.fields {
            fields.named.iter().map(|f| {
                let attrs = &f.attrs;
                let vis = &f.vis;
                let ident = &f.ident;
                let ty = &f.ty;
                quote! {
                    #(#attrs)*
                    #vis #ident: #ty
                }
            }).collect::<Vec<_>>()
        } else {
            unimplemented!()
        }
    } else {
        unimplemented!()
    }
}


// #[proc_macro_attribute]
// pub fn flux(_args: TokenStream, input: TokenStream) -> TokenStream {
//     let input = parse_macro_input!(input as syn::ItemImpl);
//     // let name = "Flux";
//     //
//     // let self_ty = &input.self_ty;
//     // let (impl_generics, ty_generics, where_clause) = input.generics.split_for_impl();
//     // let items = &input.items;
//     //
//     // let expanded = quote! {
//     //     #[async_trait::async_trait]
//     //     #[typetag::serde(name = #name)]
//     //     impl #impl_generics Flux for #self_ty #ty_generics #where_clause {
//     //         #(#items)*
//     //     }
//     // };
//
//     TokenStream::from(quote! {
//         #input
//     })
// }

#[proc_macro_attribute]
pub fn flux_define(_args: TokenStream, input: TokenStream) -> TokenStream {
    let mut input = parse_macro_input!(input as DeriveInput);
    input.attrs.push(syn::parse_quote!(#[derive(Debug, Serialize, Deserialize, Clone)]));
    // add_field_to_struct(&mut input.data, quote! { #[serde(skip)] pub secret: std::path::PathBuf });
    let name = &input.ident;
    let vis = &input.vis;
    let generics = &input.generics;
    let ident = &input.ident;
    let attrs = &input.attrs;
    // Extract the modified fields
    let mut fields = collect_fields(&input.data);
    add_field_to_fields(&mut fields, quote! { #[serde(skip)] pub secret: std::path::PathBuf });
    // Reconstruct the struct
    let inner_struct_name = Ident::new(&format!("{}{}", input.ident, INNER_STRUCT_SUFFIX), input.ident.span());
    let inner_field_name = Ident::new(INNER_FIELD_NAME, input.ident.span());
    let inner_replica = quote! {
        #(#attrs)*
        #vis struct #inner_struct_name #generics {
            #(#fields),*
        }
    };
    let proxy_methods = create_proxy_methods(&input.data);
    let reconstructed_struct = quote! {
        #(#attrs)*
        #vis struct #ident #generics {
            #(#fields),*,
            #[serde(skip)]
            #inner_field_name: Option<#inner_struct_name>
        }

        impl #generics #ident #generics {
            #(#proxy_methods)*
            fn inner(&self) -> Option<&#inner_struct_name #generics> {
                self.#inner_field_name.as_ref()
            }
        }

        impl crate::FluxInner for #ident #generics {
            fn set_inner_value(&mut self, inner: serde_json::Value) {
                self.#inner_field_name = Some(serde_json::from_value(inner).unwrap());
            }
        }
    };

    // // Reconstruct the struct
    // let reconstructed_struct = quote! {
    //     #[derive(Debug, Serialize, Deserialize, Clone)]
    //     #vis struct #name #generics {
    //         #(#fields),*
    //     }
    // };

    let expanded_original = quote! {
        #input
    };
    // Emit a diagnostic message to print the reconstructed struct
    // unsafe {
    //     Diagnostic::new(Level::Note, format!("Reconstructed: {}", reconstructed_struct.to_string())).emit();
    // }
    let output_string = reconstructed_struct.to_string();
    // let input_string = input.to_string();
    println!("ORIGINAL: \n{}", expanded_original.to_string());
    println!("RECONSTRUCTED: \n{}", output_string.to_string());


    TokenStream::from(quote! {
        #inner_replica
        #reconstructed_struct
        // #impl_block
    })
}

// let name = &input.ident;
// let attrs = &input.attrs;
// let vis = &input.vis;
// let generics = &input.generics;
// let data = &input.data;
//
// let expanded = quote! {
//     // #[derive(Debug)]
//     // #vis struct #name #generics #data
//     // #(#attrs)*
//     // #name
// };
//
// let input = parse_macro_input!(item as ItemFn);
// println!("{} defined", input.sig.ident);
// println!("Args received: {}", _args.to_string());
#[proc_macro_attribute]
pub fn flux_config(args: TokenStream, input: TokenStream) -> TokenStream {
    // Parse the input TokenStream into an ItemImpl
    let input = parse_macro_input!(input as ItemImpl);

    // Parse the args to get the 'name' argument
    let meta = parse_macro_input!(args as Meta);
    let name = match meta {
        Meta::NameValue(MetaNameValue { lit: Lit::Str(lit_str), .. }) => lit_str.value(),
        _ => panic!("Expected a name argument in the format `#[flux_config(name = \"value\")]`"),
    };

    let self_ty = &input.self_ty;
    let (impl_generics, ty_generics, where_clause) = input.generics.split_for_impl();
    let items = &input.items;

    // Use the extracted 'name' in the typetag attribute
    let expanded = quote! {
        #[async_trait::async_trait]
        #[typetag::serde(name = #name)]
        impl #impl_generics Flux for #self_ty #ty_generics #where_clause {
            #(#items)*
        }
    };

    TokenStream::from(expanded)
}

