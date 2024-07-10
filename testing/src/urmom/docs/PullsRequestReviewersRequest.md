# OpenapiClient::PullsRequestReviewersRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **reviewers** | **Array&lt;String&gt;** | An array of user &#x60;login&#x60;s that will be requested. | [optional] |
| **team_reviewers** | **Array&lt;String&gt;** | An array of team &#x60;slug&#x60;s that will be requested. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PullsRequestReviewersRequest.new(
  reviewers: null,
  team_reviewers: null
)
```

