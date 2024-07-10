# OpenapiClient::GistsUpdateRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **description** | **String** | The description of the gist. | [optional] |
| **files** | [**Hash&lt;String, GistsUpdateRequestFilesValue&gt;**](GistsUpdateRequestFilesValue.md) | The gist files to be updated, renamed, or deleted. Each &#x60;key&#x60; must match the current filename (including extension) of the targeted gist file. For example: &#x60;hello.py&#x60;.  To delete a file, set the whole file to null. For example: &#x60;hello.py : null&#x60;. The file will also be deleted if the specified object does not contain at least one of &#x60;content&#x60; or &#x60;filename&#x60;. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::GistsUpdateRequest.new(
  description: Example Ruby script,
  files: {&quot;hello.rb&quot;:{&quot;content&quot;:&quot;blah&quot;,&quot;filename&quot;:&quot;goodbye.rb&quot;}}
)
```

