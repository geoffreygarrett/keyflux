# OpenapiClient::GitignoreTemplate

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** |  |  |
| **source** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::GitignoreTemplate.new(
  name: C,
  source: # Object files
*.o

# Libraries
*.lib
*.a

# Shared objects (inc. Windows DLLs)
*.dll
*.so
*.so.*
*.dylib

# Executables
*.exe
*.out
*.app

)
```

