
use assert_cmd::Command;
use predicates::prelude::*;

#[test]
fn test_cli_runs_successfully() {
    let mut cmd = Command::cargo_bin("my_cli").unwrap();
    cmd.arg("some-argument");
    cmd.assert()
        .success()
        .stdout(predicate::str::contains("Expected output"));
}

