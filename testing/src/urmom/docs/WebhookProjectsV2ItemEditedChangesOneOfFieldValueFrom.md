# OpenapiClient::WebhookProjectsV2ItemEditedChangesOneOfFieldValueFrom

## Class instance methods

### `openapi_one_of`

Returns the list of classes defined in oneOf.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::WebhookProjectsV2ItemEditedChangesOneOfFieldValueFrom.openapi_one_of
# =>
# [
#   :'Integer',
#   :'ProjectsV2IterationSetting',
#   :'ProjectsV2SingleSelectOption',
#   :'String'
# ]
```

### build

Find the appropriate object from the `openapi_one_of` list and casts the data into it.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::WebhookProjectsV2ItemEditedChangesOneOfFieldValueFrom.build(data)
# => #<Integer:0x00007fdd4aab02a0>

OpenapiClient::WebhookProjectsV2ItemEditedChangesOneOfFieldValueFrom.build(data_that_doesnt_match)
# => nil
```

#### Parameters

| Name | Type | Description |
| ---- | ---- | ----------- |
| **data** | **Mixed** | data to be matched against the list of oneOf items |

#### Return type

- `Integer`
- `ProjectsV2IterationSetting`
- `ProjectsV2SingleSelectOption`
- `String`
- `nil` (if no type matches)

