# OpenapiClient::SelectedActions

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **github_owned_allowed** | **Boolean** | Whether GitHub-owned actions are allowed. For example, this includes the actions in the &#x60;actions&#x60; organization. | [optional] |
| **verified_allowed** | **Boolean** | Whether actions from GitHub Marketplace verified creators are allowed. Set to &#x60;true&#x60; to allow all actions by GitHub Marketplace verified creators. | [optional] |
| **patterns_allowed** | **Array&lt;String&gt;** | Specifies a list of string-matching patterns to allow specific action(s) and reusable workflow(s). Wildcards, tags, and SHAs are allowed. For example, &#x60;monalisa/octocat@*&#x60;, &#x60;monalisa/octocat@v2&#x60;, &#x60;monalisa/*&#x60;.  **Note**: The &#x60;patterns_allowed&#x60; setting only applies to public repositories. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SelectedActions.new(
  github_owned_allowed: null,
  verified_allowed: null,
  patterns_allowed: null
)
```

