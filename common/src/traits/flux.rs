// // use std::any::Any;
// //
// // use crate::errors::FluxError;
// //
// // pub trait FluxContext {
// //     fn get(&self, key: &str) -> Option<&dyn Any>;
// //     fn set(&mut self, key: &str, value: Box<dyn Any>);
// // }
// //
// // pub trait FluxBase: Any {
// //     fn initialize(&mut self, _context: &mut dyn FluxContext) -> Result<(), FluxError> {
// //         Ok(())
// //     }
// //     fn as_any(&self) -> &dyn Any;
// // }
// //
// // // Macro to define action traits and their corresponding Has* traits
// // macro_rules! define_flux_traits {
// //     ($($trait_name:ident, $has_trait:ident, $has_method:ident, $method:ident),*) => {
// //         $(
// //             pub trait $has_trait {
// //                 fn $has_method(&self) -> bool {
// //                     false
// //                 }
// //             }
// //
// //             pub trait $trait_name: FluxBase {
// //                 fn $method(&self, context: &dyn FluxContext) -> Result<(), FluxError>;
// //             }
// //
// //             impl<T: $trait_name + ?Sized> $has_trait for T {
// //                 fn $has_method(&self) -> bool {
// //                     true
// //                 }
// //             }
// //         )*
// //     };
// // }
// //
// // // Define all action traits and their corresponding Has* traits
// // define_flux_traits!(
// //     FluxUpdate, HasFluxUpdate, has_update, update,
// //     FluxDelete, HasFluxDelete, has_delete, delete,
// //     FluxInsert, HasFluxInsert, has_insert, insert,
// //     FluxSelect, HasFluxSelect, has_select, select,
// //     FluxUpsert, HasFluxUpsert, has_upsert, upsert
// // );
// //
// // pub trait Flux: FluxBase + FluxUpdate + FluxDelete + FluxInsert + FluxSelect + FluxUpsert + HasFluxUpdate + HasFluxDelete + HasFluxInsert + HasFluxSelect + HasFluxUpsert {}
// //
// //
// // // Re-exporting the traits
// // pub mod prelude {
// //     pub use super::{
// //         FluxBase, FluxContext, FluxDelete, FluxInsert, FluxSelect, FluxUpdate, FluxUpsert,
// //         HasFluxDelete, HasFluxInsert, HasFluxSelect, HasFluxUpdate, HasFluxUpsert,
// //     };
// // }
// //
// // // #[derive(FluxUpdate, FluxDelete, FluxInsert, FluxSelect, FluxUpsert)]
// // // #[flux(update="update", delete="delete", insert="insert", select="select", upsert="upsert")]
// // // struct TestFlux;
// // //
// // // impl FluxBase for TestFlux {
// // //     fn update(&self, _context: &dyn FluxContext) -> Result<(), FluxError> {
// // //         println!("Update called");
// // //         Ok(())
// // //     }
// // // }
// use std::any::Any;
// use crate::errors::{FluxError, NotDefinedSnafu};
//
// pub trait FluxContext {
//     fn get(&self, key: &str) -> Option<&dyn Any>;
//     fn set(&mut self, key: &str, value: Box<dyn Any>);
// }
//
// pub trait FluxBase: Any {
//     fn initialize(&mut self, _context: &mut dyn FluxContext) -> Result<(), FluxError> {
//         Ok(())
//     }
//     fn as_any(&self) -> &dyn Any;
// }
//
// pub trait Flux: FluxBase {
//     fn has_update(&self) -> bool {
//         false
//     }
//     fn update(&self, _context: &dyn FluxContext) -> Result<(), FluxError> {
//         Err(NotDefinedSnafu::build(NotDefinedSnafu { message: "No update function provided. Use 'has_update' to check if the function is available prior to calling".to_string() }).into())
//     }
//
//     fn has_delete(&self) -> bool {
//         false
//     }
//     fn delete(&self, _context: &dyn FluxContext) -> Result<(), FluxError> {
//         Err(NotDefinedSnafu::build(NotDefinedSnafu { message: "No delete function provided. Use 'has_delete' to check if the function is available prior to calling".to_string() }).into())
//     }
//
//     fn has_insert(&self) -> bool {
//         false
//     }
//     fn insert(&self, _context: &dyn FluxContext) -> Result<(), FluxError> {
//         Err(NotDefinedSnafu::build(NotDefinedSnafu { message: "No insert function provided. Use 'has_insert' to check if the function is available prior to calling".to_string() }).into())
//     }
//
//     fn has_select(&self) -> bool {
//         false
//     }
//     fn select(&self, _context: &dyn FluxContext) -> Result<Box<dyn Any>, FluxError> {
//         Err(NotDefinedSnafu::build(NotDefinedSnafu { message: "No select function provided. Use 'has_select' to check if the function is available prior to calling".to_string() }).into())
//     }
//
//     fn has_upsert(&self) -> bool {
//         false
//     }
//     fn upsert(&self, _context: &dyn FluxContext) -> Result<(), FluxError> {
//         Err(NotDefinedSnafu::build(NotDefinedSnafu { message: "No upsert function provided. Use 'has_upsert' to check if the function is available prior to calling".to_string() }).into())
//     }
// }
//
// // Re-exporting the traits
// pub mod prelude {
//     pub use super::{FluxBase, FluxContext, Flux};
// }

