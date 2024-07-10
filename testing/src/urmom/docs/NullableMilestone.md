# OpenapiClient::NullableMilestone

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **labels_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **number** | **Integer** | The number of the milestone. |  |
| **state** | **String** | The state of the milestone. | [default to &#39;open&#39;] |
| **title** | **String** | The title of the milestone. |  |
| **description** | **String** |  |  |
| **creator** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **open_issues** | **Integer** |  |  |
| **closed_issues** | **Integer** |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **closed_at** | **Time** |  |  |
| **due_on** | **Time** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::NullableMilestone.new(
  url: https://api.github.com/repos/octocat/Hello-World/milestones/1,
  html_url: https://github.com/octocat/Hello-World/milestones/v1.0,
  labels_url: https://api.github.com/repos/octocat/Hello-World/milestones/1/labels,
  id: 1002604,
  node_id: MDk6TWlsZXN0b25lMTAwMjYwNA&#x3D;&#x3D;,
  number: 42,
  state: open,
  title: v1.0,
  description: Tracking milestone for version 1.0,
  creator: null,
  open_issues: 4,
  closed_issues: 8,
  created_at: 2011-04-10T20:09:31Z,
  updated_at: 2014-03-03T18:58:10Z,
  closed_at: 2013-02-12T13:22:01Z,
  due_on: 2012-10-09T23:39:01Z
)
```

