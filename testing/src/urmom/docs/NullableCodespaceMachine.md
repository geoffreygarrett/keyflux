# OpenapiClient::NullableCodespaceMachine

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the machine. |  |
| **display_name** | **String** | The display name of the machine includes cores, memory, and storage. |  |
| **operating_system** | **String** | The operating system of the machine. |  |
| **storage_in_bytes** | **Integer** | How much storage is available to the codespace. |  |
| **memory_in_bytes** | **Integer** | How much memory is available to the codespace. |  |
| **cpus** | **Integer** | How many cores are available to the codespace. |  |
| **prebuild_availability** | **String** | Whether a prebuild is currently available when creating a codespace for this machine and repository. If a branch was not specified as a ref, the default branch will be assumed. Value will be \&quot;null\&quot; if prebuilds are not supported or prebuild availability could not be determined. Value will be \&quot;none\&quot; if no prebuild is available. Latest values \&quot;ready\&quot; and \&quot;in_progress\&quot; indicate the prebuild availability status. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::NullableCodespaceMachine.new(
  name: standardLinux,
  display_name: 4 cores, 16 GB RAM, 64 GB storage,
  operating_system: linux,
  storage_in_bytes: 68719476736,
  memory_in_bytes: 17179869184,
  cpus: 4,
  prebuild_availability: ready
)
```

