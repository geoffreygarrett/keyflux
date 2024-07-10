# OpenapiClient::MigrationsStartForOrgRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **repositories** | **Array&lt;String&gt;** | A list of arrays indicating which repositories should be migrated. |  |
| **lock_repositories** | **Boolean** | Indicates whether repositories should be locked (to prevent manipulation) while migrating data. | [optional][default to false] |
| **exclude_metadata** | **Boolean** | Indicates whether metadata should be excluded and only git source should be included for the migration. | [optional][default to false] |
| **exclude_git_data** | **Boolean** | Indicates whether the repository git data should be excluded from the migration. | [optional][default to false] |
| **exclude_attachments** | **Boolean** | Indicates whether attachments should be excluded from the migration (to reduce migration archive file size). | [optional][default to false] |
| **exclude_releases** | **Boolean** | Indicates whether releases should be excluded from the migration (to reduce migration archive file size). | [optional][default to false] |
| **exclude_owner_projects** | **Boolean** | Indicates whether projects owned by the organization or users should be excluded. from the migration. | [optional][default to false] |
| **org_metadata_only** | **Boolean** | Indicates whether this should only include organization metadata (repositories array should be empty and will ignore other flags). | [optional][default to false] |
| **exclude** | **Array&lt;String&gt;** | Exclude related items from being returned in the response in order to improve performance of the request. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::MigrationsStartForOrgRequest.new(
  repositories: null,
  lock_repositories: true,
  exclude_metadata: null,
  exclude_git_data: null,
  exclude_attachments: true,
  exclude_releases: true,
  exclude_owner_projects: true,
  org_metadata_only: true,
  exclude: null
)
```

