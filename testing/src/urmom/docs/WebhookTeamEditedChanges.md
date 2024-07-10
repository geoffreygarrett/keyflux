# OpenapiClient::WebhookTeamEditedChanges

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **description** | [**WebhookLabelEditedChangesDescription**](WebhookLabelEditedChangesDescription.md) |  | [optional] |
| **name** | [**WebhookLabelEditedChangesName**](WebhookLabelEditedChangesName.md) |  | [optional] |
| **privacy** | [**WebhookTeamEditedChangesPrivacy**](WebhookTeamEditedChangesPrivacy.md) |  | [optional] |
| **notification_setting** | [**WebhookTeamEditedChangesNotificationSetting**](WebhookTeamEditedChangesNotificationSetting.md) |  | [optional] |
| **repository** | [**WebhookTeamEditedChangesRepository**](WebhookTeamEditedChangesRepository.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookTeamEditedChanges.new(
  description: null,
  name: null,
  privacy: null,
  notification_setting: null,
  repository: null
)
```

