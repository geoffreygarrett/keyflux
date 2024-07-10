# OpenapiClient::RuleSuitesInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | The unique identifier of the rule insight. | [optional] |
| **actor_id** | **Integer** | The number that identifies the user. | [optional] |
| **actor_name** | **String** | The handle for the GitHub user account. | [optional] |
| **before_sha** | **String** | The first commit sha before the push evaluation. | [optional] |
| **after_sha** | **String** | The last commit sha in the push evaluation. | [optional] |
| **ref** | **String** | The ref name that the evaluation ran on. | [optional] |
| **repository_id** | **Integer** | The ID of the repository associated with the rule evaluation. | [optional] |
| **repository_name** | **String** | The name of the repository without the &#x60;.git&#x60; extension. | [optional] |
| **pushed_at** | **Time** |  | [optional] |
| **result** | **String** | The result of the rule evaluations for rules with the &#x60;active&#x60; enforcement status. | [optional] |
| **evaluation_result** | **String** | The result of the rule evaluations for rules with the &#x60;active&#x60; and &#x60;evaluate&#x60; enforcement statuses, demonstrating whether rules would pass or fail if all rules in the rule suite were &#x60;active&#x60;. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RuleSuitesInner.new(
  id: null,
  actor_id: null,
  actor_name: null,
  before_sha: null,
  after_sha: null,
  ref: null,
  repository_id: null,
  repository_name: null,
  pushed_at: 2011-01-26T19:06:43Z,
  result: null,
  evaluation_result: null
)
```

