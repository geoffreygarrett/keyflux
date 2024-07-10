# OpenapiClient::ApiOverview

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **verifiable_password_authentication** | **Boolean** |  |  |
| **ssh_key_fingerprints** | [**ApiOverviewSshKeyFingerprints**](ApiOverviewSshKeyFingerprints.md) |  | [optional] |
| **ssh_keys** | **Array&lt;String&gt;** |  | [optional] |
| **hooks** | **Array&lt;String&gt;** |  | [optional] |
| **github_enterprise_importer** | **Array&lt;String&gt;** |  | [optional] |
| **web** | **Array&lt;String&gt;** |  | [optional] |
| **api** | **Array&lt;String&gt;** |  | [optional] |
| **git** | **Array&lt;String&gt;** |  | [optional] |
| **packages** | **Array&lt;String&gt;** |  | [optional] |
| **pages** | **Array&lt;String&gt;** |  | [optional] |
| **importer** | **Array&lt;String&gt;** |  | [optional] |
| **actions** | **Array&lt;String&gt;** |  | [optional] |
| **actions_macos** | **Array&lt;String&gt;** |  | [optional] |
| **dependabot** | **Array&lt;String&gt;** |  | [optional] |
| **domains** | [**ApiOverviewDomains**](ApiOverviewDomains.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ApiOverview.new(
  verifiable_password_authentication: true,
  ssh_key_fingerprints: null,
  ssh_keys: [&quot;ssh-ed25519 ABCDEFGHIJKLMNOPQRSTUVWXYZ&quot;],
  hooks: [&quot;192.0.2.1&quot;],
  github_enterprise_importer: [&quot;192.0.2.1&quot;],
  web: [&quot;192.0.2.1&quot;],
  api: [&quot;192.0.2.1&quot;],
  git: [&quot;192.0.2.1&quot;],
  packages: [&quot;192.0.2.1&quot;],
  pages: [&quot;192.0.2.1&quot;],
  importer: [&quot;192.0.2.1&quot;],
  actions: [&quot;192.0.2.1&quot;],
  actions_macos: [&quot;192.0.2.1&quot;],
  dependabot: [&quot;192.0.2.1&quot;],
  domains: null
)
```