// use std::any::Any;
// use crate::errors::FluxError;
//
// pub trait FluxContext {
//     fn get(&self, key: &str) -> Option<&dyn Any>;
//     fn set(&mut self, key: &str, value: Box<dyn Any>);
// }
//
// pub trait FluxBase: Any {
//     fn initialize(&mut self, _context: &mut dyn FluxContext) -> Result<(), FluxError> {
//         Ok(())
//     }
//     fn as_any(&self) -> &dyn Any;
// }
//
// // Macro to define action traits and their corresponding Has* traits
// macro_rules! define_flux_traits {
//     ($($trait_name:ident, $has_trait:ident, $has_method:ident, $method:ident, $return_type:ty),*) => {
//         $(
//             pub trait $has_trait {
//                 fn $has_method(&self) -> bool {
//                     false
//                 }
//             }
//
//             pub trait $trait_name: FluxBase {
//                 fn $method(&self, context: &dyn FluxContext) -> Result<$return_type, FluxError> {
//                     Err(FluxError::default())
//                 }
//             }
//
//             impl<T: $trait_name + ?Sized> $has_trait for T {
//                 fn $has_method(&self) -> bool {
//                     true
//                 }
//             }
//         )*
//     };
// }
//
// // Define all action traits and their corresponding Has* traits
// define_flux_traits!(
//     FluxUpdate, HasFluxUpdate, has_update, update, (),
//     FluxDelete, HasFluxDelete, has_delete, delete, (),
//     FluxInsert, HasFluxInsert, has_insert, insert, (),
//     FluxSelect, HasFluxSelect, has_select, select, Box<dyn Any>,
//     FluxUpsert, HasFluxUpsert, has_upsert, upsert, ()
// );
//
// pub trait Flux: FluxBase + FluxUpdate + FluxDelete + FluxInsert + FluxSelect + FluxUpsert + HasFluxUpdate + HasFluxDelete + HasFluxInsert + HasFluxSelect + HasFluxUpsert {}
//
// // Re-exporting the traits
// pub mod prelude {
//     pub use super::{
//         FluxBase, FluxContext, FluxDelete, FluxInsert, FluxSelect, FluxUpdate, FluxUpsert,
//         HasFluxDelete, HasFluxInsert, HasFluxSelect, HasFluxUpdate, HasFluxUpsert,
//     };
// }
use std::any::Any;
use std::fmt::Debug;
use std::path::{Path, PathBuf};

use async_trait::async_trait;
use serde::Serialize;
use serde_json::Value;

use crate::errors::{Error, Result};
use crate::models::prelude::*;

pub trait FluxContext: Send + Sync {
    fn config_dir(&self) -> Option<&Path>;
    fn config_path(&self) -> &PathBuf;
    fn render_value(&self, value: &Value) -> Value;
    fn render_string(&self, value: &str) -> String;

}


// Define action traits with default methods
macro_rules! define_flux_traits {
    ($($trait_name:ident, $method:ident, $has_method:ident, $input_type:ty, $return_type:ty),* $(,)?) => {
        $(
            #[async_trait]
            pub trait $trait_name {
                async fn $method(&self, _input: $input_type, _context: &dyn FluxContext) -> Result<$return_type> {
                    Err(Error::Undefined { message: format!("{} is not defined for {}", stringify!($method), stringify!($trait_name)) })
                }

                fn $has_method(&self) -> bool {
                    false
                }
            }
        )*
    };
    // Special case for Initialize and Finalize traits
    ($($trait_name:ident, $method:ident, $has_method:ident, $return_type:ty),* $(,)?) => {
        $(
            #[async_trait]
            pub trait $trait_name {
                async fn $method(&mut self, _context: &dyn FluxContext) -> Result<$return_type> {
                    Err(Error::Undefined { message: format!("{} is not defined for {}", stringify!($method), stringify!($trait_name)) })
                }

                fn $has_method(&self) -> bool {
                    false
                }
            }
        )*
    };
}

// // Define all action traits
// define_flux_traits!(
//     FluxUpdate, update, has_update, UpdateInput, UpdateResponse,
//     FluxDelete, delete, has_delete, DeleteInput, DeleteResponse,
//     FluxInsert, insert, has_insert, InsertInput, InsertResponse,
//     FluxSelect, select, has_select, SelectInput, SelectResponse,
//     FluxUpsert, upsert, has_upsert, UpsertInput, UpsertResponse
// );
define_flux_traits!(
    FluxInitialize, initialize, has_initialize, (),
    FluxFinalize, finalize, has_finalize, ()
);

// Define the Flux trait that includes all action traits
// #[typetag::serde(tag = "type")]
// pub trait Flux: FluxInitialize + FluxFinalize + Debug {}

// impl Eq for Box<dyn Flux> {}
// impl PartialEq for Box<dyn Flux> {
//     fn eq(&self, other: &Self) -> bool {
//         serde_json::to_string(self).unwrap() == serde_json::to_string(other).unwrap()
//     }
// }
//
// impl Ord for Box<dyn Flux> {
//     fn cmp(&self, _other: &Self) -> Ordering {
//         Ordering::Equal
//     }
// }
//
// impl PartialOrd for Box<dyn Flux> {
//     fn partial_cmp(&self, _other: &Self) -> Option<Ordering> {
//         Some(Ordering::Equal)
//     }
// }
//
// impl Clone for Box<dyn Flux> {
//     fn clone(&self) -> Self {
//         serde_json::from_str(&serde_json::to_string(self).unwrap()).unwrap()
//     }
// }

// Re-exporting the traits
pub mod prelude {
    pub use super::{
        FluxFinalize, FluxInitialize,
    };
}
// pub trait FluxContext {
//     fn get(&self, key: &str) -> Option<&dyn Any>;
//     fn set(&mut self, key: &str, value: Box<dyn Any>);
// }


