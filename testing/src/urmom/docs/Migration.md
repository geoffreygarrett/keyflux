# OpenapiClient::Migration

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **owner** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **guid** | **String** |  |  |
| **state** | **String** |  |  |
| **lock_repositories** | **Boolean** |  |  |
| **exclude_metadata** | **Boolean** |  |  |
| **exclude_git_data** | **Boolean** |  |  |
| **exclude_attachments** | **Boolean** |  |  |
| **exclude_releases** | **Boolean** |  |  |
| **exclude_owner_projects** | **Boolean** |  |  |
| **org_metadata_only** | **Boolean** |  |  |
| **repositories** | [**Array&lt;Repository&gt;**](Repository.md) | The repositories included in the migration. Only returned for export migrations. |  |
| **url** | **String** |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **node_id** | **String** |  |  |
| **archive_url** | **String** |  | [optional] |
| **exclude** | **Array&lt;String&gt;** | Exclude related items from being returned in the response in order to improve performance of the request. The array can include any of: &#x60;\&quot;repositories\&quot;&#x60;. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Migration.new(
  id: 79,
  owner: null,
  guid: 0b989ba4-242f-11e5-81e1-c7b6966d2516,
  state: pending,
  lock_repositories: true,
  exclude_metadata: null,
  exclude_git_data: null,
  exclude_attachments: null,
  exclude_releases: null,
  exclude_owner_projects: null,
  org_metadata_only: null,
  repositories: null,
  url: https://api.github.com/orgs/octo-org/migrations/79,
  created_at: 2015-07-06T15:33:38-07:00,
  updated_at: 2015-07-06T15:33:38-07:00,
  node_id: null,
  archive_url: null,
  exclude: null
)
```

