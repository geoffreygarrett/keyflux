# OpenapiClient::RateLimitOverviewResources

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **core** | [**RateLimit**](RateLimit.md) |  |  |
| **graphql** | [**RateLimit**](RateLimit.md) |  | [optional] |
| **search** | [**RateLimit**](RateLimit.md) |  |  |
| **code_search** | [**RateLimit**](RateLimit.md) |  | [optional] |
| **source_import** | [**RateLimit**](RateLimit.md) |  | [optional] |
| **integration_manifest** | [**RateLimit**](RateLimit.md) |  | [optional] |
| **code_scanning_upload** | [**RateLimit**](RateLimit.md) |  | [optional] |
| **actions_runner_registration** | [**RateLimit**](RateLimit.md) |  | [optional] |
| **scim** | [**RateLimit**](RateLimit.md) |  | [optional] |
| **dependency_snapshots** | [**RateLimit**](RateLimit.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RateLimitOverviewResources.new(
  core: null,
  graphql: null,
  search: null,
  code_search: null,
  source_import: null,
  integration_manifest: null,
  code_scanning_upload: null,
  actions_runner_registration: null,
  scim: null,
  dependency_snapshots: null
)
```

