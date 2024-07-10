# OpenapiClient::WebhookRepositoryRulesetEditedChangesConditions

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **added** | [**Array&lt;RepositoryRulesetConditions&gt;**](RepositoryRulesetConditions.md) |  | [optional] |
| **deleted** | [**Array&lt;RepositoryRulesetConditions&gt;**](RepositoryRulesetConditions.md) |  | [optional] |
| **updated** | [**Array&lt;WebhookRepositoryRulesetEditedChangesConditionsUpdatedInner&gt;**](WebhookRepositoryRulesetEditedChangesConditionsUpdatedInner.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookRepositoryRulesetEditedChangesConditions.new(
  added: null,
  deleted: null,
  updated: null
)
```

