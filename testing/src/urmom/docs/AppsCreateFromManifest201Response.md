# OpenapiClient::AppsCreateFromManifest201Response

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | Unique identifier of the GitHub app |  |
| **slug** | **String** | The slug name of the GitHub app | [optional] |
| **node_id** | **String** |  |  |
| **owner** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **name** | **String** | The name of the GitHub app |  |
| **description** | **String** |  |  |
| **external_url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **permissions** | [**IntegrationPermissions**](IntegrationPermissions.md) |  |  |
| **events** | **Array&lt;String&gt;** | The list of events for the GitHub app |  |
| **installations_count** | **Integer** | The number of installations associated with the GitHub app | [optional] |
| **client_id** | **String** |  |  |
| **client_secret** | **String** |  |  |
| **webhook_secret** | **String** |  |  |
| **pem** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::AppsCreateFromManifest201Response.new(
  id: 37,
  slug: probot-owners,
  node_id: MDExOkludGVncmF0aW9uMQ&#x3D;&#x3D;,
  owner: null,
  name: Probot Owners,
  description: The description of the app.,
  external_url: https://example.com,
  html_url: https://github.com/apps/super-ci,
  created_at: 2017-07-08T16:18:44-04:00,
  updated_at: 2017-07-08T16:18:44-04:00,
  permissions: null,
  events: [&quot;label&quot;,&quot;deployment&quot;],
  installations_count: 5,
  client_id: null,
  client_secret: null,
  webhook_secret: null,
  pem: null
)
```

