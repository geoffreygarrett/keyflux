# OpenapiClient::ReposUpdateBranchProtectionRequestRequiredPullRequestReviews

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **dismissal_restrictions** | [**ReposUpdateBranchProtectionRequestRequiredPullRequestReviewsDismissalRestrictions**](ReposUpdateBranchProtectionRequestRequiredPullRequestReviewsDismissalRestrictions.md) |  | [optional] |
| **dismiss_stale_reviews** | **Boolean** | Set to &#x60;true&#x60; if you want to automatically dismiss approving reviews when someone pushes a new commit. | [optional] |
| **require_code_owner_reviews** | **Boolean** | Blocks merging pull requests until [code owners](https://docs.github.com/articles/about-code-owners/) review them. | [optional] |
| **required_approving_review_count** | **Integer** | Specify the number of reviewers required to approve pull requests. Use a number between 1 and 6 or 0 to not require reviewers. | [optional] |
| **require_last_push_approval** | **Boolean** | Whether the most recent push must be approved by someone other than the person who pushed it. Default: &#x60;false&#x60;. | [optional][default to false] |
| **bypass_pull_request_allowances** | [**ReposUpdateBranchProtectionRequestRequiredPullRequestReviewsBypassPullRequestAllowances**](ReposUpdateBranchProtectionRequestRequiredPullRequestReviewsBypassPullRequestAllowances.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposUpdateBranchProtectionRequestRequiredPullRequestReviews.new(
  dismissal_restrictions: null,
  dismiss_stale_reviews: null,
  require_code_owner_reviews: null,
  required_approving_review_count: null,
  require_last_push_approval: null,
  bypass_pull_request_allowances: null
)
```

