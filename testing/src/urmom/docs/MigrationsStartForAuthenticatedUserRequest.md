# OpenapiClient::MigrationsStartForAuthenticatedUserRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **lock_repositories** | **Boolean** | Lock the repositories being migrated at the start of the migration | [optional] |
| **exclude_metadata** | **Boolean** | Indicates whether metadata should be excluded and only git source should be included for the migration. | [optional] |
| **exclude_git_data** | **Boolean** | Indicates whether the repository git data should be excluded from the migration. | [optional] |
| **exclude_attachments** | **Boolean** | Do not include attachments in the migration | [optional] |
| **exclude_releases** | **Boolean** | Do not include releases in the migration | [optional] |
| **exclude_owner_projects** | **Boolean** | Indicates whether projects owned by the organization or users should be excluded. | [optional] |
| **org_metadata_only** | **Boolean** | Indicates whether this should only include organization metadata (repositories array should be empty and will ignore other flags). | [optional][default to false] |
| **exclude** | **Array&lt;String&gt;** | Exclude attributes from the API response to improve performance | [optional] |
| **repositories** | **Array&lt;String&gt;** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::MigrationsStartForAuthenticatedUserRequest.new(
  lock_repositories: true,
  exclude_metadata: true,
  exclude_git_data: true,
  exclude_attachments: true,
  exclude_releases: true,
  exclude_owner_projects: true,
  org_metadata_only: true,
  exclude: [&quot;repositories&quot;],
  repositories: null
)
```

