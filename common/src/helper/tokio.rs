/// Executes an asynchronous operation within a new Tokio runtime.
use crate::prelude::*;

#[allow(unused)]
fn async_to_sync<T>(op: impl std::future::Future<Output=Result<T>>) -> Result<T> {
    tokio::task::block_in_place(|| {
        tokio::runtime::Handle::current().block_on(op)
    })
}