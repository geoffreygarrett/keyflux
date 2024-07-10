// use keyflux::{Configs, SecretManager};
// use std::error::Error;
//
// #[tokio::test]
// async fn test_sync_secrets() -> Result<(), Box<dyn Error>> {
//     let config = Configs::from_file("secrets.yaml")?;
//     let mut manager = SecretManager::new(config);
//     manager.sync_secrets().await.expect("TODO: panic message");
//     Ok(())
// }
