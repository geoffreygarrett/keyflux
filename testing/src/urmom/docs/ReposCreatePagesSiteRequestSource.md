# OpenapiClient::ReposCreatePagesSiteRequestSource

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **branch** | **String** | The repository branch used to publish your site&#39;s source files. |  |
| **path** | **String** | The repository directory that includes the source files for the Pages site. Allowed paths are &#x60;/&#x60; or &#x60;/docs&#x60;. Default: &#x60;/&#x60; | [optional][default to &#39;/&#39;] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposCreatePagesSiteRequestSource.new(
  branch: null,
  path: null
)
```

