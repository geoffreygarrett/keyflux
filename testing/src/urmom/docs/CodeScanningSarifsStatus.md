# OpenapiClient::CodeScanningSarifsStatus

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **processing_status** | **String** | &#x60;pending&#x60; files have not yet been processed, while &#x60;complete&#x60; means results from the SARIF have been stored. &#x60;failed&#x60; files have either not been processed at all, or could only be partially processed. | [optional] |
| **analyses_url** | **String** | The REST API URL for getting the analyses associated with the upload. | [optional][readonly] |
| **errors** | **Array&lt;String&gt;** | Any errors that ocurred during processing of the delivery. | [optional][readonly] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeScanningSarifsStatus.new(
  processing_status: null,
  analyses_url: null,
  errors: null
)
```

