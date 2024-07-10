# TimelineCommittedEvent

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**event** | Option<**String**> |  | [optional]
**sha** | **String** | SHA for the commit | 
**node_id** | **String** |  | 
**url** | **String** |  | 
**author** | [**crate::models::GitCommitAuthor**](git_commit_author.md) |  | 
**committer** | [**crate::models::GitCommitAuthor**](git_commit_author.md) |  | 
**message** | **String** | Message describing the purpose of the commit | 
**tree** | [**crate::models::GitCommitTree**](git_commit_tree.md) |  | 
**parents** | [**Vec<crate::models::GitCommitParentsInner>**](git_commit_parents_inner.md) |  | 
**verification** | [**crate::models::GitCommitVerification**](git_commit_verification.md) |  | 
**html_url** | **String** |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


