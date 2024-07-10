# OpenapiClient::IssuesSetLabelsRequest

## Class instance methods

### `openapi_one_of`

Returns the list of classes defined in oneOf.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::IssuesSetLabelsRequest.openapi_one_of
# =>
# [
#   :'Array<IssuesSetLabelsRequestOneOf1LabelsInner>',
#   :'Array<String>',
#   :'IssuesSetLabelsRequestOneOf',
#   :'IssuesSetLabelsRequestOneOf1',
#   :'String'
# ]
```

### build

Find the appropriate object from the `openapi_one_of` list and casts the data into it.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::IssuesSetLabelsRequest.build(data)
# => #<Array<IssuesSetLabelsRequestOneOf1LabelsInner>:0x00007fdd4aab02a0>

OpenapiClient::IssuesSetLabelsRequest.build(data_that_doesnt_match)
# => nil
```

#### Parameters

| Name | Type | Description |
| ---- | ---- | ----------- |
| **data** | **Mixed** | data to be matched against the list of oneOf items |

#### Return type

- `Array<IssuesSetLabelsRequestOneOf1LabelsInner>`
- `Array<String>`
- `IssuesSetLabelsRequestOneOf`
- `IssuesSetLabelsRequestOneOf1`
- `String`
- `nil` (if no type matches)

