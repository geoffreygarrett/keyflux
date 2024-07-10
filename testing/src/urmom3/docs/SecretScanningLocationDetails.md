# SecretScanningLocationDetails

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**path** | **String** | The file path of the wiki page | 
**start_line** | **f32** | Line number at which the secret starts in the file | 
**end_line** | **f32** | Line number at which the secret ends in the file | 
**start_column** | **f32** | The column at which the secret starts within the start line when the file is interpreted as 8-bit ASCII. | 
**end_column** | **f32** | The column at which the secret ends within the end line when the file is interpreted as 8-bit ASCII. | 
**blob_sha** | **String** | SHA-1 hash ID of the associated blob | 
**blob_url** | **String** | The API URL to get the associated blob resource | 
**commit_sha** | **String** | SHA-1 hash ID of the associated commit | 
**commit_url** | **String** | The GitHub URL to get the associated wiki commit | 
**page_url** | **String** | The GitHub URL to get the associated wiki page | 
**issue_title_url** | **String** | The API URL to get the issue where the secret was detected. | 
**issue_body_url** | **String** | The API URL to get the issue where the secret was detected. | 
**issue_comment_url** | **String** | The API URL to get the issue comment where the secret was detected. | 
**discussion_title_url** | **String** | The URL to the discussion where the secret was detected. | 
**discussion_body_url** | **String** | The URL to the discussion where the secret was detected. | 
**discussion_comment_url** | **String** | The API URL to get the discussion comment where the secret was detected. | 
**pull_request_title_url** | **String** | The API URL to get the pull request where the secret was detected. | 
**pull_request_body_url** | **String** | The API URL to get the pull request where the secret was detected. | 
**pull_request_comment_url** | **String** | The API URL to get the pull request comment where the secret was detected. | 
**pull_request_review_url** | **String** | The API URL to get the pull request review where the secret was detected. | 
**pull_request_review_comment_url** | **String** | The API URL to get the pull request review comment where the secret was detected. | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


