# OpenapiClient::PullsRemoveRequestedReviewersRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **reviewers** | **Array&lt;String&gt;** | An array of user &#x60;login&#x60;s that will be removed. |  |
| **team_reviewers** | **Array&lt;String&gt;** | An array of team &#x60;slug&#x60;s that will be removed. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PullsRemoveRequestedReviewersRequest.new(
  reviewers: null,
  team_reviewers: null
)
```

