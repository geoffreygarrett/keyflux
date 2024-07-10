# OpenapiClient::TeamsApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**teams_add_member_legacy**](TeamsApi.md#teams_add_member_legacy) | **PUT** /teams/{team_id}/members/{username} | Add team member (Legacy) |
| [**teams_add_or_update_membership_for_user_in_org**](TeamsApi.md#teams_add_or_update_membership_for_user_in_org) | **PUT** /orgs/{org}/teams/{team_slug}/memberships/{username} | Add or update team membership for a user |
| [**teams_add_or_update_membership_for_user_legacy**](TeamsApi.md#teams_add_or_update_membership_for_user_legacy) | **PUT** /teams/{team_id}/memberships/{username} | Add or update team membership for a user (Legacy) |
| [**teams_add_or_update_project_permissions_in_org**](TeamsApi.md#teams_add_or_update_project_permissions_in_org) | **PUT** /orgs/{org}/teams/{team_slug}/projects/{project_id} | Add or update team project permissions |
| [**teams_add_or_update_project_permissions_legacy**](TeamsApi.md#teams_add_or_update_project_permissions_legacy) | **PUT** /teams/{team_id}/projects/{project_id} | Add or update team project permissions (Legacy) |
| [**teams_add_or_update_repo_permissions_in_org**](TeamsApi.md#teams_add_or_update_repo_permissions_in_org) | **PUT** /orgs/{org}/teams/{team_slug}/repos/{owner}/{repo} | Add or update team repository permissions |
| [**teams_add_or_update_repo_permissions_legacy**](TeamsApi.md#teams_add_or_update_repo_permissions_legacy) | **PUT** /teams/{team_id}/repos/{owner}/{repo} | Add or update team repository permissions (Legacy) |
| [**teams_check_permissions_for_project_in_org**](TeamsApi.md#teams_check_permissions_for_project_in_org) | **GET** /orgs/{org}/teams/{team_slug}/projects/{project_id} | Check team permissions for a project |
| [**teams_check_permissions_for_project_legacy**](TeamsApi.md#teams_check_permissions_for_project_legacy) | **GET** /teams/{team_id}/projects/{project_id} | Check team permissions for a project (Legacy) |
| [**teams_check_permissions_for_repo_in_org**](TeamsApi.md#teams_check_permissions_for_repo_in_org) | **GET** /orgs/{org}/teams/{team_slug}/repos/{owner}/{repo} | Check team permissions for a repository |
| [**teams_check_permissions_for_repo_legacy**](TeamsApi.md#teams_check_permissions_for_repo_legacy) | **GET** /teams/{team_id}/repos/{owner}/{repo} | Check team permissions for a repository (Legacy) |
| [**teams_create**](TeamsApi.md#teams_create) | **POST** /orgs/{org}/teams | Create a team |
| [**teams_create_discussion_comment_in_org**](TeamsApi.md#teams_create_discussion_comment_in_org) | **POST** /orgs/{org}/teams/{team_slug}/discussions/{discussion_number}/comments | Create a discussion comment |
| [**teams_create_discussion_comment_legacy**](TeamsApi.md#teams_create_discussion_comment_legacy) | **POST** /teams/{team_id}/discussions/{discussion_number}/comments | Create a discussion comment (Legacy) |
| [**teams_create_discussion_in_org**](TeamsApi.md#teams_create_discussion_in_org) | **POST** /orgs/{org}/teams/{team_slug}/discussions | Create a discussion |
| [**teams_create_discussion_legacy**](TeamsApi.md#teams_create_discussion_legacy) | **POST** /teams/{team_id}/discussions | Create a discussion (Legacy) |
| [**teams_delete_discussion_comment_in_org**](TeamsApi.md#teams_delete_discussion_comment_in_org) | **DELETE** /orgs/{org}/teams/{team_slug}/discussions/{discussion_number}/comments/{comment_number} | Delete a discussion comment |
| [**teams_delete_discussion_comment_legacy**](TeamsApi.md#teams_delete_discussion_comment_legacy) | **DELETE** /teams/{team_id}/discussions/{discussion_number}/comments/{comment_number} | Delete a discussion comment (Legacy) |
| [**teams_delete_discussion_in_org**](TeamsApi.md#teams_delete_discussion_in_org) | **DELETE** /orgs/{org}/teams/{team_slug}/discussions/{discussion_number} | Delete a discussion |
| [**teams_delete_discussion_legacy**](TeamsApi.md#teams_delete_discussion_legacy) | **DELETE** /teams/{team_id}/discussions/{discussion_number} | Delete a discussion (Legacy) |
| [**teams_delete_in_org**](TeamsApi.md#teams_delete_in_org) | **DELETE** /orgs/{org}/teams/{team_slug} | Delete a team |
| [**teams_delete_legacy**](TeamsApi.md#teams_delete_legacy) | **DELETE** /teams/{team_id} | Delete a team (Legacy) |
| [**teams_get_by_name**](TeamsApi.md#teams_get_by_name) | **GET** /orgs/{org}/teams/{team_slug} | Get a team by name |
| [**teams_get_discussion_comment_in_org**](TeamsApi.md#teams_get_discussion_comment_in_org) | **GET** /orgs/{org}/teams/{team_slug}/discussions/{discussion_number}/comments/{comment_number} | Get a discussion comment |
| [**teams_get_discussion_comment_legacy**](TeamsApi.md#teams_get_discussion_comment_legacy) | **GET** /teams/{team_id}/discussions/{discussion_number}/comments/{comment_number} | Get a discussion comment (Legacy) |
| [**teams_get_discussion_in_org**](TeamsApi.md#teams_get_discussion_in_org) | **GET** /orgs/{org}/teams/{team_slug}/discussions/{discussion_number} | Get a discussion |
| [**teams_get_discussion_legacy**](TeamsApi.md#teams_get_discussion_legacy) | **GET** /teams/{team_id}/discussions/{discussion_number} | Get a discussion (Legacy) |
| [**teams_get_legacy**](TeamsApi.md#teams_get_legacy) | **GET** /teams/{team_id} | Get a team (Legacy) |
| [**teams_get_member_legacy**](TeamsApi.md#teams_get_member_legacy) | **GET** /teams/{team_id}/members/{username} | Get team member (Legacy) |
| [**teams_get_membership_for_user_in_org**](TeamsApi.md#teams_get_membership_for_user_in_org) | **GET** /orgs/{org}/teams/{team_slug}/memberships/{username} | Get team membership for a user |
| [**teams_get_membership_for_user_legacy**](TeamsApi.md#teams_get_membership_for_user_legacy) | **GET** /teams/{team_id}/memberships/{username} | Get team membership for a user (Legacy) |
| [**teams_list**](TeamsApi.md#teams_list) | **GET** /orgs/{org}/teams | List teams |
| [**teams_list_child_in_org**](TeamsApi.md#teams_list_child_in_org) | **GET** /orgs/{org}/teams/{team_slug}/teams | List child teams |
| [**teams_list_child_legacy**](TeamsApi.md#teams_list_child_legacy) | **GET** /teams/{team_id}/teams | List child teams (Legacy) |
| [**teams_list_discussion_comments_in_org**](TeamsApi.md#teams_list_discussion_comments_in_org) | **GET** /orgs/{org}/teams/{team_slug}/discussions/{discussion_number}/comments | List discussion comments |
| [**teams_list_discussion_comments_legacy**](TeamsApi.md#teams_list_discussion_comments_legacy) | **GET** /teams/{team_id}/discussions/{discussion_number}/comments | List discussion comments (Legacy) |
| [**teams_list_discussions_in_org**](TeamsApi.md#teams_list_discussions_in_org) | **GET** /orgs/{org}/teams/{team_slug}/discussions | List discussions |
| [**teams_list_discussions_legacy**](TeamsApi.md#teams_list_discussions_legacy) | **GET** /teams/{team_id}/discussions | List discussions (Legacy) |
| [**teams_list_for_authenticated_user**](TeamsApi.md#teams_list_for_authenticated_user) | **GET** /user/teams | List teams for the authenticated user |
| [**teams_list_members_in_org**](TeamsApi.md#teams_list_members_in_org) | **GET** /orgs/{org}/teams/{team_slug}/members | List team members |
| [**teams_list_members_legacy**](TeamsApi.md#teams_list_members_legacy) | **GET** /teams/{team_id}/members | List team members (Legacy) |
| [**teams_list_pending_invitations_in_org**](TeamsApi.md#teams_list_pending_invitations_in_org) | **GET** /orgs/{org}/teams/{team_slug}/invitations | List pending team invitations |
| [**teams_list_pending_invitations_legacy**](TeamsApi.md#teams_list_pending_invitations_legacy) | **GET** /teams/{team_id}/invitations | List pending team invitations (Legacy) |
| [**teams_list_projects_in_org**](TeamsApi.md#teams_list_projects_in_org) | **GET** /orgs/{org}/teams/{team_slug}/projects | List team projects |
| [**teams_list_projects_legacy**](TeamsApi.md#teams_list_projects_legacy) | **GET** /teams/{team_id}/projects | List team projects (Legacy) |
| [**teams_list_repos_in_org**](TeamsApi.md#teams_list_repos_in_org) | **GET** /orgs/{org}/teams/{team_slug}/repos | List team repositories |
| [**teams_list_repos_legacy**](TeamsApi.md#teams_list_repos_legacy) | **GET** /teams/{team_id}/repos | List team repositories (Legacy) |
| [**teams_remove_member_legacy**](TeamsApi.md#teams_remove_member_legacy) | **DELETE** /teams/{team_id}/members/{username} | Remove team member (Legacy) |
| [**teams_remove_membership_for_user_in_org**](TeamsApi.md#teams_remove_membership_for_user_in_org) | **DELETE** /orgs/{org}/teams/{team_slug}/memberships/{username} | Remove team membership for a user |
| [**teams_remove_membership_for_user_legacy**](TeamsApi.md#teams_remove_membership_for_user_legacy) | **DELETE** /teams/{team_id}/memberships/{username} | Remove team membership for a user (Legacy) |
| [**teams_remove_project_in_org**](TeamsApi.md#teams_remove_project_in_org) | **DELETE** /orgs/{org}/teams/{team_slug}/projects/{project_id} | Remove a project from a team |
| [**teams_remove_project_legacy**](TeamsApi.md#teams_remove_project_legacy) | **DELETE** /teams/{team_id}/projects/{project_id} | Remove a project from a team (Legacy) |
| [**teams_remove_repo_in_org**](TeamsApi.md#teams_remove_repo_in_org) | **DELETE** /orgs/{org}/teams/{team_slug}/repos/{owner}/{repo} | Remove a repository from a team |
| [**teams_remove_repo_legacy**](TeamsApi.md#teams_remove_repo_legacy) | **DELETE** /teams/{team_id}/repos/{owner}/{repo} | Remove a repository from a team (Legacy) |
| [**teams_update_discussion_comment_in_org**](TeamsApi.md#teams_update_discussion_comment_in_org) | **PATCH** /orgs/{org}/teams/{team_slug}/discussions/{discussion_number}/comments/{comment_number} | Update a discussion comment |
| [**teams_update_discussion_comment_legacy**](TeamsApi.md#teams_update_discussion_comment_legacy) | **PATCH** /teams/{team_id}/discussions/{discussion_number}/comments/{comment_number} | Update a discussion comment (Legacy) |
| [**teams_update_discussion_in_org**](TeamsApi.md#teams_update_discussion_in_org) | **PATCH** /orgs/{org}/teams/{team_slug}/discussions/{discussion_number} | Update a discussion |
| [**teams_update_discussion_legacy**](TeamsApi.md#teams_update_discussion_legacy) | **PATCH** /teams/{team_id}/discussions/{discussion_number} | Update a discussion (Legacy) |
| [**teams_update_in_org**](TeamsApi.md#teams_update_in_org) | **PATCH** /orgs/{org}/teams/{team_slug} | Update a team |
| [**teams_update_legacy**](TeamsApi.md#teams_update_legacy) | **PATCH** /teams/{team_id} | Update a team (Legacy) |


## teams_add_member_legacy

> teams_add_member_legacy(team_id, username)

Add team member (Legacy)

The \"Add team member\" endpoint (described below) is deprecated.  We recommend using the [Add or update team membership for a user](https://docs.github.com/rest/teams/members#add-or-update-team-membership-for-a-user) endpoint instead. It allows you to invite new organization members to your teams.  Team synchronization is available for organizations using GitHub Enterprise Cloud. For more information, see [GitHub's products](https://docs.github.com/github/getting-started-with-github/githubs-products) in the GitHub Help documentation.  To add someone to a team, the authenticated user must be an organization owner or a team maintainer in the team they're changing. The person being added to the team must be a member of the team's organization.  **Note:** When you have team synchronization set up for a team with your organization's identity provider (IdP), you will see an error if you attempt to use the API for making changes to the team's membership. If you have access to manage group membership in your IdP, you can manage GitHub team membership through your identity provider, which automatically adds and removes team members in an organization. For more information, see \"[Synchronizing teams between your identity provider and GitHub](https://docs.github.com/articles/synchronizing-teams-between-your-identity-provider-and-github/).\"  Note that you'll need to set `Content-Length` to zero when calling out to this endpoint. For more information, see \"[HTTP method](https://docs.github.com/rest/guides/getting-started-with-the-rest-api#http-method).\"

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Add team member (Legacy)
  api_instance.teams_add_member_legacy(team_id, username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_add_member_legacy: #{e}"
end
```

#### Using the teams_add_member_legacy_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> teams_add_member_legacy_with_http_info(team_id, username)

```ruby
begin
  # Add team member (Legacy)
  data, status_code, headers = api_instance.teams_add_member_legacy_with_http_info(team_id, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_add_member_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_add_or_update_membership_for_user_in_org

> <TeamMembership> teams_add_or_update_membership_for_user_in_org(org, team_slug, username, opts)

Add or update team membership for a user

Adds an organization member to a team. An authenticated organization owner or team maintainer can add organization members to a team.  Team synchronization is available for organizations using GitHub Enterprise Cloud. For more information, see [GitHub's products](https://docs.github.com/github/getting-started-with-github/githubs-products) in the GitHub Help documentation.  **Note:** When you have team synchronization set up for a team with your organization's identity provider (IdP), you will see an error if you attempt to use the API for making changes to the team's membership. If you have access to manage group membership in your IdP, you can manage GitHub team membership through your identity provider, which automatically adds and removes team members in an organization. For more information, see \"[Synchronizing teams between your identity provider and GitHub](https://docs.github.com/articles/synchronizing-teams-between-your-identity-provider-and-github/).\"  An organization owner can add someone who is not part of the team's organization to a team. When an organization owner adds someone to a team who is not an organization member, this endpoint will send an invitation to the person via email. This newly-created membership will be in the \"pending\" state until the person accepts the invitation, at which point the membership will transition to the \"active\" state and the user will be added as a member of the team.  If the user is already a member of the team, this endpoint will update the role of the team member's role. To update the membership of a team member, the authenticated user must be an organization owner or a team maintainer.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `PUT /organizations/{org_id}/team/{team_id}/memberships/{username}`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  teams_add_or_update_membership_for_user_in_org_request: OpenapiClient::TeamsAddOrUpdateMembershipForUserInOrgRequest.new # TeamsAddOrUpdateMembershipForUserInOrgRequest | 
}

begin
  # Add or update team membership for a user
  result = api_instance.teams_add_or_update_membership_for_user_in_org(org, team_slug, username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_add_or_update_membership_for_user_in_org: #{e}"
end
```

#### Using the teams_add_or_update_membership_for_user_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamMembership>, Integer, Hash)> teams_add_or_update_membership_for_user_in_org_with_http_info(org, team_slug, username, opts)

```ruby
begin
  # Add or update team membership for a user
  data, status_code, headers = api_instance.teams_add_or_update_membership_for_user_in_org_with_http_info(org, team_slug, username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamMembership>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_add_or_update_membership_for_user_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **username** | **String** | The handle for the GitHub user account. |  |
| **teams_add_or_update_membership_for_user_in_org_request** | [**TeamsAddOrUpdateMembershipForUserInOrgRequest**](TeamsAddOrUpdateMembershipForUserInOrgRequest.md) |  | [optional] |

### Return type

[**TeamMembership**](TeamMembership.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## teams_add_or_update_membership_for_user_legacy

> <TeamMembership> teams_add_or_update_membership_for_user_legacy(team_id, username, opts)

Add or update team membership for a user (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [Add or update team membership for a user](https://docs.github.com/rest/teams/members#add-or-update-team-membership-for-a-user) endpoint.  Team synchronization is available for organizations using GitHub Enterprise Cloud. For more information, see [GitHub's products](https://docs.github.com/github/getting-started-with-github/githubs-products) in the GitHub Help documentation.  If the user is already a member of the team's organization, this endpoint will add the user to the team. To add a membership between an organization member and a team, the authenticated user must be an organization owner or a team maintainer.  **Note:** When you have team synchronization set up for a team with your organization's identity provider (IdP), you will see an error if you attempt to use the API for making changes to the team's membership. If you have access to manage group membership in your IdP, you can manage GitHub team membership through your identity provider, which automatically adds and removes team members in an organization. For more information, see \"[Synchronizing teams between your identity provider and GitHub](https://docs.github.com/articles/synchronizing-teams-between-your-identity-provider-and-github/).\"  If the user is unaffiliated with the team's organization, this endpoint will send an invitation to the user via email. This newly-created membership will be in the \"pending\" state until the user accepts the invitation, at which point the membership will transition to the \"active\" state and the user will be added as a member of the team. To add a membership between an unaffiliated user and a team, the authenticated user must be an organization owner.  If the user is already a member of the team, this endpoint will update the role of the team member's role. To update the membership of a team member, the authenticated user must be an organization owner or a team maintainer.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  teams_add_or_update_membership_for_user_in_org_request: OpenapiClient::TeamsAddOrUpdateMembershipForUserInOrgRequest.new # TeamsAddOrUpdateMembershipForUserInOrgRequest | 
}

begin
  # Add or update team membership for a user (Legacy)
  result = api_instance.teams_add_or_update_membership_for_user_legacy(team_id, username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_add_or_update_membership_for_user_legacy: #{e}"
end
```

#### Using the teams_add_or_update_membership_for_user_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamMembership>, Integer, Hash)> teams_add_or_update_membership_for_user_legacy_with_http_info(team_id, username, opts)

```ruby
begin
  # Add or update team membership for a user (Legacy)
  data, status_code, headers = api_instance.teams_add_or_update_membership_for_user_legacy_with_http_info(team_id, username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamMembership>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_add_or_update_membership_for_user_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **username** | **String** | The handle for the GitHub user account. |  |
| **teams_add_or_update_membership_for_user_in_org_request** | [**TeamsAddOrUpdateMembershipForUserInOrgRequest**](TeamsAddOrUpdateMembershipForUserInOrgRequest.md) |  | [optional] |

### Return type

[**TeamMembership**](TeamMembership.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## teams_add_or_update_project_permissions_in_org

> teams_add_or_update_project_permissions_in_org(org, team_slug, project_id, opts)

Add or update team project permissions

Adds an organization project to a team. To add a project to a team or update the team's permission on a project, the authenticated user must have `admin` permissions for the project. The project and team must be part of the same organization.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `PUT /organizations/{org_id}/team/{team_id}/projects/{project_id}`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
project_id = 56 # Integer | The unique identifier of the project.
opts = {
  teams_add_or_update_project_permissions_in_org_request: OpenapiClient::TeamsAddOrUpdateProjectPermissionsInOrgRequest.new # TeamsAddOrUpdateProjectPermissionsInOrgRequest | 
}

begin
  # Add or update team project permissions
  api_instance.teams_add_or_update_project_permissions_in_org(org, team_slug, project_id, opts)
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_add_or_update_project_permissions_in_org: #{e}"
end
```

#### Using the teams_add_or_update_project_permissions_in_org_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> teams_add_or_update_project_permissions_in_org_with_http_info(org, team_slug, project_id, opts)

```ruby
begin
  # Add or update team project permissions
  data, status_code, headers = api_instance.teams_add_or_update_project_permissions_in_org_with_http_info(org, team_slug, project_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_add_or_update_project_permissions_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **project_id** | **Integer** | The unique identifier of the project. |  |
| **teams_add_or_update_project_permissions_in_org_request** | [**TeamsAddOrUpdateProjectPermissionsInOrgRequest**](TeamsAddOrUpdateProjectPermissionsInOrgRequest.md) |  | [optional] |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## teams_add_or_update_project_permissions_legacy

> teams_add_or_update_project_permissions_legacy(team_id, project_id, opts)

Add or update team project permissions (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [Add or update team project permissions](https://docs.github.com/rest/teams/teams#add-or-update-team-project-permissions) endpoint.  Adds an organization project to a team. To add a project to a team or update the team's permission on a project, the authenticated user must have `admin` permissions for the project. The project and team must be part of the same organization.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
project_id = 56 # Integer | The unique identifier of the project.
opts = {
  teams_add_or_update_project_permissions_legacy_request: OpenapiClient::TeamsAddOrUpdateProjectPermissionsLegacyRequest.new # TeamsAddOrUpdateProjectPermissionsLegacyRequest | 
}

begin
  # Add or update team project permissions (Legacy)
  api_instance.teams_add_or_update_project_permissions_legacy(team_id, project_id, opts)
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_add_or_update_project_permissions_legacy: #{e}"
end
```

#### Using the teams_add_or_update_project_permissions_legacy_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> teams_add_or_update_project_permissions_legacy_with_http_info(team_id, project_id, opts)

```ruby
begin
  # Add or update team project permissions (Legacy)
  data, status_code, headers = api_instance.teams_add_or_update_project_permissions_legacy_with_http_info(team_id, project_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_add_or_update_project_permissions_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **project_id** | **Integer** | The unique identifier of the project. |  |
| **teams_add_or_update_project_permissions_legacy_request** | [**TeamsAddOrUpdateProjectPermissionsLegacyRequest**](TeamsAddOrUpdateProjectPermissionsLegacyRequest.md) |  | [optional] |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## teams_add_or_update_repo_permissions_in_org

> teams_add_or_update_repo_permissions_in_org(org, team_slug, owner, repo, opts)

Add or update team repository permissions

To add a repository to a team or update the team's permission on a repository, the authenticated user must have admin access to the repository, and must be able to see the team. The repository must be owned by the organization, or a direct fork of a repository owned by the organization. You will get a `422 Unprocessable Entity` status if you attempt to add a repository to a team that is not owned by the organization. Note that, if you choose not to pass any parameters, you'll need to set `Content-Length` to zero when calling out to this endpoint. For more information, see \"[HTTP method](https://docs.github.com/rest/guides/getting-started-with-the-rest-api#http-method).\"  **Note:** You can also specify a team by `org_id` and `team_id` using the route `PUT /organizations/{org_id}/team/{team_id}/repos/{owner}/{repo}`.  For more information about the permission levels, see \"[Repository permission levels for an organization](https://docs.github.com/github/setting-up-and-managing-organizations-and-teams/repository-permission-levels-for-an-organization#permission-levels-for-repositories-owned-by-an-organization)\".

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  teams_add_or_update_repo_permissions_in_org_request: OpenapiClient::TeamsAddOrUpdateRepoPermissionsInOrgRequest.new # TeamsAddOrUpdateRepoPermissionsInOrgRequest | 
}

begin
  # Add or update team repository permissions
  api_instance.teams_add_or_update_repo_permissions_in_org(org, team_slug, owner, repo, opts)
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_add_or_update_repo_permissions_in_org: #{e}"
end
```

#### Using the teams_add_or_update_repo_permissions_in_org_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> teams_add_or_update_repo_permissions_in_org_with_http_info(org, team_slug, owner, repo, opts)

```ruby
begin
  # Add or update team repository permissions
  data, status_code, headers = api_instance.teams_add_or_update_repo_permissions_in_org_with_http_info(org, team_slug, owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_add_or_update_repo_permissions_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **teams_add_or_update_repo_permissions_in_org_request** | [**TeamsAddOrUpdateRepoPermissionsInOrgRequest**](TeamsAddOrUpdateRepoPermissionsInOrgRequest.md) |  | [optional] |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## teams_add_or_update_repo_permissions_legacy

> teams_add_or_update_repo_permissions_legacy(team_id, owner, repo, opts)

Add or update team repository permissions (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new \"[Add or update team repository permissions](https://docs.github.com/rest/teams/teams#add-or-update-team-repository-permissions)\" endpoint.  To add a repository to a team or update the team's permission on a repository, the authenticated user must have admin access to the repository, and must be able to see the team. The repository must be owned by the organization, or a direct fork of a repository owned by the organization. You will get a `422 Unprocessable Entity` status if you attempt to add a repository to a team that is not owned by the organization.  Note that, if you choose not to pass any parameters, you'll need to set `Content-Length` to zero when calling out to this endpoint. For more information, see \"[HTTP method](https://docs.github.com/rest/guides/getting-started-with-the-rest-api#http-method).\"

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  teams_add_or_update_repo_permissions_legacy_request: OpenapiClient::TeamsAddOrUpdateRepoPermissionsLegacyRequest.new # TeamsAddOrUpdateRepoPermissionsLegacyRequest | 
}

begin
  # Add or update team repository permissions (Legacy)
  api_instance.teams_add_or_update_repo_permissions_legacy(team_id, owner, repo, opts)
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_add_or_update_repo_permissions_legacy: #{e}"
end
```

#### Using the teams_add_or_update_repo_permissions_legacy_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> teams_add_or_update_repo_permissions_legacy_with_http_info(team_id, owner, repo, opts)

```ruby
begin
  # Add or update team repository permissions (Legacy)
  data, status_code, headers = api_instance.teams_add_or_update_repo_permissions_legacy_with_http_info(team_id, owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_add_or_update_repo_permissions_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **teams_add_or_update_repo_permissions_legacy_request** | [**TeamsAddOrUpdateRepoPermissionsLegacyRequest**](TeamsAddOrUpdateRepoPermissionsLegacyRequest.md) |  | [optional] |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## teams_check_permissions_for_project_in_org

> <TeamProject> teams_check_permissions_for_project_in_org(org, team_slug, project_id)

Check team permissions for a project

Checks whether a team has `read`, `write`, or `admin` permissions for an organization project. The response includes projects inherited from a parent team.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `GET /organizations/{org_id}/team/{team_id}/projects/{project_id}`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
project_id = 56 # Integer | The unique identifier of the project.

begin
  # Check team permissions for a project
  result = api_instance.teams_check_permissions_for_project_in_org(org, team_slug, project_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_check_permissions_for_project_in_org: #{e}"
end
```

#### Using the teams_check_permissions_for_project_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamProject>, Integer, Hash)> teams_check_permissions_for_project_in_org_with_http_info(org, team_slug, project_id)

```ruby
begin
  # Check team permissions for a project
  data, status_code, headers = api_instance.teams_check_permissions_for_project_in_org_with_http_info(org, team_slug, project_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamProject>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_check_permissions_for_project_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **project_id** | **Integer** | The unique identifier of the project. |  |

### Return type

[**TeamProject**](TeamProject.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_check_permissions_for_project_legacy

> <TeamProject> teams_check_permissions_for_project_legacy(team_id, project_id)

Check team permissions for a project (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [Check team permissions for a project](https://docs.github.com/rest/teams/teams#check-team-permissions-for-a-project) endpoint.  Checks whether a team has `read`, `write`, or `admin` permissions for an organization project. The response includes projects inherited from a parent team.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
project_id = 56 # Integer | The unique identifier of the project.

begin
  # Check team permissions for a project (Legacy)
  result = api_instance.teams_check_permissions_for_project_legacy(team_id, project_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_check_permissions_for_project_legacy: #{e}"
end
```

#### Using the teams_check_permissions_for_project_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamProject>, Integer, Hash)> teams_check_permissions_for_project_legacy_with_http_info(team_id, project_id)

```ruby
begin
  # Check team permissions for a project (Legacy)
  data, status_code, headers = api_instance.teams_check_permissions_for_project_legacy_with_http_info(team_id, project_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamProject>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_check_permissions_for_project_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **project_id** | **Integer** | The unique identifier of the project. |  |

### Return type

[**TeamProject**](TeamProject.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_check_permissions_for_repo_in_org

> <TeamRepository> teams_check_permissions_for_repo_in_org(org, team_slug, owner, repo)

Check team permissions for a repository

Checks whether a team has `admin`, `push`, `maintain`, `triage`, or `pull` permission for a repository. Repositories inherited through a parent team will also be checked.  You can also get information about the specified repository, including what permissions the team grants on it, by passing the following custom [media type](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types/) via the `application/vnd.github.v3.repository+json` accept header.  If a team doesn't have permission for the repository, you will receive a `404 Not Found` response status.  If the repository is private, you must have at least `read` permission for that repository, and your token must have the `repo` or `admin:org` scope. Otherwise, you will receive a `404 Not Found` response status.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `GET /organizations/{org_id}/team/{team_id}/repos/{owner}/{repo}`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Check team permissions for a repository
  result = api_instance.teams_check_permissions_for_repo_in_org(org, team_slug, owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_check_permissions_for_repo_in_org: #{e}"
end
```

#### Using the teams_check_permissions_for_repo_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamRepository>, Integer, Hash)> teams_check_permissions_for_repo_in_org_with_http_info(org, team_slug, owner, repo)

```ruby
begin
  # Check team permissions for a repository
  data, status_code, headers = api_instance.teams_check_permissions_for_repo_in_org_with_http_info(org, team_slug, owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamRepository>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_check_permissions_for_repo_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**TeamRepository**](TeamRepository.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_check_permissions_for_repo_legacy

> <TeamRepository> teams_check_permissions_for_repo_legacy(team_id, owner, repo)

Check team permissions for a repository (Legacy)

**Note**: Repositories inherited through a parent team will also be checked.  **Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [Check team permissions for a repository](https://docs.github.com/rest/teams/teams#check-team-permissions-for-a-repository) endpoint.  You can also get information about the specified repository, including what permissions the team grants on it, by passing the following custom [media type](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types/) via the `Accept` header:

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Check team permissions for a repository (Legacy)
  result = api_instance.teams_check_permissions_for_repo_legacy(team_id, owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_check_permissions_for_repo_legacy: #{e}"
end
```

#### Using the teams_check_permissions_for_repo_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamRepository>, Integer, Hash)> teams_check_permissions_for_repo_legacy_with_http_info(team_id, owner, repo)

```ruby
begin
  # Check team permissions for a repository (Legacy)
  data, status_code, headers = api_instance.teams_check_permissions_for_repo_legacy_with_http_info(team_id, owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamRepository>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_check_permissions_for_repo_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**TeamRepository**](TeamRepository.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_create

> <TeamFull> teams_create(org, teams_create_request)

Create a team

To create a team, the authenticated user must be a member or owner of `{org}`. By default, organization members can create teams. Organization owners can limit team creation to organization owners. For more information, see \"[Setting team creation permissions](https://docs.github.com/articles/setting-team-creation-permissions-in-your-organization).\"  When you create a new team, you automatically become a team maintainer without explicitly adding yourself to the optional array of `maintainers`. For more information, see \"[About teams](https://docs.github.com/github/setting-up-and-managing-organizations-and-teams/about-teams)\".

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
teams_create_request = OpenapiClient::TeamsCreateRequest.new({name: 'name_example'}) # TeamsCreateRequest | 

begin
  # Create a team
  result = api_instance.teams_create(org, teams_create_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_create: #{e}"
end
```

#### Using the teams_create_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamFull>, Integer, Hash)> teams_create_with_http_info(org, teams_create_request)

```ruby
begin
  # Create a team
  data, status_code, headers = api_instance.teams_create_with_http_info(org, teams_create_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamFull>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_create_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **teams_create_request** | [**TeamsCreateRequest**](TeamsCreateRequest.md) |  |  |

### Return type

[**TeamFull**](TeamFull.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## teams_create_discussion_comment_in_org

> <TeamDiscussionComment> teams_create_discussion_comment_in_org(org, team_slug, discussion_number, teams_create_discussion_comment_in_org_request)

Create a discussion comment

Creates a new comment on a team discussion.  This endpoint triggers [notifications](https://docs.github.com/github/managing-subscriptions-and-notifications-on-github/about-notifications). Creating content too quickly using this endpoint may result in secondary rate limiting. For more information, see \"[Rate limits for the API](https://docs.github.com/rest/using-the-rest-api/rate-limits-for-the-rest-api#about-secondary-rate-limits)\" and \"[Best practices for using the REST API](https://docs.github.com/rest/guides/best-practices-for-using-the-rest-api).\"  **Note:** You can also specify a team by `org_id` and `team_id` using the route `POST /organizations/{org_id}/team/{team_id}/discussions/{discussion_number}/comments`.  OAuth app tokens and personal access tokens (classic) need the `write:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
discussion_number = 56 # Integer | The number that identifies the discussion.
teams_create_discussion_comment_in_org_request = OpenapiClient::TeamsCreateDiscussionCommentInOrgRequest.new({body: 'body_example'}) # TeamsCreateDiscussionCommentInOrgRequest | 

begin
  # Create a discussion comment
  result = api_instance.teams_create_discussion_comment_in_org(org, team_slug, discussion_number, teams_create_discussion_comment_in_org_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_create_discussion_comment_in_org: #{e}"
end
```

#### Using the teams_create_discussion_comment_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamDiscussionComment>, Integer, Hash)> teams_create_discussion_comment_in_org_with_http_info(org, team_slug, discussion_number, teams_create_discussion_comment_in_org_request)

```ruby
begin
  # Create a discussion comment
  data, status_code, headers = api_instance.teams_create_discussion_comment_in_org_with_http_info(org, team_slug, discussion_number, teams_create_discussion_comment_in_org_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamDiscussionComment>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_create_discussion_comment_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **teams_create_discussion_comment_in_org_request** | [**TeamsCreateDiscussionCommentInOrgRequest**](TeamsCreateDiscussionCommentInOrgRequest.md) |  |  |

### Return type

[**TeamDiscussionComment**](TeamDiscussionComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## teams_create_discussion_comment_legacy

> <TeamDiscussionComment> teams_create_discussion_comment_legacy(team_id, discussion_number, teams_create_discussion_comment_in_org_request)

Create a discussion comment (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [Create a discussion comment](https://docs.github.com/rest/teams/discussion-comments#create-a-discussion-comment) endpoint.  Creates a new comment on a team discussion.  This endpoint triggers [notifications](https://docs.github.com/github/managing-subscriptions-and-notifications-on-github/about-notifications). Creating content too quickly using this endpoint may result in secondary rate limiting. For more information, see \"[Rate limits for the API](https://docs.github.com/rest/using-the-rest-api/rate-limits-for-the-rest-api#about-secondary-rate-limits)\" and \"[Best practices for using the REST API](https://docs.github.com/rest/guides/best-practices-for-using-the-rest-api).\"  OAuth app tokens and personal access tokens (classic) need the `write:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
discussion_number = 56 # Integer | The number that identifies the discussion.
teams_create_discussion_comment_in_org_request = OpenapiClient::TeamsCreateDiscussionCommentInOrgRequest.new({body: 'body_example'}) # TeamsCreateDiscussionCommentInOrgRequest | 

begin
  # Create a discussion comment (Legacy)
  result = api_instance.teams_create_discussion_comment_legacy(team_id, discussion_number, teams_create_discussion_comment_in_org_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_create_discussion_comment_legacy: #{e}"
end
```

#### Using the teams_create_discussion_comment_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamDiscussionComment>, Integer, Hash)> teams_create_discussion_comment_legacy_with_http_info(team_id, discussion_number, teams_create_discussion_comment_in_org_request)

```ruby
begin
  # Create a discussion comment (Legacy)
  data, status_code, headers = api_instance.teams_create_discussion_comment_legacy_with_http_info(team_id, discussion_number, teams_create_discussion_comment_in_org_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamDiscussionComment>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_create_discussion_comment_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **teams_create_discussion_comment_in_org_request** | [**TeamsCreateDiscussionCommentInOrgRequest**](TeamsCreateDiscussionCommentInOrgRequest.md) |  |  |

### Return type

[**TeamDiscussionComment**](TeamDiscussionComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## teams_create_discussion_in_org

> <TeamDiscussion> teams_create_discussion_in_org(org, team_slug, teams_create_discussion_in_org_request)

Create a discussion

Creates a new discussion post on a team's page.  This endpoint triggers [notifications](https://docs.github.com/github/managing-subscriptions-and-notifications-on-github/about-notifications). Creating content too quickly using this endpoint may result in secondary rate limiting. For more information, see \"[Rate limits for the API](https://docs.github.com/rest/using-the-rest-api/rate-limits-for-the-rest-api#about-secondary-rate-limits)\" and \"[Best practices for using the REST API](https://docs.github.com/rest/guides/best-practices-for-using-the-rest-api).\"  **Note:** You can also specify a team by `org_id` and `team_id` using the route `POST /organizations/{org_id}/team/{team_id}/discussions`.  OAuth app tokens and personal access tokens (classic) need the `write:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
teams_create_discussion_in_org_request = OpenapiClient::TeamsCreateDiscussionInOrgRequest.new({title: 'title_example', body: 'body_example'}) # TeamsCreateDiscussionInOrgRequest | 

begin
  # Create a discussion
  result = api_instance.teams_create_discussion_in_org(org, team_slug, teams_create_discussion_in_org_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_create_discussion_in_org: #{e}"
end
```

#### Using the teams_create_discussion_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamDiscussion>, Integer, Hash)> teams_create_discussion_in_org_with_http_info(org, team_slug, teams_create_discussion_in_org_request)

```ruby
begin
  # Create a discussion
  data, status_code, headers = api_instance.teams_create_discussion_in_org_with_http_info(org, team_slug, teams_create_discussion_in_org_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamDiscussion>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_create_discussion_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **teams_create_discussion_in_org_request** | [**TeamsCreateDiscussionInOrgRequest**](TeamsCreateDiscussionInOrgRequest.md) |  |  |

### Return type

[**TeamDiscussion**](TeamDiscussion.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## teams_create_discussion_legacy

> <TeamDiscussion> teams_create_discussion_legacy(team_id, teams_create_discussion_in_org_request)

Create a discussion (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [`Create a discussion`](https://docs.github.com/rest/teams/discussions#create-a-discussion) endpoint.  Creates a new discussion post on a team's page.  This endpoint triggers [notifications](https://docs.github.com/github/managing-subscriptions-and-notifications-on-github/about-notifications). Creating content too quickly using this endpoint may result in secondary rate limiting. For more information, see \"[Rate limits for the API](https://docs.github.com/rest/using-the-rest-api/rate-limits-for-the-rest-api#about-secondary-rate-limits)\" and \"[Best practices for using the REST API](https://docs.github.com/rest/guides/best-practices-for-using-the-rest-api).\"  OAuth app tokens and personal access tokens (classic) need the `write:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
teams_create_discussion_in_org_request = OpenapiClient::TeamsCreateDiscussionInOrgRequest.new({title: 'title_example', body: 'body_example'}) # TeamsCreateDiscussionInOrgRequest | 

begin
  # Create a discussion (Legacy)
  result = api_instance.teams_create_discussion_legacy(team_id, teams_create_discussion_in_org_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_create_discussion_legacy: #{e}"
end
```

#### Using the teams_create_discussion_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamDiscussion>, Integer, Hash)> teams_create_discussion_legacy_with_http_info(team_id, teams_create_discussion_in_org_request)

```ruby
begin
  # Create a discussion (Legacy)
  data, status_code, headers = api_instance.teams_create_discussion_legacy_with_http_info(team_id, teams_create_discussion_in_org_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamDiscussion>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_create_discussion_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **teams_create_discussion_in_org_request** | [**TeamsCreateDiscussionInOrgRequest**](TeamsCreateDiscussionInOrgRequest.md) |  |  |

### Return type

[**TeamDiscussion**](TeamDiscussion.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## teams_delete_discussion_comment_in_org

> teams_delete_discussion_comment_in_org(org, team_slug, discussion_number, comment_number)

Delete a discussion comment

Deletes a comment on a team discussion.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `DELETE /organizations/{org_id}/team/{team_id}/discussions/{discussion_number}/comments/{comment_number}`.  OAuth app tokens and personal access tokens (classic) need the `write:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
discussion_number = 56 # Integer | The number that identifies the discussion.
comment_number = 56 # Integer | The number that identifies the comment.

begin
  # Delete a discussion comment
  api_instance.teams_delete_discussion_comment_in_org(org, team_slug, discussion_number, comment_number)
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_delete_discussion_comment_in_org: #{e}"
end
```

#### Using the teams_delete_discussion_comment_in_org_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> teams_delete_discussion_comment_in_org_with_http_info(org, team_slug, discussion_number, comment_number)

```ruby
begin
  # Delete a discussion comment
  data, status_code, headers = api_instance.teams_delete_discussion_comment_in_org_with_http_info(org, team_slug, discussion_number, comment_number)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_delete_discussion_comment_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **comment_number** | **Integer** | The number that identifies the comment. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## teams_delete_discussion_comment_legacy

> teams_delete_discussion_comment_legacy(team_id, discussion_number, comment_number)

Delete a discussion comment (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [Delete a discussion comment](https://docs.github.com/rest/teams/discussion-comments#delete-a-discussion-comment) endpoint.  Deletes a comment on a team discussion.  OAuth app tokens and personal access tokens (classic) need the `write:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
discussion_number = 56 # Integer | The number that identifies the discussion.
comment_number = 56 # Integer | The number that identifies the comment.

begin
  # Delete a discussion comment (Legacy)
  api_instance.teams_delete_discussion_comment_legacy(team_id, discussion_number, comment_number)
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_delete_discussion_comment_legacy: #{e}"
end
```

#### Using the teams_delete_discussion_comment_legacy_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> teams_delete_discussion_comment_legacy_with_http_info(team_id, discussion_number, comment_number)

```ruby
begin
  # Delete a discussion comment (Legacy)
  data, status_code, headers = api_instance.teams_delete_discussion_comment_legacy_with_http_info(team_id, discussion_number, comment_number)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_delete_discussion_comment_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **comment_number** | **Integer** | The number that identifies the comment. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## teams_delete_discussion_in_org

> teams_delete_discussion_in_org(org, team_slug, discussion_number)

Delete a discussion

Delete a discussion from a team's page.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `DELETE /organizations/{org_id}/team/{team_id}/discussions/{discussion_number}`.  OAuth app tokens and personal access tokens (classic) need the `write:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
discussion_number = 56 # Integer | The number that identifies the discussion.

begin
  # Delete a discussion
  api_instance.teams_delete_discussion_in_org(org, team_slug, discussion_number)
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_delete_discussion_in_org: #{e}"
end
```

#### Using the teams_delete_discussion_in_org_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> teams_delete_discussion_in_org_with_http_info(org, team_slug, discussion_number)

```ruby
begin
  # Delete a discussion
  data, status_code, headers = api_instance.teams_delete_discussion_in_org_with_http_info(org, team_slug, discussion_number)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_delete_discussion_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## teams_delete_discussion_legacy

> teams_delete_discussion_legacy(team_id, discussion_number)

Delete a discussion (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [`Delete a discussion`](https://docs.github.com/rest/teams/discussions#delete-a-discussion) endpoint.  Delete a discussion from a team's page.  OAuth app tokens and personal access tokens (classic) need the `write:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
discussion_number = 56 # Integer | The number that identifies the discussion.

begin
  # Delete a discussion (Legacy)
  api_instance.teams_delete_discussion_legacy(team_id, discussion_number)
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_delete_discussion_legacy: #{e}"
end
```

#### Using the teams_delete_discussion_legacy_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> teams_delete_discussion_legacy_with_http_info(team_id, discussion_number)

```ruby
begin
  # Delete a discussion (Legacy)
  data, status_code, headers = api_instance.teams_delete_discussion_legacy_with_http_info(team_id, discussion_number)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_delete_discussion_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## teams_delete_in_org

> teams_delete_in_org(org, team_slug)

Delete a team

To delete a team, the authenticated user must be an organization owner or team maintainer.  If you are an organization owner, deleting a parent team will delete all of its child teams as well.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `DELETE /organizations/{org_id}/team/{team_id}`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.

begin
  # Delete a team
  api_instance.teams_delete_in_org(org, team_slug)
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_delete_in_org: #{e}"
end
```

#### Using the teams_delete_in_org_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> teams_delete_in_org_with_http_info(org, team_slug)

```ruby
begin
  # Delete a team
  data, status_code, headers = api_instance.teams_delete_in_org_with_http_info(org, team_slug)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_delete_in_org_with_http_info: #{e}"
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


## teams_delete_legacy

> teams_delete_legacy(team_id)

Delete a team (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [Delete a team](https://docs.github.com/rest/teams/teams#delete-a-team) endpoint.  To delete a team, the authenticated user must be an organization owner or team maintainer.  If you are an organization owner, deleting a parent team will delete all of its child teams as well.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.

begin
  # Delete a team (Legacy)
  api_instance.teams_delete_legacy(team_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_delete_legacy: #{e}"
end
```

#### Using the teams_delete_legacy_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> teams_delete_legacy_with_http_info(team_id)

```ruby
begin
  # Delete a team (Legacy)
  data, status_code, headers = api_instance.teams_delete_legacy_with_http_info(team_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_delete_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_get_by_name

> <TeamFull> teams_get_by_name(org, team_slug)

Get a team by name

Gets a team using the team's `slug`. To create the `slug`, GitHub replaces special characters in the `name` string, changes all words to lowercase, and replaces spaces with a `-` separator. For example, `\"My TEam Näme\"` would become `my-team-name`.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `GET /organizations/{org_id}/team/{team_id}`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.

begin
  # Get a team by name
  result = api_instance.teams_get_by_name(org, team_slug)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_get_by_name: #{e}"
end
```

#### Using the teams_get_by_name_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamFull>, Integer, Hash)> teams_get_by_name_with_http_info(org, team_slug)

```ruby
begin
  # Get a team by name
  data, status_code, headers = api_instance.teams_get_by_name_with_http_info(org, team_slug)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamFull>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_get_by_name_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |

### Return type

[**TeamFull**](TeamFull.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_get_discussion_comment_in_org

> <TeamDiscussionComment> teams_get_discussion_comment_in_org(org, team_slug, discussion_number, comment_number)

Get a discussion comment

Get a specific comment on a team discussion.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `GET /organizations/{org_id}/team/{team_id}/discussions/{discussion_number}/comments/{comment_number}`.  OAuth app tokens and personal access tokens (classic) need the `read:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
discussion_number = 56 # Integer | The number that identifies the discussion.
comment_number = 56 # Integer | The number that identifies the comment.

begin
  # Get a discussion comment
  result = api_instance.teams_get_discussion_comment_in_org(org, team_slug, discussion_number, comment_number)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_get_discussion_comment_in_org: #{e}"
end
```

#### Using the teams_get_discussion_comment_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamDiscussionComment>, Integer, Hash)> teams_get_discussion_comment_in_org_with_http_info(org, team_slug, discussion_number, comment_number)

```ruby
begin
  # Get a discussion comment
  data, status_code, headers = api_instance.teams_get_discussion_comment_in_org_with_http_info(org, team_slug, discussion_number, comment_number)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamDiscussionComment>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_get_discussion_comment_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **comment_number** | **Integer** | The number that identifies the comment. |  |

### Return type

[**TeamDiscussionComment**](TeamDiscussionComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_get_discussion_comment_legacy

> <TeamDiscussionComment> teams_get_discussion_comment_legacy(team_id, discussion_number, comment_number)

Get a discussion comment (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [Get a discussion comment](https://docs.github.com/rest/teams/discussion-comments#get-a-discussion-comment) endpoint.  Get a specific comment on a team discussion.  OAuth app tokens and personal access tokens (classic) need the `read:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
discussion_number = 56 # Integer | The number that identifies the discussion.
comment_number = 56 # Integer | The number that identifies the comment.

begin
  # Get a discussion comment (Legacy)
  result = api_instance.teams_get_discussion_comment_legacy(team_id, discussion_number, comment_number)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_get_discussion_comment_legacy: #{e}"
end
```

#### Using the teams_get_discussion_comment_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamDiscussionComment>, Integer, Hash)> teams_get_discussion_comment_legacy_with_http_info(team_id, discussion_number, comment_number)

```ruby
begin
  # Get a discussion comment (Legacy)
  data, status_code, headers = api_instance.teams_get_discussion_comment_legacy_with_http_info(team_id, discussion_number, comment_number)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamDiscussionComment>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_get_discussion_comment_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **comment_number** | **Integer** | The number that identifies the comment. |  |

### Return type

[**TeamDiscussionComment**](TeamDiscussionComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_get_discussion_in_org

> <TeamDiscussion> teams_get_discussion_in_org(org, team_slug, discussion_number)

Get a discussion

Get a specific discussion on a team's page.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `GET /organizations/{org_id}/team/{team_id}/discussions/{discussion_number}`.  OAuth app tokens and personal access tokens (classic) need the `read:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
discussion_number = 56 # Integer | The number that identifies the discussion.

begin
  # Get a discussion
  result = api_instance.teams_get_discussion_in_org(org, team_slug, discussion_number)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_get_discussion_in_org: #{e}"
end
```

#### Using the teams_get_discussion_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamDiscussion>, Integer, Hash)> teams_get_discussion_in_org_with_http_info(org, team_slug, discussion_number)

```ruby
begin
  # Get a discussion
  data, status_code, headers = api_instance.teams_get_discussion_in_org_with_http_info(org, team_slug, discussion_number)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamDiscussion>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_get_discussion_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |

### Return type

[**TeamDiscussion**](TeamDiscussion.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_get_discussion_legacy

> <TeamDiscussion> teams_get_discussion_legacy(team_id, discussion_number)

Get a discussion (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [Get a discussion](https://docs.github.com/rest/teams/discussions#get-a-discussion) endpoint.  Get a specific discussion on a team's page.  OAuth app tokens and personal access tokens (classic) need the `read:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
discussion_number = 56 # Integer | The number that identifies the discussion.

begin
  # Get a discussion (Legacy)
  result = api_instance.teams_get_discussion_legacy(team_id, discussion_number)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_get_discussion_legacy: #{e}"
end
```

#### Using the teams_get_discussion_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamDiscussion>, Integer, Hash)> teams_get_discussion_legacy_with_http_info(team_id, discussion_number)

```ruby
begin
  # Get a discussion (Legacy)
  data, status_code, headers = api_instance.teams_get_discussion_legacy_with_http_info(team_id, discussion_number)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamDiscussion>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_get_discussion_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |

### Return type

[**TeamDiscussion**](TeamDiscussion.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_get_legacy

> <TeamFull> teams_get_legacy(team_id)

Get a team (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the [Get a team by name](https://docs.github.com/rest/teams/teams#get-a-team-by-name) endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.

begin
  # Get a team (Legacy)
  result = api_instance.teams_get_legacy(team_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_get_legacy: #{e}"
end
```

#### Using the teams_get_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamFull>, Integer, Hash)> teams_get_legacy_with_http_info(team_id)

```ruby
begin
  # Get a team (Legacy)
  data, status_code, headers = api_instance.teams_get_legacy_with_http_info(team_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamFull>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_get_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |

### Return type

[**TeamFull**](TeamFull.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_get_member_legacy

> teams_get_member_legacy(team_id, username)

Get team member (Legacy)

The \"Get team member\" endpoint (described below) is deprecated.  We recommend using the [Get team membership for a user](https://docs.github.com/rest/teams/members#get-team-membership-for-a-user) endpoint instead. It allows you to get both active and pending memberships.  To list members in a team, the team must be visible to the authenticated user.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Get team member (Legacy)
  api_instance.teams_get_member_legacy(team_id, username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_get_member_legacy: #{e}"
end
```

#### Using the teams_get_member_legacy_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> teams_get_member_legacy_with_http_info(team_id, username)

```ruby
begin
  # Get team member (Legacy)
  data, status_code, headers = api_instance.teams_get_member_legacy_with_http_info(team_id, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_get_member_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## teams_get_membership_for_user_in_org

> <TeamMembership> teams_get_membership_for_user_in_org(org, team_slug, username)

Get team membership for a user

Team members will include the members of child teams.  To get a user's membership with a team, the team must be visible to the authenticated user.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `GET /organizations/{org_id}/team/{team_id}/memberships/{username}`.  **Note:** The response contains the `state` of the membership and the member's `role`.  The `role` for organization owners is set to `maintainer`. For more information about `maintainer` roles, see [Create a team](https://docs.github.com/rest/teams/teams#create-a-team).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Get team membership for a user
  result = api_instance.teams_get_membership_for_user_in_org(org, team_slug, username)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_get_membership_for_user_in_org: #{e}"
end
```

#### Using the teams_get_membership_for_user_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamMembership>, Integer, Hash)> teams_get_membership_for_user_in_org_with_http_info(org, team_slug, username)

```ruby
begin
  # Get team membership for a user
  data, status_code, headers = api_instance.teams_get_membership_for_user_in_org_with_http_info(org, team_slug, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamMembership>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_get_membership_for_user_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

[**TeamMembership**](TeamMembership.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_get_membership_for_user_legacy

> <TeamMembership> teams_get_membership_for_user_legacy(team_id, username)

Get team membership for a user (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [Get team membership for a user](https://docs.github.com/rest/teams/members#get-team-membership-for-a-user) endpoint.  Team members will include the members of child teams.  To get a user's membership with a team, the team must be visible to the authenticated user.  **Note:** The response contains the `state` of the membership and the member's `role`.  The `role` for organization owners is set to `maintainer`. For more information about `maintainer` roles, see [Create a team](https://docs.github.com/rest/teams/teams#create-a-team).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Get team membership for a user (Legacy)
  result = api_instance.teams_get_membership_for_user_legacy(team_id, username)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_get_membership_for_user_legacy: #{e}"
end
```

#### Using the teams_get_membership_for_user_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamMembership>, Integer, Hash)> teams_get_membership_for_user_legacy_with_http_info(team_id, username)

```ruby
begin
  # Get team membership for a user (Legacy)
  data, status_code, headers = api_instance.teams_get_membership_for_user_legacy_with_http_info(team_id, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamMembership>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_get_membership_for_user_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

[**TeamMembership**](TeamMembership.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_list

> <Array<Team>> teams_list(org, opts)

List teams

Lists all teams in an organization that are visible to the authenticated user.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List teams
  result = api_instance.teams_list(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list: #{e}"
end
```

#### Using the teams_list_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Team>>, Integer, Hash)> teams_list_with_http_info(org, opts)

```ruby
begin
  # List teams
  data, status_code, headers = api_instance.teams_list_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Team>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Team&gt;**](Team.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_list_child_in_org

> <Array<Team>> teams_list_child_in_org(org, team_slug, opts)

List child teams

Lists the child teams of the team specified by `{team_slug}`.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `GET /organizations/{org_id}/team/{team_id}/teams`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List child teams
  result = api_instance.teams_list_child_in_org(org, team_slug, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_child_in_org: #{e}"
end
```

#### Using the teams_list_child_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Team>>, Integer, Hash)> teams_list_child_in_org_with_http_info(org, team_slug, opts)

```ruby
begin
  # List child teams
  data, status_code, headers = api_instance.teams_list_child_in_org_with_http_info(org, team_slug, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Team>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_child_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Team&gt;**](Team.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_list_child_legacy

> <Array<Team>> teams_list_child_legacy(team_id, opts)

List child teams (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [`List child teams`](https://docs.github.com/rest/teams/teams#list-child-teams) endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List child teams (Legacy)
  result = api_instance.teams_list_child_legacy(team_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_child_legacy: #{e}"
end
```

#### Using the teams_list_child_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Team>>, Integer, Hash)> teams_list_child_legacy_with_http_info(team_id, opts)

```ruby
begin
  # List child teams (Legacy)
  data, status_code, headers = api_instance.teams_list_child_legacy_with_http_info(team_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Team>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_child_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Team&gt;**](Team.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_list_discussion_comments_in_org

> <Array<TeamDiscussionComment>> teams_list_discussion_comments_in_org(org, team_slug, discussion_number, opts)

List discussion comments

List all comments on a team discussion.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `GET /organizations/{org_id}/team/{team_id}/discussions/{discussion_number}/comments`.  OAuth app tokens and personal access tokens (classic) need the `read:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
discussion_number = 56 # Integer | The number that identifies the discussion.
opts = {
  direction: 'asc', # String | The direction to sort the results by.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List discussion comments
  result = api_instance.teams_list_discussion_comments_in_org(org, team_slug, discussion_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_discussion_comments_in_org: #{e}"
end
```

#### Using the teams_list_discussion_comments_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<TeamDiscussionComment>>, Integer, Hash)> teams_list_discussion_comments_in_org_with_http_info(org, team_slug, discussion_number, opts)

```ruby
begin
  # List discussion comments
  data, status_code, headers = api_instance.teams_list_discussion_comments_in_org_with_http_info(org, team_slug, discussion_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<TeamDiscussionComment>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_discussion_comments_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;TeamDiscussionComment&gt;**](TeamDiscussionComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_list_discussion_comments_legacy

> <Array<TeamDiscussionComment>> teams_list_discussion_comments_legacy(team_id, discussion_number, opts)

List discussion comments (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [List discussion comments](https://docs.github.com/rest/teams/discussion-comments#list-discussion-comments) endpoint.  List all comments on a team discussion.  OAuth app tokens and personal access tokens (classic) need the `read:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
discussion_number = 56 # Integer | The number that identifies the discussion.
opts = {
  direction: 'asc', # String | The direction to sort the results by.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List discussion comments (Legacy)
  result = api_instance.teams_list_discussion_comments_legacy(team_id, discussion_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_discussion_comments_legacy: #{e}"
end
```

#### Using the teams_list_discussion_comments_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<TeamDiscussionComment>>, Integer, Hash)> teams_list_discussion_comments_legacy_with_http_info(team_id, discussion_number, opts)

```ruby
begin
  # List discussion comments (Legacy)
  data, status_code, headers = api_instance.teams_list_discussion_comments_legacy_with_http_info(team_id, discussion_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<TeamDiscussionComment>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_discussion_comments_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;TeamDiscussionComment&gt;**](TeamDiscussionComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_list_discussions_in_org

> <Array<TeamDiscussion>> teams_list_discussions_in_org(org, team_slug, opts)

List discussions

List all discussions on a team's page.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `GET /organizations/{org_id}/team/{team_id}/discussions`.  OAuth app tokens and personal access tokens (classic) need the `read:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
opts = {
  direction: 'asc', # String | The direction to sort the results by.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  pinned: 'pinned_example' # String | Pinned discussions only filter
}

begin
  # List discussions
  result = api_instance.teams_list_discussions_in_org(org, team_slug, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_discussions_in_org: #{e}"
end
```

#### Using the teams_list_discussions_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<TeamDiscussion>>, Integer, Hash)> teams_list_discussions_in_org_with_http_info(org, team_slug, opts)

```ruby
begin
  # List discussions
  data, status_code, headers = api_instance.teams_list_discussions_in_org_with_http_info(org, team_slug, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<TeamDiscussion>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_discussions_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **pinned** | **String** | Pinned discussions only filter | [optional] |

### Return type

[**Array&lt;TeamDiscussion&gt;**](TeamDiscussion.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_list_discussions_legacy

> <Array<TeamDiscussion>> teams_list_discussions_legacy(team_id, opts)

List discussions (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [`List discussions`](https://docs.github.com/rest/teams/discussions#list-discussions) endpoint.  List all discussions on a team's page.  OAuth app tokens and personal access tokens (classic) need the `read:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
opts = {
  direction: 'asc', # String | The direction to sort the results by.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List discussions (Legacy)
  result = api_instance.teams_list_discussions_legacy(team_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_discussions_legacy: #{e}"
end
```

#### Using the teams_list_discussions_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<TeamDiscussion>>, Integer, Hash)> teams_list_discussions_legacy_with_http_info(team_id, opts)

```ruby
begin
  # List discussions (Legacy)
  data, status_code, headers = api_instance.teams_list_discussions_legacy_with_http_info(team_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<TeamDiscussion>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_discussions_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;TeamDiscussion&gt;**](TeamDiscussion.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_list_for_authenticated_user

> <Array<TeamFull>> teams_list_for_authenticated_user(opts)

List teams for the authenticated user

List all of the teams across all of the organizations to which the authenticated user belongs.  OAuth app tokens and personal access tokens (classic) need the `user`, `repo`, or `read:org` scope to use this endpoint.  When using a fine-grained personal access token, the resource owner of the token must be a single organization, and the response will only include the teams from that organization.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List teams for the authenticated user
  result = api_instance.teams_list_for_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_for_authenticated_user: #{e}"
end
```

#### Using the teams_list_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<TeamFull>>, Integer, Hash)> teams_list_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # List teams for the authenticated user
  data, status_code, headers = api_instance.teams_list_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<TeamFull>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;TeamFull&gt;**](TeamFull.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_list_members_in_org

> <Array<SimpleUser>> teams_list_members_in_org(org, team_slug, opts)

List team members

Team members will include the members of child teams.  To list members in a team, the team must be visible to the authenticated user.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
opts = {
  role: 'member', # String | Filters members returned by their role in the team.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List team members
  result = api_instance.teams_list_members_in_org(org, team_slug, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_members_in_org: #{e}"
end
```

#### Using the teams_list_members_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SimpleUser>>, Integer, Hash)> teams_list_members_in_org_with_http_info(org, team_slug, opts)

```ruby
begin
  # List team members
  data, status_code, headers = api_instance.teams_list_members_in_org_with_http_info(org, team_slug, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SimpleUser>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_members_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **role** | **String** | Filters members returned by their role in the team. | [optional][default to &#39;all&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;SimpleUser&gt;**](SimpleUser.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_list_members_legacy

> <Array<SimpleUser>> teams_list_members_legacy(team_id, opts)

List team members (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [`List team members`](https://docs.github.com/rest/teams/members#list-team-members) endpoint.  Team members will include the members of child teams.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
opts = {
  role: 'member', # String | Filters members returned by their role in the team.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List team members (Legacy)
  result = api_instance.teams_list_members_legacy(team_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_members_legacy: #{e}"
end
```

#### Using the teams_list_members_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SimpleUser>>, Integer, Hash)> teams_list_members_legacy_with_http_info(team_id, opts)

```ruby
begin
  # List team members (Legacy)
  data, status_code, headers = api_instance.teams_list_members_legacy_with_http_info(team_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SimpleUser>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_members_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **role** | **String** | Filters members returned by their role in the team. | [optional][default to &#39;all&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;SimpleUser&gt;**](SimpleUser.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_list_pending_invitations_in_org

> <Array<OrganizationInvitation>> teams_list_pending_invitations_in_org(org, team_slug, opts)

List pending team invitations

The return hash contains a `role` field which refers to the Organization Invitation role and will be one of the following values: `direct_member`, `admin`, `billing_manager`, `hiring_manager`, or `reinstate`. If the invitee is not a GitHub member, the `login` field in the return hash will be `null`.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `GET /organizations/{org_id}/team/{team_id}/invitations`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List pending team invitations
  result = api_instance.teams_list_pending_invitations_in_org(org, team_slug, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_pending_invitations_in_org: #{e}"
end
```

#### Using the teams_list_pending_invitations_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<OrganizationInvitation>>, Integer, Hash)> teams_list_pending_invitations_in_org_with_http_info(org, team_slug, opts)

```ruby
begin
  # List pending team invitations
  data, status_code, headers = api_instance.teams_list_pending_invitations_in_org_with_http_info(org, team_slug, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<OrganizationInvitation>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_pending_invitations_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;OrganizationInvitation&gt;**](OrganizationInvitation.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_list_pending_invitations_legacy

> <Array<OrganizationInvitation>> teams_list_pending_invitations_legacy(team_id, opts)

List pending team invitations (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [`List pending team invitations`](https://docs.github.com/rest/teams/members#list-pending-team-invitations) endpoint.  The return hash contains a `role` field which refers to the Organization Invitation role and will be one of the following values: `direct_member`, `admin`, `billing_manager`, `hiring_manager`, or `reinstate`. If the invitee is not a GitHub member, the `login` field in the return hash will be `null`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List pending team invitations (Legacy)
  result = api_instance.teams_list_pending_invitations_legacy(team_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_pending_invitations_legacy: #{e}"
end
```

#### Using the teams_list_pending_invitations_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<OrganizationInvitation>>, Integer, Hash)> teams_list_pending_invitations_legacy_with_http_info(team_id, opts)

```ruby
begin
  # List pending team invitations (Legacy)
  data, status_code, headers = api_instance.teams_list_pending_invitations_legacy_with_http_info(team_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<OrganizationInvitation>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_pending_invitations_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;OrganizationInvitation&gt;**](OrganizationInvitation.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_list_projects_in_org

> <Array<TeamProject>> teams_list_projects_in_org(org, team_slug, opts)

List team projects

Lists the organization projects for a team.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `GET /organizations/{org_id}/team/{team_id}/projects`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List team projects
  result = api_instance.teams_list_projects_in_org(org, team_slug, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_projects_in_org: #{e}"
end
```

#### Using the teams_list_projects_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<TeamProject>>, Integer, Hash)> teams_list_projects_in_org_with_http_info(org, team_slug, opts)

```ruby
begin
  # List team projects
  data, status_code, headers = api_instance.teams_list_projects_in_org_with_http_info(org, team_slug, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<TeamProject>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_projects_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;TeamProject&gt;**](TeamProject.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_list_projects_legacy

> <Array<TeamProject>> teams_list_projects_legacy(team_id, opts)

List team projects (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [`List team projects`](https://docs.github.com/rest/teams/teams#list-team-projects) endpoint.  Lists the organization projects for a team.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List team projects (Legacy)
  result = api_instance.teams_list_projects_legacy(team_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_projects_legacy: #{e}"
end
```

#### Using the teams_list_projects_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<TeamProject>>, Integer, Hash)> teams_list_projects_legacy_with_http_info(team_id, opts)

```ruby
begin
  # List team projects (Legacy)
  data, status_code, headers = api_instance.teams_list_projects_legacy_with_http_info(team_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<TeamProject>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_projects_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;TeamProject&gt;**](TeamProject.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_list_repos_in_org

> <Array<MinimalRepository>> teams_list_repos_in_org(org, team_slug, opts)

List team repositories

Lists a team's repositories visible to the authenticated user.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `GET /organizations/{org_id}/team/{team_id}/repos`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List team repositories
  result = api_instance.teams_list_repos_in_org(org, team_slug, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_repos_in_org: #{e}"
end
```

#### Using the teams_list_repos_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<MinimalRepository>>, Integer, Hash)> teams_list_repos_in_org_with_http_info(org, team_slug, opts)

```ruby
begin
  # List team repositories
  data, status_code, headers = api_instance.teams_list_repos_in_org_with_http_info(org, team_slug, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<MinimalRepository>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_repos_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;MinimalRepository&gt;**](MinimalRepository.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_list_repos_legacy

> <Array<MinimalRepository>> teams_list_repos_legacy(team_id, opts)

List team repositories (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [List team repositories](https://docs.github.com/rest/teams/teams#list-team-repositories) endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List team repositories (Legacy)
  result = api_instance.teams_list_repos_legacy(team_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_repos_legacy: #{e}"
end
```

#### Using the teams_list_repos_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<MinimalRepository>>, Integer, Hash)> teams_list_repos_legacy_with_http_info(team_id, opts)

```ruby
begin
  # List team repositories (Legacy)
  data, status_code, headers = api_instance.teams_list_repos_legacy_with_http_info(team_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<MinimalRepository>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_list_repos_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;MinimalRepository&gt;**](MinimalRepository.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_remove_member_legacy

> teams_remove_member_legacy(team_id, username)

Remove team member (Legacy)

The \"Remove team member\" endpoint (described below) is deprecated.  We recommend using the [Remove team membership for a user](https://docs.github.com/rest/teams/members#remove-team-membership-for-a-user) endpoint instead. It allows you to remove both active and pending memberships.  Team synchronization is available for organizations using GitHub Enterprise Cloud. For more information, see [GitHub's products](https://docs.github.com/github/getting-started-with-github/githubs-products) in the GitHub Help documentation.  To remove a team member, the authenticated user must have 'admin' permissions to the team or be an owner of the org that the team is associated with. Removing a team member does not delete the user, it just removes them from the team.  **Note:** When you have team synchronization set up for a team with your organization's identity provider (IdP), you will see an error if you attempt to use the API for making changes to the team's membership. If you have access to manage group membership in your IdP, you can manage GitHub team membership through your identity provider, which automatically adds and removes team members in an organization. For more information, see \"[Synchronizing teams between your identity provider and GitHub](https://docs.github.com/articles/synchronizing-teams-between-your-identity-provider-and-github/).\"

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Remove team member (Legacy)
  api_instance.teams_remove_member_legacy(team_id, username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_remove_member_legacy: #{e}"
end
```

#### Using the teams_remove_member_legacy_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> teams_remove_member_legacy_with_http_info(team_id, username)

```ruby
begin
  # Remove team member (Legacy)
  data, status_code, headers = api_instance.teams_remove_member_legacy_with_http_info(team_id, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_remove_member_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## teams_remove_membership_for_user_in_org

> teams_remove_membership_for_user_in_org(org, team_slug, username)

Remove team membership for a user

To remove a membership between a user and a team, the authenticated user must have 'admin' permissions to the team or be an owner of the organization that the team is associated with. Removing team membership does not delete the user, it just removes their membership from the team.  Team synchronization is available for organizations using GitHub Enterprise Cloud. For more information, see [GitHub's products](https://docs.github.com/github/getting-started-with-github/githubs-products) in the GitHub Help documentation.  **Note:** When you have team synchronization set up for a team with your organization's identity provider (IdP), you will see an error if you attempt to use the API for making changes to the team's membership. If you have access to manage group membership in your IdP, you can manage GitHub team membership through your identity provider, which automatically adds and removes team members in an organization. For more information, see \"[Synchronizing teams between your identity provider and GitHub](https://docs.github.com/articles/synchronizing-teams-between-your-identity-provider-and-github/).\"  **Note:** You can also specify a team by `org_id` and `team_id` using the route `DELETE /organizations/{org_id}/team/{team_id}/memberships/{username}`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Remove team membership for a user
  api_instance.teams_remove_membership_for_user_in_org(org, team_slug, username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_remove_membership_for_user_in_org: #{e}"
end
```

#### Using the teams_remove_membership_for_user_in_org_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> teams_remove_membership_for_user_in_org_with_http_info(org, team_slug, username)

```ruby
begin
  # Remove team membership for a user
  data, status_code, headers = api_instance.teams_remove_membership_for_user_in_org_with_http_info(org, team_slug, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_remove_membership_for_user_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## teams_remove_membership_for_user_legacy

> teams_remove_membership_for_user_legacy(team_id, username)

Remove team membership for a user (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [Remove team membership for a user](https://docs.github.com/rest/teams/members#remove-team-membership-for-a-user) endpoint.  Team synchronization is available for organizations using GitHub Enterprise Cloud. For more information, see [GitHub's products](https://docs.github.com/github/getting-started-with-github/githubs-products) in the GitHub Help documentation.  To remove a membership between a user and a team, the authenticated user must have 'admin' permissions to the team or be an owner of the organization that the team is associated with. Removing team membership does not delete the user, it just removes their membership from the team.  **Note:** When you have team synchronization set up for a team with your organization's identity provider (IdP), you will see an error if you attempt to use the API for making changes to the team's membership. If you have access to manage group membership in your IdP, you can manage GitHub team membership through your identity provider, which automatically adds and removes team members in an organization. For more information, see \"[Synchronizing teams between your identity provider and GitHub](https://docs.github.com/articles/synchronizing-teams-between-your-identity-provider-and-github/).\"

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Remove team membership for a user (Legacy)
  api_instance.teams_remove_membership_for_user_legacy(team_id, username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_remove_membership_for_user_legacy: #{e}"
end
```

#### Using the teams_remove_membership_for_user_legacy_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> teams_remove_membership_for_user_legacy_with_http_info(team_id, username)

```ruby
begin
  # Remove team membership for a user (Legacy)
  data, status_code, headers = api_instance.teams_remove_membership_for_user_legacy_with_http_info(team_id, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_remove_membership_for_user_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## teams_remove_project_in_org

> teams_remove_project_in_org(org, team_slug, project_id)

Remove a project from a team

Removes an organization project from a team. An organization owner or a team maintainer can remove any project from the team. To remove a project from a team as an organization member, the authenticated user must have `read` access to both the team and project, or `admin` access to the team or project. This endpoint removes the project from the team, but does not delete the project.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `DELETE /organizations/{org_id}/team/{team_id}/projects/{project_id}`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
project_id = 56 # Integer | The unique identifier of the project.

begin
  # Remove a project from a team
  api_instance.teams_remove_project_in_org(org, team_slug, project_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_remove_project_in_org: #{e}"
end
```

#### Using the teams_remove_project_in_org_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> teams_remove_project_in_org_with_http_info(org, team_slug, project_id)

```ruby
begin
  # Remove a project from a team
  data, status_code, headers = api_instance.teams_remove_project_in_org_with_http_info(org, team_slug, project_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_remove_project_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **project_id** | **Integer** | The unique identifier of the project. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## teams_remove_project_legacy

> teams_remove_project_legacy(team_id, project_id)

Remove a project from a team (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [Remove a project from a team](https://docs.github.com/rest/teams/teams#remove-a-project-from-a-team) endpoint.  Removes an organization project from a team. An organization owner or a team maintainer can remove any project from the team. To remove a project from a team as an organization member, the authenticated user must have `read` access to both the team and project, or `admin` access to the team or project. **Note:** This endpoint removes the project from the team, but does not delete it.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
project_id = 56 # Integer | The unique identifier of the project.

begin
  # Remove a project from a team (Legacy)
  api_instance.teams_remove_project_legacy(team_id, project_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_remove_project_legacy: #{e}"
end
```

#### Using the teams_remove_project_legacy_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> teams_remove_project_legacy_with_http_info(team_id, project_id)

```ruby
begin
  # Remove a project from a team (Legacy)
  data, status_code, headers = api_instance.teams_remove_project_legacy_with_http_info(team_id, project_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_remove_project_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **project_id** | **Integer** | The unique identifier of the project. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## teams_remove_repo_in_org

> teams_remove_repo_in_org(org, team_slug, owner, repo)

Remove a repository from a team

If the authenticated user is an organization owner or a team maintainer, they can remove any repositories from the team. To remove a repository from a team as an organization member, the authenticated user must have admin access to the repository and must be able to see the team. This does not delete the repository, it just removes it from the team.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `DELETE /organizations/{org_id}/team/{team_id}/repos/{owner}/{repo}`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Remove a repository from a team
  api_instance.teams_remove_repo_in_org(org, team_slug, owner, repo)
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_remove_repo_in_org: #{e}"
end
```

#### Using the teams_remove_repo_in_org_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> teams_remove_repo_in_org_with_http_info(org, team_slug, owner, repo)

```ruby
begin
  # Remove a repository from a team
  data, status_code, headers = api_instance.teams_remove_repo_in_org_with_http_info(org, team_slug, owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_remove_repo_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## teams_remove_repo_legacy

> teams_remove_repo_legacy(team_id, owner, repo)

Remove a repository from a team (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [Remove a repository from a team](https://docs.github.com/rest/teams/teams#remove-a-repository-from-a-team) endpoint.  If the authenticated user is an organization owner or a team maintainer, they can remove any repositories from the team. To remove a repository from a team as an organization member, the authenticated user must have admin access to the repository and must be able to see the team. NOTE: This does not delete the repository, it just removes it from the team.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Remove a repository from a team (Legacy)
  api_instance.teams_remove_repo_legacy(team_id, owner, repo)
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_remove_repo_legacy: #{e}"
end
```

#### Using the teams_remove_repo_legacy_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> teams_remove_repo_legacy_with_http_info(team_id, owner, repo)

```ruby
begin
  # Remove a repository from a team (Legacy)
  data, status_code, headers = api_instance.teams_remove_repo_legacy_with_http_info(team_id, owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_remove_repo_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## teams_update_discussion_comment_in_org

> <TeamDiscussionComment> teams_update_discussion_comment_in_org(org, team_slug, discussion_number, comment_number, teams_create_discussion_comment_in_org_request)

Update a discussion comment

Edits the body text of a discussion comment.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `PATCH /organizations/{org_id}/team/{team_id}/discussions/{discussion_number}/comments/{comment_number}`.  OAuth app tokens and personal access tokens (classic) need the `write:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
discussion_number = 56 # Integer | The number that identifies the discussion.
comment_number = 56 # Integer | The number that identifies the comment.
teams_create_discussion_comment_in_org_request = OpenapiClient::TeamsCreateDiscussionCommentInOrgRequest.new({body: 'body_example'}) # TeamsCreateDiscussionCommentInOrgRequest | 

begin
  # Update a discussion comment
  result = api_instance.teams_update_discussion_comment_in_org(org, team_slug, discussion_number, comment_number, teams_create_discussion_comment_in_org_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_update_discussion_comment_in_org: #{e}"
end
```

#### Using the teams_update_discussion_comment_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamDiscussionComment>, Integer, Hash)> teams_update_discussion_comment_in_org_with_http_info(org, team_slug, discussion_number, comment_number, teams_create_discussion_comment_in_org_request)

```ruby
begin
  # Update a discussion comment
  data, status_code, headers = api_instance.teams_update_discussion_comment_in_org_with_http_info(org, team_slug, discussion_number, comment_number, teams_create_discussion_comment_in_org_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamDiscussionComment>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_update_discussion_comment_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **comment_number** | **Integer** | The number that identifies the comment. |  |
| **teams_create_discussion_comment_in_org_request** | [**TeamsCreateDiscussionCommentInOrgRequest**](TeamsCreateDiscussionCommentInOrgRequest.md) |  |  |

### Return type

[**TeamDiscussionComment**](TeamDiscussionComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## teams_update_discussion_comment_legacy

> <TeamDiscussionComment> teams_update_discussion_comment_legacy(team_id, discussion_number, comment_number, teams_create_discussion_comment_in_org_request)

Update a discussion comment (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [Update a discussion comment](https://docs.github.com/rest/teams/discussion-comments#update-a-discussion-comment) endpoint.  Edits the body text of a discussion comment.  OAuth app tokens and personal access tokens (classic) need the `write:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
discussion_number = 56 # Integer | The number that identifies the discussion.
comment_number = 56 # Integer | The number that identifies the comment.
teams_create_discussion_comment_in_org_request = OpenapiClient::TeamsCreateDiscussionCommentInOrgRequest.new({body: 'body_example'}) # TeamsCreateDiscussionCommentInOrgRequest | 

begin
  # Update a discussion comment (Legacy)
  result = api_instance.teams_update_discussion_comment_legacy(team_id, discussion_number, comment_number, teams_create_discussion_comment_in_org_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_update_discussion_comment_legacy: #{e}"
end
```

#### Using the teams_update_discussion_comment_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamDiscussionComment>, Integer, Hash)> teams_update_discussion_comment_legacy_with_http_info(team_id, discussion_number, comment_number, teams_create_discussion_comment_in_org_request)

```ruby
begin
  # Update a discussion comment (Legacy)
  data, status_code, headers = api_instance.teams_update_discussion_comment_legacy_with_http_info(team_id, discussion_number, comment_number, teams_create_discussion_comment_in_org_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamDiscussionComment>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_update_discussion_comment_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **comment_number** | **Integer** | The number that identifies the comment. |  |
| **teams_create_discussion_comment_in_org_request** | [**TeamsCreateDiscussionCommentInOrgRequest**](TeamsCreateDiscussionCommentInOrgRequest.md) |  |  |

### Return type

[**TeamDiscussionComment**](TeamDiscussionComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## teams_update_discussion_in_org

> <TeamDiscussion> teams_update_discussion_in_org(org, team_slug, discussion_number, opts)

Update a discussion

Edits the title and body text of a discussion post. Only the parameters you provide are updated.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `PATCH /organizations/{org_id}/team/{team_id}/discussions/{discussion_number}`.  OAuth app tokens and personal access tokens (classic) need the `write:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
discussion_number = 56 # Integer | The number that identifies the discussion.
opts = {
  teams_update_discussion_in_org_request: OpenapiClient::TeamsUpdateDiscussionInOrgRequest.new # TeamsUpdateDiscussionInOrgRequest | 
}

begin
  # Update a discussion
  result = api_instance.teams_update_discussion_in_org(org, team_slug, discussion_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_update_discussion_in_org: #{e}"
end
```

#### Using the teams_update_discussion_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamDiscussion>, Integer, Hash)> teams_update_discussion_in_org_with_http_info(org, team_slug, discussion_number, opts)

```ruby
begin
  # Update a discussion
  data, status_code, headers = api_instance.teams_update_discussion_in_org_with_http_info(org, team_slug, discussion_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamDiscussion>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_update_discussion_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **teams_update_discussion_in_org_request** | [**TeamsUpdateDiscussionInOrgRequest**](TeamsUpdateDiscussionInOrgRequest.md) |  | [optional] |

### Return type

[**TeamDiscussion**](TeamDiscussion.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## teams_update_discussion_legacy

> <TeamDiscussion> teams_update_discussion_legacy(team_id, discussion_number, opts)

Update a discussion (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [Update a discussion](https://docs.github.com/rest/teams/discussions#update-a-discussion) endpoint.  Edits the title and body text of a discussion post. Only the parameters you provide are updated.  OAuth app tokens and personal access tokens (classic) need the `write:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
discussion_number = 56 # Integer | The number that identifies the discussion.
opts = {
  teams_update_discussion_in_org_request: OpenapiClient::TeamsUpdateDiscussionInOrgRequest.new # TeamsUpdateDiscussionInOrgRequest | 
}

begin
  # Update a discussion (Legacy)
  result = api_instance.teams_update_discussion_legacy(team_id, discussion_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_update_discussion_legacy: #{e}"
end
```

#### Using the teams_update_discussion_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamDiscussion>, Integer, Hash)> teams_update_discussion_legacy_with_http_info(team_id, discussion_number, opts)

```ruby
begin
  # Update a discussion (Legacy)
  data, status_code, headers = api_instance.teams_update_discussion_legacy_with_http_info(team_id, discussion_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamDiscussion>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_update_discussion_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **teams_update_discussion_in_org_request** | [**TeamsUpdateDiscussionInOrgRequest**](TeamsUpdateDiscussionInOrgRequest.md) |  | [optional] |

### Return type

[**TeamDiscussion**](TeamDiscussion.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## teams_update_in_org

> <TeamFull> teams_update_in_org(org, team_slug, opts)

Update a team

To edit a team, the authenticated user must either be an organization owner or a team maintainer.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `PATCH /organizations/{org_id}/team/{team_id}`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
opts = {
  teams_update_in_org_request: OpenapiClient::TeamsUpdateInOrgRequest.new # TeamsUpdateInOrgRequest | 
}

begin
  # Update a team
  result = api_instance.teams_update_in_org(org, team_slug, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_update_in_org: #{e}"
end
```

#### Using the teams_update_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamFull>, Integer, Hash)> teams_update_in_org_with_http_info(org, team_slug, opts)

```ruby
begin
  # Update a team
  data, status_code, headers = api_instance.teams_update_in_org_with_http_info(org, team_slug, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamFull>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_update_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **teams_update_in_org_request** | [**TeamsUpdateInOrgRequest**](TeamsUpdateInOrgRequest.md) |  | [optional] |

### Return type

[**TeamFull**](TeamFull.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## teams_update_legacy

> <TeamFull> teams_update_legacy(team_id, teams_update_legacy_request)

Update a team (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [Update a team](https://docs.github.com/rest/teams/teams#update-a-team) endpoint.  To edit a team, the authenticated user must either be an organization owner or a team maintainer.  **Note:** With nested teams, the `privacy` for parent teams cannot be `secret`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::TeamsApi.new
team_id = 56 # Integer | The unique identifier of the team.
teams_update_legacy_request = OpenapiClient::TeamsUpdateLegacyRequest.new({name: 'name_example'}) # TeamsUpdateLegacyRequest | 

begin
  # Update a team (Legacy)
  result = api_instance.teams_update_legacy(team_id, teams_update_legacy_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_update_legacy: #{e}"
end
```

#### Using the teams_update_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TeamFull>, Integer, Hash)> teams_update_legacy_with_http_info(team_id, teams_update_legacy_request)

```ruby
begin
  # Update a team (Legacy)
  data, status_code, headers = api_instance.teams_update_legacy_with_http_info(team_id, teams_update_legacy_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TeamFull>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TeamsApi->teams_update_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **teams_update_legacy_request** | [**TeamsUpdateLegacyRequest**](TeamsUpdateLegacyRequest.md) |  |  |

### Return type

[**TeamFull**](TeamFull.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

