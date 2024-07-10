# OpenapiClient::WebhookTeamEditedChangesRepositoryPermissionsFrom

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **admin** | **Boolean** | The previous version of the team member&#39;s &#x60;admin&#x60; permission on a repository, if the action was &#x60;edited&#x60;. | [optional] |
| **pull** | **Boolean** | The previous version of the team member&#39;s &#x60;pull&#x60; permission on a repository, if the action was &#x60;edited&#x60;. | [optional] |
| **push** | **Boolean** | The previous version of the team member&#39;s &#x60;push&#x60; permission on a repository, if the action was &#x60;edited&#x60;. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookTeamEditedChangesRepositoryPermissionsFrom.new(
  admin: null,
  pull: null,
  push: null
)
```

