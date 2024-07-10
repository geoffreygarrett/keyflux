# PullRequest7

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_links** | [**crate::models::PullRequest6Links**](Pull_Request_6__links.md) |  | 
**active_lock_reason** | Option<**String**> |  | 
**additions** | Option<**i32**> |  | [optional]
**assignee** | Option<[**crate::models::User5**](User_5.md)> |  | 
**assignees** | [**Vec<crate::models::User5>**](User_5.md) |  | 
**author_association** | **String** | How the author is associated with the repository. | 
**auto_merge** | Option<[**crate::models::PullRequestAutoMerge1**](PullRequestAutoMerge_1.md)> |  | 
**base** | [**crate::models::PullRequest6Head**](Pull_Request_6_head.md) |  | 
**body** | Option<**String**> |  | 
**changed_files** | Option<**i32**> |  | [optional]
**closed_at** | Option<**String**> |  | 
**comments** | Option<**i32**> |  | [optional]
**comments_url** | **String** |  | 
**commits** | Option<**i32**> |  | [optional]
**commits_url** | **String** |  | 
**created_at** | **String** |  | 
**deletions** | Option<**i32**> |  | [optional]
**diff_url** | **String** |  | 
**draft** | **bool** | Indicates whether or not the pull request is a draft. | 
**head** | [**crate::models::PullRequest6Head**](Pull_Request_6_head.md) |  | 
**html_url** | **String** |  | 
**id** | **i32** |  | 
**issue_url** | **String** |  | 
**labels** | [**Vec<crate::models::Label2>**](Label_2.md) |  | 
**locked** | **bool** |  | 
**maintainer_can_modify** | Option<**bool**> | Indicates whether maintainers can modify the pull request. | [optional]
**merge_commit_sha** | Option<**String**> |  | 
**mergeable** | Option<**bool**> |  | [optional]
**mergeable_state** | Option<**String**> |  | [optional]
**merged** | Option<**bool**> |  | [optional]
**merged_at** | Option<**String**> |  | 
**merged_by** | Option<[**crate::models::User5**](User_5.md)> |  | [optional]
**milestone** | Option<[**crate::models::Milestone2**](Milestone_2.md)> |  | 
**node_id** | **String** |  | 
**number** | **i32** | Number uniquely identifying the pull request within its repository. | 
**patch_url** | **String** |  | 
**rebaseable** | Option<**bool**> |  | [optional]
**requested_reviewers** | [**Vec<crate::models::OneOfLessThanObjectCommaObjectGreaterThan>**](oneOf<object,object>.md) |  | 
**requested_teams** | [**Vec<crate::models::Team2>**](Team_2.md) |  | 
**review_comment_url** | **String** |  | 
**review_comments** | Option<**i32**> |  | [optional]
**review_comments_url** | **String** |  | 
**state** | **String** | State of this Pull Request. Either `open` or `closed`. | 
**statuses_url** | **String** |  | 
**title** | **String** | The title of the pull request. | 
**updated_at** | **String** |  | 
**url** | **String** |  | 
**user** | Option<[**crate::models::User6**](User_6.md)> |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


