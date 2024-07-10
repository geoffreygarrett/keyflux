# OpenapiClient::RepositoryRulesetBypassActor

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **actor_id** | **Integer** | The ID of the actor that can bypass a ruleset. If &#x60;actor_type&#x60; is &#x60;OrganizationAdmin&#x60;, this should be &#x60;1&#x60;. If &#x60;actor_type&#x60; is &#x60;DeployKey&#x60;, this should be null. &#x60;OrganizationAdmin&#x60; is not applicable for personal repositories.  | [optional] |
| **actor_type** | **String** | The type of actor that can bypass a ruleset.  |  |
| **bypass_mode** | **String** | When the specified actor can bypass the ruleset. &#x60;pull_request&#x60; means that an actor can only bypass rules on pull requests. &#x60;pull_request&#x60; is not applicable for the &#x60;DeployKey&#x60; actor type.  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryRulesetBypassActor.new(
  actor_id: null,
  actor_type: null,
  bypass_mode: null
)
```

