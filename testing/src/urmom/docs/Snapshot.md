# OpenapiClient::Snapshot

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **version** | **Integer** | The version of the repository snapshot submission. |  |
| **job** | [**SnapshotJob**](SnapshotJob.md) |  |  |
| **sha** | **String** | The commit SHA associated with this dependency snapshot. Maximum length: 40 characters. |  |
| **ref** | **String** | The repository branch that triggered this snapshot. |  |
| **detector** | [**SnapshotDetector**](SnapshotDetector.md) |  |  |
| **metadata** | [**Hash&lt;String, Metadata1&gt;**](Metadata1.md) | User-defined metadata to store domain-specific information limited to 8 keys with scalar values. | [optional] |
| **manifests** | [**Hash&lt;String, Manifest&gt;**](Manifest.md) | A collection of package manifests, which are a collection of related dependencies declared in a file or representing a logical group of dependencies. | [optional] |
| **scanned** | **Time** | The time at which the snapshot was scanned. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Snapshot.new(
  version: null,
  job: null,
  sha: ddc951f4b1293222421f2c8df679786153acf689,
  ref: refs/heads/main,
  detector: null,
  metadata: null,
  manifests: null,
  scanned: 2020-06-13T14:52:50-05:00
)
```

