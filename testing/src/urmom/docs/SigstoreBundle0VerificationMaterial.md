# OpenapiClient::SigstoreBundle0VerificationMaterial

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **x509_certificate_chain** | [**SigstoreBundle0VerificationMaterialX509CertificateChain**](SigstoreBundle0VerificationMaterialX509CertificateChain.md) |  | [optional] |
| **tlog_entries** | [**Array&lt;SigstoreBundle0VerificationMaterialTlogEntriesInner&gt;**](SigstoreBundle0VerificationMaterialTlogEntriesInner.md) |  | [optional] |
| **timestamp_verification_data** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SigstoreBundle0VerificationMaterial.new(
  x509_certificate_chain: null,
  tlog_entries: null,
  timestamp_verification_data: null
)
```

