use proc_macro2::{TokenStream};
use quote::quote;
use syn::{ImplItem, ItemImpl};
use crate::flux_common::{Flux, generate_impl, ImplementedOperations, Operation};

pub fn process_flux_impl(
    attr: proc_macro::TokenStream,
    item: proc_macro::TokenStream,
) -> TokenStream {
    let mut item_impl = match syn::parse::<ItemImpl>(item.into()) {
        Ok(impl_item) => impl_item,
        Err(e) => return e.into_compile_error().into(),
    };
    let errors = deluxe::Errors::new();
    let Flux { name: _name } = deluxe::parse_optional(attr, &errors);
    let (_, items) = item_impl.items.split_at_mut(0);
    let mut impls = ImplementedOperations::default();
    for i in items.iter_mut() {
        // Extract the attributes to remove them from the final output
        match deluxe::extract_attributes(i) {
            Ok(operation) => {
                match operation {
                    Operation::Update => impls.update = Some(i.clone()),
                    Operation::Delete => impls.delete = Some(i.clone()),
                    Operation::Insert => impls.insert = Some(i.clone()),
                    Operation::Select => impls.select = Some(i.clone()),
                    Operation::Upsert => impls.upsert = Some(i.clone()),
                    Operation::Initialize => impls.initialize = Some(i.clone()),
                    Operation::Finalize => impls.finalize = Some(i.clone()),
                }
            }
            Err(e) => errors.push_syn(e),
        }
    }

    let update_impl = generate_impl("FluxUpdate", "update", &impls.update, quote! { UpdateResponse }, &item_impl.self_ty, Some("UpdateInput"));
    let delete_impl = generate_impl("FluxDelete", "delete", &impls.delete, quote! { DeleteResponse }, &item_impl.self_ty, Some("DeleteInput"));
    let insert_impl = generate_impl("FluxInsert", "insert", &impls.insert, quote! { InsertResponse }, &item_impl.self_ty, Some("InsertInput"));
    let select_impl = generate_impl("FluxSelect", "select", &impls.select, quote! { SelectResponse }, &item_impl.self_ty, Some("SelectInput"));
    let upsert_impl = generate_impl("FluxUpsert", "upsert", &impls.upsert, quote! { UpsertResponse }, &item_impl.self_ty, Some("UpsertInput"));
    let finalize_impl = generate_impl("FluxFinalize", "finalize", &impls.finalize, quote! { () }, &item_impl.self_ty, None);
    let initialize_impl = generate_impl("FluxInitialize", "initialize", &impls.initialize, quote! { () }, &item_impl.self_ty, None);

    let tokens = quote! {
        #errors
        #item_impl
        #update_impl
        #delete_impl
        #insert_impl
        #select_impl
        #upsert_impl
        #finalize_impl
        #initialize_impl
    };
    tokens.into()
}

