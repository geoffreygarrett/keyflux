# OpenapiClient::PagesHealthCheckDomain

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **host** | **String** |  | [optional] |
| **uri** | **String** |  | [optional] |
| **nameservers** | **String** |  | [optional] |
| **dns_resolves** | **Boolean** |  | [optional] |
| **is_proxied** | **Boolean** |  | [optional] |
| **is_cloudflare_ip** | **Boolean** |  | [optional] |
| **is_fastly_ip** | **Boolean** |  | [optional] |
| **is_old_ip_address** | **Boolean** |  | [optional] |
| **is_a_record** | **Boolean** |  | [optional] |
| **has_cname_record** | **Boolean** |  | [optional] |
| **has_mx_records_present** | **Boolean** |  | [optional] |
| **is_valid_domain** | **Boolean** |  | [optional] |
| **is_apex_domain** | **Boolean** |  | [optional] |
| **should_be_a_record** | **Boolean** |  | [optional] |
| **is_cname_to_github_user_domain** | **Boolean** |  | [optional] |
| **is_cname_to_pages_dot_github_dot_com** | **Boolean** |  | [optional] |
| **is_cname_to_fastly** | **Boolean** |  | [optional] |
| **is_pointed_to_github_pages_ip** | **Boolean** |  | [optional] |
| **is_non_github_pages_ip_present** | **Boolean** |  | [optional] |
| **is_pages_domain** | **Boolean** |  | [optional] |
| **is_served_by_pages** | **Boolean** |  | [optional] |
| **is_valid** | **Boolean** |  | [optional] |
| **reason** | **String** |  | [optional] |
| **responds_to_https** | **Boolean** |  | [optional] |
| **enforces_https** | **Boolean** |  | [optional] |
| **https_error** | **String** |  | [optional] |
| **is_https_eligible** | **Boolean** |  | [optional] |
| **caa_error** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PagesHealthCheckDomain.new(
  host: null,
  uri: null,
  nameservers: null,
  dns_resolves: null,
  is_proxied: null,
  is_cloudflare_ip: null,
  is_fastly_ip: null,
  is_old_ip_address: null,
  is_a_record: null,
  has_cname_record: null,
  has_mx_records_present: null,
  is_valid_domain: null,
  is_apex_domain: null,
  should_be_a_record: null,
  is_cname_to_github_user_domain: null,
  is_cname_to_pages_dot_github_dot_com: null,
  is_cname_to_fastly: null,
  is_pointed_to_github_pages_ip: null,
  is_non_github_pages_ip_present: null,
  is_pages_domain: null,
  is_served_by_pages: null,
  is_valid: null,
  reason: null,
  responds_to_https: null,
  enforces_https: null,
  https_error: null,
  is_https_eligible: null,
  caa_error: null
)
```

