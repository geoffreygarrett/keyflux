# OpenapiClient::PullsApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**pulls_check_if_merged**](PullsApi.md#pulls_check_if_merged) | **GET** /repos/{owner}/{repo}/pulls/{pull_number}/merge | Check if a pull request has been merged |
| [**pulls_create**](PullsApi.md#pulls_create) | **POST** /repos/{owner}/{repo}/pulls | Create a pull request |
| [**pulls_create_reply_for_review_comment**](PullsApi.md#pulls_create_reply_for_review_comment) | **POST** /repos/{owner}/{repo}/pulls/{pull_number}/comments/{comment_id}/replies | Create a reply for a review comment |
| [**pulls_create_review**](PullsApi.md#pulls_create_review) | **POST** /repos/{owner}/{repo}/pulls/{pull_number}/reviews | Create a review for a pull request |
| [**pulls_create_review_comment**](PullsApi.md#pulls_create_review_comment) | **POST** /repos/{owner}/{repo}/pulls/{pull_number}/comments | Create a review comment for a pull request |
| [**pulls_delete_pending_review**](PullsApi.md#pulls_delete_pending_review) | **DELETE** /repos/{owner}/{repo}/pulls/{pull_number}/reviews/{review_id} | Delete a pending review for a pull request |
| [**pulls_delete_review_comment**](PullsApi.md#pulls_delete_review_comment) | **DELETE** /repos/{owner}/{repo}/pulls/comments/{comment_id} | Delete a review comment for a pull request |
| [**pulls_dismiss_review**](PullsApi.md#pulls_dismiss_review) | **PUT** /repos/{owner}/{repo}/pulls/{pull_number}/reviews/{review_id}/dismissals | Dismiss a review for a pull request |
| [**pulls_get**](PullsApi.md#pulls_get) | **GET** /repos/{owner}/{repo}/pulls/{pull_number} | Get a pull request |
| [**pulls_get_review**](PullsApi.md#pulls_get_review) | **GET** /repos/{owner}/{repo}/pulls/{pull_number}/reviews/{review_id} | Get a review for a pull request |
| [**pulls_get_review_comment**](PullsApi.md#pulls_get_review_comment) | **GET** /repos/{owner}/{repo}/pulls/comments/{comment_id} | Get a review comment for a pull request |
| [**pulls_list**](PullsApi.md#pulls_list) | **GET** /repos/{owner}/{repo}/pulls | List pull requests |
| [**pulls_list_comments_for_review**](PullsApi.md#pulls_list_comments_for_review) | **GET** /repos/{owner}/{repo}/pulls/{pull_number}/reviews/{review_id}/comments | List comments for a pull request review |
| [**pulls_list_commits**](PullsApi.md#pulls_list_commits) | **GET** /repos/{owner}/{repo}/pulls/{pull_number}/commits | List commits on a pull request |
| [**pulls_list_files**](PullsApi.md#pulls_list_files) | **GET** /repos/{owner}/{repo}/pulls/{pull_number}/files | List pull requests files |
| [**pulls_list_requested_reviewers**](PullsApi.md#pulls_list_requested_reviewers) | **GET** /repos/{owner}/{repo}/pulls/{pull_number}/requested_reviewers | Get all requested reviewers for a pull request |
| [**pulls_list_review_comments**](PullsApi.md#pulls_list_review_comments) | **GET** /repos/{owner}/{repo}/pulls/{pull_number}/comments | List review comments on a pull request |
| [**pulls_list_review_comments_for_repo**](PullsApi.md#pulls_list_review_comments_for_repo) | **GET** /repos/{owner}/{repo}/pulls/comments | List review comments in a repository |
| [**pulls_list_reviews**](PullsApi.md#pulls_list_reviews) | **GET** /repos/{owner}/{repo}/pulls/{pull_number}/reviews | List reviews for a pull request |
| [**pulls_merge**](PullsApi.md#pulls_merge) | **PUT** /repos/{owner}/{repo}/pulls/{pull_number}/merge | Merge a pull request |
| [**pulls_remove_requested_reviewers**](PullsApi.md#pulls_remove_requested_reviewers) | **DELETE** /repos/{owner}/{repo}/pulls/{pull_number}/requested_reviewers | Remove requested reviewers from a pull request |
| [**pulls_request_reviewers**](PullsApi.md#pulls_request_reviewers) | **POST** /repos/{owner}/{repo}/pulls/{pull_number}/requested_reviewers | Request reviewers for a pull request |
| [**pulls_submit_review**](PullsApi.md#pulls_submit_review) | **POST** /repos/{owner}/{repo}/pulls/{pull_number}/reviews/{review_id}/events | Submit a review for a pull request |
| [**pulls_update**](PullsApi.md#pulls_update) | **PATCH** /repos/{owner}/{repo}/pulls/{pull_number} | Update a pull request |
| [**pulls_update_branch**](PullsApi.md#pulls_update_branch) | **PUT** /repos/{owner}/{repo}/pulls/{pull_number}/update-branch | Update a pull request branch |
| [**pulls_update_review**](PullsApi.md#pulls_update_review) | **PUT** /repos/{owner}/{repo}/pulls/{pull_number}/reviews/{review_id} | Update a review for a pull request |
| [**pulls_update_review_comment**](PullsApi.md#pulls_update_review_comment) | **PATCH** /repos/{owner}/{repo}/pulls/comments/{comment_id} | Update a review comment for a pull request |


## pulls_check_if_merged

> pulls_check_if_merged(owner, repo, pull_number)

Check if a pull request has been merged

Checks if a pull request has been merged into the base branch. The HTTP status of the response indicates whether or not the pull request has been merged; the response body is empty.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.

begin
  # Check if a pull request has been merged
  api_instance.pulls_check_if_merged(owner, repo, pull_number)
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_check_if_merged: #{e}"
end
```

#### Using the pulls_check_if_merged_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> pulls_check_if_merged_with_http_info(owner, repo, pull_number)

```ruby
begin
  # Check if a pull request has been merged
  data, status_code, headers = api_instance.pulls_check_if_merged_with_http_info(owner, repo, pull_number)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_check_if_merged_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## pulls_create

> <PullRequest> pulls_create(owner, repo, pulls_create_request)

Create a pull request

Draft pull requests are available in public repositories with GitHub Free and GitHub Free for organizations, GitHub Pro, and legacy per-repository billing plans, and in public and private repositories with GitHub Team and GitHub Enterprise Cloud. For more information, see [GitHub's products](https://docs.github.com/github/getting-started-with-github/githubs-products) in the GitHub Help documentation.  To open or update a pull request in a public repository, you must have write access to the head or the source branch. For organization-owned repositories, you must be a member of the organization that owns the repository to open or update a pull request.  This endpoint triggers [notifications](https://docs.github.com/github/managing-subscriptions-and-notifications-on-github/about-notifications). Creating content too quickly using this endpoint may result in secondary rate limiting. For more information, see \"[Rate limits for the API](https://docs.github.com/rest/using-the-rest-api/rate-limits-for-the-rest-api#about-secondary-rate-limits)\" and \"[Best practices for using the REST API](https://docs.github.com/rest/guides/best-practices-for-using-the-rest-api).\"  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pulls_create_request = OpenapiClient::PullsCreateRequest.new({head: 'head_example', base: 'base_example'}) # PullsCreateRequest | 

begin
  # Create a pull request
  result = api_instance.pulls_create(owner, repo, pulls_create_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_create: #{e}"
end
```

#### Using the pulls_create_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PullRequest>, Integer, Hash)> pulls_create_with_http_info(owner, repo, pulls_create_request)

```ruby
begin
  # Create a pull request
  data, status_code, headers = api_instance.pulls_create_with_http_info(owner, repo, pulls_create_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PullRequest>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_create_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pulls_create_request** | [**PullsCreateRequest**](PullsCreateRequest.md) |  |  |

### Return type

[**PullRequest**](PullRequest.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## pulls_create_reply_for_review_comment

> <PullRequestReviewComment> pulls_create_reply_for_review_comment(owner, repo, pull_number, comment_id, pulls_create_reply_for_review_comment_request)

Create a reply for a review comment

Creates a reply to a review comment for a pull request. For the `comment_id`, provide the ID of the review comment you are replying to. This must be the ID of a _top-level review comment_, not a reply to that comment. Replies to replies are not supported.  This endpoint triggers [notifications](https://docs.github.com/github/managing-subscriptions-and-notifications-on-github/about-notifications). Creating content too quickly using this endpoint may result in secondary rate limiting. For more information, see \"[Rate limits for the API](https://docs.github.com/rest/using-the-rest-api/rate-limits-for-the-rest-api#about-secondary-rate-limits)\" and \"[Best practices for using the REST API](https://docs.github.com/rest/guides/best-practices-for-using-the-rest-api).\"  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github-commitcomment.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github-commitcomment.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github-commitcomment.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github-commitcomment.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.
comment_id = 56 # Integer | The unique identifier of the comment.
pulls_create_reply_for_review_comment_request = OpenapiClient::PullsCreateReplyForReviewCommentRequest.new({body: 'body_example'}) # PullsCreateReplyForReviewCommentRequest | 

begin
  # Create a reply for a review comment
  result = api_instance.pulls_create_reply_for_review_comment(owner, repo, pull_number, comment_id, pulls_create_reply_for_review_comment_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_create_reply_for_review_comment: #{e}"
end
```

#### Using the pulls_create_reply_for_review_comment_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PullRequestReviewComment>, Integer, Hash)> pulls_create_reply_for_review_comment_with_http_info(owner, repo, pull_number, comment_id, pulls_create_reply_for_review_comment_request)

```ruby
begin
  # Create a reply for a review comment
  data, status_code, headers = api_instance.pulls_create_reply_for_review_comment_with_http_info(owner, repo, pull_number, comment_id, pulls_create_reply_for_review_comment_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PullRequestReviewComment>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_create_reply_for_review_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |
| **comment_id** | **Integer** | The unique identifier of the comment. |  |
| **pulls_create_reply_for_review_comment_request** | [**PullsCreateReplyForReviewCommentRequest**](PullsCreateReplyForReviewCommentRequest.md) |  |  |

### Return type

[**PullRequestReviewComment**](PullRequestReviewComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## pulls_create_review

> <PullRequestReview> pulls_create_review(owner, repo, pull_number, opts)

Create a review for a pull request

Creates a review on a specified pull request.  This endpoint triggers [notifications](https://docs.github.com/github/managing-subscriptions-and-notifications-on-github/about-notifications). Creating content too quickly using this endpoint may result in secondary rate limiting. For more information, see \"[Rate limits for the API](https://docs.github.com/rest/using-the-rest-api/rate-limits-for-the-rest-api#about-secondary-rate-limits)\" and \"[Best practices for using the REST API](https://docs.github.com/rest/guides/best-practices-for-using-the-rest-api).\"  Pull request reviews created in the `PENDING` state are not submitted and therefore do not include the `submitted_at` property in the response. To create a pending review for a pull request, leave the `event` parameter blank. For more information about submitting a `PENDING` review, see \"[Submit a review for a pull request](https://docs.github.com/rest/pulls/reviews#submit-a-review-for-a-pull-request).\"  **Note:** To comment on a specific line in a file, you need to first determine the position of that line in the diff. To see a pull request diff, add the `application/vnd.github.v3.diff` media type to the `Accept` header of a call to the [Get a pull request](https://docs.github.com/rest/pulls/pulls#get-a-pull-request) endpoint.  The `position` value equals the number of lines down from the first \"@@\" hunk header in the file you want to add a comment. The line just below the \"@@\" line is position 1, the next line is position 2, and so on. The position in the diff continues to increase through lines of whitespace and additional hunks until the beginning of a new file.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github-commitcomment.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github-commitcomment.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github-commitcomment.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github-commitcomment.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.
opts = {
  pulls_create_review_request: OpenapiClient::PullsCreateReviewRequest.new # PullsCreateReviewRequest | 
}

begin
  # Create a review for a pull request
  result = api_instance.pulls_create_review(owner, repo, pull_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_create_review: #{e}"
end
```

#### Using the pulls_create_review_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PullRequestReview>, Integer, Hash)> pulls_create_review_with_http_info(owner, repo, pull_number, opts)

```ruby
begin
  # Create a review for a pull request
  data, status_code, headers = api_instance.pulls_create_review_with_http_info(owner, repo, pull_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PullRequestReview>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_create_review_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |
| **pulls_create_review_request** | [**PullsCreateReviewRequest**](PullsCreateReviewRequest.md) |  | [optional] |

### Return type

[**PullRequestReview**](PullRequestReview.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## pulls_create_review_comment

> <PullRequestReviewComment> pulls_create_review_comment(owner, repo, pull_number, pulls_create_review_comment_request)

Create a review comment for a pull request

Creates a review comment on the diff of a specified pull request. To add a regular comment to a pull request timeline, see \"[Create an issue comment](https://docs.github.com/rest/issues/comments#create-an-issue-comment).\"  If your comment applies to more than one line in the pull request diff, you should use the parameters `line`, `side`, and optionally `start_line` and `start_side` in your request.  The `position` parameter is deprecated. If you use `position`, the `line`, `side`, `start_line`, and `start_side` parameters are not required.  This endpoint triggers [notifications](https://docs.github.com/github/managing-subscriptions-and-notifications-on-github/about-notifications). Creating content too quickly using this endpoint may result in secondary rate limiting. For more information, see \"[Rate limits for the API](https://docs.github.com/rest/using-the-rest-api/rate-limits-for-the-rest-api#about-secondary-rate-limits)\" and \"[Best practices for using the REST API](https://docs.github.com/rest/guides/best-practices-for-using-the-rest-api).\"  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github-commitcomment.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github-commitcomment.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github-commitcomment.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github-commitcomment.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.
pulls_create_review_comment_request = OpenapiClient::PullsCreateReviewCommentRequest.new({body: 'body_example', commit_id: 'commit_id_example', path: 'path_example'}) # PullsCreateReviewCommentRequest | 

begin
  # Create a review comment for a pull request
  result = api_instance.pulls_create_review_comment(owner, repo, pull_number, pulls_create_review_comment_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_create_review_comment: #{e}"
end
```

#### Using the pulls_create_review_comment_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PullRequestReviewComment>, Integer, Hash)> pulls_create_review_comment_with_http_info(owner, repo, pull_number, pulls_create_review_comment_request)

```ruby
begin
  # Create a review comment for a pull request
  data, status_code, headers = api_instance.pulls_create_review_comment_with_http_info(owner, repo, pull_number, pulls_create_review_comment_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PullRequestReviewComment>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_create_review_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |
| **pulls_create_review_comment_request** | [**PullsCreateReviewCommentRequest**](PullsCreateReviewCommentRequest.md) |  |  |

### Return type

[**PullRequestReviewComment**](PullRequestReviewComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## pulls_delete_pending_review

> <PullRequestReview> pulls_delete_pending_review(owner, repo, pull_number, review_id)

Delete a pending review for a pull request

Deletes a pull request review that has not been submitted. Submitted reviews cannot be deleted.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github-commitcomment.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github-commitcomment.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github-commitcomment.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github-commitcomment.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.
review_id = 56 # Integer | The unique identifier of the review.

begin
  # Delete a pending review for a pull request
  result = api_instance.pulls_delete_pending_review(owner, repo, pull_number, review_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_delete_pending_review: #{e}"
end
```

#### Using the pulls_delete_pending_review_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PullRequestReview>, Integer, Hash)> pulls_delete_pending_review_with_http_info(owner, repo, pull_number, review_id)

```ruby
begin
  # Delete a pending review for a pull request
  data, status_code, headers = api_instance.pulls_delete_pending_review_with_http_info(owner, repo, pull_number, review_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PullRequestReview>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_delete_pending_review_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |
| **review_id** | **Integer** | The unique identifier of the review. |  |

### Return type

[**PullRequestReview**](PullRequestReview.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pulls_delete_review_comment

> pulls_delete_review_comment(owner, repo, comment_id)

Delete a review comment for a pull request

Deletes a review comment.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
comment_id = 56 # Integer | The unique identifier of the comment.

begin
  # Delete a review comment for a pull request
  api_instance.pulls_delete_review_comment(owner, repo, comment_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_delete_review_comment: #{e}"
end
```

#### Using the pulls_delete_review_comment_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> pulls_delete_review_comment_with_http_info(owner, repo, comment_id)

```ruby
begin
  # Delete a review comment for a pull request
  data, status_code, headers = api_instance.pulls_delete_review_comment_with_http_info(owner, repo, comment_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_delete_review_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **comment_id** | **Integer** | The unique identifier of the comment. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pulls_dismiss_review

> <PullRequestReview> pulls_dismiss_review(owner, repo, pull_number, review_id, pulls_dismiss_review_request)

Dismiss a review for a pull request

Dismisses a specified review on a pull request.  **Note:** To dismiss a pull request review on a [protected branch](https://docs.github.com/rest/branches/branch-protection), you must be a repository administrator or be included in the list of people or teams who can dismiss pull request reviews.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github-commitcomment.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github-commitcomment.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github-commitcomment.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github-commitcomment.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.
review_id = 56 # Integer | The unique identifier of the review.
pulls_dismiss_review_request = OpenapiClient::PullsDismissReviewRequest.new({message: 'message_example'}) # PullsDismissReviewRequest | 

begin
  # Dismiss a review for a pull request
  result = api_instance.pulls_dismiss_review(owner, repo, pull_number, review_id, pulls_dismiss_review_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_dismiss_review: #{e}"
end
```

#### Using the pulls_dismiss_review_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PullRequestReview>, Integer, Hash)> pulls_dismiss_review_with_http_info(owner, repo, pull_number, review_id, pulls_dismiss_review_request)

```ruby
begin
  # Dismiss a review for a pull request
  data, status_code, headers = api_instance.pulls_dismiss_review_with_http_info(owner, repo, pull_number, review_id, pulls_dismiss_review_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PullRequestReview>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_dismiss_review_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |
| **review_id** | **Integer** | The unique identifier of the review. |  |
| **pulls_dismiss_review_request** | [**PullsDismissReviewRequest**](PullsDismissReviewRequest.md) |  |  |

### Return type

[**PullRequestReview**](PullRequestReview.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## pulls_get

> <PullRequest> pulls_get(owner, repo, pull_number)

Get a pull request

Draft pull requests are available in public repositories with GitHub Free and GitHub Free for organizations, GitHub Pro, and legacy per-repository billing plans, and in public and private repositories with GitHub Team and GitHub Enterprise Cloud. For more information, see [GitHub's products](https://docs.github.com/github/getting-started-with-github/githubs-products) in the GitHub Help documentation.  Lists details of a pull request by providing its number.  When you get, [create](https://docs.github.com/rest/pulls/pulls/#create-a-pull-request), or [edit](https://docs.github.com/rest/pulls/pulls#update-a-pull-request) a pull request, GitHub creates a merge commit to test whether the pull request can be automatically merged into the base branch. This test commit is not added to the base branch or the head branch. You can review the status of the test commit using the `mergeable` key. For more information, see \"[Checking mergeability of pull requests](https://docs.github.com/rest/guides/getting-started-with-the-git-database-api#checking-mergeability-of-pull-requests)\".  The value of the `mergeable` attribute can be `true`, `false`, or `null`. If the value is `null`, then GitHub has started a background job to compute the mergeability. After giving the job time to complete, resubmit the request. When the job finishes, you will see a non-`null` value for the `mergeable` attribute in the response. If `mergeable` is `true`, then `merge_commit_sha` will be the SHA of the _test_ merge commit.  The value of the `merge_commit_sha` attribute changes depending on the state of the pull request. Before merging a pull request, the `merge_commit_sha` attribute holds the SHA of the _test_ merge commit. After merging a pull request, the `merge_commit_sha` attribute changes depending on how you merged the pull request:  *   If merged as a [merge commit](https://docs.github.com/articles/about-merge-methods-on-github/), `merge_commit_sha` represents the SHA of the merge commit. *   If merged via a [squash](https://docs.github.com/articles/about-merge-methods-on-github/#squashing-your-merge-commits), `merge_commit_sha` represents the SHA of the squashed commit on the base branch. *   If [rebased](https://docs.github.com/articles/about-merge-methods-on-github/#rebasing-and-merging-your-commits), `merge_commit_sha` represents the commit that the base branch was updated to.  Pass the appropriate [media type](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types) to fetch diff and patch formats.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`. - **`application/vnd.github.diff`**: For more information, see \"[git-diff](https://git-scm.com/docs/git-diff)\" in the Git documentation. If a diff is corrupt, contact us through the [GitHub Support portal](https://support.github.com/). Include the repository name and pull request ID in your message.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.

begin
  # Get a pull request
  result = api_instance.pulls_get(owner, repo, pull_number)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_get: #{e}"
end
```

#### Using the pulls_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PullRequest>, Integer, Hash)> pulls_get_with_http_info(owner, repo, pull_number)

```ruby
begin
  # Get a pull request
  data, status_code, headers = api_instance.pulls_get_with_http_info(owner, repo, pull_number)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PullRequest>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |

### Return type

[**PullRequest**](PullRequest.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pulls_get_review

> <PullRequestReview> pulls_get_review(owner, repo, pull_number, review_id)

Get a review for a pull request

Retrieves a pull request review by its ID.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github-commitcomment.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github-commitcomment.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github-commitcomment.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github-commitcomment.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.
review_id = 56 # Integer | The unique identifier of the review.

begin
  # Get a review for a pull request
  result = api_instance.pulls_get_review(owner, repo, pull_number, review_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_get_review: #{e}"
end
```

#### Using the pulls_get_review_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PullRequestReview>, Integer, Hash)> pulls_get_review_with_http_info(owner, repo, pull_number, review_id)

```ruby
begin
  # Get a review for a pull request
  data, status_code, headers = api_instance.pulls_get_review_with_http_info(owner, repo, pull_number, review_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PullRequestReview>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_get_review_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |
| **review_id** | **Integer** | The unique identifier of the review. |  |

### Return type

[**PullRequestReview**](PullRequestReview.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pulls_get_review_comment

> <PullRequestReviewComment> pulls_get_review_comment(owner, repo, comment_id)

Get a review comment for a pull request

Provides details for a specified review comment.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github-commitcomment.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github-commitcomment.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github-commitcomment.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github-commitcomment.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
comment_id = 56 # Integer | The unique identifier of the comment.

begin
  # Get a review comment for a pull request
  result = api_instance.pulls_get_review_comment(owner, repo, comment_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_get_review_comment: #{e}"
end
```

#### Using the pulls_get_review_comment_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PullRequestReviewComment>, Integer, Hash)> pulls_get_review_comment_with_http_info(owner, repo, comment_id)

```ruby
begin
  # Get a review comment for a pull request
  data, status_code, headers = api_instance.pulls_get_review_comment_with_http_info(owner, repo, comment_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PullRequestReviewComment>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_get_review_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **comment_id** | **Integer** | The unique identifier of the comment. |  |

### Return type

[**PullRequestReviewComment**](PullRequestReviewComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pulls_list

> <Array<PullRequestSimple>> pulls_list(owner, repo, opts)

List pull requests

Lists pull requests in a specified repository.  Draft pull requests are available in public repositories with GitHub Free and GitHub Free for organizations, GitHub Pro, and legacy per-repository billing plans, and in public and private repositories with GitHub Team and GitHub Enterprise Cloud. For more information, see [GitHub's products](https://docs.github.com/github/getting-started-with-github/githubs-products) in the GitHub Help documentation.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  state: 'open', # String | Either `open`, `closed`, or `all` to filter by state.
  head: 'head_example', # String | Filter pulls by head user or head organization and branch name in the format of `user:ref-name` or `organization:ref-name`. For example: `github:new-script-format` or `octocat:test-branch`.
  base: 'base_example', # String | Filter pulls by base branch name. Example: `gh-pages`.
  sort: 'created', # String | What to sort results by. `popularity` will sort by the number of comments. `long-running` will sort by date created and will limit the results to pull requests that have been open for more than a month and have had activity within the past month.
  direction: 'asc', # String | The direction of the sort. Default: `desc` when sort is `created` or sort is not specified, otherwise `asc`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List pull requests
  result = api_instance.pulls_list(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_list: #{e}"
end
```

#### Using the pulls_list_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<PullRequestSimple>>, Integer, Hash)> pulls_list_with_http_info(owner, repo, opts)

```ruby
begin
  # List pull requests
  data, status_code, headers = api_instance.pulls_list_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<PullRequestSimple>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_list_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **state** | **String** | Either &#x60;open&#x60;, &#x60;closed&#x60;, or &#x60;all&#x60; to filter by state. | [optional][default to &#39;open&#39;] |
| **head** | **String** | Filter pulls by head user or head organization and branch name in the format of &#x60;user:ref-name&#x60; or &#x60;organization:ref-name&#x60;. For example: &#x60;github:new-script-format&#x60; or &#x60;octocat:test-branch&#x60;. | [optional] |
| **base** | **String** | Filter pulls by base branch name. Example: &#x60;gh-pages&#x60;. | [optional] |
| **sort** | **String** | What to sort results by. &#x60;popularity&#x60; will sort by the number of comments. &#x60;long-running&#x60; will sort by date created and will limit the results to pull requests that have been open for more than a month and have had activity within the past month. | [optional][default to &#39;created&#39;] |
| **direction** | **String** | The direction of the sort. Default: &#x60;desc&#x60; when sort is &#x60;created&#x60; or sort is not specified, otherwise &#x60;asc&#x60;. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;PullRequestSimple&gt;**](PullRequestSimple.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pulls_list_comments_for_review

> <Array<ReviewComment>> pulls_list_comments_for_review(owner, repo, pull_number, review_id, opts)

List comments for a pull request review

Lists comments for a specific pull request review.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github-commitcomment.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github-commitcomment.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github-commitcomment.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github-commitcomment.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.
review_id = 56 # Integer | The unique identifier of the review.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List comments for a pull request review
  result = api_instance.pulls_list_comments_for_review(owner, repo, pull_number, review_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_list_comments_for_review: #{e}"
end
```

#### Using the pulls_list_comments_for_review_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<ReviewComment>>, Integer, Hash)> pulls_list_comments_for_review_with_http_info(owner, repo, pull_number, review_id, opts)

```ruby
begin
  # List comments for a pull request review
  data, status_code, headers = api_instance.pulls_list_comments_for_review_with_http_info(owner, repo, pull_number, review_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<ReviewComment>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_list_comments_for_review_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |
| **review_id** | **Integer** | The unique identifier of the review. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;ReviewComment&gt;**](ReviewComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pulls_list_commits

> <Array<Commit>> pulls_list_commits(owner, repo, pull_number, opts)

List commits on a pull request

Lists a maximum of 250 commits for a pull request. To receive a complete commit list for pull requests with more than 250 commits, use the [List commits](https://docs.github.com/rest/commits/commits#list-commits) endpoint.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List commits on a pull request
  result = api_instance.pulls_list_commits(owner, repo, pull_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_list_commits: #{e}"
end
```

#### Using the pulls_list_commits_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Commit>>, Integer, Hash)> pulls_list_commits_with_http_info(owner, repo, pull_number, opts)

```ruby
begin
  # List commits on a pull request
  data, status_code, headers = api_instance.pulls_list_commits_with_http_info(owner, repo, pull_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Commit>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_list_commits_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Commit&gt;**](Commit.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pulls_list_files

> <Array<DiffEntry>> pulls_list_files(owner, repo, pull_number, opts)

List pull requests files

Lists the files in a specified pull request.  **Note:** Responses include a maximum of 3000 files. The paginated response returns 30 files per page by default.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List pull requests files
  result = api_instance.pulls_list_files(owner, repo, pull_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_list_files: #{e}"
end
```

#### Using the pulls_list_files_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<DiffEntry>>, Integer, Hash)> pulls_list_files_with_http_info(owner, repo, pull_number, opts)

```ruby
begin
  # List pull requests files
  data, status_code, headers = api_instance.pulls_list_files_with_http_info(owner, repo, pull_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<DiffEntry>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_list_files_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;DiffEntry&gt;**](DiffEntry.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pulls_list_requested_reviewers

> <PullRequestReviewRequest> pulls_list_requested_reviewers(owner, repo, pull_number)

Get all requested reviewers for a pull request

Gets the users or teams whose review is requested for a pull request. Once a requested reviewer submits a review, they are no longer considered a requested reviewer. Their review will instead be returned by the [List reviews for a pull request](https://docs.github.com/rest/pulls/reviews#list-reviews-for-a-pull-request) operation.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.

begin
  # Get all requested reviewers for a pull request
  result = api_instance.pulls_list_requested_reviewers(owner, repo, pull_number)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_list_requested_reviewers: #{e}"
end
```

#### Using the pulls_list_requested_reviewers_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PullRequestReviewRequest>, Integer, Hash)> pulls_list_requested_reviewers_with_http_info(owner, repo, pull_number)

```ruby
begin
  # Get all requested reviewers for a pull request
  data, status_code, headers = api_instance.pulls_list_requested_reviewers_with_http_info(owner, repo, pull_number)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PullRequestReviewRequest>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_list_requested_reviewers_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |

### Return type

[**PullRequestReviewRequest**](PullRequestReviewRequest.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pulls_list_review_comments

> <Array<PullRequestReviewComment>> pulls_list_review_comments(owner, repo, pull_number, opts)

List review comments on a pull request

Lists all review comments for a specified pull request. By default, review comments are in ascending order by ID.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github-commitcomment.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github-commitcomment.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github-commitcomment.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github-commitcomment.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.
opts = {
  sort: 'created', # String | The property to sort the results by.
  direction: 'asc', # String | The direction to sort results. Ignored without `sort` parameter.
  since: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List review comments on a pull request
  result = api_instance.pulls_list_review_comments(owner, repo, pull_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_list_review_comments: #{e}"
end
```

#### Using the pulls_list_review_comments_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<PullRequestReviewComment>>, Integer, Hash)> pulls_list_review_comments_with_http_info(owner, repo, pull_number, opts)

```ruby
begin
  # List review comments on a pull request
  data, status_code, headers = api_instance.pulls_list_review_comments_with_http_info(owner, repo, pull_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<PullRequestReviewComment>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_list_review_comments_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |
| **sort** | **String** | The property to sort the results by. | [optional][default to &#39;created&#39;] |
| **direction** | **String** | The direction to sort results. Ignored without &#x60;sort&#x60; parameter. | [optional] |
| **since** | **Time** | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;PullRequestReviewComment&gt;**](PullRequestReviewComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pulls_list_review_comments_for_repo

> <Array<PullRequestReviewComment>> pulls_list_review_comments_for_repo(owner, repo, opts)

List review comments in a repository

Lists review comments for all pull requests in a repository. By default, review comments are in ascending order by ID.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github-commitcomment.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github-commitcomment.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github-commitcomment.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github-commitcomment.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  sort: 'created', # String | 
  direction: 'asc', # String | The direction to sort results. Ignored without `sort` parameter.
  since: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List review comments in a repository
  result = api_instance.pulls_list_review_comments_for_repo(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_list_review_comments_for_repo: #{e}"
end
```

#### Using the pulls_list_review_comments_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<PullRequestReviewComment>>, Integer, Hash)> pulls_list_review_comments_for_repo_with_http_info(owner, repo, opts)

```ruby
begin
  # List review comments in a repository
  data, status_code, headers = api_instance.pulls_list_review_comments_for_repo_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<PullRequestReviewComment>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_list_review_comments_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **sort** | **String** |  | [optional] |
| **direction** | **String** | The direction to sort results. Ignored without &#x60;sort&#x60; parameter. | [optional] |
| **since** | **Time** | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;PullRequestReviewComment&gt;**](PullRequestReviewComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pulls_list_reviews

> <Array<PullRequestReview>> pulls_list_reviews(owner, repo, pull_number, opts)

List reviews for a pull request

Lists all reviews for a specified pull request. The list of reviews returns in chronological order.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github-commitcomment.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github-commitcomment.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github-commitcomment.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github-commitcomment.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List reviews for a pull request
  result = api_instance.pulls_list_reviews(owner, repo, pull_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_list_reviews: #{e}"
end
```

#### Using the pulls_list_reviews_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<PullRequestReview>>, Integer, Hash)> pulls_list_reviews_with_http_info(owner, repo, pull_number, opts)

```ruby
begin
  # List reviews for a pull request
  data, status_code, headers = api_instance.pulls_list_reviews_with_http_info(owner, repo, pull_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<PullRequestReview>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_list_reviews_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;PullRequestReview&gt;**](PullRequestReview.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pulls_merge

> <PullRequestMergeResult> pulls_merge(owner, repo, pull_number, opts)

Merge a pull request

Merges a pull request into the base branch. This endpoint triggers [notifications](https://docs.github.com/github/managing-subscriptions-and-notifications-on-github/about-notifications). Creating content too quickly using this endpoint may result in secondary rate limiting. For more information, see \"[Rate limits for the API](https://docs.github.com/rest/using-the-rest-api/rate-limits-for-the-rest-api#about-secondary-rate-limits)\" and \"[Best practices for using the REST API](https://docs.github.com/rest/guides/best-practices-for-using-the-rest-api).\"

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.
opts = {
  pulls_merge_request: OpenapiClient::PullsMergeRequest.new # PullsMergeRequest | 
}

begin
  # Merge a pull request
  result = api_instance.pulls_merge(owner, repo, pull_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_merge: #{e}"
end
```

#### Using the pulls_merge_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PullRequestMergeResult>, Integer, Hash)> pulls_merge_with_http_info(owner, repo, pull_number, opts)

```ruby
begin
  # Merge a pull request
  data, status_code, headers = api_instance.pulls_merge_with_http_info(owner, repo, pull_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PullRequestMergeResult>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_merge_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |
| **pulls_merge_request** | [**PullsMergeRequest**](PullsMergeRequest.md) |  | [optional] |

### Return type

[**PullRequestMergeResult**](PullRequestMergeResult.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## pulls_remove_requested_reviewers

> <PullRequestSimple> pulls_remove_requested_reviewers(owner, repo, pull_number, pulls_remove_requested_reviewers_request)

Remove requested reviewers from a pull request

Removes review requests from a pull request for a given set of users and/or teams.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.
pulls_remove_requested_reviewers_request = OpenapiClient::PullsRemoveRequestedReviewersRequest.new({reviewers: ['reviewers_example']}) # PullsRemoveRequestedReviewersRequest | 

begin
  # Remove requested reviewers from a pull request
  result = api_instance.pulls_remove_requested_reviewers(owner, repo, pull_number, pulls_remove_requested_reviewers_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_remove_requested_reviewers: #{e}"
end
```

#### Using the pulls_remove_requested_reviewers_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PullRequestSimple>, Integer, Hash)> pulls_remove_requested_reviewers_with_http_info(owner, repo, pull_number, pulls_remove_requested_reviewers_request)

```ruby
begin
  # Remove requested reviewers from a pull request
  data, status_code, headers = api_instance.pulls_remove_requested_reviewers_with_http_info(owner, repo, pull_number, pulls_remove_requested_reviewers_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PullRequestSimple>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_remove_requested_reviewers_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |
| **pulls_remove_requested_reviewers_request** | [**PullsRemoveRequestedReviewersRequest**](PullsRemoveRequestedReviewersRequest.md) |  |  |

### Return type

[**PullRequestSimple**](PullRequestSimple.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## pulls_request_reviewers

> <PullRequestSimple> pulls_request_reviewers(owner, repo, pull_number, opts)

Request reviewers for a pull request

Requests reviews for a pull request from a given set of users and/or teams. This endpoint triggers [notifications](https://docs.github.com/github/managing-subscriptions-and-notifications-on-github/about-notifications). Creating content too quickly using this endpoint may result in secondary rate limiting. For more information, see \"[Rate limits for the API](https://docs.github.com/rest/using-the-rest-api/rate-limits-for-the-rest-api#about-secondary-rate-limits)\" and \"[Best practices for using the REST API](https://docs.github.com/rest/guides/best-practices-for-using-the-rest-api).\"

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.
opts = {
  pulls_request_reviewers_request: OpenapiClient::PullsRequestReviewersRequest.new # PullsRequestReviewersRequest | 
}

begin
  # Request reviewers for a pull request
  result = api_instance.pulls_request_reviewers(owner, repo, pull_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_request_reviewers: #{e}"
end
```

#### Using the pulls_request_reviewers_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PullRequestSimple>, Integer, Hash)> pulls_request_reviewers_with_http_info(owner, repo, pull_number, opts)

```ruby
begin
  # Request reviewers for a pull request
  data, status_code, headers = api_instance.pulls_request_reviewers_with_http_info(owner, repo, pull_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PullRequestSimple>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_request_reviewers_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |
| **pulls_request_reviewers_request** | [**PullsRequestReviewersRequest**](PullsRequestReviewersRequest.md) |  | [optional] |

### Return type

[**PullRequestSimple**](PullRequestSimple.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## pulls_submit_review

> <PullRequestReview> pulls_submit_review(owner, repo, pull_number, review_id, pulls_submit_review_request)

Submit a review for a pull request

Submits a pending review for a pull request. For more information about creating a pending review for a pull request, see \"[Create a review for a pull request](https://docs.github.com/rest/pulls/reviews#create-a-review-for-a-pull-request).\"  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github-commitcomment.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github-commitcomment.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github-commitcomment.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github-commitcomment.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.
review_id = 56 # Integer | The unique identifier of the review.
pulls_submit_review_request = OpenapiClient::PullsSubmitReviewRequest.new({event: 'APPROVE'}) # PullsSubmitReviewRequest | 

begin
  # Submit a review for a pull request
  result = api_instance.pulls_submit_review(owner, repo, pull_number, review_id, pulls_submit_review_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_submit_review: #{e}"
end
```

#### Using the pulls_submit_review_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PullRequestReview>, Integer, Hash)> pulls_submit_review_with_http_info(owner, repo, pull_number, review_id, pulls_submit_review_request)

```ruby
begin
  # Submit a review for a pull request
  data, status_code, headers = api_instance.pulls_submit_review_with_http_info(owner, repo, pull_number, review_id, pulls_submit_review_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PullRequestReview>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_submit_review_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |
| **review_id** | **Integer** | The unique identifier of the review. |  |
| **pulls_submit_review_request** | [**PullsSubmitReviewRequest**](PullsSubmitReviewRequest.md) |  |  |

### Return type

[**PullRequestReview**](PullRequestReview.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## pulls_update

> <PullRequest> pulls_update(owner, repo, pull_number, opts)

Update a pull request

Draft pull requests are available in public repositories with GitHub Free and GitHub Free for organizations, GitHub Pro, and legacy per-repository billing plans, and in public and private repositories with GitHub Team and GitHub Enterprise Cloud. For more information, see [GitHub's products](https://docs.github.com/github/getting-started-with-github/githubs-products) in the GitHub Help documentation.  To open or update a pull request in a public repository, you must have write access to the head or the source branch. For organization-owned repositories, you must be a member of the organization that owns the repository to open or update a pull request.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.
opts = {
  pulls_update_request: OpenapiClient::PullsUpdateRequest.new # PullsUpdateRequest | 
}

begin
  # Update a pull request
  result = api_instance.pulls_update(owner, repo, pull_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_update: #{e}"
end
```

#### Using the pulls_update_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PullRequest>, Integer, Hash)> pulls_update_with_http_info(owner, repo, pull_number, opts)

```ruby
begin
  # Update a pull request
  data, status_code, headers = api_instance.pulls_update_with_http_info(owner, repo, pull_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PullRequest>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_update_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |
| **pulls_update_request** | [**PullsUpdateRequest**](PullsUpdateRequest.md) |  | [optional] |

### Return type

[**PullRequest**](PullRequest.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## pulls_update_branch

> <ActivityMarkRepoNotificationsAsRead202Response> pulls_update_branch(owner, repo, pull_number, opts)

Update a pull request branch

Updates the pull request branch with the latest upstream changes by merging HEAD from the base branch into the pull request branch.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.
opts = {
  pulls_update_branch_request: OpenapiClient::PullsUpdateBranchRequest.new # PullsUpdateBranchRequest | 
}

begin
  # Update a pull request branch
  result = api_instance.pulls_update_branch(owner, repo, pull_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_update_branch: #{e}"
end
```

#### Using the pulls_update_branch_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActivityMarkRepoNotificationsAsRead202Response>, Integer, Hash)> pulls_update_branch_with_http_info(owner, repo, pull_number, opts)

```ruby
begin
  # Update a pull request branch
  data, status_code, headers = api_instance.pulls_update_branch_with_http_info(owner, repo, pull_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActivityMarkRepoNotificationsAsRead202Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_update_branch_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |
| **pulls_update_branch_request** | [**PullsUpdateBranchRequest**](PullsUpdateBranchRequest.md) |  | [optional] |

### Return type

[**ActivityMarkRepoNotificationsAsRead202Response**](ActivityMarkRepoNotificationsAsRead202Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## pulls_update_review

> <PullRequestReview> pulls_update_review(owner, repo, pull_number, review_id, pulls_update_review_request)

Update a review for a pull request

Updates the contents of a specified review summary comment.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github-commitcomment.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github-commitcomment.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github-commitcomment.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github-commitcomment.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.
review_id = 56 # Integer | The unique identifier of the review.
pulls_update_review_request = OpenapiClient::PullsUpdateReviewRequest.new({body: 'body_example'}) # PullsUpdateReviewRequest | 

begin
  # Update a review for a pull request
  result = api_instance.pulls_update_review(owner, repo, pull_number, review_id, pulls_update_review_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_update_review: #{e}"
end
```

#### Using the pulls_update_review_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PullRequestReview>, Integer, Hash)> pulls_update_review_with_http_info(owner, repo, pull_number, review_id, pulls_update_review_request)

```ruby
begin
  # Update a review for a pull request
  data, status_code, headers = api_instance.pulls_update_review_with_http_info(owner, repo, pull_number, review_id, pulls_update_review_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PullRequestReview>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_update_review_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |
| **review_id** | **Integer** | The unique identifier of the review. |  |
| **pulls_update_review_request** | [**PullsUpdateReviewRequest**](PullsUpdateReviewRequest.md) |  |  |

### Return type

[**PullRequestReview**](PullRequestReview.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## pulls_update_review_comment

> <PullRequestReviewComment> pulls_update_review_comment(owner, repo, comment_id, pulls_update_review_comment_request)

Update a review comment for a pull request

Edits the content of a specified review comment.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github-commitcomment.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github-commitcomment.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github-commitcomment.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github-commitcomment.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::PullsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
comment_id = 56 # Integer | The unique identifier of the comment.
pulls_update_review_comment_request = OpenapiClient::PullsUpdateReviewCommentRequest.new({body: 'body_example'}) # PullsUpdateReviewCommentRequest | 

begin
  # Update a review comment for a pull request
  result = api_instance.pulls_update_review_comment(owner, repo, comment_id, pulls_update_review_comment_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_update_review_comment: #{e}"
end
```

#### Using the pulls_update_review_comment_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PullRequestReviewComment>, Integer, Hash)> pulls_update_review_comment_with_http_info(owner, repo, comment_id, pulls_update_review_comment_request)

```ruby
begin
  # Update a review comment for a pull request
  data, status_code, headers = api_instance.pulls_update_review_comment_with_http_info(owner, repo, comment_id, pulls_update_review_comment_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PullRequestReviewComment>
rescue OpenapiClient::ApiError => e
  puts "Error when calling PullsApi->pulls_update_review_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **comment_id** | **Integer** | The unique identifier of the comment. |  |
| **pulls_update_review_comment_request** | [**PullsUpdateReviewCommentRequest**](PullsUpdateReviewCommentRequest.md) |  |  |

### Return type

[**PullRequestReviewComment**](PullRequestReviewComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

