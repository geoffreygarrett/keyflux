# OpenapiClient::Artifact

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **name** | **String** | The name of the artifact. |  |
| **size_in_bytes** | **Integer** | The size in bytes of the artifact. |  |
| **url** | **String** |  |  |
| **archive_download_url** | **String** |  |  |
| **expired** | **Boolean** | Whether or not the artifact has expired. |  |
| **created_at** | **Time** |  |  |
| **expires_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **workflow_run** | [**ArtifactWorkflowRun**](ArtifactWorkflowRun.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Artifact.new(
  id: 5,
  node_id: MDEwOkNoZWNrU3VpdGU1,
  name: AdventureWorks.Framework,
  size_in_bytes: 12345,
  url: https://api.github.com/repos/github/hello-world/actions/artifacts/5,
  archive_download_url: https://api.github.com/repos/github/hello-world/actions/artifacts/5/zip,
  expired: null,
  created_at: null,
  expires_at: null,
  updated_at: null,
  workflow_run: null
)
```

