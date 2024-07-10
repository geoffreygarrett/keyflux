# OpenapiClient::Workflow

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **name** | **String** |  |  |
| **path** | **String** |  |  |
| **state** | **String** |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **badge_url** | **String** |  |  |
| **deleted_at** | **Time** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Workflow.new(
  id: 5,
  node_id: MDg6V29ya2Zsb3cxMg&#x3D;&#x3D;,
  name: CI,
  path: ruby.yaml,
  state: active,
  created_at: 2019-12-06T14:20:20Z,
  updated_at: 2019-12-06T14:20:20Z,
  url: https://api.github.com/repos/actions/setup-ruby/workflows/5,
  html_url: https://github.com/actions/setup-ruby/blob/master/.github/workflows/ruby.yaml,
  badge_url: https://github.com/actions/setup-ruby/workflows/CI/badge.svg,
  deleted_at: 2019-12-06T14:20:20Z
)
```

