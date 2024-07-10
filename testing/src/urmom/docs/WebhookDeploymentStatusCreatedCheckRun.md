# OpenapiClient::WebhookDeploymentStatusCreatedCheckRun

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **completed_at** | **Time** |  |  |
| **conclusion** | **String** | The result of the completed check run. This value will be &#x60;null&#x60; until the check run has completed. |  |
| **details_url** | **String** |  |  |
| **external_id** | **String** |  |  |
| **head_sha** | **String** | The SHA of the commit that is being checked. |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** | The id of the check. |  |
| **name** | **String** | The name of the check run. |  |
| **node_id** | **String** |  |  |
| **started_at** | **Time** |  |  |
| **status** | **String** | The current status of the check run. Can be &#x60;queued&#x60;, &#x60;in_progress&#x60;, or &#x60;completed&#x60;. |  |
| **url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookDeploymentStatusCreatedCheckRun.new(
  completed_at: null,
  conclusion: null,
  details_url: null,
  external_id: null,
  head_sha: null,
  html_url: null,
  id: null,
  name: null,
  node_id: null,
  started_at: null,
  status: null,
  url: null
)
```

