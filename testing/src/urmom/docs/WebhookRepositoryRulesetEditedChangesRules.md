# OpenapiClient::WebhookRepositoryRulesetEditedChangesRules

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **added** | [**Array&lt;RepositoryRule&gt;**](RepositoryRule.md) |  | [optional] |
| **deleted** | [**Array&lt;RepositoryRule&gt;**](RepositoryRule.md) |  | [optional] |
| **updated** | [**Array&lt;WebhookRepositoryRulesetEditedChangesRulesUpdatedInner&gt;**](WebhookRepositoryRulesetEditedChangesRulesUpdatedInner.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookRepositoryRulesetEditedChangesRules.new(
  added: null,
  deleted: null,
  updated: null
)
```

