# OpenapiClient::WebhookPackagePublishedPackagePackageVersionBody

## Class instance methods

### `openapi_one_of`

Returns the list of classes defined in oneOf.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::WebhookPackagePublishedPackagePackageVersionBody.openapi_one_of
# =>
# [
#   :'Object',
#   :'String'
# ]
```

### build

Find the appropriate object from the `openapi_one_of` list and casts the data into it.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::WebhookPackagePublishedPackagePackageVersionBody.build(data)
# => #<Object:0x00007fdd4aab02a0>

OpenapiClient::WebhookPackagePublishedPackagePackageVersionBody.build(data_that_doesnt_match)
# => nil
```

#### Parameters

| Name | Type | Description |
| ---- | ---- | ----------- |
| **data** | **Mixed** | data to be matched against the list of oneOf items |

#### Return type

- `Object`
- `String`
- `nil` (if no type matches)

