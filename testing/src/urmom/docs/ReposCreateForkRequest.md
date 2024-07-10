# OpenapiClient::ReposCreateForkRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **organization** | **String** | Optional parameter to specify the organization name if forking into an organization. | [optional] |
| **name** | **String** | When forking from an existing repository, a new name for the fork. | [optional] |
| **default_branch_only** | **Boolean** | When forking from an existing repository, fork with only the default branch. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposCreateForkRequest.new(
  organization: null,
  name: null,
  default_branch_only: null
)
```

