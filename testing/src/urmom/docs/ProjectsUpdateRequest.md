# OpenapiClient::ProjectsUpdateRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | Name of the project | [optional] |
| **body** | **String** | Body of the project | [optional] |
| **state** | **String** | State of the project; either &#39;open&#39; or &#39;closed&#39; | [optional] |
| **organization_permission** | **String** | The baseline permission that all organization members have on this project | [optional] |
| **private** | **Boolean** | Whether or not this project can be seen by everyone. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ProjectsUpdateRequest.new(
  name: Week One Sprint,
  body: This project represents the sprint of the first week in January,
  state: open,
  organization_permission: null,
  private: null
)
```

