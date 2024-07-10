use log::{error, info, trace};

use crate::KeyManager;

pub async fn sync(manager: &mut KeyManager<'_>) -> Result<(), Box<dyn std::error::Error>> {
    trace!("{}", t!("trace.starting_sync"));
    if let Err(e) = manager.flux_keys().await {
        error!(
            "{}",
            t!("error.sync_secrets", error = format!("{:?}", e.to_string()))
        );
        return Err(Box::new(e));
    }
    info!("{}", t!("info.secrets_synced"));
    Ok(())
}
