# OpenapiClient::TimelineReviewedEvent

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **event** | **String** |  |  |
| **id** | **Integer** | Unique identifier of the review |  |
| **node_id** | **String** |  |  |
| **user** | [**SimpleUser**](SimpleUser.md) |  |  |
| **body** | **String** | The text of the review. |  |
| **state** | **String** |  |  |
| **html_url** | **String** |  |  |
| **pull_request_url** | **String** |  |  |
| **_links** | [**TimelineReviewedEventLinks**](TimelineReviewedEventLinks.md) |  |  |
| **submitted_at** | **Time** |  | [optional] |
| **commit_id** | **String** | A commit SHA for the review. |  |
| **body_html** | **String** |  | [optional] |
| **body_text** | **String** |  | [optional] |
| **author_association** | [**AuthorAssociation**](AuthorAssociation.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TimelineReviewedEvent.new(
  event: null,
  id: 42,
  node_id: MDE3OlB1bGxSZXF1ZXN0UmV2aWV3ODA&#x3D;,
  user: null,
  body: This looks great.,
  state: CHANGES_REQUESTED,
  html_url: https://github.com/octocat/Hello-World/pull/12#pullrequestreview-80,
  pull_request_url: https://api.github.com/repos/octocat/Hello-World/pulls/12,
  _links: null,
  submitted_at: null,
  commit_id: 54bb654c9e6025347f57900a4a5c2313a96b8035,
  body_html: null,
  body_text: null,
  author_association: null
)
```

