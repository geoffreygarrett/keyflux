# OpenapiClient::CopilotSeatDetailsOrganization

## Class instance methods

### `openapi_one_of`

Returns the list of classes defined in oneOf.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::CopilotSeatDetailsOrganization.openapi_one_of
# =>
# [
#   :'OrganizationSimple'
# ]
```

### build

Find the appropriate object from the `openapi_one_of` list and casts the data into it.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::CopilotSeatDetailsOrganization.build(data)
# => #<OrganizationSimple:0x00007fdd4aab02a0>

OpenapiClient::CopilotSeatDetailsOrganization.build(data_that_doesnt_match)
# => nil
```

#### Parameters

| Name | Type | Description |
| ---- | ---- | ----------- |
| **data** | **Mixed** | data to be matched against the list of oneOf items |

#### Return type

- `OrganizationSimple`
- `nil` (if no type matches)

