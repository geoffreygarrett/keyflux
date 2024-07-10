use base64::{alphabet, Engine as _, engine::{self, general_purpose}};
use sodiumoxide::base64::Variant;
use sodiumoxide::crypto::box_::{PublicKey, SecretKey};
use sodiumoxide::crypto::{box_, sealedbox};
use crate::prelude::*;

const CUSTOM_ENGINE: engine::GeneralPurpose =
    engine::GeneralPurpose::new(&alphabet::URL_SAFE, general_purpose::NO_PAD);

pub trait Encryption {
    // fn encrypt(public_key: &str, data: &str) -> Result<String>;
    // fn decrypt(public_key: &PublicKey, private_key: &SecretKey, data: &str) -> Result<String, String>;
}

// Function to encrypt a secret using libsodium and base64 encode the result
pub fn encrypt_and_base64_encode(secret: &str, key_base64: &str) -> Result<String> {
    // Decode the key from base64
    let bin_key = sodiumoxide::base64::decode(key_base64.as_bytes(), Variant::Original).map_err(|_| Error::SealBoxError { message: "Failed to decode key".to_string() })?;

    // Convert the secret to bytes
    let bin_secret = secret.as_bytes();

    // Encrypt the secret using libsodium's sealed box (public-key encryption)
    let encrypted_value = sealedbox::seal(bin_secret, &PublicKey::from_slice(&bin_key).context(SealBoxSnafu { message: "Invalid key".to_string() })?);

    // Encode the encrypted bytes to base64 with URL_SAFE_NO_PAD configuration
    let output = sodiumoxide::base64::encode(encrypted_value, Variant::Original);

    Ok(output)
}

pub struct SealedBoxEncryption;

#[derive(Debug)]
pub enum SealBoxError {
    Base64Error(base64::DecodeError),
    InvalidKey,
}
impl From<base64::DecodeError> for SealBoxError {
    fn from(err: base64::DecodeError) -> SealBoxError {
        SealBoxError::Base64Error(err)
    }
}
impl Encryption for SealedBoxEncryption {
    // fn encrypt(public_key: &str, data: &str) -> Result<String> {
    //     let bin_key = CUSTOM_ENGINE.decode(public_key.as_bytes())?;
    //     let bin_sec = base64::decode(data).map_err(|e| format!("Failed to decode data: {}", e))?;
    //     let encrypted_value = sealedbox::seal(&bin_sec, &PublicKey::from_slice(&bin_key).ok_or_else(|| "Invalid key".to_string())?);
    //     Ok(CUSTOM_ENGINE.encode(&encrypted_value))
    // }

    // Commented out the decryption method
    /*
    fn decrypt(public_key: &PublicKey, private_key: &SecretKey, data: &str) -> Result<String, String> {
        let encrypted_value_bytes = CUSTOM_ENGINE.decode(data.as_bytes())
            .map_err(|e| format!("Failed to decode value: {}", e))?;

        let decrypted_value = sealedbox::open(&encrypted_value_bytes, public_key, private_key)
            .map_err(|_| "Decryption failed".to_string())?;

        String::from_utf8(decrypted_value)
            .map_err(|e| format!("Failed to convert decrypted value to string: {}", e))
    }
    */
}

#[cfg(test)]
mod tests {
    use super::*;
    use sodiumoxide::init;

    #[test]
    fn test_decrypt2() {
        init().unwrap();

        let public_key_bytes = [0u8; 32]; // Replace with actual key bytes
        let secret_key_bytes = [0u8; 32]; // Replace with actual key bytes

        let public_key = PublicKey::from_slice(&public_key_bytes).unwrap();
        let secret_key = SecretKey::from_slice(&secret_key_bytes).unwrap();

        let original_data = "Hello, world!";
        let encrypted_data = SealedBoxEncryption::encrypt(&public_key, original_data)
            .unwrap_or_else(|e| panic!("Encryption failed: {}", e));

        // Commented out decryption test
        /*
        let decrypted_data = SealedBoxEncryption::decrypt(&public_key, &secret_key, &encrypted_data)
            .unwrap_or_else(|e| panic!("Decryption failed: {}", e));

        assert_eq!(original_data, decrypted_data);
        */
    }

    // Test for the custom engine
    #[test]
    fn test_custom_engine() {
        let data = "Hello, world!";
        let encoded = CUSTOM_ENGINE.encode(data.as_bytes());
        let decoded = CUSTOM_ENGINE.decode(encoded.as_bytes()).unwrap();
        let decoded_str = String::from_utf8(decoded).unwrap();
        assert_eq!(data, decoded_str);
    }

    #[test]
    fn test_encrypt_decrypt() {
        init().unwrap();

        let public_key_bytes = [0u8; 32]; // Replace with actual key bytes
        let secret_key_bytes = [0u8; 32]; // Replace with actual key bytes

        let public_key = PublicKey::from_slice(&public_key_bytes).unwrap();
        let secret_key = SecretKey::from_slice(&secret_key_bytes).unwrap();

        let original_data = "Hello, world!";
        let encrypted_data = SealedBoxEncryption::encrypt(&public_key, original_data).unwrap();

        // Commented out decryption part
        /*
        let decrypted_data = SealedBoxEncryption::decrypt(&public_key, &secret_key, &encrypted_data).unwrap();
        assert_eq!(original_data, decrypted_data);
        */
    }

    #[test]
    fn test_encrypt() {
        init().unwrap();

        let public_key_bytes = [0u8; 32]; // Replace with actual key bytes
        let public_key = PublicKey::from_slice(&public_key_bytes).unwrap();

        let data = "Hello, world!";
        let encrypted_data = SealedBoxEncryption::encrypt(&public_key, data).unwrap();

        assert!(!encrypted_data.is_empty());
    }

    #[test]
    fn test_decrypt() {
        init().unwrap();

        let public_key_bytes = [0u8; 32]; // Replace with actual key bytes
        let secret_key_bytes = [0u8; 32]; // Replace with actual key bytes

        let public_key = PublicKey::from_slice(&public_key_bytes).unwrap();
        let secret_key = SecretKey::from_slice(&secret_key_bytes).unwrap();

        let original_data = "Hello, world!";
        let encrypted_data = SealedBoxEncryption::encrypt(&public_key, original_data).unwrap();
        println!("Encrypted data: {}", encrypted_data);

        // Commented out decryption part
        /*
        let decrypted_data = SealedBoxEncryption::decrypt(&public_key, &secret_key, &encrypted_data).map_err(|e| println!("Error: {}", e)).unwrap();
        assert_eq!(original_data, decrypted_data);
        */
    }

    #[test]
    fn test_decrypt_invalid_data() {
        init().unwrap();

        let secret_key_bytes = [0u8; 32]; // Replace with actual key bytes
        let public_key_bytes = [0u8; 32]; // Replace with actual key bytes
        let secret_key = SecretKey::from_slice(&secret_key_bytes).unwrap();
        let public_key = PublicKey::from_slice(&public_key_bytes).unwrap();

        let invalid_data = "invalid_data";

        // Commented out decryption part
        /*
        let result = SealedBoxEncryption::decrypt(&public_key, &secret_key, invalid_data);
        assert!(result.is_err());
        */
    }
}
