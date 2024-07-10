# OpenapiClient::AuthenticationToken

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **token** | **String** | The token used for authentication |  |
| **expires_at** | **Time** | The time this token expires |  |
| **permissions** | **Object** |  | [optional] |
| **repositories** | [**Array&lt;Repository&gt;**](Repository.md) | The repositories this token has access to | [optional] |
| **single_file** | **String** |  | [optional] |
| **repository_selection** | **String** | Describe whether all repositories have been selected or there&#39;s a selection involved | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::AuthenticationToken.new(
  token: v1.1f699f1069f60xxx,
  expires_at: 2016-07-11T22:14:10Z,
  permissions: {&quot;issues&quot;:&quot;read&quot;,&quot;deployments&quot;:&quot;write&quot;},
  repositories: null,
  single_file: config.yaml,
  repository_selection: null
)
```

