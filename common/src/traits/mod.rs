pub mod flux;
pub(crate) mod new;
pub(crate) mod ops;
pub(crate) mod context;

// prelude
pub mod prelude {
    pub use crate::traits::context::*;
    pub use crate::traits::flux::*;
    pub use crate::traits::ops::*;
}