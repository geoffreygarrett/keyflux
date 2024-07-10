# OpenapiClient::GistComment

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **url** | **String** |  |  |
| **body** | **String** | The comment text. |  |
| **user** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **author_association** | [**AuthorAssociation**](AuthorAssociation.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::GistComment.new(
  id: 1,
  node_id: MDExOkdpc3RDb21tZW50MQ&#x3D;&#x3D;,
  url: https://api.github.com/gists/a6db0bec360bb87e9418/comments/1,
  body: Body of the attachment,
  user: null,
  created_at: 2011-04-18T23:23:56Z,
  updated_at: 2011-04-18T23:23:56Z,
  author_association: null
)
```

