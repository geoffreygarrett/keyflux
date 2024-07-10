# OpenapiClient::WebhookProjectsV2ItemEditedChanges

## Class instance methods

### `openapi_one_of`

Returns the list of classes defined in oneOf.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::WebhookProjectsV2ItemEditedChanges.openapi_one_of
# =>
# [
#   :'WebhookProjectsV2ItemEditedChangesOneOf',
#   :'WebhookProjectsV2ItemEditedChangesOneOf1'
# ]
```

### build

Find the appropriate object from the `openapi_one_of` list and casts the data into it.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::WebhookProjectsV2ItemEditedChanges.build(data)
# => #<WebhookProjectsV2ItemEditedChangesOneOf:0x00007fdd4aab02a0>

OpenapiClient::WebhookProjectsV2ItemEditedChanges.build(data_that_doesnt_match)
# => nil
```

#### Parameters

| Name | Type | Description |
| ---- | ---- | ----------- |
| **data** | **Mixed** | data to be matched against the list of oneOf items |

#### Return type

- `WebhookProjectsV2ItemEditedChangesOneOf`
- `WebhookProjectsV2ItemEditedChangesOneOf1`
- `nil` (if no type matches)

