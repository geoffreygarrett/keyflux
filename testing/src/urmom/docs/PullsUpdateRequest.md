# OpenapiClient::PullsUpdateRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **title** | **String** | The title of the pull request. | [optional] |
| **body** | **String** | The contents of the pull request. | [optional] |
| **state** | **String** | State of this Pull Request. Either &#x60;open&#x60; or &#x60;closed&#x60;. | [optional] |
| **base** | **String** | The name of the branch you want your changes pulled into. This should be an existing branch on the current repository. You cannot update the base branch on a pull request to point to another repository. | [optional] |
| **maintainer_can_modify** | **Boolean** | Indicates whether [maintainers can modify](https://docs.github.com/articles/allowing-changes-to-a-pull-request-branch-created-from-a-fork/) the pull request. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PullsUpdateRequest.new(
  title: null,
  body: null,
  state: null,
  base: null,
  maintainer_can_modify: null
)
```

