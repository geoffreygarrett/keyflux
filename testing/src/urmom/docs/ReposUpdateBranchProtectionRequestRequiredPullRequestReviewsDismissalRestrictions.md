# OpenapiClient::ReposUpdateBranchProtectionRequestRequiredPullRequestReviewsDismissalRestrictions

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **users** | **Array&lt;String&gt;** | The list of user &#x60;login&#x60;s with dismissal access | [optional] |
| **teams** | **Array&lt;String&gt;** | The list of team &#x60;slug&#x60;s with dismissal access | [optional] |
| **apps** | **Array&lt;String&gt;** | The list of app &#x60;slug&#x60;s with dismissal access | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposUpdateBranchProtectionRequestRequiredPullRequestReviewsDismissalRestrictions.new(
  users: null,
  teams: null,
  apps: null
)
```

