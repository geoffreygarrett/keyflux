# OpenapiClient::WebhooksSecurityAdvisoryVulnerabilitiesInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **first_patched_version** | [**WebhooksSecurityAdvisoryVulnerabilitiesInnerFirstPatchedVersion**](WebhooksSecurityAdvisoryVulnerabilitiesInnerFirstPatchedVersion.md) |  |  |
| **package** | [**WebhooksSecurityAdvisoryVulnerabilitiesInnerPackage**](WebhooksSecurityAdvisoryVulnerabilitiesInnerPackage.md) |  |  |
| **severity** | **String** |  |  |
| **vulnerable_version_range** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhooksSecurityAdvisoryVulnerabilitiesInner.new(
  first_patched_version: null,
  package: null,
  severity: null,
  vulnerable_version_range: null
)
```

