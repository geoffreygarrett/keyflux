# OpenapiClient::ReposCreateDeploymentRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **ref** | **String** | The ref to deploy. This can be a branch, tag, or SHA. |  |
| **task** | **String** | Specifies a task to execute (e.g., &#x60;deploy&#x60; or &#x60;deploy:migrations&#x60;). | [optional][default to &#39;deploy&#39;] |
| **auto_merge** | **Boolean** | Attempts to automatically merge the default branch into the requested ref, if it&#39;s behind the default branch. | [optional][default to true] |
| **required_contexts** | **Array&lt;String&gt;** | The [status](https://docs.github.com/rest/commits/statuses) contexts to verify against commit status checks. If you omit this parameter, GitHub verifies all unique contexts before creating a deployment. To bypass checking entirely, pass an empty array. Defaults to all unique contexts. | [optional] |
| **payload** | [**ReposCreateDeploymentRequestPayload**](ReposCreateDeploymentRequestPayload.md) |  | [optional] |
| **environment** | **String** | Name for the target deployment environment (e.g., &#x60;production&#x60;, &#x60;staging&#x60;, &#x60;qa&#x60;). | [optional][default to &#39;production&#39;] |
| **description** | **String** | Short description of the deployment. | [optional][default to &#39;&#39;] |
| **transient_environment** | **Boolean** | Specifies if the given environment is specific to the deployment and will no longer exist at some point in the future. Default: &#x60;false&#x60; | [optional][default to false] |
| **production_environment** | **Boolean** | Specifies if the given environment is one that end-users directly interact with. Default: &#x60;true&#x60; when &#x60;environment&#x60; is &#x60;production&#x60; and &#x60;false&#x60; otherwise. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposCreateDeploymentRequest.new(
  ref: null,
  task: null,
  auto_merge: null,
  required_contexts: null,
  payload: null,
  environment: null,
  description: null,
  transient_environment: null,
  production_environment: null
)
```

