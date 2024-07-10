# OpenapiClient::WebhooksReview

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **_links** | [**WebhooksReviewLinks**](WebhooksReviewLinks.md) |  |  |
| **author_association** | **String** | How the author is associated with the repository. |  |
| **body** | **String** | The text of the review. |  |
| **commit_id** | **String** | A commit SHA for the review. |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** | Unique identifier of the review |  |
| **node_id** | **String** |  |  |
| **pull_request_url** | **String** |  |  |
| **state** | **String** |  |  |
| **submitted_at** | **Time** |  |  |
| **user** | [**User1**](User1.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhooksReview.new(
  _links: null,
  author_association: null,
  body: null,
  commit_id: null,
  html_url: null,
  id: null,
  node_id: null,
  pull_request_url: null,
  state: null,
  submitted_at: null,
  user: null
)
```

