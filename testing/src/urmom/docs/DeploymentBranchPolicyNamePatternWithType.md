# OpenapiClient::DeploymentBranchPolicyNamePatternWithType

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name pattern that branches or tags must match in order to deploy to the environment.  Wildcard characters will not match &#x60;/&#x60;. For example, to match branches that begin with &#x60;release/&#x60; and contain an additional single slash, use &#x60;release/*/*&#x60;. For more information about pattern matching syntax, see the [Ruby File.fnmatch documentation](https://ruby-doc.org/core-2.5.1/File.html#method-c-fnmatch). |  |
| **type** | **String** | Whether this rule targets a branch or tag | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DeploymentBranchPolicyNamePatternWithType.new(
  name: release/*,
  type: branch
)
```
