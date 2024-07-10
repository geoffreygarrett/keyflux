# OpenapiClient::OrgsUpdateRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **billing_email** | **String** | Billing email address. This address is not publicized. | [optional] |
| **company** | **String** | The company name. | [optional] |
| **email** | **String** | The publicly visible email address. | [optional] |
| **twitter_username** | **String** | The Twitter username of the company. | [optional] |
| **location** | **String** | The location. | [optional] |
| **name** | **String** | The shorthand name of the company. | [optional] |
| **description** | **String** | The description of the company. The maximum size is 160 characters. | [optional] |
| **has_organization_projects** | **Boolean** | Whether an organization can use organization projects. | [optional] |
| **has_repository_projects** | **Boolean** | Whether repositories that belong to the organization can use repository projects. | [optional] |
| **default_repository_permission** | **String** | Default permission level members have for organization repositories. | [optional][default to &#39;read&#39;] |
| **members_can_create_repositories** | **Boolean** | Whether of non-admin organization members can create repositories. **Note:** A parameter can override this parameter. See &#x60;members_allowed_repository_creation_type&#x60; in this table for details. | [optional][default to true] |
| **members_can_create_internal_repositories** | **Boolean** | Whether organization members can create internal repositories, which are visible to all enterprise members. You can only allow members to create internal repositories if your organization is associated with an enterprise account using GitHub Enterprise Cloud or GitHub Enterprise Server 2.20+. For more information, see \&quot;[Restricting repository creation in your organization](https://docs.github.com/github/setting-up-and-managing-organizations-and-teams/restricting-repository-creation-in-your-organization)\&quot; in the GitHub Help documentation. | [optional] |
| **members_can_create_private_repositories** | **Boolean** | Whether organization members can create private repositories, which are visible to organization members with permission. For more information, see \&quot;[Restricting repository creation in your organization](https://docs.github.com/github/setting-up-and-managing-organizations-and-teams/restricting-repository-creation-in-your-organization)\&quot; in the GitHub Help documentation. | [optional] |
| **members_can_create_public_repositories** | **Boolean** | Whether organization members can create public repositories, which are visible to anyone. For more information, see \&quot;[Restricting repository creation in your organization](https://docs.github.com/github/setting-up-and-managing-organizations-and-teams/restricting-repository-creation-in-your-organization)\&quot; in the GitHub Help documentation. | [optional] |
| **members_allowed_repository_creation_type** | **String** | Specifies which types of repositories non-admin organization members can create. &#x60;private&#x60; is only available to repositories that are part of an organization on GitHub Enterprise Cloud.  **Note:** This parameter is deprecated and will be removed in the future. Its return value ignores internal repositories. Using this parameter overrides values set in &#x60;members_can_create_repositories&#x60;. See the parameter deprecation notice in the operation description for details. | [optional] |
| **members_can_create_pages** | **Boolean** | Whether organization members can create GitHub Pages sites. Existing published sites will not be impacted. | [optional][default to true] |
| **members_can_create_public_pages** | **Boolean** | Whether organization members can create public GitHub Pages sites. Existing published sites will not be impacted. | [optional][default to true] |
| **members_can_create_private_pages** | **Boolean** | Whether organization members can create private GitHub Pages sites. Existing published sites will not be impacted. | [optional][default to true] |
| **members_can_fork_private_repositories** | **Boolean** | Whether organization members can fork private organization repositories. | [optional][default to false] |
| **web_commit_signoff_required** | **Boolean** | Whether contributors to organization repositories are required to sign off on commits they make through GitHub&#39;s web interface. | [optional][default to false] |
| **blog** | **String** |  | [optional] |
| **advanced_security_enabled_for_new_repositories** | **Boolean** | Whether GitHub Advanced Security is automatically enabled for new repositories.  To use this parameter, you must have admin permissions for the repository or be an owner or security manager for the organization that owns the repository. For more information, see \&quot;[Managing security managers in your organization](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/managing-security-managers-in-your-organization).\&quot;  You can check which security and analysis features are currently enabled by using a &#x60;GET /orgs/{org}&#x60; request. | [optional] |
| **dependabot_alerts_enabled_for_new_repositories** | **Boolean** | Whether Dependabot alerts is automatically enabled for new repositories.  To use this parameter, you must have admin permissions for the repository or be an owner or security manager for the organization that owns the repository. For more information, see \&quot;[Managing security managers in your organization](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/managing-security-managers-in-your-organization).\&quot;  You can check which security and analysis features are currently enabled by using a &#x60;GET /orgs/{org}&#x60; request. | [optional] |
| **dependabot_security_updates_enabled_for_new_repositories** | **Boolean** | Whether Dependabot security updates is automatically enabled for new repositories.  To use this parameter, you must have admin permissions for the repository or be an owner or security manager for the organization that owns the repository. For more information, see \&quot;[Managing security managers in your organization](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/managing-security-managers-in-your-organization).\&quot;  You can check which security and analysis features are currently enabled by using a &#x60;GET /orgs/{org}&#x60; request. | [optional] |
| **dependency_graph_enabled_for_new_repositories** | **Boolean** | Whether dependency graph is automatically enabled for new repositories.  To use this parameter, you must have admin permissions for the repository or be an owner or security manager for the organization that owns the repository. For more information, see \&quot;[Managing security managers in your organization](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/managing-security-managers-in-your-organization).\&quot;  You can check which security and analysis features are currently enabled by using a &#x60;GET /orgs/{org}&#x60; request. | [optional] |
| **secret_scanning_enabled_for_new_repositories** | **Boolean** | Whether secret scanning is automatically enabled for new repositories.  To use this parameter, you must have admin permissions for the repository or be an owner or security manager for the organization that owns the repository. For more information, see \&quot;[Managing security managers in your organization](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/managing-security-managers-in-your-organization).\&quot;  You can check which security and analysis features are currently enabled by using a &#x60;GET /orgs/{org}&#x60; request. | [optional] |
| **secret_scanning_push_protection_enabled_for_new_repositories** | **Boolean** | Whether secret scanning push protection is automatically enabled for new repositories.  To use this parameter, you must have admin permissions for the repository or be an owner or security manager for the organization that owns the repository. For more information, see \&quot;[Managing security managers in your organization](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/managing-security-managers-in-your-organization).\&quot;  You can check which security and analysis features are currently enabled by using a &#x60;GET /orgs/{org}&#x60; request. | [optional] |
| **secret_scanning_push_protection_custom_link_enabled** | **Boolean** | Whether a custom link is shown to contributors who are blocked from pushing a secret by push protection. | [optional] |
| **secret_scanning_push_protection_custom_link** | **String** | If &#x60;secret_scanning_push_protection_custom_link_enabled&#x60; is true, the URL that will be displayed to contributors who are blocked from pushing a secret. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrgsUpdateRequest.new(
  billing_email: null,
  company: null,
  email: null,
  twitter_username: null,
  location: null,
  name: null,
  description: null,
  has_organization_projects: null,
  has_repository_projects: null,
  default_repository_permission: null,
  members_can_create_repositories: null,
  members_can_create_internal_repositories: null,
  members_can_create_private_repositories: null,
  members_can_create_public_repositories: null,
  members_allowed_repository_creation_type: null,
  members_can_create_pages: null,
  members_can_create_public_pages: null,
  members_can_create_private_pages: null,
  members_can_fork_private_repositories: null,
  web_commit_signoff_required: null,
  blog: &quot;http://github.blog&quot;,
  advanced_security_enabled_for_new_repositories: null,
  dependabot_alerts_enabled_for_new_repositories: null,
  dependabot_security_updates_enabled_for_new_repositories: null,
  dependency_graph_enabled_for_new_repositories: null,
  secret_scanning_enabled_for_new_repositories: null,
  secret_scanning_push_protection_enabled_for_new_repositories: null,
  secret_scanning_push_protection_custom_link_enabled: null,
  secret_scanning_push_protection_custom_link: null
)
```

