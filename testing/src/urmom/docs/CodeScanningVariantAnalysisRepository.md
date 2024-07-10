# OpenapiClient::CodeScanningVariantAnalysisRepository

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | A unique identifier of the repository. |  |
| **name** | **String** | The name of the repository. |  |
| **full_name** | **String** | The full, globally unique, name of the repository. |  |
| **private** | **Boolean** | Whether the repository is private. |  |
| **stargazers_count** | **Integer** |  |  |
| **updated_at** | **Time** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeScanningVariantAnalysisRepository.new(
  id: 1296269,
  name: Hello-World,
  full_name: octocat/Hello-World,
  private: null,
  stargazers_count: 80,
  updated_at: 2011-01-26T19:14:43Z
)
```

