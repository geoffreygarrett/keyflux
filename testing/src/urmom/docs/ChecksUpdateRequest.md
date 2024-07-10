# OpenapiClient::ChecksUpdateRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the check. For example, \&quot;code-coverage\&quot;. | [optional] |
| **details_url** | **String** | The URL of the integrator&#39;s site that has the full details of the check. | [optional] |
| **external_id** | **String** | A reference for the run on the integrator&#39;s system. | [optional] |
| **started_at** | **Time** | This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **status** | **String** | The current status of the check run. Only GitHub Actions can set a status of &#x60;waiting&#x60;, &#x60;pending&#x60;, or &#x60;requested&#x60;. | [optional] |
| **conclusion** | **String** | **Required if you provide &#x60;completed_at&#x60; or a &#x60;status&#x60; of &#x60;completed&#x60;**. The final conclusion of the check.  **Note:** Providing &#x60;conclusion&#x60; will automatically set the &#x60;status&#x60; parameter to &#x60;completed&#x60;. You cannot change a check run conclusion to &#x60;stale&#x60;, only GitHub can set this. | [optional] |
| **completed_at** | **Time** | The time the check completed. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **output** | [**ChecksUpdateRequestOutput**](ChecksUpdateRequestOutput.md) |  | [optional] |
| **actions** | [**Array&lt;ChecksCreateRequestActionsInner&gt;**](ChecksCreateRequestActionsInner.md) | Possible further actions the integrator can perform, which a user may trigger. Each action includes a &#x60;label&#x60;, &#x60;identifier&#x60; and &#x60;description&#x60;. A maximum of three actions are accepted. To learn more about check runs and requested actions, see \&quot;[Check runs and requested actions](https://docs.github.com/rest/guides/using-the-rest-api-to-interact-with-checks#check-runs-and-requested-actions).\&quot; | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ChecksUpdateRequest.new(
  name: null,
  details_url: null,
  external_id: null,
  started_at: null,
  status: null,
  conclusion: null,
  completed_at: null,
  output: null,
  actions: null
)
```

