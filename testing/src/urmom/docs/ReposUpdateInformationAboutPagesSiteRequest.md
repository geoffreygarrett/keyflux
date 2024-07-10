# OpenapiClient::ReposUpdateInformationAboutPagesSiteRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **cname** | **String** | Specify a custom domain for the repository. Sending a &#x60;null&#x60; value will remove the custom domain. For more about custom domains, see \&quot;[Using a custom domain with GitHub Pages](https://docs.github.com/pages/configuring-a-custom-domain-for-your-github-pages-site).\&quot; | [optional] |
| **https_enforced** | **Boolean** | Specify whether HTTPS should be enforced for the repository. | [optional] |
| **build_type** | **String** | The process by which the GitHub Pages site will be built. &#x60;workflow&#x60; means that the site is built by a custom GitHub Actions workflow. &#x60;legacy&#x60; means that the site is built by GitHub when changes are pushed to a specific branch. | [optional] |
| **source** | [**ReposUpdateInformationAboutPagesSiteRequestSource**](ReposUpdateInformationAboutPagesSiteRequestSource.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposUpdateInformationAboutPagesSiteRequest.new(
  cname: null,
  https_enforced: null,
  build_type: null,
  source: null
)
```

