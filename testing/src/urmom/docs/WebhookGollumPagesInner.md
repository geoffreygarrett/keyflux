# OpenapiClient::WebhookGollumPagesInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** | The action that was performed on the page. Can be &#x60;created&#x60; or &#x60;edited&#x60;. |  |
| **html_url** | **String** | Points to the HTML wiki page. |  |
| **page_name** | **String** | The name of the page. |  |
| **sha** | **String** | The latest commit SHA of the page. |  |
| **summary** | **String** |  |  |
| **title** | **String** | The current page title. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookGollumPagesInner.new(
  action: null,
  html_url: null,
  page_name: null,
  sha: null,
  summary: null,
  title: null
)
```

