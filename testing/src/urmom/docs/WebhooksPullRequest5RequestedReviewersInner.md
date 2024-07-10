# OpenapiClient::WebhooksPullRequest5RequestedReviewersInner

## Class instance methods

### `openapi_one_of`

Returns the list of classes defined in oneOf.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::WebhooksPullRequest5RequestedReviewersInner.openapi_one_of
# =>
# [
#   :'Team',
#   :'User'
# ]
```

### build

Find the appropriate object from the `openapi_one_of` list and casts the data into it.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::WebhooksPullRequest5RequestedReviewersInner.build(data)
# => #<Team:0x00007fdd4aab02a0>

OpenapiClient::WebhooksPullRequest5RequestedReviewersInner.build(data_that_doesnt_match)
# => nil
```

#### Parameters

| Name | Type | Description |
| ---- | ---- | ----------- |
| **data** | **Mixed** | data to be matched against the list of oneOf items |

#### Return type

- `Team`
- `User`
- `nil` (if no type matches)

