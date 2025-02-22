# OrganizationSecretScanningAlert

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**number** | Option<**i32**> | The security alert number. | [optional][readonly]
**created_at** | Option<**String**> | The time that the alert was created in ISO 8601 format: `YYYY-MM-DDTHH:MM:SSZ`. | [optional][readonly]
**updated_at** | Option<**String**> | The time that the alert was last updated in ISO 8601 format: `YYYY-MM-DDTHH:MM:SSZ`. | [optional][readonly]
**url** | Option<**String**> | The REST API URL of the alert resource. | [optional][readonly]
**html_url** | Option<**String**> | The GitHub URL of the alert resource. | [optional][readonly]
**locations_url** | Option<**String**> | The REST API URL of the code locations for this alert. | [optional]
**state** | Option<[**crate::models::SecretScanningAlertState**](secret-scanning-alert-state.md)> |  | [optional]
**resolution** | Option<[**crate::models::SecretScanningAlertResolution**](secret-scanning-alert-resolution.md)> |  | [optional]
**resolved_at** | Option<**String**> | The time that the alert was resolved in ISO 8601 format: `YYYY-MM-DDTHH:MM:SSZ`. | [optional]
**resolved_by** | Option<[**crate::models::NullableSimpleUser**](nullable-simple-user.md)> |  | [optional]
**secret_type** | Option<**String**> | The type of secret that secret scanning detected. | [optional]
**secret_type_display_name** | Option<**String**> | User-friendly name for the detected secret, matching the `secret_type`. For a list of built-in patterns, see \"[Secret scanning patterns](https://docs.github.com/code-security/secret-scanning/secret-scanning-patterns#supported-secrets-for-advanced-security).\" | [optional]
**secret** | Option<**String**> | The secret that was detected. | [optional]
**repository** | Option<[**crate::models::SimpleRepository**](simple-repository.md)> |  | [optional]
**push_protection_bypassed** | Option<**bool**> | Whether push protection was bypassed for the detected secret. | [optional]
**push_protection_bypassed_by** | Option<[**crate::models::NullableSimpleUser**](nullable-simple-user.md)> |  | [optional]
**push_protection_bypassed_at** | Option<**String**> | The time that push protection was bypassed in ISO 8601 format: `YYYY-MM-DDTHH:MM:SSZ`. | [optional]
**resolution_comment** | Option<**String**> | The comment that was optionally added when this alert was closed | [optional]
**validity** | Option<**String**> | The token status as of the latest validity check. | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


