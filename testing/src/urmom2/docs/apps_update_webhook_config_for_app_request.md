# apps_update_webhook_config_for_app_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**url** | **char \*** | The URL to which the payloads will be delivered. | [optional] 
**content_type** | **char \*** | The media type used to serialize the payloads. Supported values include &#x60;json&#x60; and &#x60;form&#x60;. The default is &#x60;form&#x60;. | [optional] 
**secret** | **char \*** | If provided, the &#x60;secret&#x60; will be used as the &#x60;key&#x60; to generate the HMAC hex digest value for [delivery signature headers](https://docs.github.com/webhooks/event-payloads/#delivery-headers). | [optional] 
**insecure_ssl** | [**webhook_config_insecure_ssl_t**](webhook_config_insecure_ssl.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


