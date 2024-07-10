# OpenapiClient::TeamsCreateRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the team. |  |
| **description** | **String** | The description of the team. | [optional] |
| **maintainers** | **Array&lt;String&gt;** | List GitHub IDs for organization members who will become team maintainers. | [optional] |
| **repo_names** | **Array&lt;String&gt;** | The full name (e.g., \&quot;organization-name/repository-name\&quot;) of repositories to add the team to. | [optional] |
| **privacy** | **String** | The level of privacy this team should have. The options are:   **For a non-nested team:**    * &#x60;secret&#x60; - only visible to organization owners and members of this team.    * &#x60;closed&#x60; - visible to all members of this organization.   Default: &#x60;secret&#x60;   **For a parent or child team:**    * &#x60;closed&#x60; - visible to all members of this organization.   Default for child team: &#x60;closed&#x60; | [optional] |
| **notification_setting** | **String** | The notification setting the team has chosen. The options are:    * &#x60;notifications_enabled&#x60; - team members receive notifications when the team is @mentioned.    * &#x60;notifications_disabled&#x60; - no one receives notifications.   Default: &#x60;notifications_enabled&#x60; | [optional] |
| **permission** | **String** | **Deprecated**. The permission that new repositories will be added to the team with when none is specified. | [optional][default to &#39;pull&#39;] |
| **parent_team_id** | **Integer** | The ID of a team to set as the parent team. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TeamsCreateRequest.new(
  name: null,
  description: null,
  maintainers: null,
  repo_names: null,
  privacy: null,
  notification_setting: null,
  permission: null,
  parent_team_id: null
)
```

