# OpenapiClient::WebhookPersonalAccessTokenRequestApproved

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **personal_access_token_request** | [**PersonalAccessTokenRequest**](PersonalAccessTokenRequest.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookPersonalAccessTokenRequestApproved.new(
  action: null,
  personal_access_token_request: null,
  enterprise: null,
  organization: null,
  sender: null,
  installation: null
)
```

