# OpenapiClient::WebhookCheckSuiteRequestedCheckSuite

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **after** | **String** |  |  |
| **app** | [**App3**](App3.md) |  |  |
| **before** | **String** |  |  |
| **check_runs_url** | **String** |  |  |
| **conclusion** | **String** | The summary conclusion for all check runs that are part of the check suite. This value will be &#x60;null&#x60; until the check run has completed. |  |
| **created_at** | **Time** |  |  |
| **head_branch** | **String** | The head branch name the changes are on. |  |
| **head_commit** | [**SimpleCommit**](SimpleCommit.md) |  |  |
| **head_sha** | **String** | The SHA of the head commit that is being checked. |  |
| **id** | **Integer** |  |  |
| **latest_check_runs_count** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **pull_requests** | [**Array&lt;CheckRunPullRequest&gt;**](CheckRunPullRequest.md) | An array of pull requests that match this check suite. A pull request matches a check suite if they have the same &#x60;head_sha&#x60; and &#x60;head_branch&#x60;. When the check suite&#39;s &#x60;head_branch&#x60; is in a forked repository it will be &#x60;null&#x60; and the &#x60;pull_requests&#x60; array will be empty. |  |
| **rerequestable** | **Boolean** |  | [optional] |
| **runs_rerequestable** | **Boolean** |  | [optional] |
| **status** | **String** | The summary status for all check runs that are part of the check suite. Can be &#x60;requested&#x60;, &#x60;in_progress&#x60;, or &#x60;completed&#x60;. |  |
| **updated_at** | **Time** |  |  |
| **url** | **String** | URL that points to the check suite API resource. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookCheckSuiteRequestedCheckSuite.new(
  after: null,
  app: null,
  before: null,
  check_runs_url: null,
  conclusion: null,
  created_at: null,
  head_branch: null,
  head_commit: null,
  head_sha: null,
  id: null,
  latest_check_runs_count: null,
  node_id: null,
  pull_requests: null,
  rerequestable: null,
  runs_rerequestable: null,
  status: null,
  updated_at: null,
  url: null
)
```

