# OpenapiClient::CodeSecurityCreateConfigurationRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the code security configuration. Must be unique within the organization. |  |
| **description** | **String** | A description of the code security configuration |  |
| **advanced_security** | **String** | The enablement status of GitHub Advanced Security | [optional][default to &#39;disabled&#39;] |
| **dependency_graph** | **String** | The enablement status of Dependency Graph | [optional][default to &#39;enabled&#39;] |
| **dependabot_alerts** | **String** | The enablement status of Dependabot alerts | [optional][default to &#39;disabled&#39;] |
| **dependabot_security_updates** | **String** | The enablement status of Dependabot security updates | [optional][default to &#39;disabled&#39;] |
| **code_scanning_default_setup** | **String** | The enablement status of code scanning default setup | [optional][default to &#39;disabled&#39;] |
| **secret_scanning** | **String** | The enablement status of secret scanning | [optional][default to &#39;disabled&#39;] |
| **secret_scanning_push_protection** | **String** | The enablement status of secret scanning push protection | [optional][default to &#39;disabled&#39;] |
| **private_vulnerability_reporting** | **String** | The enablement status of private vulnerability reporting | [optional][default to &#39;disabled&#39;] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeSecurityCreateConfigurationRequest.new(
  name: null,
  description: null,
  advanced_security: null,
  dependency_graph: null,
  dependabot_alerts: null,
  dependabot_security_updates: null,
  code_scanning_default_setup: null,
  secret_scanning: null,
  secret_scanning_push_protection: null,
  private_vulnerability_reporting: null
)
```

