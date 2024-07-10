# OpenapiClient::DependencyGraphSpdxSbomSbom

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **spdxid** | **String** | The SPDX identifier for the SPDX document. |  |
| **spdx_version** | **String** | The version of the SPDX specification that this document conforms to. |  |
| **creation_info** | [**DependencyGraphSpdxSbomSbomCreationInfo**](DependencyGraphSpdxSbomSbomCreationInfo.md) |  |  |
| **name** | **String** | The name of the SPDX document. |  |
| **data_license** | **String** | The license under which the SPDX document is licensed. |  |
| **document_describes** | **Array&lt;String&gt;** | The name of the repository that the SPDX document describes. |  |
| **document_namespace** | **String** | The namespace for the SPDX document. |  |
| **packages** | [**Array&lt;DependencyGraphSpdxSbomSbomPackagesInner&gt;**](DependencyGraphSpdxSbomSbomPackagesInner.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DependencyGraphSpdxSbomSbom.new(
  spdxid: SPDXRef-DOCUMENT,
  spdx_version: SPDX-2.3,
  creation_info: null,
  name: github/github,
  data_license: CC0-1.0,
  document_describes: null,
  document_namespace: https://github.com/example/dependency_graph/sbom-123,
  packages: null
)
```

