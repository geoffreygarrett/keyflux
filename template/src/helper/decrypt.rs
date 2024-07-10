// use handlebars::{Context, Handlebars, Helper, HelperDef, HelperResult, Output, RenderContext, RenderError};
// use sodiumoxide::crypto::box_::SecretKey;
// use std::str::FromStr;
//
// #[derive(Clone, Copy)]
// pub(crate) struct DecryptHelper;
//
// impl HelperDef for DecryptHelper {
//     fn call<'reg: 'rc, 'rc>(
//         &self,
//         h: &Helper<'rc>,
//         _: &'reg Handlebars,
//         _: &'rc Context,
//         _: &mut RenderContext<'reg, 'rc>,
//         out: &mut dyn Output,
//     ) -> HelperResult {
//         // Fetch the private key, the value to decrypt, and the decryption scheme from the template arguments
//         let private_key_arg = h.param(0).ok_or_else(|| RenderError::new("Missing private key"))?;
//         let value_arg = h.param(1).ok_or_else(|| RenderError::new("Missing value to decrypt"))?;
//         let scheme_arg = h.param(2).map_or_else(|| "sealedbox".into(), |v| v.value().to_string());
//
//         // Parse the private key and the value
//         let private_key_str = private_key_arg.value().as_str().ok_or_else(|| RenderError::new("Invalid private key"))?;
//         let value_str = value_arg.value().as_str().ok_or_else(|| RenderError::new("Invalid value"))?;
//
//         // Decode the private key from base64
//         let private_key_bytes = base64::decode_config(private_key_str, URL_SAFE)
//             .map_err(|_| RenderError::new("Failed to decode private key"))?;
//         let private_key = SecretKey::from_slice(&private_key_bytes)
//             .ok_or_else(|| RenderError::new("Invalid private key format"))?;
//
//         // Decode the value from base64
//         let encrypted_value_bytes = base64::decode_config(value_str, URL_SAFE)
//             .map_err(|_| RenderError::new("Failed to decode value"))?;
//
//         // Decrypt the value using the specified scheme
//         let decrypted_value = match EncryptionScheme::from_str(&scheme_arg).map_err(|_| RenderError::new("Unsupported decryption scheme"))? {
//             EncryptionScheme::SealedBox => SealedBoxEncryption::decrypt(&private_key, value_str)
//                 .map_err(|e| RenderError::new(e))?,
//             // Add more schemes as needed
//         };
//
//         let decrypted_value_str = String::from_utf8(decrypted_value)
//             .map_err(|_| RenderError::new("Failed to convert decrypted value to string"))?;
//
//         // Write the decrypted value to the output
//         out.write(&decrypted_value_str)?;
//
//         Ok(())
//     }
// }
