# OpenapiClient::GitCreateTreeRequestTreeInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **path** | **String** | The file referenced in the tree. | [optional] |
| **mode** | **String** | The file mode; one of &#x60;100644&#x60; for file (blob), &#x60;100755&#x60; for executable (blob), &#x60;040000&#x60; for subdirectory (tree), &#x60;160000&#x60; for submodule (commit), or &#x60;120000&#x60; for a blob that specifies the path of a symlink. | [optional] |
| **type** | **String** | Either &#x60;blob&#x60;, &#x60;tree&#x60;, or &#x60;commit&#x60;. | [optional] |
| **sha** | **String** | The SHA1 checksum ID of the object in the tree. Also called &#x60;tree.sha&#x60;. If the value is &#x60;null&#x60; then the file will be deleted.      **Note:** Use either &#x60;tree.sha&#x60; or &#x60;content&#x60; to specify the contents of the entry. Using both &#x60;tree.sha&#x60; and &#x60;content&#x60; will return an error. | [optional] |
| **content** | **String** | The content you want this file to have. GitHub will write this blob out and use that SHA for this entry. Use either this, or &#x60;tree.sha&#x60;.      **Note:** Use either &#x60;tree.sha&#x60; or &#x60;content&#x60; to specify the contents of the entry. Using both &#x60;tree.sha&#x60; and &#x60;content&#x60; will return an error. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::GitCreateTreeRequestTreeInner.new(
  path: null,
  mode: null,
  type: null,
  sha: null,
  content: null
)
```

