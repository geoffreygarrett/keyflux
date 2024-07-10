# OpenapiClient::DependencyGraphSpdxSbomSbomPackagesInnerExternalRefsInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **reference_category** | **String** | The category of reference to an external resource this reference refers to. |  |
| **reference_locator** | **String** | A locator for the particular external resource this reference refers to. |  |
| **reference_type** | **String** | The category of reference to an external resource this reference refers to. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DependencyGraphSpdxSbomSbomPackagesInnerExternalRefsInner.new(
  reference_category: PACKAGE-MANAGER,
  reference_locator: pkg:gem/rails@6.0.1,
  reference_type: purl
)
```

