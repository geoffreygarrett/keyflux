# OpenapiClient::RepositoryAdvisoryCreate

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **summary** | **String** | A short summary of the advisory. |  |
| **description** | **String** | A detailed description of what the advisory impacts. |  |
| **cve_id** | **String** | The Common Vulnerabilities and Exposures (CVE) ID. | [optional] |
| **vulnerabilities** | [**Array&lt;RepositoryAdvisoryCreateVulnerabilitiesInner&gt;**](RepositoryAdvisoryCreateVulnerabilitiesInner.md) | A product affected by the vulnerability detailed in a repository security advisory. |  |
| **cwe_ids** | **Array&lt;String&gt;** | A list of Common Weakness Enumeration (CWE) IDs. | [optional] |
| **credits** | [**Array&lt;RepositoryAdvisoryCreateCreditsInner&gt;**](RepositoryAdvisoryCreateCreditsInner.md) | A list of users receiving credit for their participation in the security advisory. | [optional] |
| **severity** | **String** | The severity of the advisory. You must choose between setting this field or &#x60;cvss_vector_string&#x60;. | [optional] |
| **cvss_vector_string** | **String** | The CVSS vector that calculates the severity of the advisory. You must choose between setting this field or &#x60;severity&#x60;. | [optional] |
| **start_private_fork** | **Boolean** | Whether to create a temporary private fork of the repository to collaborate on a fix. | [optional][default to false] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryAdvisoryCreate.new(
  summary: null,
  description: null,
  cve_id: null,
  vulnerabilities: null,
  cwe_ids: null,
  credits: null,
  severity: null,
  cvss_vector_string: null,
  start_private_fork: null
)
```

