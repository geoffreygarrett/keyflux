# OpenapiClient::Project

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner_url** | **String** |  |  |
| **url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **columns_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **name** | **String** | Name of the project |  |
| **body** | **String** | Body of the project |  |
| **number** | **Integer** |  |  |
| **state** | **String** | State of the project; either &#39;open&#39; or &#39;closed&#39; |  |
| **creator** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **organization_permission** | **String** | The baseline permission that all organization members have on this project. Only present if owner is an organization. | [optional] |
| **private** | **Boolean** | Whether or not this project can be seen by everyone. Only present if owner is an organization. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Project.new(
  owner_url: https://api.github.com/repos/api-playground/projects-test,
  url: https://api.github.com/projects/1002604,
  html_url: https://github.com/api-playground/projects-test/projects/12,
  columns_url: https://api.github.com/projects/1002604/columns,
  id: 1002604,
  node_id: MDc6UHJvamVjdDEwMDI2MDQ&#x3D;,
  name: Week One Sprint,
  body: This project represents the sprint of the first week in January,
  number: 1,
  state: open,
  creator: null,
  created_at: 2011-04-10T20:09:31Z,
  updated_at: 2014-03-03T18:58:10Z,
  organization_permission: null,
  private: null
)
```

