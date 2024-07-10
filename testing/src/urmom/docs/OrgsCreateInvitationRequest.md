# OpenapiClient::OrgsCreateInvitationRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **invitee_id** | **Integer** | **Required unless you provide &#x60;email&#x60;**. GitHub user ID for the person you are inviting. | [optional] |
| **email** | **String** | **Required unless you provide &#x60;invitee_id&#x60;**. Email address of the person you are inviting, which can be an existing GitHub user. | [optional] |
| **role** | **String** | The role for the new member.   * &#x60;admin&#x60; - Organization owners with full administrative rights to the organization and complete access to all repositories and teams.    * &#x60;direct_member&#x60; - Non-owner organization members with ability to see other members and join teams by invitation.    * &#x60;billing_manager&#x60; - Non-owner organization members with ability to manage the billing settings of your organization.   * &#x60;reinstate&#x60; - The previous role assigned to the invitee before they were removed from your organization. Can be one of the roles listed above. Only works if the invitee was previously part of your organization. | [optional][default to &#39;direct_member&#39;] |
| **team_ids** | **Array&lt;Integer&gt;** | Specify IDs for the teams you want to invite new members to. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrgsCreateInvitationRequest.new(
  invitee_id: null,
  email: null,
  role: null,
  team_ids: null
)
```

