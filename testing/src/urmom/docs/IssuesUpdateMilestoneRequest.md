# OpenapiClient::IssuesUpdateMilestoneRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **title** | **String** | The title of the milestone. | [optional] |
| **state** | **String** | The state of the milestone. Either &#x60;open&#x60; or &#x60;closed&#x60;. | [optional][default to &#39;open&#39;] |
| **description** | **String** | A description of the milestone. | [optional] |
| **due_on** | **Time** | The milestone due date. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::IssuesUpdateMilestoneRequest.new(
  title: null,
  state: null,
  description: null,
  due_on: null
)
```

