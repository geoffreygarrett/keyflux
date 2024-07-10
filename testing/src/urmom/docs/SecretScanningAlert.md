# OpenapiClient::SecretScanningAlert

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **number** | **Integer** | The security alert number. | [optional][readonly] |
| **created_at** | **Time** | The time that the alert was created in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional][readonly] |
| **updated_at** | **Time** | The time that the alert was last updated in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional][readonly] |
| **url** | **String** | The REST API URL of the alert resource. | [optional][readonly] |
| **html_url** | **String** | The GitHub URL of the alert resource. | [optional][readonly] |
| **locations_url** | **String** | The REST API URL of the code locations for this alert. | [optional] |
| **state** | [**SecretScanningAlertState**](SecretScanningAlertState.md) |  | [optional] |
| **resolution** | [**SecretScanningAlertResolution**](SecretScanningAlertResolution.md) |  | [optional] |
| **resolved_at** | **Time** | The time that the alert was resolved in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **resolved_by** | [**NullableSimpleUser**](NullableSimpleUser.md) |  | [optional] |
| **resolution_comment** | **String** | An optional comment to resolve an alert. | [optional] |
| **secret_type** | **String** | The type of secret that secret scanning detected. | [optional] |
| **secret_type_display_name** | **String** | User-friendly name for the detected secret, matching the &#x60;secret_type&#x60;. For a list of built-in patterns, see \&quot;[Secret scanning patterns](https://docs.github.com/code-security/secret-scanning/secret-scanning-patterns#supported-secrets-for-advanced-security).\&quot; | [optional] |
| **secret** | **String** | The secret that was detected. | [optional] |
| **push_protection_bypassed** | **Boolean** | Whether push protection was bypassed for the detected secret. | [optional] |
| **push_protection_bypassed_by** | [**NullableSimpleUser**](NullableSimpleUser.md) |  | [optional] |
| **push_protection_bypassed_at** | **Time** | The time that push protection was bypassed in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **validity** | **String** | The token status as of the latest validity check. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SecretScanningAlert.new(
  number: null,
  created_at: null,
  updated_at: null,
  url: null,
  html_url: null,
  locations_url: null,
  state: null,
  resolution: null,
  resolved_at: null,
  resolved_by: null,
  resolution_comment: null,
  secret_type: null,
  secret_type_display_name: null,
  secret: null,
  push_protection_bypassed: null,
  push_protection_bypassed_by: null,
  push_protection_bypassed_at: null,
  validity: null
)
```

