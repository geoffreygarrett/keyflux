# OpenapiClient::DependencyGraphDiffInnerVulnerabilitiesInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **severity** | **String** |  |  |
| **advisory_ghsa_id** | **String** |  |  |
| **advisory_summary** | **String** |  |  |
| **advisory_url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DependencyGraphDiffInnerVulnerabilitiesInner.new(
  severity: critical,
  advisory_ghsa_id: GHSA-rf4j-j272-fj86,
  advisory_summary: A summary of the advisory.,
  advisory_url: https://github.com/advisories/GHSA-rf4j-j272-fj86
)
```

