# OpenapiClient::CodespaceExportDetails

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **state** | **String** | State of the latest export | [optional] |
| **completed_at** | **Time** | Completion time of the last export operation | [optional] |
| **branch** | **String** | Name of the exported branch | [optional] |
| **sha** | **String** | Git commit SHA of the exported branch | [optional] |
| **id** | **String** | Id for the export details | [optional] |
| **export_url** | **String** | Url for fetching export details | [optional] |
| **html_url** | **String** | Web url for the exported branch | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodespaceExportDetails.new(
  state: succeeded | failed | in_progress,
  completed_at: 2021-01-01T19:01:12Z,
  branch: codespace-monalisa-octocat-hello-world-g4wpq6h95q,
  sha: fd95a81ca01e48ede9f39c799ecbcef817b8a3b2,
  id: latest,
  export_url: https://api.github.com/user/codespaces/:name/exports/latest,
  html_url: https://github.com/octocat/hello-world/tree/:branch
)
```

