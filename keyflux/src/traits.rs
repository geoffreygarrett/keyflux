use crate::error::FluxError;
use crate::file::key_collection::KeyCollection;
pub use crate::internal::{FluxContext, FluxInner};
use crate::key::Key;
use async_trait::async_trait;
use serde::{Deserialize, Serialize};
use std::collections::HashMap;
use std::fmt::Debug;

#[async_trait]
#[typetag::serde(tag = "type", content = "input")]
pub trait Flux: Send + Sync + Debug + FluxInner {
    /// Initializes the flux instance.
    ///
    /// This method is intended for any setup or initialization logic required
    /// before the flux instance is used.
    async fn initialize(&mut self, _context: &FluxContext) -> Result<(), FluxError> {
        Ok(())
    }

    /// Finalizes the flux instance.
    ///
    /// This method is intended for any cleanup or finalization logic required
    /// after the flux instance has completed its tasks.
    async fn finalize(&self, _context: &FluxContext) -> Result<(), FluxError> {
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
    async fn batch(&self, context: &FluxContext) -> Result<(), FluxError> {
        let tasks = context.keys().into_iter().map(|key| async {
            self.single(key).await?;
            Ok::<(), FluxError>(())
        });
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
    // Your async function using `check_batch`
    async fn check_batch(
        &self,
        _keys: &KeyCollection,
    ) -> Result<Vec<(String, Option<String>)>, FluxError> {
        // let tasks = keys.iter().map(|(name, key)| async {
        //     let value = self.check(key).await?;
        //     Ok::<(String, Option<String>), FluxError>((key.name().to_string(), value))
        // });
        // let results: Vec<Result<(String, Option<String>), FluxError>> = futures::future::join_all(tasks).await;
        // let mut state_map = HashMap::new();
        // for result in results {
        //     let (key, value) = result?;
        //     state_map.insert(key, value);
        // }
        Err(FluxError::NotImplementedError("check_batch".into()))
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
    async fn revert_batch(&self, _keys: &KeyCollection) -> Result<(), FluxError> {
        // let tasks = keys.iter().map(|name, key| self.revert(key));
        // let results = futures::future::join_all(tasks).await;
        // for result in results {
        //     result?;
        // }
        // Ok(())
        Err(FluxError::NotImplementedError("revert_batch".into()))
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
    async fn diff_batch(
        &self,
        _keys: &KeyCollection,
    ) -> Result<HashMap<String, String>, FluxError> {
        Err(FluxError::NotImplementedError("diff_batch".into()))
        // let tasks = keys.iter().map(|name, key| async {
        //     let diff = self.diff(key).await?;
        //     Ok::<(String, String), FluxError>((key.name().clone(), diff))
        // });
        // let results: Vec<Result<(String, String), FluxError>> = futures::future::join_all(tasks).await;
        // let mut diff_map = HashMap::new();
        // for result in results {
        //     let (key, diff) = result?;
        //     diff_map.insert(key, diff);
        // }
        // Ok(diff_map)
    }
}
