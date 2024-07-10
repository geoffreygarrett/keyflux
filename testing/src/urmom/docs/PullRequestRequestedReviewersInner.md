# OpenapiClient::PullRequestRequestedReviewersInner

## Class instance methods

### `openapi_one_of`

Returns the list of classes defined in oneOf.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::PullRequestRequestedReviewersInner.openapi_one_of
# =>
# [
#   :'Team1',
#   :'User3'
# ]
```

### build

Find the appropriate object from the `openapi_one_of` list and casts the data into it.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::PullRequestRequestedReviewersInner.build(data)
# => #<Team1:0x00007fdd4aab02a0>

OpenapiClient::PullRequestRequestedReviewersInner.build(data_that_doesnt_match)
# => nil
```

#### Parameters

| Name | Type | Description |
| ---- | ---- | ----------- |
| **data** | **Mixed** | data to be matched against the list of oneOf items |

#### Return type

- `Team1`
- `User3`
- `nil` (if no type matches)

