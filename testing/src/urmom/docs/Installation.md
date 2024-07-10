# OpenapiClient::Installation

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | The ID of the installation. |  |
| **account** | [**InstallationAccount**](InstallationAccount.md) |  |  |
| **repository_selection** | **String** | Describe whether all repositories have been selected or there&#39;s a selection involved |  |
| **access_tokens_url** | **String** |  |  |
| **repositories_url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **app_id** | **Integer** |  |  |
| **target_id** | **Integer** | The ID of the user or organization this token is being scoped to. |  |
| **target_type** | **String** |  |  |
| **permissions** | [**AppPermissions**](AppPermissions.md) |  |  |
| **events** | **Array&lt;String&gt;** |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **single_file_name** | **String** |  |  |
| **has_multiple_single_files** | **Boolean** |  | [optional] |
| **single_file_paths** | **Array&lt;String&gt;** |  | [optional] |
| **app_slug** | **String** |  |  |
| **suspended_by** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **suspended_at** | **Time** |  |  |
| **contact_email** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Installation.new(
  id: 1,
  account: null,
  repository_selection: null,
  access_tokens_url: https://api.github.com/app/installations/1/access_tokens,
  repositories_url: https://api.github.com/installation/repositories,
  html_url: https://github.com/organizations/github/settings/installations/1,
  app_id: 1,
  target_id: null,
  target_type: Organization,
  permissions: null,
  events: null,
  created_at: null,
  updated_at: null,
  single_file_name: config.yaml,
  has_multiple_single_files: true,
  single_file_paths: [&quot;config.yml&quot;,&quot;.github/issue_TEMPLATE.md&quot;],
  app_slug: github-actions,
  suspended_by: null,
  suspended_at: null,
  contact_email: &quot;test_13f1e99741e3e004@d7e1eb0bc0a1ba12.com&quot;
)
```

