// src/test_util.rs

use log::info;
use std::fs::{self, File};
use std::io::Write;
use std::ops::Deref;
use std::path::{Path, PathBuf};
use tempfile::TempDir;

pub struct Fixture {
    path: PathBuf,
    source: PathBuf,
    _tempdir: TempDir,
}

impl Fixture {
    pub fn blank(fixture_filename: &str) -> Self {
        let root_dir = &std::env::var("CARGO_MANIFEST_DIR").expect("$CARGO_MANIFEST_DIR");
        let mut source = PathBuf::from(root_dir);
        source.push("tests/fixtures");
        source.push(fixture_filename);

        let tempdir = tempfile::tempdir().unwrap();
        let mut path = PathBuf::from(&tempdir.path());
        path.push(fixture_filename);

        Fixture {
            _tempdir: tempdir,
            source,
            path,
        }
    }

    pub fn copy(fixture_filename: &str) -> Self {
        let fixture = Fixture::blank(fixture_filename);
        fs::copy(&fixture.source, &fixture.path).unwrap();
        fixture
    }
}

impl Deref for Fixture {
    type Target = Path;

    fn deref(&self) -> &Self::Target {
        self.path.deref()
    }
}

pub fn create_temp_file(dir: &TempDir, filename: &str, content: &str) -> PathBuf {
    let file_path = dir.path().join(filename);
    info!("Creating temporary file at: {:?}", file_path);
    let mut file = File::create(&file_path).unwrap();
    writeln!(file, "{}", content).unwrap();
    info!("File {:?} created with content:\n{}", file_path, content);
    file_path
}
