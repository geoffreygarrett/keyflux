# SimpleClassroomAssignment

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **i32** | Unique identifier of the repository. | 
**public_repo** | **bool** | Whether an accepted assignment creates a public repository. | 
**title** | **String** | Assignment title. | 
**r#type** | **String** | Whether it's a Group Assignment or Individual Assignment. | 
**invite_link** | **String** | The link that a student can use to accept the assignment. | 
**invitations_enabled** | **bool** | Whether the invitation link is enabled. Visiting an enabled invitation link will accept the assignment. | 
**slug** | **String** | Sluggified name of the assignment. | 
**students_are_repo_admins** | **bool** | Whether students are admins on created repository on accepted assignment. | 
**feedback_pull_requests_enabled** | **bool** | Whether feedback pull request will be created on assignment acceptance. | 
**max_teams** | Option<**i32**> | The maximum allowable teams for the assignment. | [optional]
**max_members** | Option<**i32**> | The maximum allowable members per team. | [optional]
**editor** | **String** | The selected editor for the assignment. | 
**accepted** | **i32** | The number of students that have accepted the assignment. | 
**submitted** | **i32** | The number of students that have submitted the assignment. | 
**passing** | **i32** | The number of students that have passed the assignment. | 
**language** | **String** | The programming language used in the assignment. | 
**deadline** | Option<**String**> | The time at which the assignment is due. | 
**classroom** | [**crate::models::SimpleClassroom**](simple-classroom.md) |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


