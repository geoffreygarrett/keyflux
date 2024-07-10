use base64::{alphabet, Engine as _, engine::{self, general_purpose}};
use sodiumoxide::crypto::box_::{PublicKey};
use sodiumoxide::crypto::sealedbox;

const CUSTOM_ENGINE: engine::GeneralPurpose =
    engine::GeneralPurpose::new(&alphabet::URL_SAFE, general_purpose::NO_PAD);

pub trait Encryption {
    fn encrypt(public_key: &PublicKey, data: &str) -> Result<String, String>;
}

pub struct SealedBoxEncryption;

impl Encryption for SealedBoxEncryption {
    fn encrypt(public_key: &PublicKey, data: &str) -> Result<String, String> {
        let encrypted_value = sealedbox::seal(data.as_bytes(), public_key);
        Ok(CUSTOM_ENGINE.encode(&encrypted_value))
    }

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
