# CommitSearchResultItem

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**url** | **String** |  | 
**sha** | **String** |  | 
**html_url** | **String** |  | 
**comments_url** | **String** |  | 
**commit** | [**crate::models::CommitSearchResultItemCommit**](commit_search_result_item_commit.md) |  | 
**author** | Option<[**crate::models::NullableSimpleUser**](nullable-simple-user.md)> |  | 
**committer** | Option<[**crate::models::NullableGitUser**](nullable-git-user.md)> |  | 
**parents** | [**Vec<crate::models::FileCommitCommitParentsInner>**](file_commit_commit_parents_inner.md) |  | 
**repository** | [**crate::models::MinimalRepository**](minimal-repository.md) |  | 
**score** | **f32** |  | 
**node_id** | **String** |  | 
**text_matches** | Option<[**Vec<crate::models::SearchResultTextMatchesInner>**](search_result_text_matches_inner.md)> |  | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


