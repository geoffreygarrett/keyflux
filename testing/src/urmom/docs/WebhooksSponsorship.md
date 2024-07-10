# OpenapiClient::WebhooksSponsorship

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **created_at** | **String** |  |  |
| **maintainer** | [**WebhooksSponsorshipMaintainer**](WebhooksSponsorshipMaintainer.md) |  | [optional] |
| **node_id** | **String** |  |  |
| **privacy_level** | **String** |  |  |
| **sponsor** | [**User**](User.md) |  |  |
| **sponsorable** | [**User**](User.md) |  |  |
| **tier** | [**SponsorshipTier**](SponsorshipTier.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhooksSponsorship.new(
  created_at: null,
  maintainer: null,
  node_id: null,
  privacy_level: null,
  sponsor: null,
  sponsorable: null,
  tier: null
)
```

