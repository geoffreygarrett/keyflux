use std::fmt::Display;
use std::str::FromStr;

use handlebars::{Context, Handlebars, Helper, HelperDef, HelperResult, Output, RenderContext, RenderError};
use sodiumoxide::crypto::box_::PublicKey;

use crate::helper::crypto::{Encryption, SealedBoxEncryption};

#[derive(Clone, Copy)]
pub(crate) struct EncryptHelper;

#[derive(Debug, PartialEq)]
pub enum EncryptionScheme {
    SealedBox,
    // Add more schemes as needed
}

impl FromStr for EncryptionScheme {
    type Err = ();

    fn from_str(s: &str) -> Result<Self, Self::Err> {
        match s {
            "sealed_box" => Ok(EncryptionScheme::SealedBox),
            // Add more schemes as needed
            _ => Err(()),
        }
    }
}

impl Display for EncryptionScheme {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        let str = match self {
            EncryptionScheme::SealedBox => "sealed_box".to_string(),
            // Add more schemes as needed
        };
        write!(f, "{}", str)
    }
}

impl HelperDef for EncryptHelper {
    fn call<'reg: 'rc, 'rc>(
        &self,
        h: &Helper<'rc>,
        _: &'reg Handlebars,
        _: &'rc Context,
        _: &mut RenderContext<'reg, 'rc>,
        out: &mut dyn Output,
    ) -> HelperResult {
        // Fetch the public key, the value to encrypt, and the encryption scheme from the template arguments
        println!("Encrypting value...");
        println!("Helper: {:?}", h);
        let public_key_arg = h.param(0).ok_or_else(|| RenderError::new("Missing public key"))?;
        let value_arg = h.param(1).ok_or_else(|| RenderError::new("Missing value to encrypt"))?;
        let scheme_arg = h.param(2).map_or_else(|| "sealed_box".into(), |v| v.value().to_string());
        let scheme_name = scheme_arg.trim_matches('"').replace("\"", "");

        // Parse the public key and the value
        let public_key_str = public_key_arg.value().as_str().ok_or_else(|| RenderError::new("Invalid public key"))?;
        let value_str = value_arg.value().as_str().ok_or_else(|| RenderError::new("Invalid value"))?;

        // Encrypt the value using the specified scheme
        // Encrypt the value using the specified scheme
        let encrypted_value = match scheme_name.as_str().trim() {
            "sealed_box" => {
                let public_key = PublicKey::from_slice(public_key_str.as_bytes()).ok_or_else(|| RenderError::new("Invalid public key"))?;
                SealedBoxEncryption::encrypt(&public_key, value_str).map_err(|e| RenderError::new(&e))?
            },
            _ => {
                return Err(RenderError::new(&format!("Unsupported encryption scheme: {}", scheme_arg)));
            }
        };
        // Write the encrypted value to the output
        out.write(&encrypted_value)?;

        Ok(())
    }
}
#[cfg(test)]
mod tests {
    use serde_json::json;
    use super::*;

    #[test]
    fn test_encrypt_helper_sealedbox() {
        // Mock Handlebars instance
        let mut handlebars = Handlebars::new();
        handlebars.register_helper("encrypt", Box::new(EncryptHelper));

        // Mock template parameters
        let public_key = [0u8; 32]; // Replace with actual key bytes
        // conv to strign
        let public_key = std::str::from_utf8(&public_key).unwrap();
        let value = "Hello, world!";
        let scheme = "sealed_box";

        // Render template with parameters
        let data = json!({
            "public_key": public_key,
            "value": value,
            "scheme": scheme,
        });

        let result = handlebars.render_template("{{encrypt public_key value scheme}}", &data);
        println!("Result: {:?}", result);

        // Assert the encryption result
        assert!(result.is_ok());
        let encrypted_value = result.unwrap();
        println!("Encrypted value: {}", encrypted_value);
        // Add more assertions as needed based on the expected encrypted value format or content
    }
}