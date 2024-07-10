# OpenapiClient::ReposUpdateBranchProtectionRequestRequiredPullRequestReviewsBypassPullRequestAllowances

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **users** | **Array&lt;String&gt;** | The list of user &#x60;login&#x60;s allowed to bypass pull request requirements. | [optional] |
| **teams** | **Array&lt;String&gt;** | The list of team &#x60;slug&#x60;s allowed to bypass pull request requirements. | [optional] |
| **apps** | **Array&lt;String&gt;** | The list of app &#x60;slug&#x60;s allowed to bypass pull request requirements. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposUpdateBranchProtectionRequestRequiredPullRequestReviewsBypassPullRequestAllowances.new(
  users: null,
  teams: null,
  apps: null
)
```

