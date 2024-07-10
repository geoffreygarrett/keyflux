# OpenapiClient::ReposSetUserAccessRestrictionsRequest

## Class instance methods

### `openapi_one_of`

Returns the list of classes defined in oneOf.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::ReposSetUserAccessRestrictionsRequest.openapi_one_of
# =>
# [
#   :'Array<String>',
#   :'ReposSetUserAccessRestrictionsRequestOneOf'
# ]
```

### build

Find the appropriate object from the `openapi_one_of` list and casts the data into it.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::ReposSetUserAccessRestrictionsRequest.build(data)
# => #<Array<String>:0x00007fdd4aab02a0>

OpenapiClient::ReposSetUserAccessRestrictionsRequest.build(data_that_doesnt_match)
# => nil
```

#### Parameters

| Name | Type | Description |
| ---- | ---- | ----------- |
| **data** | **Mixed** | data to be matched against the list of oneOf items |

#### Return type

- `Array<String>`
- `ReposSetUserAccessRestrictionsRequestOneOf`
- `nil` (if no type matches)

