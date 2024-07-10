# OpenapiClient::ProtectedBranchPullRequestReview

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  | [optional] |
| **dismissal_restrictions** | [**ProtectedBranchPullRequestReviewDismissalRestrictions**](ProtectedBranchPullRequestReviewDismissalRestrictions.md) |  | [optional] |
| **bypass_pull_request_allowances** | [**ProtectedBranchPullRequestReviewBypassPullRequestAllowances**](ProtectedBranchPullRequestReviewBypassPullRequestAllowances.md) |  | [optional] |
| **dismiss_stale_reviews** | **Boolean** |  |  |
| **require_code_owner_reviews** | **Boolean** |  |  |
| **required_approving_review_count** | **Integer** |  | [optional] |
| **require_last_push_approval** | **Boolean** | Whether the most recent push must be approved by someone other than the person who pushed it. | [optional][default to false] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ProtectedBranchPullRequestReview.new(
  url: https://api.github.com/repos/octocat/Hello-World/branches/master/protection/dismissal_restrictions,
  dismissal_restrictions: null,
  bypass_pull_request_allowances: null,
  dismiss_stale_reviews: true,
  require_code_owner_reviews: true,
  required_approving_review_count: 2,
  require_last_push_approval: true
)
```

