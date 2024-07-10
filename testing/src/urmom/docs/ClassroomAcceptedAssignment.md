# OpenapiClient::ClassroomAcceptedAssignment

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | Unique identifier of the repository. |  |
| **submitted** | **Boolean** | Whether an accepted assignment has been submitted. |  |
| **passing** | **Boolean** | Whether a submission passed. |  |
| **commit_count** | **Integer** | Count of student commits. |  |
| **grade** | **String** | Most recent grade. |  |
| **students** | [**Array&lt;SimpleClassroomUser&gt;**](SimpleClassroomUser.md) |  |  |
| **repository** | [**SimpleClassroomRepository**](SimpleClassroomRepository.md) |  |  |
| **assignment** | [**SimpleClassroomAssignment**](SimpleClassroomAssignment.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ClassroomAcceptedAssignment.new(
  id: 42,
  submitted: true,
  passing: true,
  commit_count: 5,
  grade: 10/10,
  students: null,
  repository: null,
  assignment: null
)
```

