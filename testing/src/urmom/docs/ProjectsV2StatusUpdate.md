# OpenapiClient::ProjectsV2StatusUpdate

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Float** |  |  |
| **node_id** | **String** |  |  |
| **project_node_id** | **String** |  | [optional] |
| **creator** | [**SimpleUser**](SimpleUser.md) |  | [optional] |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **status** | **String** |  | [optional] |
| **start_date** | **Date** |  | [optional] |
| **target_date** | **Date** |  | [optional] |
| **body** | **String** | Body of the status update | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ProjectsV2StatusUpdate.new(
  id: null,
  node_id: null,
  project_node_id: null,
  creator: null,
  created_at: 2022-04-28T12:00Z,
  updated_at: 2022-04-28T12:00Z,
  status: null,
  start_date: Thu Apr 28 02:00:00 SAST 2022,
  target_date: Thu Apr 28 02:00:00 SAST 2022,
  body: The project is off to a great start!
)
```

