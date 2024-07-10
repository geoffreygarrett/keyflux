# OpenapiClient::RepositoryRuleParamsWorkflowFileReference

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **path** | **String** | The path to the workflow file |  |
| **ref** | **String** | The ref (branch or tag) of the workflow file to use | [optional] |
| **repository_id** | **Integer** | The ID of the repository where the workflow is defined |  |
| **sha** | **String** | The commit SHA of the workflow file to use | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryRuleParamsWorkflowFileReference.new(
  path: null,
  ref: null,
  repository_id: null,
  sha: null
)
```

