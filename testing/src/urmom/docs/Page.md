# OpenapiClient::Page

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** | The API address for accessing this Page resource. |  |
| **status** | **String** | The status of the most recent build of the Page. |  |
| **cname** | **String** | The Pages site&#39;s custom domain |  |
| **protected_domain_state** | **String** | The state if the domain is verified | [optional] |
| **pending_domain_unverified_at** | **Time** | The timestamp when a pending domain becomes unverified. | [optional] |
| **custom_404** | **Boolean** | Whether the Page has a custom 404 page. | [default to false] |
| **html_url** | **String** | The web address the Page can be accessed from. | [optional] |
| **build_type** | **String** | The process in which the Page will be built. | [optional] |
| **source** | [**PagesSourceHash**](PagesSourceHash.md) |  | [optional] |
| **public** | **Boolean** | Whether the GitHub Pages site is publicly visible. If set to &#x60;true&#x60;, the site is accessible to anyone on the internet. If set to &#x60;false&#x60;, the site will only be accessible to users who have at least &#x60;read&#x60; access to the repository that published the site. |  |
| **https_certificate** | [**PagesHttpsCertificate**](PagesHttpsCertificate.md) |  | [optional] |
| **https_enforced** | **Boolean** | Whether https is enabled on the domain | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Page.new(
  url: https://api.github.com/repos/github/hello-world/pages,
  status: built,
  cname: example.com,
  protected_domain_state: pending,
  pending_domain_unverified_at: null,
  custom_404: false,
  html_url: https://example.com,
  build_type: legacy,
  source: null,
  public: true,
  https_certificate: null,
  https_enforced: true
)
```

