# WebhookPullRequestReviewCommentCreatedPullRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_links** | [**crate::models::WebhooksPullRequest5Links**](webhooks_pull_request_5__links.md) |  | 
**active_lock_reason** | Option<**String**> |  | 
**assignee** | Option<[**crate::models::User3**](User_3.md)> |  | 
**assignees** | [**Vec<crate::models::User3>**](User_3.md) |  | 
**author_association** | **String** | How the author is associated with the repository. | 
**auto_merge** | Option<[**crate::models::PullRequestAutoMerge**](PullRequestAutoMerge.md)> |  | [optional]
**base** | [**crate::models::PullRequestBase**](Pull_Request_base.md) |  | 
**body** | Option<**String**> |  | 
**closed_at** | Option<**String**> |  | 
**comments_url** | **String** |  | 
**commits_url** | **String** |  | 
**created_at** | **String** |  | 
**diff_url** | **String** |  | 
**draft** | Option<**bool**> |  | [optional]
**head** | [**crate::models::WebhookPullRequestReviewCommentCreatedPullRequestHead**](webhook_pull_request_review_comment_created_pull_request_head.md) |  | 
**html_url** | **String** |  | 
**id** | **i32** |  | 
**issue_url** | **String** |  | 
**labels** | [**Vec<crate::models::Label>**](Label.md) |  | 
**locked** | **bool** |  | 
**merge_commit_sha** | Option<**String**> |  | 
**merged_at** | Option<**String**> |  | 
**milestone** | Option<[**crate::models::Milestone**](Milestone.md)> |  | 
**node_id** | **String** |  | 
**number** | **i32** |  | 
**patch_url** | **String** |  | 
**requested_reviewers** | [**Vec<crate::models::PullRequestRequestedReviewersInner>**](Pull_Request_requested_reviewers_inner.md) |  | 
**requested_teams** | [**Vec<crate::models::Team>**](Team.md) |  | 
**review_comment_url** | **String** |  | 
**review_comments_url** | **String** |  | 
**state** | **String** |  | 
**statuses_url** | **String** |  | 
**title** | **String** |  | 
**updated_at** | **String** |  | 
**url** | **String** |  | 
**user** | Option<[**crate::models::User2**](User_2.md)> |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


