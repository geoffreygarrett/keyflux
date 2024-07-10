# OpenapiClient::IssuesUpdateRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **title** | [**IssuesUpdateRequestTitle**](IssuesUpdateRequestTitle.md) |  | [optional] |
| **body** | **String** | The contents of the issue. | [optional] |
| **assignee** | **String** | Username to assign to this issue. **This field is deprecated.** | [optional] |
| **state** | **String** | The open or closed state of the issue. | [optional] |
| **state_reason** | **String** | The reason for the state change. Ignored unless &#x60;state&#x60; is changed. | [optional] |
| **milestone** | [**IssuesUpdateRequestMilestone**](IssuesUpdateRequestMilestone.md) |  | [optional] |
| **labels** | [**Array&lt;IssuesCreateRequestLabelsInner&gt;**](IssuesCreateRequestLabelsInner.md) | Labels to associate with this issue. Pass one or more labels to _replace_ the set of labels on this issue. Send an empty array (&#x60;[]&#x60;) to clear all labels from the issue. Only users with push access can set labels for issues. Without push access to the repository, label changes are silently dropped. | [optional] |
| **assignees** | **Array&lt;String&gt;** | Usernames to assign to this issue. Pass one or more user logins to _replace_ the set of assignees on this issue. Send an empty array (&#x60;[]&#x60;) to clear all assignees from the issue. Only users with push access can set assignees for new issues. Without push access to the repository, assignee changes are silently dropped. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::IssuesUpdateRequest.new(
  title: null,
  body: null,
  assignee: null,
  state: null,
  state_reason: not_planned,
  milestone: null,
  labels: null,
  assignees: null
)
```

