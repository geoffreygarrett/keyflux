# OpenapiClient::RepositoryRulePullRequestParameters

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **dismiss_stale_reviews_on_push** | **Boolean** | New, reviewable commits pushed will dismiss previous pull request review approvals. |  |
| **require_code_owner_review** | **Boolean** | Require an approving review in pull requests that modify files that have a designated code owner. |  |
| **require_last_push_approval** | **Boolean** | Whether the most recent reviewable push must be approved by someone other than the person who pushed it. |  |
| **required_approving_review_count** | **Integer** | The number of approving reviews that are required before a pull request can be merged. |  |
| **required_review_thread_resolution** | **Boolean** | All conversations on code must be resolved before a pull request can be merged. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryRulePullRequestParameters.new(
  dismiss_stale_reviews_on_push: null,
  require_code_owner_review: null,
  require_last_push_approval: null,
  required_approving_review_count: null,
  required_review_thread_resolution: null
)
```

