# OpenapiClient::DependencyGraphSpdxSbomSbomPackagesInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **spdxid** | **String** | A unique SPDX identifier for the package. | [optional] |
| **name** | **String** | The name of the package. | [optional] |
| **version_info** | **String** | The version of the package. If the package does not have an exact version specified, a version range is given. | [optional] |
| **download_location** | **String** | The location where the package can be downloaded, or NOASSERTION if this has not been determined. | [optional] |
| **files_analyzed** | **Boolean** | Whether the package&#39;s file content has been subjected to analysis during the creation of the SPDX document. | [optional] |
| **license_concluded** | **String** | The license of the package as determined while creating the SPDX document. | [optional] |
| **license_declared** | **String** | The license of the package as declared by its author, or NOASSERTION if this information was not available when the SPDX document was created. | [optional] |
| **supplier** | **String** | The distribution source of this package, or NOASSERTION if this was not determined. | [optional] |
| **copyright_text** | **String** | The copyright holders of the package, and any dates present with those notices, if available. | [optional] |
| **external_refs** | [**Array&lt;DependencyGraphSpdxSbomSbomPackagesInnerExternalRefsInner&gt;**](DependencyGraphSpdxSbomSbomPackagesInnerExternalRefsInner.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DependencyGraphSpdxSbomSbomPackagesInner.new(
  spdxid: SPDXRef-Package,
  name: rubygems:github/github,
  version_info: 1.0.0,
  download_location: NOASSERTION,
  files_analyzed: false,
  license_concluded: MIT,
  license_declared: NOASSERTION,
  supplier: NOASSERTION,
  copyright_text: Copyright (c) 1985 GitHub.com,
  external_refs: null
)
```

