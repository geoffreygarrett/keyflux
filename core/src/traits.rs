// use std::any::Any;
// use crate::error::FluxError;
// use crate::FluxContext;
//
// pub trait FluxBase: Any {
//     fn initialize(&mut self, _context: FluxContext) -> Result<(), FluxError> {
//         Ok(())
//     }
//     fn as_any(&self) -> &dyn Any;
//
//     fn has_update(&self) -> bool {
//         self.as_any().is::<dyn FluxUpdate>()
//     }
//
//     fn has_delete(&self) -> bool {
//         self.as_any().is::<dyn FluxDelete>()
//     }
//
//     fn has_insert(&self) -> bool {
//         self.as_any().is::<dyn FluxInsert>()
//     }
//
//     fn has_select(&self) -> bool {
//         self.as_any().is::<dyn FluxSelect>()
//     }
//
//     fn has_upsert(&self) -> bool {
//         self.as_any().is::<dyn FluxUpsert>()
//     }
// }
//
// pub trait FluxUpdate: FluxBase {
//     fn update(&self, context: FluxContext) -> Result<(), FluxError>;
// }
//
// pub trait FluxDelete: FluxBase {
//     fn delete(&self, context: FluxContext) -> Result<(), FluxError>;
// }
//
// pub trait FluxInsert: FluxBase {
//     fn insert(&self, context: FluxContext) -> Result<(), FluxError>;
// }
//
// pub trait FluxSelect: FluxBase {
//     fn select(&self, context: FluxContext) -> Result<(), FluxError>;
// }
//
// pub trait FluxUpsert: FluxBase {
//     fn upsert(&self, context: FluxContext) -> Result<(), FluxError>;
// }
