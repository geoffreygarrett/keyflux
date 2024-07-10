# OpenapiClient::ActionsWorkflowAccessToRepository

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **access_level** | **String** | Defines the level of access that workflows outside of the repository have to actions and reusable workflows within the repository.  &#x60;none&#x60; means the access is only possible from workflows in this repository. &#x60;user&#x60; level access allows sharing across user owned private repositories only. &#x60;organization&#x60; level access allows sharing across the organization. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActionsWorkflowAccessToRepository.new(
  access_level: null
)
```

