# OpenapiClient::Dependency

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **package_url** | **String** | Package-url (PURL) of dependency. See https://github.com/package-url/purl-spec for more details. | [optional] |
| **metadata** | [**Hash&lt;String, Metadata1&gt;**](Metadata1.md) | User-defined metadata to store domain-specific information limited to 8 keys with scalar values. | [optional] |
| **relationship** | **String** | A notation of whether a dependency is requested directly by this manifest or is a dependency of another dependency. | [optional] |
| **scope** | **String** | A notation of whether the dependency is required for the primary build artifact (runtime) or is only used for development. Future versions of this specification may allow for more granular scopes. | [optional] |
| **dependencies** | **Array&lt;String&gt;** | Array of package-url (PURLs) of direct child dependencies. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Dependency.new(
  package_url: pkg:/npm/%40actions/http-client@1.0.11,
  metadata: null,
  relationship: direct,
  scope: runtime,
  dependencies: @actions/http-client
)
```

