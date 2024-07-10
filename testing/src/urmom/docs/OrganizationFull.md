# OpenapiClient::OrganizationFull

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **login** | **String** |  |  |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **url** | **String** |  |  |
| **repos_url** | **String** |  |  |
| **events_url** | **String** |  |  |
| **hooks_url** | **String** |  |  |
| **issues_url** | **String** |  |  |
| **members_url** | **String** |  |  |
| **public_members_url** | **String** |  |  |
| **avatar_url** | **String** |  |  |
| **description** | **String** |  |  |
| **name** | **String** |  | [optional] |
| **company** | **String** |  | [optional] |
| **blog** | **String** |  | [optional] |
| **location** | **String** |  | [optional] |
| **email** | **String** |  | [optional] |
| **twitter_username** | **String** |  | [optional] |
| **is_verified** | **Boolean** |  | [optional] |
| **has_organization_projects** | **Boolean** |  |  |
| **has_repository_projects** | **Boolean** |  |  |
| **public_repos** | **Integer** |  |  |
| **public_gists** | **Integer** |  |  |
| **followers** | **Integer** |  |  |
| **following** | **Integer** |  |  |
| **html_url** | **String** |  |  |
| **type** | **String** |  |  |
| **total_private_repos** | **Integer** |  | [optional] |
| **owned_private_repos** | **Integer** |  | [optional] |
| **private_gists** | **Integer** |  | [optional] |
| **disk_usage** | **Integer** |  | [optional] |
| **collaborators** | **Integer** |  | [optional] |
| **billing_email** | **String** |  | [optional] |
| **plan** | [**OrganizationFullPlan**](OrganizationFullPlan.md) |  | [optional] |
| **default_repository_permission** | **String** |  | [optional] |
| **members_can_create_repositories** | **Boolean** |  | [optional] |
| **two_factor_requirement_enabled** | **Boolean** |  | [optional] |
| **members_allowed_repository_creation_type** | **String** |  | [optional] |
| **members_can_create_public_repositories** | **Boolean** |  | [optional] |
| **members_can_create_private_repositories** | **Boolean** |  | [optional] |
| **members_can_create_internal_repositories** | **Boolean** |  | [optional] |
| **members_can_create_pages** | **Boolean** |  | [optional] |
| **members_can_create_public_pages** | **Boolean** |  | [optional] |
| **members_can_create_private_pages** | **Boolean** |  | [optional] |
| **members_can_fork_private_repositories** | **Boolean** |  | [optional] |
| **web_commit_signoff_required** | **Boolean** |  | [optional] |
| **advanced_security_enabled_for_new_repositories** | **Boolean** | Whether GitHub Advanced Security is enabled for new repositories and repositories transferred to this organization.  This field is only visible to organization owners or members of a team with the security manager role. | [optional] |
| **dependabot_alerts_enabled_for_new_repositories** | **Boolean** | Whether GitHub Advanced Security is automatically enabled for new repositories and repositories transferred to this organization.  This field is only visible to organization owners or members of a team with the security manager role. | [optional] |
| **dependabot_security_updates_enabled_for_new_repositories** | **Boolean** | Whether dependabot security updates are automatically enabled for new repositories and repositories transferred to this organization.  This field is only visible to organization owners or members of a team with the security manager role. | [optional] |
| **dependency_graph_enabled_for_new_repositories** | **Boolean** | Whether dependency graph is automatically enabled for new repositories and repositories transferred to this organization.  This field is only visible to organization owners or members of a team with the security manager role. | [optional] |
| **secret_scanning_enabled_for_new_repositories** | **Boolean** | Whether secret scanning is automatically enabled for new repositories and repositories transferred to this organization.  This field is only visible to organization owners or members of a team with the security manager role. | [optional] |
| **secret_scanning_push_protection_enabled_for_new_repositories** | **Boolean** | Whether secret scanning push protection is automatically enabled for new repositories and repositories transferred to this organization.  This field is only visible to organization owners or members of a team with the security manager role. | [optional] |
| **secret_scanning_push_protection_custom_link_enabled** | **Boolean** | Whether a custom link is shown to contributors who are blocked from pushing a secret by push protection. | [optional] |
| **secret_scanning_push_protection_custom_link** | **String** | An optional URL string to display to contributors who are blocked from pushing a secret. | [optional] |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **archived_at** | **Time** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrganizationFull.new(
  login: github,
  id: 1,
  node_id: MDEyOk9yZ2FuaXphdGlvbjE&#x3D;,
  url: https://api.github.com/orgs/github,
  repos_url: https://api.github.com/orgs/github/repos,
  events_url: https://api.github.com/orgs/github/events,
  hooks_url: https://api.github.com/orgs/github/hooks,
  issues_url: https://api.github.com/orgs/github/issues,
  members_url: https://api.github.com/orgs/github/members{/member},
  public_members_url: https://api.github.com/orgs/github/public_members{/member},
  avatar_url: https://github.com/images/error/octocat_happy.gif,
  description: A great organization,
  name: github,
  company: GitHub,
  blog: https://github.com/blog,
  location: San Francisco,
  email: octocat@github.com,
  twitter_username: github,
  is_verified: true,
  has_organization_projects: true,
  has_repository_projects: true,
  public_repos: 2,
  public_gists: 1,
  followers: 20,
  following: 0,
  html_url: https://github.com/octocat,
  type: Organization,
  total_private_repos: 100,
  owned_private_repos: 100,
  private_gists: 81,
  disk_usage: 10000,
  collaborators: 8,
  billing_email: org@example.com,
  plan: null,
  default_repository_permission: null,
  members_can_create_repositories: true,
  two_factor_requirement_enabled: true,
  members_allowed_repository_creation_type: all,
  members_can_create_public_repositories: true,
  members_can_create_private_repositories: true,
  members_can_create_internal_repositories: true,
  members_can_create_pages: true,
  members_can_create_public_pages: true,
  members_can_create_private_pages: true,
  members_can_fork_private_repositories: false,
  web_commit_signoff_required: false,
  advanced_security_enabled_for_new_repositories: false,
  dependabot_alerts_enabled_for_new_repositories: false,
  dependabot_security_updates_enabled_for_new_repositories: false,
  dependency_graph_enabled_for_new_repositories: false,
  secret_scanning_enabled_for_new_repositories: false,
  secret_scanning_push_protection_enabled_for_new_repositories: false,
  secret_scanning_push_protection_custom_link_enabled: false,
  secret_scanning_push_protection_custom_link: https://github.com/test-org/test-repo/blob/main/README.md,
  created_at: 2008-01-14T04:33:35Z,
  updated_at: null,
  archived_at: null
)
```

