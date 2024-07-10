# OpenapiClient::CodeSecurityUpdateConfigurationRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the code security configuration. Must be unique within the organization. | [optional] |
| **description** | **String** | A description of the code security configuration | [optional] |
| **advanced_security** | **String** | The enablement status of GitHub Advanced Security | [optional] |
| **dependency_graph** | **String** | The enablement status of Dependency Graph | [optional] |
| **dependabot_alerts** | **String** | The enablement status of Dependabot alerts | [optional] |
| **dependabot_security_updates** | **String** | The enablement status of Dependabot security updates | [optional] |
| **code_scanning_default_setup** | **String** | The enablement status of code scanning default setup | [optional] |
| **secret_scanning** | **String** | The enablement status of secret scanning | [optional] |
| **secret_scanning_push_protection** | **String** | The enablement status of secret scanning push protection | [optional] |
| **private_vulnerability_reporting** | **String** | The enablement status of private vulnerability reporting | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeSecurityUpdateConfigurationRequest.new(
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

