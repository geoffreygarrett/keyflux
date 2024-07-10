# OpenapiClient::WebhookCustomPropertyValuesUpdated

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  | [optional] |
| **new_property_values** | [**Array&lt;CustomPropertyValue&gt;**](CustomPropertyValue.md) | The new custom property values for the repository. |  |
| **old_property_values** | [**Array&lt;CustomPropertyValue&gt;**](CustomPropertyValue.md) | The old custom property values for the repository. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookCustomPropertyValuesUpdated.new(
  action: null,
  enterprise: null,
  installation: null,
  repository: null,
  organization: null,
  sender: null,
  new_property_values: null,
  old_property_values: null
)
```

