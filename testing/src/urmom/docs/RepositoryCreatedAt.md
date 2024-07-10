# OpenapiClient::RepositoryCreatedAt

## Class instance methods

### `openapi_one_of`

Returns the list of classes defined in oneOf.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::RepositoryCreatedAt.openapi_one_of
# =>
# [
#   :'Integer',
#   :'Time'
# ]
```

### build

Find the appropriate object from the `openapi_one_of` list and casts the data into it.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::RepositoryCreatedAt.build(data)
# => #<Integer:0x00007fdd4aab02a0>

OpenapiClient::RepositoryCreatedAt.build(data_that_doesnt_match)
# => nil
```

#### Parameters

| Name | Type | Description |
| ---- | ---- | ----------- |
| **data** | **Mixed** | data to be matched against the list of oneOf items |

#### Return type

- `Integer`
- `Time`
- `nil` (if no type matches)

