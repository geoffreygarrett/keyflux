# OpenapiClient::ReposGetContent200Response

## Class instance methods

### `openapi_one_of`

Returns the list of classes defined in oneOf.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::ReposGetContent200Response.openapi_one_of
# =>
# [
#   :'Array<ContentDirectoryInner>',
#   :'ContentFile',
#   :'ContentSubmodule',
#   :'ContentSymlink'
# ]
```

### build

Find the appropriate object from the `openapi_one_of` list and casts the data into it.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::ReposGetContent200Response.build(data)
# => #<Array<ContentDirectoryInner>:0x00007fdd4aab02a0>

OpenapiClient::ReposGetContent200Response.build(data_that_doesnt_match)
# => nil
```

#### Parameters

| Name | Type | Description |
| ---- | ---- | ----------- |
| **data** | **Mixed** | data to be matched against the list of oneOf items |

#### Return type

- `Array<ContentDirectoryInner>`
- `ContentFile`
- `ContentSubmodule`
- `ContentSymlink`
- `nil` (if no type matches)

