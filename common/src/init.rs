use crate::prelude::Result;

pub fn init() -> Result<()> {
    sodiumoxide::init().map_err(|_| crate::errors::Error::CryptoInitError)?;
    Ok(())
}