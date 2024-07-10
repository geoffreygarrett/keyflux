#[cfg(test)]
mod tests {
    use tokio::fs::File;
    use tokio::io::AsyncWriteExt;
    use std::path::PathBuf;
    use std::fs;
    use keyflux::command::convert::convert;

    #[tokio::test]
    async fn test_convert_env_to_json() -> Result<(), Box<dyn std::error::Error>> {
        let test_file = "test.env";
        let mut file = File::create(test_file).await?;
        file.write_all(b"KEY=VALUE").await?;
        file.flush().await?;

        let file_path = PathBuf::from(test_file);
        convert(Some(&file_path), "json").await?;

        let file_content = fs::read_to_string("test.env.json")?;
        assert_eq!(file_content, "{\n  \"KEY\": \"VALUE\"\n}");
        Ok(())
    }

    #[tokio::test]
    async fn test_convert_env_to_yaml() -> Result<(), Box<dyn std::error::Error>> {
        let test_file = "test.env";
        let mut file = File::create(test_file).await?;
        file.write_all(b"KEY=VALUE").await?;
        file.flush().await?;

        let file_path = PathBuf::from(test_file);
        convert(Some(&file_path), "yaml").await?;

        let file_content = fs::read_to_string("test.env.yaml")?;
        assert_eq!(file_content, "KEY: VALUE\n");
        Ok(())
    }

    #[tokio::test]
    async fn test_convert_env_to_toml() -> Result<(), Box<dyn std::error::Error>> {
        let test_file = "test.env";
        let mut file = File::create(test_file).await?;
        file.write_all(b"KEY=VALUE").await?;
        file.flush().await?;

        let file_path = PathBuf::from(test_file);
        convert(Some(&file_path), "toml").await?;

        let file_content = fs::read_to_string("test.env.toml")?;
        assert_eq!(file_content, "KEY = \"VALUE\"\n");
        Ok(())
    }

    // Simulate stdin for different formats
    #[tokio::test]
    async fn test_convert_from_stdin_to_json() -> Result<(), Box<dyn std::error::Error>> {
        // Implementation depends on how you can feed data to stdin in your environment
        Ok(())
    }
}
