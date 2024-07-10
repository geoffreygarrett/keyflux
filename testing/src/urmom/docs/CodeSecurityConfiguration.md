# OpenapiClient::CodeSecurityConfiguration

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | The ID of the code security configuration | [optional] |
| **name** | **String** | The name of the code security configuration. Must be unique within the organization. | [optional] |
| **target_type** | **String** | The type of the code security configuration. | [optional] |
| **description** | **String** | A description of the code security configuration | [optional] |
| **advanced_security** | **String** | The enablement status of GitHub Advanced Security | [optional] |
| **dependency_graph** | **String** | The enablement status of Dependency Graph | [optional] |
| **dependabot_alerts** | **String** | The enablement status of Dependabot alerts | [optional] |
| **dependabot_security_updates** | **String** | The enablement status of Dependabot security updates | [optional] |
| **code_scanning_default_setup** | **String** | The enablement status of code scanning default setup | [optional] |
| **secret_scanning** | **String** | The enablement status of secret scanning | [optional] |
| **secret_scanning_push_protection** | **String** | The enablement status of secret scanning push protection | [optional] |
| **private_vulnerability_reporting** | **String** | The enablement status of private vulnerability reporting | [optional] |
| **url** | **String** | The URL of the configuration | [optional] |
| **html_url** | **String** | The URL of the configuration | [optional] |
| **created_at** | **Time** |  | [optional] |
| **updated_at** | **Time** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeSecurityConfiguration.new(
  id: null,
  name: null,
  target_type: null,
  description: null,
  advanced_security: null,
  dependency_graph: null,
  dependabot_alerts: null,
  dependabot_security_updates: null,
  code_scanning_default_setup: null,
  secret_scanning: null,
  secret_scanning_push_protection: null,
  private_vulnerability_reporting: null,
  url: null,
  html_url: null,
  created_at: null,
  updated_at: null
)
```

