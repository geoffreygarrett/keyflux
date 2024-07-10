pub mod traits;
mod errors;
mod models;
mod helper;

mod init;

mod regex;

#[macro_use]
extern crate mashup;


// prelude module
pub mod prelude {
    pub use crate::models::prelude::*;
    pub use crate::helper::prelude::*;
    pub use crate::traits::prelude::*;
    pub use keyflux_macros::*;
    pub use keyflux_template::*;
    pub use keyflux_template::*;
    // pub use crate::traits::flux::prelude::*;
    pub use typetag;
    pub use serde::Deserialize;
    pub use serde::Serialize;
    pub use std::any::Any;
    pub use crate::errors::*;
    pub use async_trait::async_trait;
    pub use snafu::futures::TryFutureExt;
    pub use snafu::prelude::*;
    pub use crate::traits::new::*;
    pub use crate::traits::context::*;
    pub use crate::traits::ops::*;
}