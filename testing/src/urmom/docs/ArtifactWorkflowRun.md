# OpenapiClient::ArtifactWorkflowRun

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  | [optional] |
| **repository_id** | **Integer** |  | [optional] |
| **head_repository_id** | **Integer** |  | [optional] |
| **head_branch** | **String** |  | [optional] |
| **head_sha** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ArtifactWorkflowRun.new(
  id: 10,
  repository_id: 42,
  head_repository_id: 42,
  head_branch: main,
  head_sha: 009b8a3a9ccbb128af87f9b1c0f4c62e8a304f6d
)
```

