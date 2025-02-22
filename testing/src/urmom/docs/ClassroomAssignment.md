# OpenapiClient::ClassroomAssignment

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | Unique identifier of the repository. |  |
| **public_repo** | **Boolean** | Whether an accepted assignment creates a public repository. |  |
| **title** | **String** | Assignment title. |  |
| **type** | **String** | Whether it&#39;s a group assignment or individual assignment. |  |
| **invite_link** | **String** | The link that a student can use to accept the assignment. |  |
| **invitations_enabled** | **Boolean** | Whether the invitation link is enabled. Visiting an enabled invitation link will accept the assignment. |  |
| **slug** | **String** | Sluggified name of the assignment. |  |
| **students_are_repo_admins** | **Boolean** | Whether students are admins on created repository when a student accepts the assignment. |  |
| **feedback_pull_requests_enabled** | **Boolean** | Whether feedback pull request will be created when a student accepts the assignment. |  |
| **max_teams** | **Integer** | The maximum allowable teams for the assignment. |  |
| **max_members** | **Integer** | The maximum allowable members per team. |  |
| **editor** | **String** | The selected editor for the assignment. |  |
| **accepted** | **Integer** | The number of students that have accepted the assignment. |  |
| **submitted** | **Integer** | The number of students that have submitted the assignment. |  |
| **passing** | **Integer** | The number of students that have passed the assignment. |  |
| **language** | **String** | The programming language used in the assignment. |  |
| **deadline** | **Time** | The time at which the assignment is due. |  |
| **starter_code_repository** | [**SimpleClassroomRepository**](SimpleClassroomRepository.md) |  |  |
| **classroom** | [**Classroom**](Classroom.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ClassroomAssignment.new(
  id: 42,
  public_repo: true,
  title: Intro to Binaries,
  type: individual,
  invite_link: https://classroom.github.com/a/Lx7jiUgx,
  invitations_enabled: true,
  slug: intro-to-binaries,
  students_are_repo_admins: true,
  feedback_pull_requests_enabled: true,
  max_teams: 0,
  max_members: 0,
  editor: codespaces,
  accepted: 25,
  submitted: 10,
  passing: 10,
  language: elixir,
  deadline: 2011-01-26T19:06:43Z,
  starter_code_repository: null,
  classroom: null
)
```

