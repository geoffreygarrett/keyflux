# OpenapiClient::ClassroomAssignmentGrade

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **assignment_name** | **String** | Name of the assignment |  |
| **assignment_url** | **String** | URL of the assignment |  |
| **starter_code_url** | **String** | URL of the starter code for the assignment |  |
| **github_username** | **String** | GitHub username of the student |  |
| **roster_identifier** | **String** | Roster identifier of the student |  |
| **student_repository_name** | **String** | Name of the student&#39;s assignment repository |  |
| **student_repository_url** | **String** | URL of the student&#39;s assignment repository |  |
| **submission_timestamp** | **String** | Timestamp of the student&#39;s assignment submission |  |
| **points_awarded** | **Integer** | Number of points awarded to the student |  |
| **points_available** | **Integer** | Number of points available for the assignment |  |
| **group_name** | **String** | If a group assignment, name of the group the student is in | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ClassroomAssignmentGrade.new(
  assignment_name: null,
  assignment_url: null,
  starter_code_url: null,
  github_username: null,
  roster_identifier: null,
  student_repository_name: null,
  student_repository_url: null,
  submission_timestamp: null,
  points_awarded: null,
  points_available: null,
  group_name: null
)
```

