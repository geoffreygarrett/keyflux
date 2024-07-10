# OpenapiClient::OrgsApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**orgs_add_security_manager_team**](OrgsApi.md#orgs_add_security_manager_team) | **PUT** /orgs/{org}/security-managers/teams/{team_slug} | Add a security manager team |
| [**orgs_assign_team_to_org_role**](OrgsApi.md#orgs_assign_team_to_org_role) | **PUT** /orgs/{org}/organization-roles/teams/{team_slug}/{role_id} | Assign an organization role to a team |
| [**orgs_assign_user_to_org_role**](OrgsApi.md#orgs_assign_user_to_org_role) | **PUT** /orgs/{org}/organization-roles/users/{username}/{role_id} | Assign an organization role to a user |
| [**orgs_block_user**](OrgsApi.md#orgs_block_user) | **PUT** /orgs/{org}/blocks/{username} | Block a user from an organization |
| [**orgs_cancel_invitation**](OrgsApi.md#orgs_cancel_invitation) | **DELETE** /orgs/{org}/invitations/{invitation_id} | Cancel an organization invitation |
| [**orgs_check_blocked_user**](OrgsApi.md#orgs_check_blocked_user) | **GET** /orgs/{org}/blocks/{username} | Check if a user is blocked by an organization |
| [**orgs_check_membership_for_user**](OrgsApi.md#orgs_check_membership_for_user) | **GET** /orgs/{org}/members/{username} | Check organization membership for a user |
| [**orgs_check_public_membership_for_user**](OrgsApi.md#orgs_check_public_membership_for_user) | **GET** /orgs/{org}/public_members/{username} | Check public organization membership for a user |
| [**orgs_convert_member_to_outside_collaborator**](OrgsApi.md#orgs_convert_member_to_outside_collaborator) | **PUT** /orgs/{org}/outside_collaborators/{username} | Convert an organization member to outside collaborator |
| [**orgs_create_custom_organization_role**](OrgsApi.md#orgs_create_custom_organization_role) | **POST** /orgs/{org}/organization-roles | Create a custom organization role |
| [**orgs_create_invitation**](OrgsApi.md#orgs_create_invitation) | **POST** /orgs/{org}/invitations | Create an organization invitation |
| [**orgs_create_or_update_custom_properties**](OrgsApi.md#orgs_create_or_update_custom_properties) | **PATCH** /orgs/{org}/properties/schema | Create or update custom properties for an organization |
| [**orgs_create_or_update_custom_properties_values_for_repos**](OrgsApi.md#orgs_create_or_update_custom_properties_values_for_repos) | **PATCH** /orgs/{org}/properties/values | Create or update custom property values for organization repositories |
| [**orgs_create_or_update_custom_property**](OrgsApi.md#orgs_create_or_update_custom_property) | **PUT** /orgs/{org}/properties/schema/{custom_property_name} | Create or update a custom property for an organization |
| [**orgs_create_webhook**](OrgsApi.md#orgs_create_webhook) | **POST** /orgs/{org}/hooks | Create an organization webhook |
| [**orgs_delete**](OrgsApi.md#orgs_delete) | **DELETE** /orgs/{org} | Delete an organization |
| [**orgs_delete_custom_organization_role**](OrgsApi.md#orgs_delete_custom_organization_role) | **DELETE** /orgs/{org}/organization-roles/{role_id} | Delete a custom organization role. |
| [**orgs_delete_webhook**](OrgsApi.md#orgs_delete_webhook) | **DELETE** /orgs/{org}/hooks/{hook_id} | Delete an organization webhook |
| [**orgs_enable_or_disable_security_product_on_all_org_repos**](OrgsApi.md#orgs_enable_or_disable_security_product_on_all_org_repos) | **POST** /orgs/{org}/{security_product}/{enablement} | Enable or disable a security feature for an organization |
| [**orgs_get**](OrgsApi.md#orgs_get) | **GET** /orgs/{org} | Get an organization |
| [**orgs_get_all_custom_properties**](OrgsApi.md#orgs_get_all_custom_properties) | **GET** /orgs/{org}/properties/schema | Get all custom properties for an organization |
| [**orgs_get_custom_property**](OrgsApi.md#orgs_get_custom_property) | **GET** /orgs/{org}/properties/schema/{custom_property_name} | Get a custom property for an organization |
| [**orgs_get_membership_for_authenticated_user**](OrgsApi.md#orgs_get_membership_for_authenticated_user) | **GET** /user/memberships/orgs/{org} | Get an organization membership for the authenticated user |
| [**orgs_get_membership_for_user**](OrgsApi.md#orgs_get_membership_for_user) | **GET** /orgs/{org}/memberships/{username} | Get organization membership for a user |
| [**orgs_get_org_role**](OrgsApi.md#orgs_get_org_role) | **GET** /orgs/{org}/organization-roles/{role_id} | Get an organization role |
| [**orgs_get_webhook**](OrgsApi.md#orgs_get_webhook) | **GET** /orgs/{org}/hooks/{hook_id} | Get an organization webhook |
| [**orgs_get_webhook_config_for_org**](OrgsApi.md#orgs_get_webhook_config_for_org) | **GET** /orgs/{org}/hooks/{hook_id}/config | Get a webhook configuration for an organization |
| [**orgs_get_webhook_delivery**](OrgsApi.md#orgs_get_webhook_delivery) | **GET** /orgs/{org}/hooks/{hook_id}/deliveries/{delivery_id} | Get a webhook delivery for an organization webhook |
| [**orgs_list**](OrgsApi.md#orgs_list) | **GET** /organizations | List organizations |
| [**orgs_list_app_installations**](OrgsApi.md#orgs_list_app_installations) | **GET** /orgs/{org}/installations | List app installations for an organization |
| [**orgs_list_attestations**](OrgsApi.md#orgs_list_attestations) | **GET** /orgs/{org}/attestations/{subject_digest} | List attestations |
| [**orgs_list_blocked_users**](OrgsApi.md#orgs_list_blocked_users) | **GET** /orgs/{org}/blocks | List users blocked by an organization |
| [**orgs_list_custom_properties_values_for_repos**](OrgsApi.md#orgs_list_custom_properties_values_for_repos) | **GET** /orgs/{org}/properties/values | List custom property values for organization repositories |
| [**orgs_list_failed_invitations**](OrgsApi.md#orgs_list_failed_invitations) | **GET** /orgs/{org}/failed_invitations | List failed organization invitations |
| [**orgs_list_for_authenticated_user**](OrgsApi.md#orgs_list_for_authenticated_user) | **GET** /user/orgs | List organizations for the authenticated user |
| [**orgs_list_for_user**](OrgsApi.md#orgs_list_for_user) | **GET** /users/{username}/orgs | List organizations for a user |
| [**orgs_list_invitation_teams**](OrgsApi.md#orgs_list_invitation_teams) | **GET** /orgs/{org}/invitations/{invitation_id}/teams | List organization invitation teams |
| [**orgs_list_members**](OrgsApi.md#orgs_list_members) | **GET** /orgs/{org}/members | List organization members |
| [**orgs_list_memberships_for_authenticated_user**](OrgsApi.md#orgs_list_memberships_for_authenticated_user) | **GET** /user/memberships/orgs | List organization memberships for the authenticated user |
| [**orgs_list_org_role_teams**](OrgsApi.md#orgs_list_org_role_teams) | **GET** /orgs/{org}/organization-roles/{role_id}/teams | List teams that are assigned to an organization role |
| [**orgs_list_org_role_users**](OrgsApi.md#orgs_list_org_role_users) | **GET** /orgs/{org}/organization-roles/{role_id}/users | List users that are assigned to an organization role |
| [**orgs_list_org_roles**](OrgsApi.md#orgs_list_org_roles) | **GET** /orgs/{org}/organization-roles | Get all organization roles for an organization |
| [**orgs_list_organization_fine_grained_permissions**](OrgsApi.md#orgs_list_organization_fine_grained_permissions) | **GET** /orgs/{org}/organization-fine-grained-permissions | List organization fine-grained permissions for an organization |
| [**orgs_list_outside_collaborators**](OrgsApi.md#orgs_list_outside_collaborators) | **GET** /orgs/{org}/outside_collaborators | List outside collaborators for an organization |
| [**orgs_list_pat_grant_repositories**](OrgsApi.md#orgs_list_pat_grant_repositories) | **GET** /orgs/{org}/personal-access-tokens/{pat_id}/repositories | List repositories a fine-grained personal access token has access to |
| [**orgs_list_pat_grant_request_repositories**](OrgsApi.md#orgs_list_pat_grant_request_repositories) | **GET** /orgs/{org}/personal-access-token-requests/{pat_request_id}/repositories | List repositories requested to be accessed by a fine-grained personal access token |
| [**orgs_list_pat_grant_requests**](OrgsApi.md#orgs_list_pat_grant_requests) | **GET** /orgs/{org}/personal-access-token-requests | List requests to access organization resources with fine-grained personal access tokens |
| [**orgs_list_pat_grants**](OrgsApi.md#orgs_list_pat_grants) | **GET** /orgs/{org}/personal-access-tokens | List fine-grained personal access tokens with access to organization resources |
| [**orgs_list_pending_invitations**](OrgsApi.md#orgs_list_pending_invitations) | **GET** /orgs/{org}/invitations | List pending organization invitations |
| [**orgs_list_public_members**](OrgsApi.md#orgs_list_public_members) | **GET** /orgs/{org}/public_members | List public organization members |
| [**orgs_list_security_manager_teams**](OrgsApi.md#orgs_list_security_manager_teams) | **GET** /orgs/{org}/security-managers | List security manager teams |
| [**orgs_list_webhook_deliveries**](OrgsApi.md#orgs_list_webhook_deliveries) | **GET** /orgs/{org}/hooks/{hook_id}/deliveries | List deliveries for an organization webhook |
| [**orgs_list_webhooks**](OrgsApi.md#orgs_list_webhooks) | **GET** /orgs/{org}/hooks | List organization webhooks |
| [**orgs_patch_custom_organization_role**](OrgsApi.md#orgs_patch_custom_organization_role) | **PATCH** /orgs/{org}/organization-roles/{role_id} | Update a custom organization role |
| [**orgs_ping_webhook**](OrgsApi.md#orgs_ping_webhook) | **POST** /orgs/{org}/hooks/{hook_id}/pings | Ping an organization webhook |
| [**orgs_redeliver_webhook_delivery**](OrgsApi.md#orgs_redeliver_webhook_delivery) | **POST** /orgs/{org}/hooks/{hook_id}/deliveries/{delivery_id}/attempts | Redeliver a delivery for an organization webhook |
| [**orgs_remove_custom_property**](OrgsApi.md#orgs_remove_custom_property) | **DELETE** /orgs/{org}/properties/schema/{custom_property_name} | Remove a custom property for an organization |
| [**orgs_remove_member**](OrgsApi.md#orgs_remove_member) | **DELETE** /orgs/{org}/members/{username} | Remove an organization member |
| [**orgs_remove_membership_for_user**](OrgsApi.md#orgs_remove_membership_for_user) | **DELETE** /orgs/{org}/memberships/{username} | Remove organization membership for a user |
| [**orgs_remove_outside_collaborator**](OrgsApi.md#orgs_remove_outside_collaborator) | **DELETE** /orgs/{org}/outside_collaborators/{username} | Remove outside collaborator from an organization |
| [**orgs_remove_public_membership_for_authenticated_user**](OrgsApi.md#orgs_remove_public_membership_for_authenticated_user) | **DELETE** /orgs/{org}/public_members/{username} | Remove public organization membership for the authenticated user |
| [**orgs_remove_security_manager_team**](OrgsApi.md#orgs_remove_security_manager_team) | **DELETE** /orgs/{org}/security-managers/teams/{team_slug} | Remove a security manager team |
| [**orgs_review_pat_grant_request**](OrgsApi.md#orgs_review_pat_grant_request) | **POST** /orgs/{org}/personal-access-token-requests/{pat_request_id} | Review a request to access organization resources with a fine-grained personal access token |
| [**orgs_review_pat_grant_requests_in_bulk**](OrgsApi.md#orgs_review_pat_grant_requests_in_bulk) | **POST** /orgs/{org}/personal-access-token-requests | Review requests to access organization resources with fine-grained personal access tokens |
| [**orgs_revoke_all_org_roles_team**](OrgsApi.md#orgs_revoke_all_org_roles_team) | **DELETE** /orgs/{org}/organization-roles/teams/{team_slug} | Remove all organization roles for a team |
| [**orgs_revoke_all_org_roles_user**](OrgsApi.md#orgs_revoke_all_org_roles_user) | **DELETE** /orgs/{org}/organization-roles/users/{username} | Remove all organization roles for a user |
| [**orgs_revoke_org_role_team**](OrgsApi.md#orgs_revoke_org_role_team) | **DELETE** /orgs/{org}/organization-roles/teams/{team_slug}/{role_id} | Remove an organization role from a team |
| [**orgs_revoke_org_role_user**](OrgsApi.md#orgs_revoke_org_role_user) | **DELETE** /orgs/{org}/organization-roles/users/{username}/{role_id} | Remove an organization role from a user |
| [**orgs_set_membership_for_user**](OrgsApi.md#orgs_set_membership_for_user) | **PUT** /orgs/{org}/memberships/{username} | Set organization membership for a user |
| [**orgs_set_public_membership_for_authenticated_user**](OrgsApi.md#orgs_set_public_membership_for_authenticated_user) | **PUT** /orgs/{org}/public_members/{username} | Set public organization membership for the authenticated user |
| [**orgs_unblock_user**](OrgsApi.md#orgs_unblock_user) | **DELETE** /orgs/{org}/blocks/{username} | Unblock a user from an organization |
| [**orgs_update**](OrgsApi.md#orgs_update) | **PATCH** /orgs/{org} | Update an organization |
| [**orgs_update_membership_for_authenticated_user**](OrgsApi.md#orgs_update_membership_for_authenticated_user) | **PATCH** /user/memberships/orgs/{org} | Update an organization membership for the authenticated user |
| [**orgs_update_pat_access**](OrgsApi.md#orgs_update_pat_access) | **POST** /orgs/{org}/personal-access-tokens/{pat_id} | Update the access a fine-grained personal access token has to organization resources |
| [**orgs_update_pat_accesses**](OrgsApi.md#orgs_update_pat_accesses) | **POST** /orgs/{org}/personal-access-tokens | Update the access to organization resources via fine-grained personal access tokens |
| [**orgs_update_webhook**](OrgsApi.md#orgs_update_webhook) | **PATCH** /orgs/{org}/hooks/{hook_id} | Update an organization webhook |
| [**orgs_update_webhook_config_for_org**](OrgsApi.md#orgs_update_webhook_config_for_org) | **PATCH** /orgs/{org}/hooks/{hook_id}/config | Update a webhook configuration for an organization |


## orgs_add_security_manager_team

> orgs_add_security_manager_team(org, team_slug)

Add a security manager team

Adds a team as a security manager for an organization. For more information, see \"[Managing security for an organization](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/managing-security-managers-in-your-organization) for an organization.\"  The authenticated user must be an administrator for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `write:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.

begin
  # Add a security manager team
  api_instance.orgs_add_security_manager_team(org, team_slug)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_add_security_manager_team: #{e}"
end
```

#### Using the orgs_add_security_manager_team_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_add_security_manager_team_with_http_info(org, team_slug)

```ruby
begin
  # Add a security manager team
  data, status_code, headers = api_instance.orgs_add_security_manager_team_with_http_info(org, team_slug)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_add_security_manager_team_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## orgs_assign_team_to_org_role

> orgs_assign_team_to_org_role(org, team_slug, role_id)

Assign an organization role to a team

Assigns an organization role to a team in an organization. For more information on organization roles, see \"[Managing people's access to your organization with roles](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/about-custom-organization-roles).\"  The authenticated user must be an administrator for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
role_id = 56 # Integer | The unique identifier of the role.

begin
  # Assign an organization role to a team
  api_instance.orgs_assign_team_to_org_role(org, team_slug, role_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_assign_team_to_org_role: #{e}"
end
```

#### Using the orgs_assign_team_to_org_role_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_assign_team_to_org_role_with_http_info(org, team_slug, role_id)

```ruby
begin
  # Assign an organization role to a team
  data, status_code, headers = api_instance.orgs_assign_team_to_org_role_with_http_info(org, team_slug, role_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_assign_team_to_org_role_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **role_id** | **Integer** | The unique identifier of the role. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## orgs_assign_user_to_org_role

> orgs_assign_user_to_org_role(org, username, role_id)

Assign an organization role to a user

Assigns an organization role to a member of an organization. For more information on organization roles, see \"[Managing people's access to your organization with roles](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/about-custom-organization-roles).\"  The authenticated user must be an administrator for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.
role_id = 56 # Integer | The unique identifier of the role.

begin
  # Assign an organization role to a user
  api_instance.orgs_assign_user_to_org_role(org, username, role_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_assign_user_to_org_role: #{e}"
end
```

#### Using the orgs_assign_user_to_org_role_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_assign_user_to_org_role_with_http_info(org, username, role_id)

```ruby
begin
  # Assign an organization role to a user
  data, status_code, headers = api_instance.orgs_assign_user_to_org_role_with_http_info(org, username, role_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_assign_user_to_org_role_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |
| **role_id** | **Integer** | The unique identifier of the role. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## orgs_block_user

> orgs_block_user(org, username)

Block a user from an organization

Blocks the given user on behalf of the specified organization and returns a 204. If the organization cannot block the given user a 422 is returned.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Block a user from an organization
  api_instance.orgs_block_user(org, username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_block_user: #{e}"
end
```

#### Using the orgs_block_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_block_user_with_http_info(org, username)

```ruby
begin
  # Block a user from an organization
  data, status_code, headers = api_instance.orgs_block_user_with_http_info(org, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_block_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_cancel_invitation

> orgs_cancel_invitation(org, invitation_id)

Cancel an organization invitation

Cancel an organization invitation. In order to cancel an organization invitation, the authenticated user must be an organization owner.  This endpoint triggers [notifications](https://docs.github.com/github/managing-subscriptions-and-notifications-on-github/about-notifications).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
invitation_id = 56 # Integer | The unique identifier of the invitation.

begin
  # Cancel an organization invitation
  api_instance.orgs_cancel_invitation(org, invitation_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_cancel_invitation: #{e}"
end
```

#### Using the orgs_cancel_invitation_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_cancel_invitation_with_http_info(org, invitation_id)

```ruby
begin
  # Cancel an organization invitation
  data, status_code, headers = api_instance.orgs_cancel_invitation_with_http_info(org, invitation_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_cancel_invitation_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **invitation_id** | **Integer** | The unique identifier of the invitation. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_check_blocked_user

> orgs_check_blocked_user(org, username)

Check if a user is blocked by an organization

Returns a 204 if the given user is blocked by the given organization. Returns a 404 if the organization is not blocking the user, or if the user account has been identified as spam by GitHub.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Check if a user is blocked by an organization
  api_instance.orgs_check_blocked_user(org, username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_check_blocked_user: #{e}"
end
```

#### Using the orgs_check_blocked_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_check_blocked_user_with_http_info(org, username)

```ruby
begin
  # Check if a user is blocked by an organization
  data, status_code, headers = api_instance.orgs_check_blocked_user_with_http_info(org, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_check_blocked_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_check_membership_for_user

> orgs_check_membership_for_user(org, username)

Check organization membership for a user

Check if a user is, publicly or privately, a member of the organization.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Check organization membership for a user
  api_instance.orgs_check_membership_for_user(org, username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_check_membership_for_user: #{e}"
end
```

#### Using the orgs_check_membership_for_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_check_membership_for_user_with_http_info(org, username)

```ruby
begin
  # Check organization membership for a user
  data, status_code, headers = api_instance.orgs_check_membership_for_user_with_http_info(org, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_check_membership_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## orgs_check_public_membership_for_user

> orgs_check_public_membership_for_user(org, username)

Check public organization membership for a user

Check if the provided user is a public member of the organization.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Check public organization membership for a user
  api_instance.orgs_check_public_membership_for_user(org, username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_check_public_membership_for_user: #{e}"
end
```

#### Using the orgs_check_public_membership_for_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_check_public_membership_for_user_with_http_info(org, username)

```ruby
begin
  # Check public organization membership for a user
  data, status_code, headers = api_instance.orgs_check_public_membership_for_user_with_http_info(org, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_check_public_membership_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## orgs_convert_member_to_outside_collaborator

> Object orgs_convert_member_to_outside_collaborator(org, username, opts)

Convert an organization member to outside collaborator

When an organization member is converted to an outside collaborator, they'll only have access to the repositories that their current team membership allows. The user will no longer be a member of the organization. For more information, see \"[Converting an organization member to an outside collaborator](https://docs.github.com/articles/converting-an-organization-member-to-an-outside-collaborator/)\". Converting an organization member to an outside collaborator may be restricted by enterprise administrators. For more information, see \"[Enforcing repository management policies in your enterprise](https://docs.github.com/admin/policies/enforcing-policies-for-your-enterprise/enforcing-repository-management-policies-in-your-enterprise#enforcing-a-policy-for-inviting-outside-collaborators-to-repositories).\"

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  orgs_convert_member_to_outside_collaborator_request: OpenapiClient::OrgsConvertMemberToOutsideCollaboratorRequest.new # OrgsConvertMemberToOutsideCollaboratorRequest | 
}

begin
  # Convert an organization member to outside collaborator
  result = api_instance.orgs_convert_member_to_outside_collaborator(org, username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_convert_member_to_outside_collaborator: #{e}"
end
```

#### Using the orgs_convert_member_to_outside_collaborator_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> orgs_convert_member_to_outside_collaborator_with_http_info(org, username, opts)

```ruby
begin
  # Convert an organization member to outside collaborator
  data, status_code, headers = api_instance.orgs_convert_member_to_outside_collaborator_with_http_info(org, username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_convert_member_to_outside_collaborator_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |
| **orgs_convert_member_to_outside_collaborator_request** | [**OrgsConvertMemberToOutsideCollaboratorRequest**](OrgsConvertMemberToOutsideCollaboratorRequest.md) |  | [optional] |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## orgs_create_custom_organization_role

> <OrganizationRole> orgs_create_custom_organization_role(org, orgs_create_custom_organization_role_request)

Create a custom organization role

Creates a custom organization role that can be assigned to users and teams, granting them specific permissions over the organization. For more information on custom organization roles, see \"[Managing people's access to your organization with roles](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/about-custom-organization-roles).\"  To use this endpoint, the authenticated user must be one of:  - An administrator for the organization. - A user, or a user on a team, with the fine-grained permissions of `write_organization_custom_org_role` in the organization.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
orgs_create_custom_organization_role_request = OpenapiClient::OrgsCreateCustomOrganizationRoleRequest.new({name: 'name_example', permissions: ['permissions_example']}) # OrgsCreateCustomOrganizationRoleRequest | 

begin
  # Create a custom organization role
  result = api_instance.orgs_create_custom_organization_role(org, orgs_create_custom_organization_role_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_create_custom_organization_role: #{e}"
end
```

#### Using the orgs_create_custom_organization_role_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrganizationRole>, Integer, Hash)> orgs_create_custom_organization_role_with_http_info(org, orgs_create_custom_organization_role_request)

```ruby
begin
  # Create a custom organization role
  data, status_code, headers = api_instance.orgs_create_custom_organization_role_with_http_info(org, orgs_create_custom_organization_role_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrganizationRole>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_create_custom_organization_role_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **orgs_create_custom_organization_role_request** | [**OrgsCreateCustomOrganizationRoleRequest**](OrgsCreateCustomOrganizationRoleRequest.md) |  |  |

### Return type

[**OrganizationRole**](OrganizationRole.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## orgs_create_invitation

> <OrganizationInvitation> orgs_create_invitation(org, opts)

Create an organization invitation

Invite people to an organization by using their GitHub user ID or their email address. In order to create invitations in an organization, the authenticated user must be an organization owner.  This endpoint triggers [notifications](https://docs.github.com/github/managing-subscriptions-and-notifications-on-github/about-notifications). Creating content too quickly using this endpoint may result in secondary rate limiting. For more information, see \"[Rate limits for the API](https://docs.github.com/rest/using-the-rest-api/rate-limits-for-the-rest-api#about-secondary-rate-limits)\" and \"[Best practices for using the REST API](https://docs.github.com/rest/guides/best-practices-for-using-the-rest-api).\"

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  orgs_create_invitation_request: OpenapiClient::OrgsCreateInvitationRequest.new # OrgsCreateInvitationRequest | 
}

begin
  # Create an organization invitation
  result = api_instance.orgs_create_invitation(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_create_invitation: #{e}"
end
```

#### Using the orgs_create_invitation_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrganizationInvitation>, Integer, Hash)> orgs_create_invitation_with_http_info(org, opts)

```ruby
begin
  # Create an organization invitation
  data, status_code, headers = api_instance.orgs_create_invitation_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrganizationInvitation>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_create_invitation_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **orgs_create_invitation_request** | [**OrgsCreateInvitationRequest**](OrgsCreateInvitationRequest.md) |  | [optional] |

### Return type

[**OrganizationInvitation**](OrganizationInvitation.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## orgs_create_or_update_custom_properties

> <Array<OrgCustomProperty>> orgs_create_or_update_custom_properties(org, orgs_create_or_update_custom_properties_request)

Create or update custom properties for an organization

Creates new or updates existing custom properties defined for an organization in a batch.  To use this endpoint, the authenticated user must be one of:   - An administrator for the organization.   - A user, or a user on a team, with the fine-grained permission of `custom_properties_org_definitions_manager` in the organization.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
orgs_create_or_update_custom_properties_request = OpenapiClient::OrgsCreateOrUpdateCustomPropertiesRequest.new({properties: [OpenapiClient::OrgCustomProperty.new({property_name: 'property_name_example', value_type: 'string'})]}) # OrgsCreateOrUpdateCustomPropertiesRequest | 

begin
  # Create or update custom properties for an organization
  result = api_instance.orgs_create_or_update_custom_properties(org, orgs_create_or_update_custom_properties_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_create_or_update_custom_properties: #{e}"
end
```

#### Using the orgs_create_or_update_custom_properties_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<OrgCustomProperty>>, Integer, Hash)> orgs_create_or_update_custom_properties_with_http_info(org, orgs_create_or_update_custom_properties_request)

```ruby
begin
  # Create or update custom properties for an organization
  data, status_code, headers = api_instance.orgs_create_or_update_custom_properties_with_http_info(org, orgs_create_or_update_custom_properties_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<OrgCustomProperty>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_create_or_update_custom_properties_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **orgs_create_or_update_custom_properties_request** | [**OrgsCreateOrUpdateCustomPropertiesRequest**](OrgsCreateOrUpdateCustomPropertiesRequest.md) |  |  |

### Return type

[**Array&lt;OrgCustomProperty&gt;**](OrgCustomProperty.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## orgs_create_or_update_custom_properties_values_for_repos

> orgs_create_or_update_custom_properties_values_for_repos(org, orgs_create_or_update_custom_properties_values_for_repos_request)

Create or update custom property values for organization repositories

Create new or update existing custom property values for repositories in a batch that belong to an organization. Each target repository will have its custom property values updated to match the values provided in the request.  A maximum of 30 repositories can be updated in a single request.  Using a value of `null` for a custom property will remove or 'unset' the property value from the repository.  To use this endpoint, the authenticated user must be one of:   - An administrator for the organization.   - A user, or a user on a team, with the fine-grained permission of `custom_properties_org_values_editor` in the organization.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
orgs_create_or_update_custom_properties_values_for_repos_request = OpenapiClient::OrgsCreateOrUpdateCustomPropertiesValuesForReposRequest.new({repository_names: ['repository_names_example'], properties: [OpenapiClient::CustomPropertyValue.new({property_name: 'property_name_example', value: nil})]}) # OrgsCreateOrUpdateCustomPropertiesValuesForReposRequest | 

begin
  # Create or update custom property values for organization repositories
  api_instance.orgs_create_or_update_custom_properties_values_for_repos(org, orgs_create_or_update_custom_properties_values_for_repos_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_create_or_update_custom_properties_values_for_repos: #{e}"
end
```

#### Using the orgs_create_or_update_custom_properties_values_for_repos_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_create_or_update_custom_properties_values_for_repos_with_http_info(org, orgs_create_or_update_custom_properties_values_for_repos_request)

```ruby
begin
  # Create or update custom property values for organization repositories
  data, status_code, headers = api_instance.orgs_create_or_update_custom_properties_values_for_repos_with_http_info(org, orgs_create_or_update_custom_properties_values_for_repos_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_create_or_update_custom_properties_values_for_repos_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **orgs_create_or_update_custom_properties_values_for_repos_request** | [**OrgsCreateOrUpdateCustomPropertiesValuesForReposRequest**](OrgsCreateOrUpdateCustomPropertiesValuesForReposRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## orgs_create_or_update_custom_property

> <OrgCustomProperty> orgs_create_or_update_custom_property(org, custom_property_name, orgs_create_or_update_custom_property_request)

Create or update a custom property for an organization

Creates a new or updates an existing custom property that is defined for an organization.  To use this endpoint, the authenticated user must be one of: - An administrator for the organization. - A user, or a user on a team, with the fine-grained permission of `custom_properties_org_definitions_manager` in the organization.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
custom_property_name = 'custom_property_name_example' # String | The custom property name. The name is case sensitive.
orgs_create_or_update_custom_property_request = OpenapiClient::OrgsCreateOrUpdateCustomPropertyRequest.new({value_type: 'string'}) # OrgsCreateOrUpdateCustomPropertyRequest | 

begin
  # Create or update a custom property for an organization
  result = api_instance.orgs_create_or_update_custom_property(org, custom_property_name, orgs_create_or_update_custom_property_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_create_or_update_custom_property: #{e}"
end
```

#### Using the orgs_create_or_update_custom_property_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrgCustomProperty>, Integer, Hash)> orgs_create_or_update_custom_property_with_http_info(org, custom_property_name, orgs_create_or_update_custom_property_request)

```ruby
begin
  # Create or update a custom property for an organization
  data, status_code, headers = api_instance.orgs_create_or_update_custom_property_with_http_info(org, custom_property_name, orgs_create_or_update_custom_property_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrgCustomProperty>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_create_or_update_custom_property_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **custom_property_name** | **String** | The custom property name. The name is case sensitive. |  |
| **orgs_create_or_update_custom_property_request** | [**OrgsCreateOrUpdateCustomPropertyRequest**](OrgsCreateOrUpdateCustomPropertyRequest.md) |  |  |

### Return type

[**OrgCustomProperty**](OrgCustomProperty.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## orgs_create_webhook

> <OrgHook> orgs_create_webhook(org, orgs_create_webhook_request)

Create an organization webhook

Create a hook that posts payloads in JSON format.  You must be an organization owner to use this endpoint.  OAuth app tokens and personal access tokens (classic) need `admin:org_hook` scope. OAuth apps cannot list, view, or edit webhooks that they did not create and users cannot list, view, or edit webhooks that were created by OAuth apps.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
orgs_create_webhook_request = OpenapiClient::OrgsCreateWebhookRequest.new({name: 'name_example', config: OpenapiClient::OrgsCreateWebhookRequestConfig.new({url: 'https://example.com/webhook'})}) # OrgsCreateWebhookRequest | 

begin
  # Create an organization webhook
  result = api_instance.orgs_create_webhook(org, orgs_create_webhook_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_create_webhook: #{e}"
end
```

#### Using the orgs_create_webhook_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrgHook>, Integer, Hash)> orgs_create_webhook_with_http_info(org, orgs_create_webhook_request)

```ruby
begin
  # Create an organization webhook
  data, status_code, headers = api_instance.orgs_create_webhook_with_http_info(org, orgs_create_webhook_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrgHook>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_create_webhook_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **orgs_create_webhook_request** | [**OrgsCreateWebhookRequest**](OrgsCreateWebhookRequest.md) |  |  |

### Return type

[**OrgHook**](OrgHook.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## orgs_delete

> Object orgs_delete(org)

Delete an organization

Deletes an organization and all its repositories.  The organization login will be unavailable for 90 days after deletion.  Please review the Terms of Service regarding account deletion before using this endpoint:  https://docs.github.com/site-policy/github-terms/github-terms-of-service

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Delete an organization
  result = api_instance.orgs_delete(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_delete: #{e}"
end
```

#### Using the orgs_delete_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> orgs_delete_with_http_info(org)

```ruby
begin
  # Delete an organization
  data, status_code, headers = api_instance.orgs_delete_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_delete_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_delete_custom_organization_role

> orgs_delete_custom_organization_role(org, role_id)

Delete a custom organization role.

Deletes a custom organization role. For more information on custom organization roles, see \"[Managing people's access to your organization with roles](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/about-custom-organization-roles).\"  To use this endpoint, the authenticated user must be one of:  - An administrator for the organization. - A user, or a user on a team, with the fine-grained permissions of `write_organization_custom_org_role` in the organization.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
role_id = 56 # Integer | The unique identifier of the role.

begin
  # Delete a custom organization role.
  api_instance.orgs_delete_custom_organization_role(org, role_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_delete_custom_organization_role: #{e}"
end
```

#### Using the orgs_delete_custom_organization_role_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_delete_custom_organization_role_with_http_info(org, role_id)

```ruby
begin
  # Delete a custom organization role.
  data, status_code, headers = api_instance.orgs_delete_custom_organization_role_with_http_info(org, role_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_delete_custom_organization_role_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **role_id** | **Integer** | The unique identifier of the role. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## orgs_delete_webhook

> orgs_delete_webhook(org, hook_id)

Delete an organization webhook

You must be an organization owner to use this endpoint.  OAuth app tokens and personal access tokens (classic) need `admin:org_hook` scope. OAuth apps cannot list, view, or edit webhooks that they did not create and users cannot list, view, or edit webhooks that were created by OAuth apps.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
hook_id = 56 # Integer | The unique identifier of the hook. You can find this value in the `X-GitHub-Hook-ID` header of a webhook delivery.

begin
  # Delete an organization webhook
  api_instance.orgs_delete_webhook(org, hook_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_delete_webhook: #{e}"
end
```

#### Using the orgs_delete_webhook_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_delete_webhook_with_http_info(org, hook_id)

```ruby
begin
  # Delete an organization webhook
  data, status_code, headers = api_instance.orgs_delete_webhook_with_http_info(org, hook_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_delete_webhook_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **hook_id** | **Integer** | The unique identifier of the hook. You can find this value in the &#x60;X-GitHub-Hook-ID&#x60; header of a webhook delivery. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_enable_or_disable_security_product_on_all_org_repos

> orgs_enable_or_disable_security_product_on_all_org_repos(org, security_product, enablement, opts)

Enable or disable a security feature for an organization

Enables or disables the specified security feature for all eligible repositories in an organization. For more information, see \"[Managing security managers in your organization](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/managing-security-managers-in-your-organization).\"  The authenticated user must be an organization owner or be member of a team with the security manager role to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `write:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
security_product = 'dependency_graph' # String | The security feature to enable or disable.
enablement = 'enable_all' # String | The action to take.  `enable_all` means to enable the specified security feature for all repositories in the organization. `disable_all` means to disable the specified security feature for all repositories in the organization.
opts = {
  orgs_enable_or_disable_security_product_on_all_org_repos_request: OpenapiClient::OrgsEnableOrDisableSecurityProductOnAllOrgReposRequest.new # OrgsEnableOrDisableSecurityProductOnAllOrgReposRequest | 
}

begin
  # Enable or disable a security feature for an organization
  api_instance.orgs_enable_or_disable_security_product_on_all_org_repos(org, security_product, enablement, opts)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_enable_or_disable_security_product_on_all_org_repos: #{e}"
end
```

#### Using the orgs_enable_or_disable_security_product_on_all_org_repos_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_enable_or_disable_security_product_on_all_org_repos_with_http_info(org, security_product, enablement, opts)

```ruby
begin
  # Enable or disable a security feature for an organization
  data, status_code, headers = api_instance.orgs_enable_or_disable_security_product_on_all_org_repos_with_http_info(org, security_product, enablement, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_enable_or_disable_security_product_on_all_org_repos_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **security_product** | **String** | The security feature to enable or disable. |  |
| **enablement** | **String** | The action to take.  &#x60;enable_all&#x60; means to enable the specified security feature for all repositories in the organization. &#x60;disable_all&#x60; means to disable the specified security feature for all repositories in the organization. |  |
| **orgs_enable_or_disable_security_product_on_all_org_repos_request** | [**OrgsEnableOrDisableSecurityProductOnAllOrgReposRequest**](OrgsEnableOrDisableSecurityProductOnAllOrgReposRequest.md) |  | [optional] |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## orgs_get

> <OrganizationFull> orgs_get(org)

Get an organization

Gets information about an organization.  When the value of `two_factor_requirement_enabled` is `true`, the organization requires all members, billing managers, and outside collaborators to enable [two-factor authentication](https://docs.github.com/articles/securing-your-account-with-two-factor-authentication-2fa/).  To see the full details about an organization, the authenticated user must be an organization owner.  The values returned by this endpoint are set by the \"Update an organization\" endpoint. If your organization set a default security configuration (beta), the following values retrieved from the \"Update an organization\" endpoint have been overwritten by that configuration:  - advanced_security_enabled_for_new_repositories - dependabot_alerts_enabled_for_new_repositories - dependabot_security_updates_enabled_for_new_repositories - dependency_graph_enabled_for_new_repositories - secret_scanning_enabled_for_new_repositories - secret_scanning_push_protection_enabled_for_new_repositories  For more information on security configurations, see \"[Enabling security features at scale](https://docs.github.com/code-security/securing-your-organization/introduction-to-securing-your-organization-at-scale/about-enabling-security-features-at-scale).\"  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to see the full details about an organization.  To see information about an organization's GitHub plan, GitHub Apps need the `Organization plan` permission.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Get an organization
  result = api_instance.orgs_get(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_get: #{e}"
end
```

#### Using the orgs_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrganizationFull>, Integer, Hash)> orgs_get_with_http_info(org)

```ruby
begin
  # Get an organization
  data, status_code, headers = api_instance.orgs_get_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrganizationFull>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**OrganizationFull**](OrganizationFull.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_get_all_custom_properties

> <Array<OrgCustomProperty>> orgs_get_all_custom_properties(org)

Get all custom properties for an organization

Gets all custom properties defined for an organization. Organization members can read these properties.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Get all custom properties for an organization
  result = api_instance.orgs_get_all_custom_properties(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_get_all_custom_properties: #{e}"
end
```

#### Using the orgs_get_all_custom_properties_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<OrgCustomProperty>>, Integer, Hash)> orgs_get_all_custom_properties_with_http_info(org)

```ruby
begin
  # Get all custom properties for an organization
  data, status_code, headers = api_instance.orgs_get_all_custom_properties_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<OrgCustomProperty>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_get_all_custom_properties_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**Array&lt;OrgCustomProperty&gt;**](OrgCustomProperty.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_get_custom_property

> <OrgCustomProperty> orgs_get_custom_property(org, custom_property_name)

Get a custom property for an organization

Gets a custom property that is defined for an organization. Organization members can read these properties.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
custom_property_name = 'custom_property_name_example' # String | The custom property name. The name is case sensitive.

begin
  # Get a custom property for an organization
  result = api_instance.orgs_get_custom_property(org, custom_property_name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_get_custom_property: #{e}"
end
```

#### Using the orgs_get_custom_property_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrgCustomProperty>, Integer, Hash)> orgs_get_custom_property_with_http_info(org, custom_property_name)

```ruby
begin
  # Get a custom property for an organization
  data, status_code, headers = api_instance.orgs_get_custom_property_with_http_info(org, custom_property_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrgCustomProperty>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_get_custom_property_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **custom_property_name** | **String** | The custom property name. The name is case sensitive. |  |

### Return type

[**OrgCustomProperty**](OrgCustomProperty.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_get_membership_for_authenticated_user

> <OrgMembership> orgs_get_membership_for_authenticated_user(org)

Get an organization membership for the authenticated user

If the authenticated user is an active or pending member of the organization, this endpoint will return the user's membership. If the authenticated user is not affiliated with the organization, a `404` is returned. This endpoint will return a `403` if the request is made by a GitHub App that is blocked by the organization.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Get an organization membership for the authenticated user
  result = api_instance.orgs_get_membership_for_authenticated_user(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_get_membership_for_authenticated_user: #{e}"
end
```

#### Using the orgs_get_membership_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrgMembership>, Integer, Hash)> orgs_get_membership_for_authenticated_user_with_http_info(org)

```ruby
begin
  # Get an organization membership for the authenticated user
  data, status_code, headers = api_instance.orgs_get_membership_for_authenticated_user_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrgMembership>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_get_membership_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**OrgMembership**](OrgMembership.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_get_membership_for_user

> <OrgMembership> orgs_get_membership_for_user(org, username)

Get organization membership for a user

In order to get a user's membership with an organization, the authenticated user must be an organization member. The `state` parameter in the response can be used to identify the user's membership status.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Get organization membership for a user
  result = api_instance.orgs_get_membership_for_user(org, username)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_get_membership_for_user: #{e}"
end
```

#### Using the orgs_get_membership_for_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrgMembership>, Integer, Hash)> orgs_get_membership_for_user_with_http_info(org, username)

```ruby
begin
  # Get organization membership for a user
  data, status_code, headers = api_instance.orgs_get_membership_for_user_with_http_info(org, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrgMembership>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_get_membership_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

[**OrgMembership**](OrgMembership.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_get_org_role

> <OrganizationRole> orgs_get_org_role(org, role_id)

Get an organization role

Gets an organization role that is available to this organization. For more information on organization roles, see \"[Managing people's access to your organization with roles](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/about-custom-organization-roles).\"  To use this endpoint, the authenticated user must be one of:  - An administrator for the organization. - A user, or a user on a team, with the fine-grained permissions of `read_organization_custom_org_role` in the organization.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
role_id = 56 # Integer | The unique identifier of the role.

begin
  # Get an organization role
  result = api_instance.orgs_get_org_role(org, role_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_get_org_role: #{e}"
end
```

#### Using the orgs_get_org_role_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrganizationRole>, Integer, Hash)> orgs_get_org_role_with_http_info(org, role_id)

```ruby
begin
  # Get an organization role
  data, status_code, headers = api_instance.orgs_get_org_role_with_http_info(org, role_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrganizationRole>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_get_org_role_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **role_id** | **Integer** | The unique identifier of the role. |  |

### Return type

[**OrganizationRole**](OrganizationRole.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_get_webhook

> <OrgHook> orgs_get_webhook(org, hook_id)

Get an organization webhook

Returns a webhook configured in an organization. To get only the webhook `config` properties, see \"[Get a webhook configuration for an organization](/rest/orgs/webhooks#get-a-webhook-configuration-for-an-organization).  You must be an organization owner to use this endpoint.  OAuth app tokens and personal access tokens (classic) need `admin:org_hook` scope. OAuth apps cannot list, view, or edit webhooks that they did not create and users cannot list, view, or edit webhooks that were created by OAuth apps.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
hook_id = 56 # Integer | The unique identifier of the hook. You can find this value in the `X-GitHub-Hook-ID` header of a webhook delivery.

begin
  # Get an organization webhook
  result = api_instance.orgs_get_webhook(org, hook_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_get_webhook: #{e}"
end
```

#### Using the orgs_get_webhook_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrgHook>, Integer, Hash)> orgs_get_webhook_with_http_info(org, hook_id)

```ruby
begin
  # Get an organization webhook
  data, status_code, headers = api_instance.orgs_get_webhook_with_http_info(org, hook_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrgHook>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_get_webhook_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **hook_id** | **Integer** | The unique identifier of the hook. You can find this value in the &#x60;X-GitHub-Hook-ID&#x60; header of a webhook delivery. |  |

### Return type

[**OrgHook**](OrgHook.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_get_webhook_config_for_org

> <WebhookConfig> orgs_get_webhook_config_for_org(org, hook_id)

Get a webhook configuration for an organization

Returns the webhook configuration for an organization. To get more information about the webhook, including the `active` state and `events`, use \"[Get an organization webhook ](/rest/orgs/webhooks#get-an-organization-webhook).\"  You must be an organization owner to use this endpoint.  OAuth app tokens and personal access tokens (classic) need `admin:org_hook` scope. OAuth apps cannot list, view, or edit webhooks that they did not create and users cannot list, view, or edit webhooks that were created by OAuth apps.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
hook_id = 56 # Integer | The unique identifier of the hook. You can find this value in the `X-GitHub-Hook-ID` header of a webhook delivery.

begin
  # Get a webhook configuration for an organization
  result = api_instance.orgs_get_webhook_config_for_org(org, hook_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_get_webhook_config_for_org: #{e}"
end
```

#### Using the orgs_get_webhook_config_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<WebhookConfig>, Integer, Hash)> orgs_get_webhook_config_for_org_with_http_info(org, hook_id)

```ruby
begin
  # Get a webhook configuration for an organization
  data, status_code, headers = api_instance.orgs_get_webhook_config_for_org_with_http_info(org, hook_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <WebhookConfig>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_get_webhook_config_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **hook_id** | **Integer** | The unique identifier of the hook. You can find this value in the &#x60;X-GitHub-Hook-ID&#x60; header of a webhook delivery. |  |

### Return type

[**WebhookConfig**](WebhookConfig.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_get_webhook_delivery

> <HookDelivery> orgs_get_webhook_delivery(org, hook_id, delivery_id)

Get a webhook delivery for an organization webhook

Returns a delivery for a webhook configured in an organization.  You must be an organization owner to use this endpoint.  OAuth app tokens and personal access tokens (classic) need `admin:org_hook` scope. OAuth apps cannot list, view, or edit webhooks that they did not create and users cannot list, view, or edit webhooks that were created by OAuth apps.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
hook_id = 56 # Integer | The unique identifier of the hook. You can find this value in the `X-GitHub-Hook-ID` header of a webhook delivery.
delivery_id = 56 # Integer | 

begin
  # Get a webhook delivery for an organization webhook
  result = api_instance.orgs_get_webhook_delivery(org, hook_id, delivery_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_get_webhook_delivery: #{e}"
end
```

#### Using the orgs_get_webhook_delivery_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<HookDelivery>, Integer, Hash)> orgs_get_webhook_delivery_with_http_info(org, hook_id, delivery_id)

```ruby
begin
  # Get a webhook delivery for an organization webhook
  data, status_code, headers = api_instance.orgs_get_webhook_delivery_with_http_info(org, hook_id, delivery_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <HookDelivery>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_get_webhook_delivery_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **hook_id** | **Integer** | The unique identifier of the hook. You can find this value in the &#x60;X-GitHub-Hook-ID&#x60; header of a webhook delivery. |  |
| **delivery_id** | **Integer** |  |  |

### Return type

[**HookDelivery**](HookDelivery.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, application/scim+json


## orgs_list

> <Array<OrganizationSimple>> orgs_list(opts)

List organizations

Lists all organizations, in the order that they were created.  **Note:** Pagination is powered exclusively by the `since` parameter. Use the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers) to get the URL for the next page of organizations.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
opts = {
  since: 56, # Integer | An organization ID. Only return organizations with an ID greater than this ID.
  per_page: 56 # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List organizations
  result = api_instance.orgs_list(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list: #{e}"
end
```

#### Using the orgs_list_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<OrganizationSimple>>, Integer, Hash)> orgs_list_with_http_info(opts)

```ruby
begin
  # List organizations
  data, status_code, headers = api_instance.orgs_list_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<OrganizationSimple>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **since** | **Integer** | An organization ID. Only return organizations with an ID greater than this ID. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |

### Return type

[**Array&lt;OrganizationSimple&gt;**](OrganizationSimple.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_app_installations

> <OrgsListAppInstallations200Response> orgs_list_app_installations(org, opts)

List app installations for an organization

Lists all GitHub Apps in an organization. The installation count includes all GitHub Apps installed on repositories in the organization.  The authenticated user must be an organization owner to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `admin:read` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List app installations for an organization
  result = api_instance.orgs_list_app_installations(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_app_installations: #{e}"
end
```

#### Using the orgs_list_app_installations_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrgsListAppInstallations200Response>, Integer, Hash)> orgs_list_app_installations_with_http_info(org, opts)

```ruby
begin
  # List app installations for an organization
  data, status_code, headers = api_instance.orgs_list_app_installations_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrgsListAppInstallations200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_app_installations_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**OrgsListAppInstallations200Response**](OrgsListAppInstallations200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_attestations

> <OrgsListAttestations200Response> orgs_list_attestations(org, subject_digest, opts)

List attestations

List a collection of artifact attestations with a given subject digest that are associated with repositories owned by an organization.  The collection of attestations returned by this endpoint is filtered according to the authenticated user's permissions; if the authenticated user cannot read a repository, the attestations associated with that repository will not be included in the response. In addition, when using a fine-grained access token the `attestations:read` permission is required.  **Please note:** in order to offer meaningful security benefits, an attestation's signature and timestamps **must** be cryptographically verified, and the identity of the attestation signer **must** be validated. Attestations can be verified using the [GitHub CLI `attestation verify` command](https://cli.github.com/manual/gh_attestation_verify). For more information, see [our guide on how to use artifact attestations to establish a build's provenance](https://docs.github.com/actions/security-guides/using-artifact-attestations-to-establish-provenance-for-builds).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
subject_digest = 'subject_digest_example' # String | The parameter should be set to the attestation's subject's SHA256 digest, in the form `sha256:HEX_DIGEST`.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  before: 'before_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  after: 'after_example' # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List attestations
  result = api_instance.orgs_list_attestations(org, subject_digest, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_attestations: #{e}"
end
```

#### Using the orgs_list_attestations_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrgsListAttestations200Response>, Integer, Hash)> orgs_list_attestations_with_http_info(org, subject_digest, opts)

```ruby
begin
  # List attestations
  data, status_code, headers = api_instance.orgs_list_attestations_with_http_info(org, subject_digest, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrgsListAttestations200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_attestations_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **subject_digest** | **String** | The parameter should be set to the attestation&#39;s subject&#39;s SHA256 digest, in the form &#x60;sha256:HEX_DIGEST&#x60;. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **before** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |
| **after** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |

### Return type

[**OrgsListAttestations200Response**](OrgsListAttestations200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_blocked_users

> <Array<SimpleUser>> orgs_list_blocked_users(org, opts)

List users blocked by an organization

List the users blocked by an organization.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List users blocked by an organization
  result = api_instance.orgs_list_blocked_users(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_blocked_users: #{e}"
end
```

#### Using the orgs_list_blocked_users_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SimpleUser>>, Integer, Hash)> orgs_list_blocked_users_with_http_info(org, opts)

```ruby
begin
  # List users blocked by an organization
  data, status_code, headers = api_instance.orgs_list_blocked_users_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SimpleUser>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_blocked_users_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;SimpleUser&gt;**](SimpleUser.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_custom_properties_values_for_repos

> <Array<OrgRepoCustomPropertyValues>> orgs_list_custom_properties_values_for_repos(org, opts)

List custom property values for organization repositories

Lists organization repositories with all of their custom property values. Organization members can read these properties.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  repository_query: 'repository_query_example' # String | Finds repositories in the organization with a query containing one or more search keywords and qualifiers. Qualifiers allow you to limit your search to specific areas of GitHub. The REST API supports the same qualifiers as the web interface for GitHub. To learn more about the format of the query, see [Constructing a search query](https://docs.github.com/rest/search/search#constructing-a-search-query). See \"[Searching for repositories](https://docs.github.com/articles/searching-for-repositories/)\" for a detailed list of qualifiers.
}

begin
  # List custom property values for organization repositories
  result = api_instance.orgs_list_custom_properties_values_for_repos(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_custom_properties_values_for_repos: #{e}"
end
```

#### Using the orgs_list_custom_properties_values_for_repos_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<OrgRepoCustomPropertyValues>>, Integer, Hash)> orgs_list_custom_properties_values_for_repos_with_http_info(org, opts)

```ruby
begin
  # List custom property values for organization repositories
  data, status_code, headers = api_instance.orgs_list_custom_properties_values_for_repos_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<OrgRepoCustomPropertyValues>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_custom_properties_values_for_repos_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **repository_query** | **String** | Finds repositories in the organization with a query containing one or more search keywords and qualifiers. Qualifiers allow you to limit your search to specific areas of GitHub. The REST API supports the same qualifiers as the web interface for GitHub. To learn more about the format of the query, see [Constructing a search query](https://docs.github.com/rest/search/search#constructing-a-search-query). See \&quot;[Searching for repositories](https://docs.github.com/articles/searching-for-repositories/)\&quot; for a detailed list of qualifiers. | [optional] |

### Return type

[**Array&lt;OrgRepoCustomPropertyValues&gt;**](OrgRepoCustomPropertyValues.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_failed_invitations

> <Array<OrganizationInvitation>> orgs_list_failed_invitations(org, opts)

List failed organization invitations

The return hash contains `failed_at` and `failed_reason` fields which represent the time at which the invitation failed and the reason for the failure.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List failed organization invitations
  result = api_instance.orgs_list_failed_invitations(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_failed_invitations: #{e}"
end
```

#### Using the orgs_list_failed_invitations_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<OrganizationInvitation>>, Integer, Hash)> orgs_list_failed_invitations_with_http_info(org, opts)

```ruby
begin
  # List failed organization invitations
  data, status_code, headers = api_instance.orgs_list_failed_invitations_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<OrganizationInvitation>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_failed_invitations_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;OrganizationInvitation&gt;**](OrganizationInvitation.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_for_authenticated_user

> <Array<OrganizationSimple>> orgs_list_for_authenticated_user(opts)

List organizations for the authenticated user

List organizations for the authenticated user.  For OAuth app tokens and personal access tokens (classic), this endpoint only lists organizations that your authorization allows you to operate on in some way (e.g., you can list teams with `read:org` scope, you can publicize your organization membership with `user` scope, etc.). Therefore, this API requires at least `user` or `read:org` scope for OAuth app tokens and personal access tokens (classic). Requests with insufficient scope will receive a `403 Forbidden` response.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List organizations for the authenticated user
  result = api_instance.orgs_list_for_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_for_authenticated_user: #{e}"
end
```

#### Using the orgs_list_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<OrganizationSimple>>, Integer, Hash)> orgs_list_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # List organizations for the authenticated user
  data, status_code, headers = api_instance.orgs_list_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<OrganizationSimple>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;OrganizationSimple&gt;**](OrganizationSimple.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_for_user

> <Array<OrganizationSimple>> orgs_list_for_user(username, opts)

List organizations for a user

List [public organization memberships](https://docs.github.com/articles/publicizing-or-concealing-organization-membership) for the specified user.  This method only lists _public_ memberships, regardless of authentication. If you need to fetch all of the organization memberships (public and private) for the authenticated user, use the [List organizations for the authenticated user](https://docs.github.com/rest/orgs/orgs#list-organizations-for-the-authenticated-user) API instead.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List organizations for a user
  result = api_instance.orgs_list_for_user(username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_for_user: #{e}"
end
```

#### Using the orgs_list_for_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<OrganizationSimple>>, Integer, Hash)> orgs_list_for_user_with_http_info(username, opts)

```ruby
begin
  # List organizations for a user
  data, status_code, headers = api_instance.orgs_list_for_user_with_http_info(username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<OrganizationSimple>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;OrganizationSimple&gt;**](OrganizationSimple.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_invitation_teams

> <Array<Team>> orgs_list_invitation_teams(org, invitation_id, opts)

List organization invitation teams

List all teams associated with an invitation. In order to see invitations in an organization, the authenticated user must be an organization owner.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
invitation_id = 56 # Integer | The unique identifier of the invitation.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List organization invitation teams
  result = api_instance.orgs_list_invitation_teams(org, invitation_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_invitation_teams: #{e}"
end
```

#### Using the orgs_list_invitation_teams_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Team>>, Integer, Hash)> orgs_list_invitation_teams_with_http_info(org, invitation_id, opts)

```ruby
begin
  # List organization invitation teams
  data, status_code, headers = api_instance.orgs_list_invitation_teams_with_http_info(org, invitation_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Team>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_invitation_teams_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **invitation_id** | **Integer** | The unique identifier of the invitation. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Team&gt;**](Team.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_members

> <Array<SimpleUser>> orgs_list_members(org, opts)

List organization members

List all users who are members of an organization. If the authenticated user is also a member of this organization then both concealed and public members will be returned.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  filter: '2fa_disabled', # String | Filter members returned in the list. `2fa_disabled` means that only members without [two-factor authentication](https://github.com/blog/1614-two-factor-authentication) enabled will be returned. This options is only available for organization owners.
  role: 'all', # String | Filter members returned by their role.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List organization members
  result = api_instance.orgs_list_members(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_members: #{e}"
end
```

#### Using the orgs_list_members_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SimpleUser>>, Integer, Hash)> orgs_list_members_with_http_info(org, opts)

```ruby
begin
  # List organization members
  data, status_code, headers = api_instance.orgs_list_members_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SimpleUser>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_members_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **filter** | **String** | Filter members returned in the list. &#x60;2fa_disabled&#x60; means that only members without [two-factor authentication](https://github.com/blog/1614-two-factor-authentication) enabled will be returned. This options is only available for organization owners. | [optional][default to &#39;all&#39;] |
| **role** | **String** | Filter members returned by their role. | [optional][default to &#39;all&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;SimpleUser&gt;**](SimpleUser.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_memberships_for_authenticated_user

> <Array<OrgMembership>> orgs_list_memberships_for_authenticated_user(opts)

List organization memberships for the authenticated user

Lists all of the authenticated user's organization memberships.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
opts = {
  state: 'active', # String | Indicates the state of the memberships to return. If not specified, the API returns both active and pending memberships.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List organization memberships for the authenticated user
  result = api_instance.orgs_list_memberships_for_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_memberships_for_authenticated_user: #{e}"
end
```

#### Using the orgs_list_memberships_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<OrgMembership>>, Integer, Hash)> orgs_list_memberships_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # List organization memberships for the authenticated user
  data, status_code, headers = api_instance.orgs_list_memberships_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<OrgMembership>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_memberships_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **state** | **String** | Indicates the state of the memberships to return. If not specified, the API returns both active and pending memberships. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;OrgMembership&gt;**](OrgMembership.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_org_role_teams

> <Array<TeamRoleAssignment>> orgs_list_org_role_teams(org, role_id, opts)

List teams that are assigned to an organization role

Lists the teams that are assigned to an organization role. For more information on organization roles, see \"[Managing people's access to your organization with roles](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/about-custom-organization-roles).\"  To use this endpoint, you must be an administrator for the organization.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
role_id = 56 # Integer | The unique identifier of the role.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List teams that are assigned to an organization role
  result = api_instance.orgs_list_org_role_teams(org, role_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_org_role_teams: #{e}"
end
```

#### Using the orgs_list_org_role_teams_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<TeamRoleAssignment>>, Integer, Hash)> orgs_list_org_role_teams_with_http_info(org, role_id, opts)

```ruby
begin
  # List teams that are assigned to an organization role
  data, status_code, headers = api_instance.orgs_list_org_role_teams_with_http_info(org, role_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<TeamRoleAssignment>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_org_role_teams_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **role_id** | **Integer** | The unique identifier of the role. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;TeamRoleAssignment&gt;**](TeamRoleAssignment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_org_role_users

> <Array<UserRoleAssignment>> orgs_list_org_role_users(org, role_id, opts)

List users that are assigned to an organization role

Lists organization members that are assigned to an organization role. For more information on organization roles, see \"[Managing people's access to your organization with roles](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/about-custom-organization-roles).\"  To use this endpoint, you must be an administrator for the organization.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
role_id = 56 # Integer | The unique identifier of the role.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List users that are assigned to an organization role
  result = api_instance.orgs_list_org_role_users(org, role_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_org_role_users: #{e}"
end
```

#### Using the orgs_list_org_role_users_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<UserRoleAssignment>>, Integer, Hash)> orgs_list_org_role_users_with_http_info(org, role_id, opts)

```ruby
begin
  # List users that are assigned to an organization role
  data, status_code, headers = api_instance.orgs_list_org_role_users_with_http_info(org, role_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<UserRoleAssignment>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_org_role_users_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **role_id** | **Integer** | The unique identifier of the role. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;UserRoleAssignment&gt;**](UserRoleAssignment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_org_roles

> <OrgsListOrgRoles200Response> orgs_list_org_roles(org)

Get all organization roles for an organization

Lists the organization roles available in this organization. For more information on organization roles, see \"[Managing people's access to your organization with roles](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/about-custom-organization-roles).\"  To use this endpoint, the authenticated user must be one of:  - An administrator for the organization. - A user, or a user on a team, with the fine-grained permissions of `read_organization_custom_org_role` in the organization.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Get all organization roles for an organization
  result = api_instance.orgs_list_org_roles(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_org_roles: #{e}"
end
```

#### Using the orgs_list_org_roles_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrgsListOrgRoles200Response>, Integer, Hash)> orgs_list_org_roles_with_http_info(org)

```ruby
begin
  # Get all organization roles for an organization
  data, status_code, headers = api_instance.orgs_list_org_roles_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrgsListOrgRoles200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_org_roles_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**OrgsListOrgRoles200Response**](OrgsListOrgRoles200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_organization_fine_grained_permissions

> <Array<OrganizationFineGrainedPermission>> orgs_list_organization_fine_grained_permissions(org)

List organization fine-grained permissions for an organization

Lists the fine-grained permissions that can be used in custom organization roles for an organization. For more information, see \"[Managing people's access to your organization with roles](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/about-custom-organization-roles).\"  To list the fine-grained permissions that can be used in custom repository roles for an organization, see \"[List repository fine-grained permissions for an organization](https://docs.github.com/rest/orgs/organization-roles#list-repository-fine-grained-permissions-for-an-organization).\"  To use this endpoint, the authenticated user must be one of:  - An administrator for the organization. - A user, or a user on a team, with the fine-grained permissions of `read_organization_custom_org_role` in the organization.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # List organization fine-grained permissions for an organization
  result = api_instance.orgs_list_organization_fine_grained_permissions(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_organization_fine_grained_permissions: #{e}"
end
```

#### Using the orgs_list_organization_fine_grained_permissions_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<OrganizationFineGrainedPermission>>, Integer, Hash)> orgs_list_organization_fine_grained_permissions_with_http_info(org)

```ruby
begin
  # List organization fine-grained permissions for an organization
  data, status_code, headers = api_instance.orgs_list_organization_fine_grained_permissions_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<OrganizationFineGrainedPermission>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_organization_fine_grained_permissions_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**Array&lt;OrganizationFineGrainedPermission&gt;**](OrganizationFineGrainedPermission.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_outside_collaborators

> <Array<SimpleUser>> orgs_list_outside_collaborators(org, opts)

List outside collaborators for an organization

List all users who are outside collaborators of an organization.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  filter: '2fa_disabled', # String | Filter the list of outside collaborators. `2fa_disabled` means that only outside collaborators without [two-factor authentication](https://github.com/blog/1614-two-factor-authentication) enabled will be returned.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List outside collaborators for an organization
  result = api_instance.orgs_list_outside_collaborators(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_outside_collaborators: #{e}"
end
```

#### Using the orgs_list_outside_collaborators_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SimpleUser>>, Integer, Hash)> orgs_list_outside_collaborators_with_http_info(org, opts)

```ruby
begin
  # List outside collaborators for an organization
  data, status_code, headers = api_instance.orgs_list_outside_collaborators_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SimpleUser>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_outside_collaborators_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **filter** | **String** | Filter the list of outside collaborators. &#x60;2fa_disabled&#x60; means that only outside collaborators without [two-factor authentication](https://github.com/blog/1614-two-factor-authentication) enabled will be returned. | [optional][default to &#39;all&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;SimpleUser&gt;**](SimpleUser.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_pat_grant_repositories

> <Array<MinimalRepository>> orgs_list_pat_grant_repositories(org, pat_id, opts)

List repositories a fine-grained personal access token has access to

Lists the repositories a fine-grained personal access token has access to.  Only GitHub Apps can use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
pat_id = 56 # Integer | Unique identifier of the fine-grained personal access token.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repositories a fine-grained personal access token has access to
  result = api_instance.orgs_list_pat_grant_repositories(org, pat_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_pat_grant_repositories: #{e}"
end
```

#### Using the orgs_list_pat_grant_repositories_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<MinimalRepository>>, Integer, Hash)> orgs_list_pat_grant_repositories_with_http_info(org, pat_id, opts)

```ruby
begin
  # List repositories a fine-grained personal access token has access to
  data, status_code, headers = api_instance.orgs_list_pat_grant_repositories_with_http_info(org, pat_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<MinimalRepository>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_pat_grant_repositories_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **pat_id** | **Integer** | Unique identifier of the fine-grained personal access token. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;MinimalRepository&gt;**](MinimalRepository.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_pat_grant_request_repositories

> <Array<MinimalRepository>> orgs_list_pat_grant_request_repositories(org, pat_request_id, opts)

List repositories requested to be accessed by a fine-grained personal access token

Lists the repositories a fine-grained personal access token request is requesting access to.  Only GitHub Apps can use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
pat_request_id = 56 # Integer | Unique identifier of the request for access via fine-grained personal access token.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repositories requested to be accessed by a fine-grained personal access token
  result = api_instance.orgs_list_pat_grant_request_repositories(org, pat_request_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_pat_grant_request_repositories: #{e}"
end
```

#### Using the orgs_list_pat_grant_request_repositories_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<MinimalRepository>>, Integer, Hash)> orgs_list_pat_grant_request_repositories_with_http_info(org, pat_request_id, opts)

```ruby
begin
  # List repositories requested to be accessed by a fine-grained personal access token
  data, status_code, headers = api_instance.orgs_list_pat_grant_request_repositories_with_http_info(org, pat_request_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<MinimalRepository>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_pat_grant_request_repositories_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **pat_request_id** | **Integer** | Unique identifier of the request for access via fine-grained personal access token. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;MinimalRepository&gt;**](MinimalRepository.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_pat_grant_requests

> <Array<OrganizationProgrammaticAccessGrantRequest>> orgs_list_pat_grant_requests(org, opts)

List requests to access organization resources with fine-grained personal access tokens

Lists requests from organization members to access organization resources with a fine-grained personal access token.  Only GitHub Apps can use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  sort: 'created_at', # String | The property by which to sort the results.
  direction: 'asc', # String | The direction to sort the results by.
  owner: ['inner_example'], # Array<String> | A list of owner usernames to use to filter the results.
  repository: 'Hello-World', # String | The name of the repository to use to filter the results.
  permission: 'issues_read', # String | The permission to use to filter the results.
  last_used_before: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Only show fine-grained personal access tokens used before the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
  last_used_after: Time.parse('2013-10-20T19:20:30+01:00') # Time | Only show fine-grained personal access tokens used after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
}

begin
  # List requests to access organization resources with fine-grained personal access tokens
  result = api_instance.orgs_list_pat_grant_requests(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_pat_grant_requests: #{e}"
end
```

#### Using the orgs_list_pat_grant_requests_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<OrganizationProgrammaticAccessGrantRequest>>, Integer, Hash)> orgs_list_pat_grant_requests_with_http_info(org, opts)

```ruby
begin
  # List requests to access organization resources with fine-grained personal access tokens
  data, status_code, headers = api_instance.orgs_list_pat_grant_requests_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<OrganizationProgrammaticAccessGrantRequest>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_pat_grant_requests_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **sort** | **String** | The property by which to sort the results. | [optional][default to &#39;created_at&#39;] |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **owner** | [**Array&lt;String&gt;**](String.md) | A list of owner usernames to use to filter the results. | [optional] |
| **repository** | **String** | The name of the repository to use to filter the results. | [optional] |
| **permission** | **String** | The permission to use to filter the results. | [optional] |
| **last_used_before** | **Time** | Only show fine-grained personal access tokens used before the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **last_used_after** | **Time** | Only show fine-grained personal access tokens used after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |

### Return type

[**Array&lt;OrganizationProgrammaticAccessGrantRequest&gt;**](OrganizationProgrammaticAccessGrantRequest.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_pat_grants

> <Array<OrganizationProgrammaticAccessGrant>> orgs_list_pat_grants(org, opts)

List fine-grained personal access tokens with access to organization resources

Lists approved fine-grained personal access tokens owned by organization members that can access organization resources.  Only GitHub Apps can use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  sort: 'created_at', # String | The property by which to sort the results.
  direction: 'asc', # String | The direction to sort the results by.
  owner: ['inner_example'], # Array<String> | A list of owner usernames to use to filter the results.
  repository: 'Hello-World', # String | The name of the repository to use to filter the results.
  permission: 'issues_read', # String | The permission to use to filter the results.
  last_used_before: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Only show fine-grained personal access tokens used before the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
  last_used_after: Time.parse('2013-10-20T19:20:30+01:00') # Time | Only show fine-grained personal access tokens used after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
}

begin
  # List fine-grained personal access tokens with access to organization resources
  result = api_instance.orgs_list_pat_grants(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_pat_grants: #{e}"
end
```

#### Using the orgs_list_pat_grants_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<OrganizationProgrammaticAccessGrant>>, Integer, Hash)> orgs_list_pat_grants_with_http_info(org, opts)

```ruby
begin
  # List fine-grained personal access tokens with access to organization resources
  data, status_code, headers = api_instance.orgs_list_pat_grants_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<OrganizationProgrammaticAccessGrant>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_pat_grants_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **sort** | **String** | The property by which to sort the results. | [optional][default to &#39;created_at&#39;] |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **owner** | [**Array&lt;String&gt;**](String.md) | A list of owner usernames to use to filter the results. | [optional] |
| **repository** | **String** | The name of the repository to use to filter the results. | [optional] |
| **permission** | **String** | The permission to use to filter the results. | [optional] |
| **last_used_before** | **Time** | Only show fine-grained personal access tokens used before the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **last_used_after** | **Time** | Only show fine-grained personal access tokens used after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |

### Return type

[**Array&lt;OrganizationProgrammaticAccessGrant&gt;**](OrganizationProgrammaticAccessGrant.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_pending_invitations

> <Array<OrganizationInvitation>> orgs_list_pending_invitations(org, opts)

List pending organization invitations

The return hash contains a `role` field which refers to the Organization Invitation role and will be one of the following values: `direct_member`, `admin`, `billing_manager`, or `hiring_manager`. If the invitee is not a GitHub member, the `login` field in the return hash will be `null`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  role: 'all', # String | Filter invitations by their member role.
  invitation_source: 'all' # String | Filter invitations by their invitation source.
}

begin
  # List pending organization invitations
  result = api_instance.orgs_list_pending_invitations(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_pending_invitations: #{e}"
end
```

#### Using the orgs_list_pending_invitations_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<OrganizationInvitation>>, Integer, Hash)> orgs_list_pending_invitations_with_http_info(org, opts)

```ruby
begin
  # List pending organization invitations
  data, status_code, headers = api_instance.orgs_list_pending_invitations_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<OrganizationInvitation>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_pending_invitations_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **role** | **String** | Filter invitations by their member role. | [optional][default to &#39;all&#39;] |
| **invitation_source** | **String** | Filter invitations by their invitation source. | [optional][default to &#39;all&#39;] |

### Return type

[**Array&lt;OrganizationInvitation&gt;**](OrganizationInvitation.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_public_members

> <Array<SimpleUser>> orgs_list_public_members(org, opts)

List public organization members

Members of an organization can choose to have their membership publicized or not.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List public organization members
  result = api_instance.orgs_list_public_members(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_public_members: #{e}"
end
```

#### Using the orgs_list_public_members_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SimpleUser>>, Integer, Hash)> orgs_list_public_members_with_http_info(org, opts)

```ruby
begin
  # List public organization members
  data, status_code, headers = api_instance.orgs_list_public_members_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SimpleUser>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_public_members_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;SimpleUser&gt;**](SimpleUser.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_security_manager_teams

> <Array<TeamSimple>> orgs_list_security_manager_teams(org)

List security manager teams

Lists teams that are security managers for an organization. For more information, see \"[Managing security managers in your organization](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/managing-security-managers-in-your-organization).\"  The authenticated user must be an administrator or security manager for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `read:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # List security manager teams
  result = api_instance.orgs_list_security_manager_teams(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_security_manager_teams: #{e}"
end
```

#### Using the orgs_list_security_manager_teams_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<TeamSimple>>, Integer, Hash)> orgs_list_security_manager_teams_with_http_info(org)

```ruby
begin
  # List security manager teams
  data, status_code, headers = api_instance.orgs_list_security_manager_teams_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<TeamSimple>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_security_manager_teams_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**Array&lt;TeamSimple&gt;**](TeamSimple.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_list_webhook_deliveries

> <Array<HookDeliveryItem>> orgs_list_webhook_deliveries(org, hook_id, opts)

List deliveries for an organization webhook

Returns a list of webhook deliveries for a webhook configured in an organization.  You must be an organization owner to use this endpoint.  OAuth app tokens and personal access tokens (classic) need `admin:org_hook` scope. OAuth apps cannot list, view, or edit webhooks that they did not create and users cannot list, view, or edit webhooks that were created by OAuth apps.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
hook_id = 56 # Integer | The unique identifier of the hook. You can find this value in the `X-GitHub-Hook-ID` header of a webhook delivery.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  cursor: 'cursor_example', # String | Used for pagination: the starting delivery from which the page of deliveries is fetched. Refer to the `link` header for the next and previous page cursors.
  redelivery: true # Boolean | 
}

begin
  # List deliveries for an organization webhook
  result = api_instance.orgs_list_webhook_deliveries(org, hook_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_webhook_deliveries: #{e}"
end
```

#### Using the orgs_list_webhook_deliveries_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<HookDeliveryItem>>, Integer, Hash)> orgs_list_webhook_deliveries_with_http_info(org, hook_id, opts)

```ruby
begin
  # List deliveries for an organization webhook
  data, status_code, headers = api_instance.orgs_list_webhook_deliveries_with_http_info(org, hook_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<HookDeliveryItem>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_webhook_deliveries_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **hook_id** | **Integer** | The unique identifier of the hook. You can find this value in the &#x60;X-GitHub-Hook-ID&#x60; header of a webhook delivery. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **cursor** | **String** | Used for pagination: the starting delivery from which the page of deliveries is fetched. Refer to the &#x60;link&#x60; header for the next and previous page cursors. | [optional] |
| **redelivery** | **Boolean** |  | [optional] |

### Return type

[**Array&lt;HookDeliveryItem&gt;**](HookDeliveryItem.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, application/scim+json


## orgs_list_webhooks

> <Array<OrgHook>> orgs_list_webhooks(org, opts)

List organization webhooks

You must be an organization owner to use this endpoint.  OAuth app tokens and personal access tokens (classic) need `admin:org_hook` scope. OAuth apps cannot list, view, or edit webhooks that they did not create and users cannot list, view, or edit webhooks that were created by OAuth apps.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List organization webhooks
  result = api_instance.orgs_list_webhooks(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_webhooks: #{e}"
end
```

#### Using the orgs_list_webhooks_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<OrgHook>>, Integer, Hash)> orgs_list_webhooks_with_http_info(org, opts)

```ruby
begin
  # List organization webhooks
  data, status_code, headers = api_instance.orgs_list_webhooks_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<OrgHook>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_list_webhooks_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;OrgHook&gt;**](OrgHook.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_patch_custom_organization_role

> <OrganizationRole> orgs_patch_custom_organization_role(org, role_id, orgs_patch_custom_organization_role_request)

Update a custom organization role

Updates an existing custom organization role. Permission changes will apply to all assignees. For more information on custom organization roles, see \"[Managing people's access to your organization with roles](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/about-custom-organization-roles).\"   To use this endpoint, the authenticated user must be one of:  - An administrator for the organization. - A user, or a user on a team, with the fine-grained permissions of `write_organization_custom_org_role` in the organization.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
role_id = 56 # Integer | The unique identifier of the role.
orgs_patch_custom_organization_role_request = OpenapiClient::OrgsPatchCustomOrganizationRoleRequest.new # OrgsPatchCustomOrganizationRoleRequest | 

begin
  # Update a custom organization role
  result = api_instance.orgs_patch_custom_organization_role(org, role_id, orgs_patch_custom_organization_role_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_patch_custom_organization_role: #{e}"
end
```

#### Using the orgs_patch_custom_organization_role_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrganizationRole>, Integer, Hash)> orgs_patch_custom_organization_role_with_http_info(org, role_id, orgs_patch_custom_organization_role_request)

```ruby
begin
  # Update a custom organization role
  data, status_code, headers = api_instance.orgs_patch_custom_organization_role_with_http_info(org, role_id, orgs_patch_custom_organization_role_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrganizationRole>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_patch_custom_organization_role_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **role_id** | **Integer** | The unique identifier of the role. |  |
| **orgs_patch_custom_organization_role_request** | [**OrgsPatchCustomOrganizationRoleRequest**](OrgsPatchCustomOrganizationRoleRequest.md) |  |  |

### Return type

[**OrganizationRole**](OrganizationRole.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## orgs_ping_webhook

> orgs_ping_webhook(org, hook_id)

Ping an organization webhook

This will trigger a [ping event](https://docs.github.com/webhooks/#ping-event) to be sent to the hook.  You must be an organization owner to use this endpoint.  OAuth app tokens and personal access tokens (classic) need `admin:org_hook` scope. OAuth apps cannot list, view, or edit webhooks that they did not create and users cannot list, view, or edit webhooks that were created by OAuth apps.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
hook_id = 56 # Integer | The unique identifier of the hook. You can find this value in the `X-GitHub-Hook-ID` header of a webhook delivery.

begin
  # Ping an organization webhook
  api_instance.orgs_ping_webhook(org, hook_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_ping_webhook: #{e}"
end
```

#### Using the orgs_ping_webhook_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_ping_webhook_with_http_info(org, hook_id)

```ruby
begin
  # Ping an organization webhook
  data, status_code, headers = api_instance.orgs_ping_webhook_with_http_info(org, hook_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_ping_webhook_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **hook_id** | **Integer** | The unique identifier of the hook. You can find this value in the &#x60;X-GitHub-Hook-ID&#x60; header of a webhook delivery. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_redeliver_webhook_delivery

> Object orgs_redeliver_webhook_delivery(org, hook_id, delivery_id)

Redeliver a delivery for an organization webhook

Redeliver a delivery for a webhook configured in an organization.  You must be an organization owner to use this endpoint.  OAuth app tokens and personal access tokens (classic) need `admin:org_hook` scope. OAuth apps cannot list, view, or edit webhooks that they did not create and users cannot list, view, or edit webhooks that were created by OAuth apps.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
hook_id = 56 # Integer | The unique identifier of the hook. You can find this value in the `X-GitHub-Hook-ID` header of a webhook delivery.
delivery_id = 56 # Integer | 

begin
  # Redeliver a delivery for an organization webhook
  result = api_instance.orgs_redeliver_webhook_delivery(org, hook_id, delivery_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_redeliver_webhook_delivery: #{e}"
end
```

#### Using the orgs_redeliver_webhook_delivery_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> orgs_redeliver_webhook_delivery_with_http_info(org, hook_id, delivery_id)

```ruby
begin
  # Redeliver a delivery for an organization webhook
  data, status_code, headers = api_instance.orgs_redeliver_webhook_delivery_with_http_info(org, hook_id, delivery_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_redeliver_webhook_delivery_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **hook_id** | **Integer** | The unique identifier of the hook. You can find this value in the &#x60;X-GitHub-Hook-ID&#x60; header of a webhook delivery. |  |
| **delivery_id** | **Integer** |  |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, application/scim+json


## orgs_remove_custom_property

> orgs_remove_custom_property(org, custom_property_name)

Remove a custom property for an organization

Removes a custom property that is defined for an organization.  To use this endpoint, the authenticated user must be one of:   - An administrator for the organization.   - A user, or a user on a team, with the fine-grained permission of `custom_properties_org_definitions_manager` in the organization.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
custom_property_name = 'custom_property_name_example' # String | The custom property name. The name is case sensitive.

begin
  # Remove a custom property for an organization
  api_instance.orgs_remove_custom_property(org, custom_property_name)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_remove_custom_property: #{e}"
end
```

#### Using the orgs_remove_custom_property_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_remove_custom_property_with_http_info(org, custom_property_name)

```ruby
begin
  # Remove a custom property for an organization
  data, status_code, headers = api_instance.orgs_remove_custom_property_with_http_info(org, custom_property_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_remove_custom_property_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **custom_property_name** | **String** | The custom property name. The name is case sensitive. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_remove_member

> orgs_remove_member(org, username)

Remove an organization member

Removing a user from this list will remove them from all teams and they will no longer have any access to the organization's repositories.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Remove an organization member
  api_instance.orgs_remove_member(org, username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_remove_member: #{e}"
end
```

#### Using the orgs_remove_member_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_remove_member_with_http_info(org, username)

```ruby
begin
  # Remove an organization member
  data, status_code, headers = api_instance.orgs_remove_member_with_http_info(org, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_remove_member_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_remove_membership_for_user

> orgs_remove_membership_for_user(org, username)

Remove organization membership for a user

In order to remove a user's membership with an organization, the authenticated user must be an organization owner.  If the specified user is an active member of the organization, this will remove them from the organization. If the specified user has been invited to the organization, this will cancel their invitation. The specified user will receive an email notification in both cases.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Remove organization membership for a user
  api_instance.orgs_remove_membership_for_user(org, username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_remove_membership_for_user: #{e}"
end
```

#### Using the orgs_remove_membership_for_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_remove_membership_for_user_with_http_info(org, username)

```ruby
begin
  # Remove organization membership for a user
  data, status_code, headers = api_instance.orgs_remove_membership_for_user_with_http_info(org, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_remove_membership_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_remove_outside_collaborator

> orgs_remove_outside_collaborator(org, username)

Remove outside collaborator from an organization

Removing a user from this list will remove them from all the organization's repositories.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Remove outside collaborator from an organization
  api_instance.orgs_remove_outside_collaborator(org, username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_remove_outside_collaborator: #{e}"
end
```

#### Using the orgs_remove_outside_collaborator_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_remove_outside_collaborator_with_http_info(org, username)

```ruby
begin
  # Remove outside collaborator from an organization
  data, status_code, headers = api_instance.orgs_remove_outside_collaborator_with_http_info(org, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_remove_outside_collaborator_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_remove_public_membership_for_authenticated_user

> orgs_remove_public_membership_for_authenticated_user(org, username)

Remove public organization membership for the authenticated user

Removes the public membership for the authenticated user from the specified organization, unless public visibility is enforced by default.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Remove public organization membership for the authenticated user
  api_instance.orgs_remove_public_membership_for_authenticated_user(org, username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_remove_public_membership_for_authenticated_user: #{e}"
end
```

#### Using the orgs_remove_public_membership_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_remove_public_membership_for_authenticated_user_with_http_info(org, username)

```ruby
begin
  # Remove public organization membership for the authenticated user
  data, status_code, headers = api_instance.orgs_remove_public_membership_for_authenticated_user_with_http_info(org, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_remove_public_membership_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## orgs_remove_security_manager_team

> orgs_remove_security_manager_team(org, team_slug)

Remove a security manager team

Removes the security manager role from a team for an organization. For more information, see \"[Managing security managers in your organization](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/managing-security-managers-in-your-organization) team from an organization.\"  The authenticated user must be an administrator for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.

begin
  # Remove a security manager team
  api_instance.orgs_remove_security_manager_team(org, team_slug)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_remove_security_manager_team: #{e}"
end
```

#### Using the orgs_remove_security_manager_team_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_remove_security_manager_team_with_http_info(org, team_slug)

```ruby
begin
  # Remove a security manager team
  data, status_code, headers = api_instance.orgs_remove_security_manager_team_with_http_info(org, team_slug)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_remove_security_manager_team_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## orgs_review_pat_grant_request

> orgs_review_pat_grant_request(org, pat_request_id, orgs_review_pat_grant_request_request)

Review a request to access organization resources with a fine-grained personal access token

Approves or denies a pending request to access organization resources via a fine-grained personal access token.  Only GitHub Apps can use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
pat_request_id = 56 # Integer | Unique identifier of the request for access via fine-grained personal access token.
orgs_review_pat_grant_request_request = OpenapiClient::OrgsReviewPatGrantRequestRequest.new({action: 'approve'}) # OrgsReviewPatGrantRequestRequest | 

begin
  # Review a request to access organization resources with a fine-grained personal access token
  api_instance.orgs_review_pat_grant_request(org, pat_request_id, orgs_review_pat_grant_request_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_review_pat_grant_request: #{e}"
end
```

#### Using the orgs_review_pat_grant_request_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_review_pat_grant_request_with_http_info(org, pat_request_id, orgs_review_pat_grant_request_request)

```ruby
begin
  # Review a request to access organization resources with a fine-grained personal access token
  data, status_code, headers = api_instance.orgs_review_pat_grant_request_with_http_info(org, pat_request_id, orgs_review_pat_grant_request_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_review_pat_grant_request_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **pat_request_id** | **Integer** | Unique identifier of the request for access via fine-grained personal access token. |  |
| **orgs_review_pat_grant_request_request** | [**OrgsReviewPatGrantRequestRequest**](OrgsReviewPatGrantRequestRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## orgs_review_pat_grant_requests_in_bulk

> Object orgs_review_pat_grant_requests_in_bulk(org, orgs_review_pat_grant_requests_in_bulk_request)

Review requests to access organization resources with fine-grained personal access tokens

Approves or denies multiple pending requests to access organization resources via a fine-grained personal access token.  Only GitHub Apps can use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
orgs_review_pat_grant_requests_in_bulk_request = OpenapiClient::OrgsReviewPatGrantRequestsInBulkRequest.new({action: 'approve'}) # OrgsReviewPatGrantRequestsInBulkRequest | 

begin
  # Review requests to access organization resources with fine-grained personal access tokens
  result = api_instance.orgs_review_pat_grant_requests_in_bulk(org, orgs_review_pat_grant_requests_in_bulk_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_review_pat_grant_requests_in_bulk: #{e}"
end
```

#### Using the orgs_review_pat_grant_requests_in_bulk_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> orgs_review_pat_grant_requests_in_bulk_with_http_info(org, orgs_review_pat_grant_requests_in_bulk_request)

```ruby
begin
  # Review requests to access organization resources with fine-grained personal access tokens
  data, status_code, headers = api_instance.orgs_review_pat_grant_requests_in_bulk_with_http_info(org, orgs_review_pat_grant_requests_in_bulk_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_review_pat_grant_requests_in_bulk_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **orgs_review_pat_grant_requests_in_bulk_request** | [**OrgsReviewPatGrantRequestsInBulkRequest**](OrgsReviewPatGrantRequestsInBulkRequest.md) |  |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## orgs_revoke_all_org_roles_team

> orgs_revoke_all_org_roles_team(org, team_slug)

Remove all organization roles for a team

Removes all assigned organization roles from a team. For more information on organization roles, see \"[Managing people's access to your organization with roles](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/about-custom-organization-roles).\"  The authenticated user must be an administrator for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.

begin
  # Remove all organization roles for a team
  api_instance.orgs_revoke_all_org_roles_team(org, team_slug)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_revoke_all_org_roles_team: #{e}"
end
```

#### Using the orgs_revoke_all_org_roles_team_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_revoke_all_org_roles_team_with_http_info(org, team_slug)

```ruby
begin
  # Remove all organization roles for a team
  data, status_code, headers = api_instance.orgs_revoke_all_org_roles_team_with_http_info(org, team_slug)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_revoke_all_org_roles_team_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## orgs_revoke_all_org_roles_user

> orgs_revoke_all_org_roles_user(org, username)

Remove all organization roles for a user

Revokes all assigned organization roles from a user. For more information on organization roles, see \"[Managing people's access to your organization with roles](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/about-custom-organization-roles).\"  The authenticated user must be an administrator for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Remove all organization roles for a user
  api_instance.orgs_revoke_all_org_roles_user(org, username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_revoke_all_org_roles_user: #{e}"
end
```

#### Using the orgs_revoke_all_org_roles_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_revoke_all_org_roles_user_with_http_info(org, username)

```ruby
begin
  # Remove all organization roles for a user
  data, status_code, headers = api_instance.orgs_revoke_all_org_roles_user_with_http_info(org, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_revoke_all_org_roles_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## orgs_revoke_org_role_team

> orgs_revoke_org_role_team(org, team_slug, role_id)

Remove an organization role from a team

Removes an organization role from a team. For more information on organization roles, see \"[Managing people's access to your organization with roles](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/about-custom-organization-roles).\"  The authenticated user must be an administrator for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
role_id = 56 # Integer | The unique identifier of the role.

begin
  # Remove an organization role from a team
  api_instance.orgs_revoke_org_role_team(org, team_slug, role_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_revoke_org_role_team: #{e}"
end
```

#### Using the orgs_revoke_org_role_team_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_revoke_org_role_team_with_http_info(org, team_slug, role_id)

```ruby
begin
  # Remove an organization role from a team
  data, status_code, headers = api_instance.orgs_revoke_org_role_team_with_http_info(org, team_slug, role_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_revoke_org_role_team_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **role_id** | **Integer** | The unique identifier of the role. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## orgs_revoke_org_role_user

> orgs_revoke_org_role_user(org, username, role_id)

Remove an organization role from a user

Remove an organization role from a user. For more information on organization roles, see \"[Managing people's access to your organization with roles](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/about-custom-organization-roles).\"  The authenticated user must be an administrator for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.
role_id = 56 # Integer | The unique identifier of the role.

begin
  # Remove an organization role from a user
  api_instance.orgs_revoke_org_role_user(org, username, role_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_revoke_org_role_user: #{e}"
end
```

#### Using the orgs_revoke_org_role_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_revoke_org_role_user_with_http_info(org, username, role_id)

```ruby
begin
  # Remove an organization role from a user
  data, status_code, headers = api_instance.orgs_revoke_org_role_user_with_http_info(org, username, role_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_revoke_org_role_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |
| **role_id** | **Integer** | The unique identifier of the role. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## orgs_set_membership_for_user

> <OrgMembership> orgs_set_membership_for_user(org, username, opts)

Set organization membership for a user

Only authenticated organization owners can add a member to the organization or update the member's role.  *   If the authenticated user is _adding_ a member to the organization, the invited user will receive an email inviting them to the organization. The user's [membership status](https://docs.github.com/rest/orgs/members#get-organization-membership-for-a-user) will be `pending` until they accept the invitation.      *   Authenticated users can _update_ a user's membership by passing the `role` parameter. If the authenticated user changes a member's role to `admin`, the affected user will receive an email notifying them that they've been made an organization owner. If the authenticated user changes an owner's role to `member`, no email will be sent.  **Rate limits**  To prevent abuse, organization owners are limited to creating 50 organization invitations for an organization within a 24 hour period. If the organization is more than one month old or on a paid plan, the limit is 500 invitations per 24 hour period.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  orgs_set_membership_for_user_request: OpenapiClient::OrgsSetMembershipForUserRequest.new # OrgsSetMembershipForUserRequest | 
}

begin
  # Set organization membership for a user
  result = api_instance.orgs_set_membership_for_user(org, username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_set_membership_for_user: #{e}"
end
```

#### Using the orgs_set_membership_for_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrgMembership>, Integer, Hash)> orgs_set_membership_for_user_with_http_info(org, username, opts)

```ruby
begin
  # Set organization membership for a user
  data, status_code, headers = api_instance.orgs_set_membership_for_user_with_http_info(org, username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrgMembership>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_set_membership_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |
| **orgs_set_membership_for_user_request** | [**OrgsSetMembershipForUserRequest**](OrgsSetMembershipForUserRequest.md) |  | [optional] |

### Return type

[**OrgMembership**](OrgMembership.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## orgs_set_public_membership_for_authenticated_user

> orgs_set_public_membership_for_authenticated_user(org, username)

Set public organization membership for the authenticated user

The user can publicize their own membership. (A user cannot publicize the membership for another user.)  Note that you'll need to set `Content-Length` to zero when calling out to this endpoint. For more information, see \"[HTTP method](https://docs.github.com/rest/guides/getting-started-with-the-rest-api#http-method).\"

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Set public organization membership for the authenticated user
  api_instance.orgs_set_public_membership_for_authenticated_user(org, username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_set_public_membership_for_authenticated_user: #{e}"
end
```

#### Using the orgs_set_public_membership_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_set_public_membership_for_authenticated_user_with_http_info(org, username)

```ruby
begin
  # Set public organization membership for the authenticated user
  data, status_code, headers = api_instance.orgs_set_public_membership_for_authenticated_user_with_http_info(org, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_set_public_membership_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## orgs_unblock_user

> orgs_unblock_user(org, username)

Unblock a user from an organization

Unblocks the given user on behalf of the specified organization.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Unblock a user from an organization
  api_instance.orgs_unblock_user(org, username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_unblock_user: #{e}"
end
```

#### Using the orgs_unblock_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_unblock_user_with_http_info(org, username)

```ruby
begin
  # Unblock a user from an organization
  data, status_code, headers = api_instance.orgs_unblock_user_with_http_info(org, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_unblock_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## orgs_update

> <OrganizationFull> orgs_update(org, opts)

Update an organization

**Parameter Deprecation Notice:** GitHub will replace and discontinue `members_allowed_repository_creation_type` in favor of more granular permissions. The new input parameters are `members_can_create_public_repositories`, `members_can_create_private_repositories` for all organizations and `members_can_create_internal_repositories` for organizations associated with an enterprise account using GitHub Enterprise Cloud or GitHub Enterprise Server 2.20+. For more information, see the [blog post](https://developer.github.com/changes/2019-12-03-internal-visibility-changes).  Updates the organization's profile and member privileges.  With security configurations (beta), your organization can choose a default security configuration which will automatically apply a set of security enablement settings to new repositories in your organization based on their visibility. For targeted repositories, the following attributes will be overridden by the default security configuration:  - advanced_security_enabled_for_new_repositories - dependabot_alerts_enabled_for_new_repositories - dependabot_security_updates_enabled_for_new_repositories - dependency_graph_enabled_for_new_repositories - secret_scanning_enabled_for_new_repositories - secret_scanning_push_protection_enabled_for_new_repositories  For more information on setting a default security configuration, see \"[Enabling security features at scale](https://docs.github.com/code-security/securing-your-organization/introduction-to-securing-your-organization-at-scale/about-enabling-security-features-at-scale).\"  The authenticated user must be an organization owner to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `admin:org` or `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  orgs_update_request: OpenapiClient::OrgsUpdateRequest.new # OrgsUpdateRequest | 
}

begin
  # Update an organization
  result = api_instance.orgs_update(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_update: #{e}"
end
```

#### Using the orgs_update_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrganizationFull>, Integer, Hash)> orgs_update_with_http_info(org, opts)

```ruby
begin
  # Update an organization
  data, status_code, headers = api_instance.orgs_update_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrganizationFull>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_update_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **orgs_update_request** | [**OrgsUpdateRequest**](OrgsUpdateRequest.md) |  | [optional] |

### Return type

[**OrganizationFull**](OrganizationFull.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## orgs_update_membership_for_authenticated_user

> <OrgMembership> orgs_update_membership_for_authenticated_user(org, orgs_update_membership_for_authenticated_user_request)

Update an organization membership for the authenticated user

Converts the authenticated user to an active member of the organization, if that user has a pending invitation from the organization.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
orgs_update_membership_for_authenticated_user_request = OpenapiClient::OrgsUpdateMembershipForAuthenticatedUserRequest.new({state: 'active'}) # OrgsUpdateMembershipForAuthenticatedUserRequest | 

begin
  # Update an organization membership for the authenticated user
  result = api_instance.orgs_update_membership_for_authenticated_user(org, orgs_update_membership_for_authenticated_user_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_update_membership_for_authenticated_user: #{e}"
end
```

#### Using the orgs_update_membership_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrgMembership>, Integer, Hash)> orgs_update_membership_for_authenticated_user_with_http_info(org, orgs_update_membership_for_authenticated_user_request)

```ruby
begin
  # Update an organization membership for the authenticated user
  data, status_code, headers = api_instance.orgs_update_membership_for_authenticated_user_with_http_info(org, orgs_update_membership_for_authenticated_user_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrgMembership>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_update_membership_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **orgs_update_membership_for_authenticated_user_request** | [**OrgsUpdateMembershipForAuthenticatedUserRequest**](OrgsUpdateMembershipForAuthenticatedUserRequest.md) |  |  |

### Return type

[**OrgMembership**](OrgMembership.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## orgs_update_pat_access

> orgs_update_pat_access(org, pat_id, orgs_update_pat_access_request)

Update the access a fine-grained personal access token has to organization resources

Updates the access an organization member has to organization resources via a fine-grained personal access token. Limited to revoking the token's existing access. Limited to revoking a token's existing access.  Only GitHub Apps can use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
pat_id = 56 # Integer | The unique identifier of the fine-grained personal access token.
orgs_update_pat_access_request = OpenapiClient::OrgsUpdatePatAccessRequest.new({action: 'revoke'}) # OrgsUpdatePatAccessRequest | 

begin
  # Update the access a fine-grained personal access token has to organization resources
  api_instance.orgs_update_pat_access(org, pat_id, orgs_update_pat_access_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_update_pat_access: #{e}"
end
```

#### Using the orgs_update_pat_access_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> orgs_update_pat_access_with_http_info(org, pat_id, orgs_update_pat_access_request)

```ruby
begin
  # Update the access a fine-grained personal access token has to organization resources
  data, status_code, headers = api_instance.orgs_update_pat_access_with_http_info(org, pat_id, orgs_update_pat_access_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_update_pat_access_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **pat_id** | **Integer** | The unique identifier of the fine-grained personal access token. |  |
| **orgs_update_pat_access_request** | [**OrgsUpdatePatAccessRequest**](OrgsUpdatePatAccessRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## orgs_update_pat_accesses

> Object orgs_update_pat_accesses(org, orgs_update_pat_accesses_request)

Update the access to organization resources via fine-grained personal access tokens

Updates the access organization members have to organization resources via fine-grained personal access tokens. Limited to revoking a token's existing access.  Only GitHub Apps can use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
orgs_update_pat_accesses_request = OpenapiClient::OrgsUpdatePatAccessesRequest.new({action: 'revoke', pat_ids: [37]}) # OrgsUpdatePatAccessesRequest | 

begin
  # Update the access to organization resources via fine-grained personal access tokens
  result = api_instance.orgs_update_pat_accesses(org, orgs_update_pat_accesses_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_update_pat_accesses: #{e}"
end
```

#### Using the orgs_update_pat_accesses_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> orgs_update_pat_accesses_with_http_info(org, orgs_update_pat_accesses_request)

```ruby
begin
  # Update the access to organization resources via fine-grained personal access tokens
  data, status_code, headers = api_instance.orgs_update_pat_accesses_with_http_info(org, orgs_update_pat_accesses_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_update_pat_accesses_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **orgs_update_pat_accesses_request** | [**OrgsUpdatePatAccessesRequest**](OrgsUpdatePatAccessesRequest.md) |  |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## orgs_update_webhook

> <OrgHook> orgs_update_webhook(org, hook_id, opts)

Update an organization webhook

Updates a webhook configured in an organization. When you update a webhook, the `secret` will be overwritten. If you previously had a `secret` set, you must provide the same `secret` or set a new `secret` or the secret will be removed. If you are only updating individual webhook `config` properties, use \"[Update a webhook configuration for an organization](/rest/orgs/webhooks#update-a-webhook-configuration-for-an-organization)\".  You must be an organization owner to use this endpoint.  OAuth app tokens and personal access tokens (classic) need `admin:org_hook` scope. OAuth apps cannot list, view, or edit webhooks that they did not create and users cannot list, view, or edit webhooks that were created by OAuth apps.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
hook_id = 56 # Integer | The unique identifier of the hook. You can find this value in the `X-GitHub-Hook-ID` header of a webhook delivery.
opts = {
  orgs_update_webhook_request: OpenapiClient::OrgsUpdateWebhookRequest.new # OrgsUpdateWebhookRequest | 
}

begin
  # Update an organization webhook
  result = api_instance.orgs_update_webhook(org, hook_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_update_webhook: #{e}"
end
```

#### Using the orgs_update_webhook_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrgHook>, Integer, Hash)> orgs_update_webhook_with_http_info(org, hook_id, opts)

```ruby
begin
  # Update an organization webhook
  data, status_code, headers = api_instance.orgs_update_webhook_with_http_info(org, hook_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrgHook>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_update_webhook_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **hook_id** | **Integer** | The unique identifier of the hook. You can find this value in the &#x60;X-GitHub-Hook-ID&#x60; header of a webhook delivery. |  |
| **orgs_update_webhook_request** | [**OrgsUpdateWebhookRequest**](OrgsUpdateWebhookRequest.md) |  | [optional] |

### Return type

[**OrgHook**](OrgHook.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## orgs_update_webhook_config_for_org

> <WebhookConfig> orgs_update_webhook_config_for_org(org, hook_id, opts)

Update a webhook configuration for an organization

Updates the webhook configuration for an organization. To update more information about the webhook, including the `active` state and `events`, use \"[Update an organization webhook ](/rest/orgs/webhooks#update-an-organization-webhook).\"  You must be an organization owner to use this endpoint.  OAuth app tokens and personal access tokens (classic) need `admin:org_hook` scope. OAuth apps cannot list, view, or edit webhooks that they did not create and users cannot list, view, or edit webhooks that were created by OAuth apps.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::OrgsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
hook_id = 56 # Integer | The unique identifier of the hook. You can find this value in the `X-GitHub-Hook-ID` header of a webhook delivery.
opts = {
  apps_update_webhook_config_for_app_request: OpenapiClient::AppsUpdateWebhookConfigForAppRequest.new # AppsUpdateWebhookConfigForAppRequest | 
}

begin
  # Update a webhook configuration for an organization
  result = api_instance.orgs_update_webhook_config_for_org(org, hook_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_update_webhook_config_for_org: #{e}"
end
```

#### Using the orgs_update_webhook_config_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<WebhookConfig>, Integer, Hash)> orgs_update_webhook_config_for_org_with_http_info(org, hook_id, opts)

```ruby
begin
  # Update a webhook configuration for an organization
  data, status_code, headers = api_instance.orgs_update_webhook_config_for_org_with_http_info(org, hook_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <WebhookConfig>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrgsApi->orgs_update_webhook_config_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **hook_id** | **Integer** | The unique identifier of the hook. You can find this value in the &#x60;X-GitHub-Hook-ID&#x60; header of a webhook delivery. |  |
| **apps_update_webhook_config_for_app_request** | [**AppsUpdateWebhookConfigForAppRequest**](AppsUpdateWebhookConfigForAppRequest.md) |  | [optional] |

### Return type

[**WebhookConfig**](WebhookConfig.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

