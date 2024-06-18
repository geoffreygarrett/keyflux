use async_trait::async_trait;
use crate::error::FluxError;
use std::collections::HashMap;
use std::fmt::Debug;
use crate::key::Key;

/// A trait for defining a flexible synchronization interface.
///
/// The `Flux` trait provides an abstraction for various synchronization tasks,
/// allowing implementations to define custom behavior for initializing, finalizing,
/// processing individual environment variables, and handling batches of variables.
///
/// # Example
///
/// ```
/// use async_trait::async_trait;
/// use keyflux::traits::{Flux};
/// use keyflux::key::Key;
/// use keyflux::error::FluxError;
///
/// #[derive(Debug, Clone)]
/// pub struct MyFlux;
///
/// #[async_trait]
/// impl Flux for MyFlux {
///     async fn initialize(&self) -> Result<(), FluxError> {
///         // Custom initialization logic
///         Ok(())
///     }
///
///     async fn finalize(&self) -> Result<(), FluxError> {
///         // Custom finalization logic
///         Ok(())
///     }
///
///     async fn single(&self, _key: &Key) -> Result<(), FluxError> {
///         // Custom logic for processing a single environment variable
///         Ok(())
///     }
/// }
/// ```
#[async_trait]
pub trait Flux: Send + Sync + Debug {
    /// Initializes the flux instance.
    ///
    /// This method is intended for any setup or initialization logic required
    /// before the flux instance is used.
    async fn initialize(&self) -> Result<(), FluxError> {
        Ok(())
    }

    /// Finalizes the flux instance.
    ///
    /// This method is intended for any cleanup or finalization logic required
    /// after the flux instance has completed its tasks.
    async fn finalize(&self) -> Result<(), FluxError> {
        Ok(())
    }

    /// Processes a single environment variable.
    ///
    /// This method should be implemented to handle the logic for processing
    /// an individual environment variable.
    ///
    /// # Arguments
    ///
    /// * `key` - A reference to the environment variable to be processed.
    async fn single(&self, _key: &Key) -> Result<(), FluxError> {
        Err(FluxError::NotImplementedError("single".into()))
    }

    /// Processes a batch of environment variables.
    ///
    /// This method processes a list of environment variables by calling the `single`
    /// method for each variable in the list. Implementations may override this method
    /// for more efficient batch processing.
    ///
    /// # Arguments
    ///
    /// * `keys` - A slice of boxed environment variables to be processed.
    async fn batch(&self, keys: &[Key]) -> Result<(), FluxError> {
        let tasks = keys.iter().map(|key| self.single(key));
        let results = futures::future::join_all(tasks).await;
        for result in results {
            result?;
        }
        Ok(())
    }

    /// Checks the status of a single environment variable.
    ///
    /// This method should be implemented to check the status of an individual
    /// environment variable.
    ///
    /// # Arguments
    ///
    /// * `key` - The key of the environment variable to check.
    async fn check(&self, _key: &Key) -> Result<Option<String>, FluxError> {
        Err(FluxError::NotImplementedError("check".into()))
    }

    /// Checks the status of a batch of environment variables.
    ///
    /// This method checks the status of multiple environment variables by calling the
    /// `check` method for each key in the list.
    ///
    /// # Arguments
    ///
    /// * `keys` - A slice of keys of the environment variables to check.
    async fn check_batch(&self, keys: &[Key]) -> Result<Vec<(String, Option<String>)>, FluxError> {
        let tasks = keys.iter().map(|key| async {
            let value = self.check(key).await?;
            Ok::<(String, Option<String>), FluxError>((key.name.clone(), value))
        });
        let results: Vec<Result<(String, Option<String>), FluxError>> = futures::future::join_all(tasks).await;
        let mut state_map = HashMap::new();
        for result in results {
            let (key, value) = result?;
            state_map.insert(key, value);
        }
        Ok(state_map.into_iter().collect())
    }

    /// Reverts a single environment variable.
    ///
    /// This method should be implemented to handle the logic for reverting an individual
    /// environment variable.
    ///
    /// # Arguments
    ///
    /// * `key` - The key of the environment variable to revert.
    async fn revert(&self, _key: &Key) -> Result<(), FluxError> {
        Err(FluxError::NotImplementedError("revert".into()))
    }

    /// Reverts a batch of environment variables.
    ///
    /// This method reverts multiple environment variables by calling the `revert`
    /// method for each key in the list.
    ///
    /// # Arguments
    ///
    /// * `keys` - A slice of keys of the environment variables to revert.
    async fn revert_batch(&self, keys: &[Key]) -> Result<(), FluxError> {
        let tasks = keys.iter().map(|key| self.revert(key));
        let results = futures::future::join_all(tasks).await;
        for result in results {
            result?;
        }
        Ok(())
    }

    /// Calculates the difference between current and desired state for a single environment variable.
    ///
    /// This method should be implemented to handle the logic for calculating differences.
    ///
    /// # Arguments
    ///
    /// * `key` - The key of the environment variable to calculate the difference for.
    async fn diff(&self, _key: &Key) -> Result<String, FluxError> {
        Err(FluxError::NotImplementedError("diff".into()))
    }

    /// Calculates the differences for a batch of environment variables.
    ///
    /// This method calculates the differences for multiple environment variables by calling the `diff`
    /// method for each key in the list.
    ///
    /// # Arguments
    ///
    /// * `keys` - A slice of keys of the environment variables to calculate the differences for.
    async fn diff_batch(&self, keys: &[Key]) -> Result<HashMap<String, String>, FluxError> {
        let tasks = keys.iter().map(|key| async {
            let diff = self.diff(key).await?;
            Ok::<(String, String), FluxError>((key.name.clone(), diff))
        });
        let results: Vec<Result<(String, String), FluxError>> = futures::future::join_all(tasks).await;
        let mut diff_map = HashMap::new();
        for result in results {
            let (key, diff) = result?;
            diff_map.insert(key, diff);
        }
        Ok(diff_map)
    }
}
