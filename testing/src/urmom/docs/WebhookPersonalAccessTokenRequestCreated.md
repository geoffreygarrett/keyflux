# OpenapiClient::WebhookPersonalAccessTokenRequestCreated

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **personal_access_token_request** | [**PersonalAccessTokenRequest**](PersonalAccessTokenRequest.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookPersonalAccessTokenRequestCreated.new(
  action: null,
  personal_access_token_request: null,
  enterprise: null,
  organization: null,
  sender: null,
  installation: null
)
```

