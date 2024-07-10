# OpenapiClient::WebhookRepositoryRulesetEditedChanges

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | [**WebhookOrganizationRenamedChangesLogin**](WebhookOrganizationRenamedChangesLogin.md) |  | [optional] |
| **enforcement** | [**WebhookOrganizationRenamedChangesLogin**](WebhookOrganizationRenamedChangesLogin.md) |  | [optional] |
| **conditions** | [**WebhookRepositoryRulesetEditedChangesConditions**](WebhookRepositoryRulesetEditedChangesConditions.md) |  | [optional] |
| **rules** | [**WebhookRepositoryRulesetEditedChangesRules**](WebhookRepositoryRulesetEditedChangesRules.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookRepositoryRulesetEditedChanges.new(
  name: null,
  enforcement: null,
  conditions: null,
  rules: null
)
```

