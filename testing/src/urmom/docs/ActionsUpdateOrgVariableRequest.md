# OpenapiClient::ActionsUpdateOrgVariableRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the variable. | [optional] |
| **value** | **String** | The value of the variable. | [optional] |
| **visibility** | **String** | The type of repositories in the organization that can access the variable. &#x60;selected&#x60; means only the repositories specified by &#x60;selected_repository_ids&#x60; can access the variable. | [optional] |
| **selected_repository_ids** | **Array&lt;Integer&gt;** | An array of repository ids that can access the organization variable. You can only provide a list of repository ids when the &#x60;visibility&#x60; is set to &#x60;selected&#x60;. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActionsUpdateOrgVariableRequest.new(
  name: null,
  value: null,
  visibility: null,
  selected_repository_ids: null
)
```

