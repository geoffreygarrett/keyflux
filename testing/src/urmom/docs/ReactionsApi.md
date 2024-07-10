# OpenapiClient::ReactionsApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**reactions_create_for_commit_comment**](ReactionsApi.md#reactions_create_for_commit_comment) | **POST** /repos/{owner}/{repo}/comments/{comment_id}/reactions | Create reaction for a commit comment |
| [**reactions_create_for_issue**](ReactionsApi.md#reactions_create_for_issue) | **POST** /repos/{owner}/{repo}/issues/{issue_number}/reactions | Create reaction for an issue |
| [**reactions_create_for_issue_comment**](ReactionsApi.md#reactions_create_for_issue_comment) | **POST** /repos/{owner}/{repo}/issues/comments/{comment_id}/reactions | Create reaction for an issue comment |
| [**reactions_create_for_pull_request_review_comment**](ReactionsApi.md#reactions_create_for_pull_request_review_comment) | **POST** /repos/{owner}/{repo}/pulls/comments/{comment_id}/reactions | Create reaction for a pull request review comment |
| [**reactions_create_for_release**](ReactionsApi.md#reactions_create_for_release) | **POST** /repos/{owner}/{repo}/releases/{release_id}/reactions | Create reaction for a release |
| [**reactions_create_for_team_discussion_comment_in_org**](ReactionsApi.md#reactions_create_for_team_discussion_comment_in_org) | **POST** /orgs/{org}/teams/{team_slug}/discussions/{discussion_number}/comments/{comment_number}/reactions | Create reaction for a team discussion comment |
| [**reactions_create_for_team_discussion_comment_legacy**](ReactionsApi.md#reactions_create_for_team_discussion_comment_legacy) | **POST** /teams/{team_id}/discussions/{discussion_number}/comments/{comment_number}/reactions | Create reaction for a team discussion comment (Legacy) |
| [**reactions_create_for_team_discussion_in_org**](ReactionsApi.md#reactions_create_for_team_discussion_in_org) | **POST** /orgs/{org}/teams/{team_slug}/discussions/{discussion_number}/reactions | Create reaction for a team discussion |
| [**reactions_create_for_team_discussion_legacy**](ReactionsApi.md#reactions_create_for_team_discussion_legacy) | **POST** /teams/{team_id}/discussions/{discussion_number}/reactions | Create reaction for a team discussion (Legacy) |
| [**reactions_delete_for_commit_comment**](ReactionsApi.md#reactions_delete_for_commit_comment) | **DELETE** /repos/{owner}/{repo}/comments/{comment_id}/reactions/{reaction_id} | Delete a commit comment reaction |
| [**reactions_delete_for_issue**](ReactionsApi.md#reactions_delete_for_issue) | **DELETE** /repos/{owner}/{repo}/issues/{issue_number}/reactions/{reaction_id} | Delete an issue reaction |
| [**reactions_delete_for_issue_comment**](ReactionsApi.md#reactions_delete_for_issue_comment) | **DELETE** /repos/{owner}/{repo}/issues/comments/{comment_id}/reactions/{reaction_id} | Delete an issue comment reaction |
| [**reactions_delete_for_pull_request_comment**](ReactionsApi.md#reactions_delete_for_pull_request_comment) | **DELETE** /repos/{owner}/{repo}/pulls/comments/{comment_id}/reactions/{reaction_id} | Delete a pull request comment reaction |
| [**reactions_delete_for_release**](ReactionsApi.md#reactions_delete_for_release) | **DELETE** /repos/{owner}/{repo}/releases/{release_id}/reactions/{reaction_id} | Delete a release reaction |
| [**reactions_delete_for_team_discussion**](ReactionsApi.md#reactions_delete_for_team_discussion) | **DELETE** /orgs/{org}/teams/{team_slug}/discussions/{discussion_number}/reactions/{reaction_id} | Delete team discussion reaction |
| [**reactions_delete_for_team_discussion_comment**](ReactionsApi.md#reactions_delete_for_team_discussion_comment) | **DELETE** /orgs/{org}/teams/{team_slug}/discussions/{discussion_number}/comments/{comment_number}/reactions/{reaction_id} | Delete team discussion comment reaction |
| [**reactions_list_for_commit_comment**](ReactionsApi.md#reactions_list_for_commit_comment) | **GET** /repos/{owner}/{repo}/comments/{comment_id}/reactions | List reactions for a commit comment |
| [**reactions_list_for_issue**](ReactionsApi.md#reactions_list_for_issue) | **GET** /repos/{owner}/{repo}/issues/{issue_number}/reactions | List reactions for an issue |
| [**reactions_list_for_issue_comment**](ReactionsApi.md#reactions_list_for_issue_comment) | **GET** /repos/{owner}/{repo}/issues/comments/{comment_id}/reactions | List reactions for an issue comment |
| [**reactions_list_for_pull_request_review_comment**](ReactionsApi.md#reactions_list_for_pull_request_review_comment) | **GET** /repos/{owner}/{repo}/pulls/comments/{comment_id}/reactions | List reactions for a pull request review comment |
| [**reactions_list_for_release**](ReactionsApi.md#reactions_list_for_release) | **GET** /repos/{owner}/{repo}/releases/{release_id}/reactions | List reactions for a release |
| [**reactions_list_for_team_discussion_comment_in_org**](ReactionsApi.md#reactions_list_for_team_discussion_comment_in_org) | **GET** /orgs/{org}/teams/{team_slug}/discussions/{discussion_number}/comments/{comment_number}/reactions | List reactions for a team discussion comment |
| [**reactions_list_for_team_discussion_comment_legacy**](ReactionsApi.md#reactions_list_for_team_discussion_comment_legacy) | **GET** /teams/{team_id}/discussions/{discussion_number}/comments/{comment_number}/reactions | List reactions for a team discussion comment (Legacy) |
| [**reactions_list_for_team_discussion_in_org**](ReactionsApi.md#reactions_list_for_team_discussion_in_org) | **GET** /orgs/{org}/teams/{team_slug}/discussions/{discussion_number}/reactions | List reactions for a team discussion |
| [**reactions_list_for_team_discussion_legacy**](ReactionsApi.md#reactions_list_for_team_discussion_legacy) | **GET** /teams/{team_id}/discussions/{discussion_number}/reactions | List reactions for a team discussion (Legacy) |


## reactions_create_for_commit_comment

> <Reaction> reactions_create_for_commit_comment(owner, repo, comment_id, reactions_create_for_commit_comment_request)

Create reaction for a commit comment

Create a reaction to a [commit comment](https://docs.github.com/rest/commits/comments#get-a-commit-comment). A response with an HTTP `200` status means that you already added the reaction type to this commit comment.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
comment_id = 56 # Integer | The unique identifier of the comment.
reactions_create_for_commit_comment_request = OpenapiClient::ReactionsCreateForCommitCommentRequest.new({content: '+1'}) # ReactionsCreateForCommitCommentRequest | 

begin
  # Create reaction for a commit comment
  result = api_instance.reactions_create_for_commit_comment(owner, repo, comment_id, reactions_create_for_commit_comment_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_create_for_commit_comment: #{e}"
end
```

#### Using the reactions_create_for_commit_comment_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Reaction>, Integer, Hash)> reactions_create_for_commit_comment_with_http_info(owner, repo, comment_id, reactions_create_for_commit_comment_request)

```ruby
begin
  # Create reaction for a commit comment
  data, status_code, headers = api_instance.reactions_create_for_commit_comment_with_http_info(owner, repo, comment_id, reactions_create_for_commit_comment_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Reaction>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_create_for_commit_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **comment_id** | **Integer** | The unique identifier of the comment. |  |
| **reactions_create_for_commit_comment_request** | [**ReactionsCreateForCommitCommentRequest**](ReactionsCreateForCommitCommentRequest.md) |  |  |

### Return type

[**Reaction**](Reaction.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## reactions_create_for_issue

> <Reaction> reactions_create_for_issue(owner, repo, issue_number, reactions_create_for_issue_request)

Create reaction for an issue

Create a reaction to an [issue](https://docs.github.com/rest/issues/issues#get-an-issue). A response with an HTTP `200` status means that you already added the reaction type to this issue.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issue_number = 56 # Integer | The number that identifies the issue.
reactions_create_for_issue_request = OpenapiClient::ReactionsCreateForIssueRequest.new({content: '+1'}) # ReactionsCreateForIssueRequest | 

begin
  # Create reaction for an issue
  result = api_instance.reactions_create_for_issue(owner, repo, issue_number, reactions_create_for_issue_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_create_for_issue: #{e}"
end
```

#### Using the reactions_create_for_issue_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Reaction>, Integer, Hash)> reactions_create_for_issue_with_http_info(owner, repo, issue_number, reactions_create_for_issue_request)

```ruby
begin
  # Create reaction for an issue
  data, status_code, headers = api_instance.reactions_create_for_issue_with_http_info(owner, repo, issue_number, reactions_create_for_issue_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Reaction>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_create_for_issue_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issue_number** | **Integer** | The number that identifies the issue. |  |
| **reactions_create_for_issue_request** | [**ReactionsCreateForIssueRequest**](ReactionsCreateForIssueRequest.md) |  |  |

### Return type

[**Reaction**](Reaction.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## reactions_create_for_issue_comment

> <Reaction> reactions_create_for_issue_comment(owner, repo, comment_id, reactions_create_for_issue_comment_request)

Create reaction for an issue comment

Create a reaction to an [issue comment](https://docs.github.com/rest/issues/comments#get-an-issue-comment). A response with an HTTP `200` status means that you already added the reaction type to this issue comment.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
comment_id = 56 # Integer | The unique identifier of the comment.
reactions_create_for_issue_comment_request = OpenapiClient::ReactionsCreateForIssueCommentRequest.new({content: '+1'}) # ReactionsCreateForIssueCommentRequest | 

begin
  # Create reaction for an issue comment
  result = api_instance.reactions_create_for_issue_comment(owner, repo, comment_id, reactions_create_for_issue_comment_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_create_for_issue_comment: #{e}"
end
```

#### Using the reactions_create_for_issue_comment_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Reaction>, Integer, Hash)> reactions_create_for_issue_comment_with_http_info(owner, repo, comment_id, reactions_create_for_issue_comment_request)

```ruby
begin
  # Create reaction for an issue comment
  data, status_code, headers = api_instance.reactions_create_for_issue_comment_with_http_info(owner, repo, comment_id, reactions_create_for_issue_comment_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Reaction>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_create_for_issue_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **comment_id** | **Integer** | The unique identifier of the comment. |  |
| **reactions_create_for_issue_comment_request** | [**ReactionsCreateForIssueCommentRequest**](ReactionsCreateForIssueCommentRequest.md) |  |  |

### Return type

[**Reaction**](Reaction.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## reactions_create_for_pull_request_review_comment

> <Reaction> reactions_create_for_pull_request_review_comment(owner, repo, comment_id, reactions_create_for_pull_request_review_comment_request)

Create reaction for a pull request review comment

Create a reaction to a [pull request review comment](https://docs.github.com/rest/pulls/comments#get-a-review-comment-for-a-pull-request). A response with an HTTP `200` status means that you already added the reaction type to this pull request review comment.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
comment_id = 56 # Integer | The unique identifier of the comment.
reactions_create_for_pull_request_review_comment_request = OpenapiClient::ReactionsCreateForPullRequestReviewCommentRequest.new({content: '+1'}) # ReactionsCreateForPullRequestReviewCommentRequest | 

begin
  # Create reaction for a pull request review comment
  result = api_instance.reactions_create_for_pull_request_review_comment(owner, repo, comment_id, reactions_create_for_pull_request_review_comment_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_create_for_pull_request_review_comment: #{e}"
end
```

#### Using the reactions_create_for_pull_request_review_comment_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Reaction>, Integer, Hash)> reactions_create_for_pull_request_review_comment_with_http_info(owner, repo, comment_id, reactions_create_for_pull_request_review_comment_request)

```ruby
begin
  # Create reaction for a pull request review comment
  data, status_code, headers = api_instance.reactions_create_for_pull_request_review_comment_with_http_info(owner, repo, comment_id, reactions_create_for_pull_request_review_comment_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Reaction>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_create_for_pull_request_review_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **comment_id** | **Integer** | The unique identifier of the comment. |  |
| **reactions_create_for_pull_request_review_comment_request** | [**ReactionsCreateForPullRequestReviewCommentRequest**](ReactionsCreateForPullRequestReviewCommentRequest.md) |  |  |

### Return type

[**Reaction**](Reaction.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## reactions_create_for_release

> <Reaction> reactions_create_for_release(owner, repo, release_id, reactions_create_for_release_request)

Create reaction for a release

Create a reaction to a [release](https://docs.github.com/rest/releases/releases#get-a-release). A response with a `Status: 200 OK` means that you already added the reaction type to this release.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
release_id = 56 # Integer | The unique identifier of the release.
reactions_create_for_release_request = OpenapiClient::ReactionsCreateForReleaseRequest.new({content: '+1'}) # ReactionsCreateForReleaseRequest | 

begin
  # Create reaction for a release
  result = api_instance.reactions_create_for_release(owner, repo, release_id, reactions_create_for_release_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_create_for_release: #{e}"
end
```

#### Using the reactions_create_for_release_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Reaction>, Integer, Hash)> reactions_create_for_release_with_http_info(owner, repo, release_id, reactions_create_for_release_request)

```ruby
begin
  # Create reaction for a release
  data, status_code, headers = api_instance.reactions_create_for_release_with_http_info(owner, repo, release_id, reactions_create_for_release_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Reaction>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_create_for_release_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **release_id** | **Integer** | The unique identifier of the release. |  |
| **reactions_create_for_release_request** | [**ReactionsCreateForReleaseRequest**](ReactionsCreateForReleaseRequest.md) |  |  |

### Return type

[**Reaction**](Reaction.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## reactions_create_for_team_discussion_comment_in_org

> <Reaction> reactions_create_for_team_discussion_comment_in_org(org, team_slug, discussion_number, comment_number, reactions_create_for_team_discussion_comment_in_org_request)

Create reaction for a team discussion comment

Create a reaction to a [team discussion comment](https://docs.github.com/rest/teams/discussion-comments#get-a-discussion-comment).  A response with an HTTP `200` status means that you already added the reaction type to this team discussion comment.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `POST /organizations/:org_id/team/:team_id/discussions/:discussion_number/comments/:comment_number/reactions`.  OAuth app tokens and personal access tokens (classic) need the `write:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
discussion_number = 56 # Integer | The number that identifies the discussion.
comment_number = 56 # Integer | The number that identifies the comment.
reactions_create_for_team_discussion_comment_in_org_request = OpenapiClient::ReactionsCreateForTeamDiscussionCommentInOrgRequest.new({content: '+1'}) # ReactionsCreateForTeamDiscussionCommentInOrgRequest | 

begin
  # Create reaction for a team discussion comment
  result = api_instance.reactions_create_for_team_discussion_comment_in_org(org, team_slug, discussion_number, comment_number, reactions_create_for_team_discussion_comment_in_org_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_create_for_team_discussion_comment_in_org: #{e}"
end
```

#### Using the reactions_create_for_team_discussion_comment_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Reaction>, Integer, Hash)> reactions_create_for_team_discussion_comment_in_org_with_http_info(org, team_slug, discussion_number, comment_number, reactions_create_for_team_discussion_comment_in_org_request)

```ruby
begin
  # Create reaction for a team discussion comment
  data, status_code, headers = api_instance.reactions_create_for_team_discussion_comment_in_org_with_http_info(org, team_slug, discussion_number, comment_number, reactions_create_for_team_discussion_comment_in_org_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Reaction>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_create_for_team_discussion_comment_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **comment_number** | **Integer** | The number that identifies the comment. |  |
| **reactions_create_for_team_discussion_comment_in_org_request** | [**ReactionsCreateForTeamDiscussionCommentInOrgRequest**](ReactionsCreateForTeamDiscussionCommentInOrgRequest.md) |  |  |

### Return type

[**Reaction**](Reaction.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## reactions_create_for_team_discussion_comment_legacy

> <Reaction> reactions_create_for_team_discussion_comment_legacy(team_id, discussion_number, comment_number, reactions_create_for_team_discussion_comment_in_org_request)

Create reaction for a team discussion comment (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new \"[Create reaction for a team discussion comment](https://docs.github.com/rest/reactions/reactions#create-reaction-for-a-team-discussion-comment)\" endpoint.  Create a reaction to a [team discussion comment](https://docs.github.com/rest/teams/discussion-comments#get-a-discussion-comment).  A response with an HTTP `200` status means that you already added the reaction type to this team discussion comment.  OAuth app tokens and personal access tokens (classic) need the `write:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
team_id = 56 # Integer | The unique identifier of the team.
discussion_number = 56 # Integer | The number that identifies the discussion.
comment_number = 56 # Integer | The number that identifies the comment.
reactions_create_for_team_discussion_comment_in_org_request = OpenapiClient::ReactionsCreateForTeamDiscussionCommentInOrgRequest.new({content: '+1'}) # ReactionsCreateForTeamDiscussionCommentInOrgRequest | 

begin
  # Create reaction for a team discussion comment (Legacy)
  result = api_instance.reactions_create_for_team_discussion_comment_legacy(team_id, discussion_number, comment_number, reactions_create_for_team_discussion_comment_in_org_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_create_for_team_discussion_comment_legacy: #{e}"
end
```

#### Using the reactions_create_for_team_discussion_comment_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Reaction>, Integer, Hash)> reactions_create_for_team_discussion_comment_legacy_with_http_info(team_id, discussion_number, comment_number, reactions_create_for_team_discussion_comment_in_org_request)

```ruby
begin
  # Create reaction for a team discussion comment (Legacy)
  data, status_code, headers = api_instance.reactions_create_for_team_discussion_comment_legacy_with_http_info(team_id, discussion_number, comment_number, reactions_create_for_team_discussion_comment_in_org_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Reaction>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_create_for_team_discussion_comment_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **comment_number** | **Integer** | The number that identifies the comment. |  |
| **reactions_create_for_team_discussion_comment_in_org_request** | [**ReactionsCreateForTeamDiscussionCommentInOrgRequest**](ReactionsCreateForTeamDiscussionCommentInOrgRequest.md) |  |  |

### Return type

[**Reaction**](Reaction.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## reactions_create_for_team_discussion_in_org

> <Reaction> reactions_create_for_team_discussion_in_org(org, team_slug, discussion_number, reactions_create_for_team_discussion_in_org_request)

Create reaction for a team discussion

Create a reaction to a [team discussion](https://docs.github.com/rest/teams/discussions#get-a-discussion).  A response with an HTTP `200` status means that you already added the reaction type to this team discussion.  **Note:** You can also specify a team by `org_id` and `team_id` using the route `POST /organizations/:org_id/team/:team_id/discussions/:discussion_number/reactions`.  OAuth app tokens and personal access tokens (classic) need the `write:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
discussion_number = 56 # Integer | The number that identifies the discussion.
reactions_create_for_team_discussion_in_org_request = OpenapiClient::ReactionsCreateForTeamDiscussionInOrgRequest.new({content: '+1'}) # ReactionsCreateForTeamDiscussionInOrgRequest | 

begin
  # Create reaction for a team discussion
  result = api_instance.reactions_create_for_team_discussion_in_org(org, team_slug, discussion_number, reactions_create_for_team_discussion_in_org_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_create_for_team_discussion_in_org: #{e}"
end
```

#### Using the reactions_create_for_team_discussion_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Reaction>, Integer, Hash)> reactions_create_for_team_discussion_in_org_with_http_info(org, team_slug, discussion_number, reactions_create_for_team_discussion_in_org_request)

```ruby
begin
  # Create reaction for a team discussion
  data, status_code, headers = api_instance.reactions_create_for_team_discussion_in_org_with_http_info(org, team_slug, discussion_number, reactions_create_for_team_discussion_in_org_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Reaction>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_create_for_team_discussion_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **reactions_create_for_team_discussion_in_org_request** | [**ReactionsCreateForTeamDiscussionInOrgRequest**](ReactionsCreateForTeamDiscussionInOrgRequest.md) |  |  |

### Return type

[**Reaction**](Reaction.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## reactions_create_for_team_discussion_legacy

> <Reaction> reactions_create_for_team_discussion_legacy(team_id, discussion_number, reactions_create_for_team_discussion_in_org_request)

Create reaction for a team discussion (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [`Create reaction for a team discussion`](https://docs.github.com/rest/reactions/reactions#create-reaction-for-a-team-discussion) endpoint.  Create a reaction to a [team discussion](https://docs.github.com/rest/teams/discussions#get-a-discussion).  A response with an HTTP `200` status means that you already added the reaction type to this team discussion.  OAuth app tokens and personal access tokens (classic) need the `write:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
team_id = 56 # Integer | The unique identifier of the team.
discussion_number = 56 # Integer | The number that identifies the discussion.
reactions_create_for_team_discussion_in_org_request = OpenapiClient::ReactionsCreateForTeamDiscussionInOrgRequest.new({content: '+1'}) # ReactionsCreateForTeamDiscussionInOrgRequest | 

begin
  # Create reaction for a team discussion (Legacy)
  result = api_instance.reactions_create_for_team_discussion_legacy(team_id, discussion_number, reactions_create_for_team_discussion_in_org_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_create_for_team_discussion_legacy: #{e}"
end
```

#### Using the reactions_create_for_team_discussion_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Reaction>, Integer, Hash)> reactions_create_for_team_discussion_legacy_with_http_info(team_id, discussion_number, reactions_create_for_team_discussion_in_org_request)

```ruby
begin
  # Create reaction for a team discussion (Legacy)
  data, status_code, headers = api_instance.reactions_create_for_team_discussion_legacy_with_http_info(team_id, discussion_number, reactions_create_for_team_discussion_in_org_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Reaction>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_create_for_team_discussion_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **reactions_create_for_team_discussion_in_org_request** | [**ReactionsCreateForTeamDiscussionInOrgRequest**](ReactionsCreateForTeamDiscussionInOrgRequest.md) |  |  |

### Return type

[**Reaction**](Reaction.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## reactions_delete_for_commit_comment

> reactions_delete_for_commit_comment(owner, repo, comment_id, reaction_id)

Delete a commit comment reaction

**Note:** You can also specify a repository by `repository_id` using the route `DELETE /repositories/:repository_id/comments/:comment_id/reactions/:reaction_id`.  Delete a reaction to a [commit comment](https://docs.github.com/rest/commits/comments#get-a-commit-comment).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
comment_id = 56 # Integer | The unique identifier of the comment.
reaction_id = 56 # Integer | The unique identifier of the reaction.

begin
  # Delete a commit comment reaction
  api_instance.reactions_delete_for_commit_comment(owner, repo, comment_id, reaction_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_delete_for_commit_comment: #{e}"
end
```

#### Using the reactions_delete_for_commit_comment_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> reactions_delete_for_commit_comment_with_http_info(owner, repo, comment_id, reaction_id)

```ruby
begin
  # Delete a commit comment reaction
  data, status_code, headers = api_instance.reactions_delete_for_commit_comment_with_http_info(owner, repo, comment_id, reaction_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_delete_for_commit_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **comment_id** | **Integer** | The unique identifier of the comment. |  |
| **reaction_id** | **Integer** | The unique identifier of the reaction. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## reactions_delete_for_issue

> reactions_delete_for_issue(owner, repo, issue_number, reaction_id)

Delete an issue reaction

**Note:** You can also specify a repository by `repository_id` using the route `DELETE /repositories/:repository_id/issues/:issue_number/reactions/:reaction_id`.  Delete a reaction to an [issue](https://docs.github.com/rest/issues/issues#get-an-issue).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issue_number = 56 # Integer | The number that identifies the issue.
reaction_id = 56 # Integer | The unique identifier of the reaction.

begin
  # Delete an issue reaction
  api_instance.reactions_delete_for_issue(owner, repo, issue_number, reaction_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_delete_for_issue: #{e}"
end
```

#### Using the reactions_delete_for_issue_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> reactions_delete_for_issue_with_http_info(owner, repo, issue_number, reaction_id)

```ruby
begin
  # Delete an issue reaction
  data, status_code, headers = api_instance.reactions_delete_for_issue_with_http_info(owner, repo, issue_number, reaction_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_delete_for_issue_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issue_number** | **Integer** | The number that identifies the issue. |  |
| **reaction_id** | **Integer** | The unique identifier of the reaction. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## reactions_delete_for_issue_comment

> reactions_delete_for_issue_comment(owner, repo, comment_id, reaction_id)

Delete an issue comment reaction

**Note:** You can also specify a repository by `repository_id` using the route `DELETE delete /repositories/:repository_id/issues/comments/:comment_id/reactions/:reaction_id`.  Delete a reaction to an [issue comment](https://docs.github.com/rest/issues/comments#get-an-issue-comment).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
comment_id = 56 # Integer | The unique identifier of the comment.
reaction_id = 56 # Integer | The unique identifier of the reaction.

begin
  # Delete an issue comment reaction
  api_instance.reactions_delete_for_issue_comment(owner, repo, comment_id, reaction_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_delete_for_issue_comment: #{e}"
end
```

#### Using the reactions_delete_for_issue_comment_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> reactions_delete_for_issue_comment_with_http_info(owner, repo, comment_id, reaction_id)

```ruby
begin
  # Delete an issue comment reaction
  data, status_code, headers = api_instance.reactions_delete_for_issue_comment_with_http_info(owner, repo, comment_id, reaction_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_delete_for_issue_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **comment_id** | **Integer** | The unique identifier of the comment. |  |
| **reaction_id** | **Integer** | The unique identifier of the reaction. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## reactions_delete_for_pull_request_comment

> reactions_delete_for_pull_request_comment(owner, repo, comment_id, reaction_id)

Delete a pull request comment reaction

**Note:** You can also specify a repository by `repository_id` using the route `DELETE /repositories/:repository_id/pulls/comments/:comment_id/reactions/:reaction_id.`  Delete a reaction to a [pull request review comment](https://docs.github.com/rest/pulls/comments#get-a-review-comment-for-a-pull-request).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
comment_id = 56 # Integer | The unique identifier of the comment.
reaction_id = 56 # Integer | The unique identifier of the reaction.

begin
  # Delete a pull request comment reaction
  api_instance.reactions_delete_for_pull_request_comment(owner, repo, comment_id, reaction_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_delete_for_pull_request_comment: #{e}"
end
```

#### Using the reactions_delete_for_pull_request_comment_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> reactions_delete_for_pull_request_comment_with_http_info(owner, repo, comment_id, reaction_id)

```ruby
begin
  # Delete a pull request comment reaction
  data, status_code, headers = api_instance.reactions_delete_for_pull_request_comment_with_http_info(owner, repo, comment_id, reaction_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_delete_for_pull_request_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **comment_id** | **Integer** | The unique identifier of the comment. |  |
| **reaction_id** | **Integer** | The unique identifier of the reaction. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## reactions_delete_for_release

> reactions_delete_for_release(owner, repo, release_id, reaction_id)

Delete a release reaction

**Note:** You can also specify a repository by `repository_id` using the route `DELETE delete /repositories/:repository_id/releases/:release_id/reactions/:reaction_id`.  Delete a reaction to a [release](https://docs.github.com/rest/releases/releases#get-a-release).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
release_id = 56 # Integer | The unique identifier of the release.
reaction_id = 56 # Integer | The unique identifier of the reaction.

begin
  # Delete a release reaction
  api_instance.reactions_delete_for_release(owner, repo, release_id, reaction_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_delete_for_release: #{e}"
end
```

#### Using the reactions_delete_for_release_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> reactions_delete_for_release_with_http_info(owner, repo, release_id, reaction_id)

```ruby
begin
  # Delete a release reaction
  data, status_code, headers = api_instance.reactions_delete_for_release_with_http_info(owner, repo, release_id, reaction_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_delete_for_release_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **release_id** | **Integer** | The unique identifier of the release. |  |
| **reaction_id** | **Integer** | The unique identifier of the reaction. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## reactions_delete_for_team_discussion

> reactions_delete_for_team_discussion(org, team_slug, discussion_number, reaction_id)

Delete team discussion reaction

**Note:** You can also specify a team or organization with `team_id` and `org_id` using the route `DELETE /organizations/:org_id/team/:team_id/discussions/:discussion_number/reactions/:reaction_id`.  Delete a reaction to a [team discussion](https://docs.github.com/rest/teams/discussions#get-a-discussion).  OAuth app tokens and personal access tokens (classic) need the `write:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
discussion_number = 56 # Integer | The number that identifies the discussion.
reaction_id = 56 # Integer | The unique identifier of the reaction.

begin
  # Delete team discussion reaction
  api_instance.reactions_delete_for_team_discussion(org, team_slug, discussion_number, reaction_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_delete_for_team_discussion: #{e}"
end
```

#### Using the reactions_delete_for_team_discussion_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> reactions_delete_for_team_discussion_with_http_info(org, team_slug, discussion_number, reaction_id)

```ruby
begin
  # Delete team discussion reaction
  data, status_code, headers = api_instance.reactions_delete_for_team_discussion_with_http_info(org, team_slug, discussion_number, reaction_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_delete_for_team_discussion_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **reaction_id** | **Integer** | The unique identifier of the reaction. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## reactions_delete_for_team_discussion_comment

> reactions_delete_for_team_discussion_comment(org, team_slug, discussion_number, comment_number, reaction_id)

Delete team discussion comment reaction

**Note:** You can also specify a team or organization with `team_id` and `org_id` using the route `DELETE /organizations/:org_id/team/:team_id/discussions/:discussion_number/comments/:comment_number/reactions/:reaction_id`.  Delete a reaction to a [team discussion comment](https://docs.github.com/rest/teams/discussion-comments#get-a-discussion-comment).  OAuth app tokens and personal access tokens (classic) need the `write:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
discussion_number = 56 # Integer | The number that identifies the discussion.
comment_number = 56 # Integer | The number that identifies the comment.
reaction_id = 56 # Integer | The unique identifier of the reaction.

begin
  # Delete team discussion comment reaction
  api_instance.reactions_delete_for_team_discussion_comment(org, team_slug, discussion_number, comment_number, reaction_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_delete_for_team_discussion_comment: #{e}"
end
```

#### Using the reactions_delete_for_team_discussion_comment_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> reactions_delete_for_team_discussion_comment_with_http_info(org, team_slug, discussion_number, comment_number, reaction_id)

```ruby
begin
  # Delete team discussion comment reaction
  data, status_code, headers = api_instance.reactions_delete_for_team_discussion_comment_with_http_info(org, team_slug, discussion_number, comment_number, reaction_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_delete_for_team_discussion_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **comment_number** | **Integer** | The number that identifies the comment. |  |
| **reaction_id** | **Integer** | The unique identifier of the reaction. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## reactions_list_for_commit_comment

> <Array<Reaction>> reactions_list_for_commit_comment(owner, repo, comment_id, opts)

List reactions for a commit comment

List the reactions to a [commit comment](https://docs.github.com/rest/commits/comments#get-a-commit-comment).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
comment_id = 56 # Integer | The unique identifier of the comment.
opts = {
  content: '+1', # String | Returns a single [reaction type](https://docs.github.com/rest/reactions/reactions#about-reactions). Omit this parameter to list all reactions to a commit comment.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List reactions for a commit comment
  result = api_instance.reactions_list_for_commit_comment(owner, repo, comment_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_list_for_commit_comment: #{e}"
end
```

#### Using the reactions_list_for_commit_comment_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Reaction>>, Integer, Hash)> reactions_list_for_commit_comment_with_http_info(owner, repo, comment_id, opts)

```ruby
begin
  # List reactions for a commit comment
  data, status_code, headers = api_instance.reactions_list_for_commit_comment_with_http_info(owner, repo, comment_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Reaction>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_list_for_commit_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **comment_id** | **Integer** | The unique identifier of the comment. |  |
| **content** | **String** | Returns a single [reaction type](https://docs.github.com/rest/reactions/reactions#about-reactions). Omit this parameter to list all reactions to a commit comment. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Reaction&gt;**](Reaction.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## reactions_list_for_issue

> <Array<Reaction>> reactions_list_for_issue(owner, repo, issue_number, opts)

List reactions for an issue

List the reactions to an [issue](https://docs.github.com/rest/issues/issues#get-an-issue).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issue_number = 56 # Integer | The number that identifies the issue.
opts = {
  content: '+1', # String | Returns a single [reaction type](https://docs.github.com/rest/reactions/reactions#about-reactions). Omit this parameter to list all reactions to an issue.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List reactions for an issue
  result = api_instance.reactions_list_for_issue(owner, repo, issue_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_list_for_issue: #{e}"
end
```

#### Using the reactions_list_for_issue_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Reaction>>, Integer, Hash)> reactions_list_for_issue_with_http_info(owner, repo, issue_number, opts)

```ruby
begin
  # List reactions for an issue
  data, status_code, headers = api_instance.reactions_list_for_issue_with_http_info(owner, repo, issue_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Reaction>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_list_for_issue_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issue_number** | **Integer** | The number that identifies the issue. |  |
| **content** | **String** | Returns a single [reaction type](https://docs.github.com/rest/reactions/reactions#about-reactions). Omit this parameter to list all reactions to an issue. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Reaction&gt;**](Reaction.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## reactions_list_for_issue_comment

> <Array<Reaction>> reactions_list_for_issue_comment(owner, repo, comment_id, opts)

List reactions for an issue comment

List the reactions to an [issue comment](https://docs.github.com/rest/issues/comments#get-an-issue-comment).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
comment_id = 56 # Integer | The unique identifier of the comment.
opts = {
  content: '+1', # String | Returns a single [reaction type](https://docs.github.com/rest/reactions/reactions#about-reactions). Omit this parameter to list all reactions to an issue comment.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List reactions for an issue comment
  result = api_instance.reactions_list_for_issue_comment(owner, repo, comment_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_list_for_issue_comment: #{e}"
end
```

#### Using the reactions_list_for_issue_comment_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Reaction>>, Integer, Hash)> reactions_list_for_issue_comment_with_http_info(owner, repo, comment_id, opts)

```ruby
begin
  # List reactions for an issue comment
  data, status_code, headers = api_instance.reactions_list_for_issue_comment_with_http_info(owner, repo, comment_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Reaction>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_list_for_issue_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **comment_id** | **Integer** | The unique identifier of the comment. |  |
| **content** | **String** | Returns a single [reaction type](https://docs.github.com/rest/reactions/reactions#about-reactions). Omit this parameter to list all reactions to an issue comment. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Reaction&gt;**](Reaction.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## reactions_list_for_pull_request_review_comment

> <Array<Reaction>> reactions_list_for_pull_request_review_comment(owner, repo, comment_id, opts)

List reactions for a pull request review comment

List the reactions to a [pull request review comment](https://docs.github.com/rest/pulls/comments#get-a-review-comment-for-a-pull-request).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
comment_id = 56 # Integer | The unique identifier of the comment.
opts = {
  content: '+1', # String | Returns a single [reaction type](https://docs.github.com/rest/reactions/reactions#about-reactions). Omit this parameter to list all reactions to a pull request review comment.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List reactions for a pull request review comment
  result = api_instance.reactions_list_for_pull_request_review_comment(owner, repo, comment_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_list_for_pull_request_review_comment: #{e}"
end
```

#### Using the reactions_list_for_pull_request_review_comment_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Reaction>>, Integer, Hash)> reactions_list_for_pull_request_review_comment_with_http_info(owner, repo, comment_id, opts)

```ruby
begin
  # List reactions for a pull request review comment
  data, status_code, headers = api_instance.reactions_list_for_pull_request_review_comment_with_http_info(owner, repo, comment_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Reaction>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_list_for_pull_request_review_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **comment_id** | **Integer** | The unique identifier of the comment. |  |
| **content** | **String** | Returns a single [reaction type](https://docs.github.com/rest/reactions/reactions#about-reactions). Omit this parameter to list all reactions to a pull request review comment. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Reaction&gt;**](Reaction.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## reactions_list_for_release

> <Array<Reaction>> reactions_list_for_release(owner, repo, release_id, opts)

List reactions for a release

List the reactions to a [release](https://docs.github.com/rest/releases/releases#get-a-release).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
release_id = 56 # Integer | The unique identifier of the release.
opts = {
  content: '+1', # String | Returns a single [reaction type](https://docs.github.com/rest/reactions/reactions#about-reactions). Omit this parameter to list all reactions to a release.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List reactions for a release
  result = api_instance.reactions_list_for_release(owner, repo, release_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_list_for_release: #{e}"
end
```

#### Using the reactions_list_for_release_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Reaction>>, Integer, Hash)> reactions_list_for_release_with_http_info(owner, repo, release_id, opts)

```ruby
begin
  # List reactions for a release
  data, status_code, headers = api_instance.reactions_list_for_release_with_http_info(owner, repo, release_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Reaction>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_list_for_release_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **release_id** | **Integer** | The unique identifier of the release. |  |
| **content** | **String** | Returns a single [reaction type](https://docs.github.com/rest/reactions/reactions#about-reactions). Omit this parameter to list all reactions to a release. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Reaction&gt;**](Reaction.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## reactions_list_for_team_discussion_comment_in_org

> <Array<Reaction>> reactions_list_for_team_discussion_comment_in_org(org, team_slug, discussion_number, comment_number, opts)

List reactions for a team discussion comment

List the reactions to a [team discussion comment](https://docs.github.com/rest/teams/discussion-comments#get-a-discussion-comment).  **Note:** You can also specify a team by `org_id` and `team_id` using the route `GET /organizations/:org_id/team/:team_id/discussions/:discussion_number/comments/:comment_number/reactions`.  OAuth app tokens and personal access tokens (classic) need the `read:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
discussion_number = 56 # Integer | The number that identifies the discussion.
comment_number = 56 # Integer | The number that identifies the comment.
opts = {
  content: '+1', # String | Returns a single [reaction type](https://docs.github.com/rest/reactions/reactions#about-reactions). Omit this parameter to list all reactions to a team discussion comment.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List reactions for a team discussion comment
  result = api_instance.reactions_list_for_team_discussion_comment_in_org(org, team_slug, discussion_number, comment_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_list_for_team_discussion_comment_in_org: #{e}"
end
```

#### Using the reactions_list_for_team_discussion_comment_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Reaction>>, Integer, Hash)> reactions_list_for_team_discussion_comment_in_org_with_http_info(org, team_slug, discussion_number, comment_number, opts)

```ruby
begin
  # List reactions for a team discussion comment
  data, status_code, headers = api_instance.reactions_list_for_team_discussion_comment_in_org_with_http_info(org, team_slug, discussion_number, comment_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Reaction>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_list_for_team_discussion_comment_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **comment_number** | **Integer** | The number that identifies the comment. |  |
| **content** | **String** | Returns a single [reaction type](https://docs.github.com/rest/reactions/reactions#about-reactions). Omit this parameter to list all reactions to a team discussion comment. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Reaction&gt;**](Reaction.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## reactions_list_for_team_discussion_comment_legacy

> <Array<Reaction>> reactions_list_for_team_discussion_comment_legacy(team_id, discussion_number, comment_number, opts)

List reactions for a team discussion comment (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [`List reactions for a team discussion comment`](https://docs.github.com/rest/reactions/reactions#list-reactions-for-a-team-discussion-comment) endpoint.  List the reactions to a [team discussion comment](https://docs.github.com/rest/teams/discussion-comments#get-a-discussion-comment).  OAuth app tokens and personal access tokens (classic) need the `read:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
team_id = 56 # Integer | The unique identifier of the team.
discussion_number = 56 # Integer | The number that identifies the discussion.
comment_number = 56 # Integer | The number that identifies the comment.
opts = {
  content: '+1', # String | Returns a single [reaction type](https://docs.github.com/rest/reactions/reactions#about-reactions). Omit this parameter to list all reactions to a team discussion comment.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List reactions for a team discussion comment (Legacy)
  result = api_instance.reactions_list_for_team_discussion_comment_legacy(team_id, discussion_number, comment_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_list_for_team_discussion_comment_legacy: #{e}"
end
```

#### Using the reactions_list_for_team_discussion_comment_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Reaction>>, Integer, Hash)> reactions_list_for_team_discussion_comment_legacy_with_http_info(team_id, discussion_number, comment_number, opts)

```ruby
begin
  # List reactions for a team discussion comment (Legacy)
  data, status_code, headers = api_instance.reactions_list_for_team_discussion_comment_legacy_with_http_info(team_id, discussion_number, comment_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Reaction>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_list_for_team_discussion_comment_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **comment_number** | **Integer** | The number that identifies the comment. |  |
| **content** | **String** | Returns a single [reaction type](https://docs.github.com/rest/reactions/reactions#about-reactions). Omit this parameter to list all reactions to a team discussion comment. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Reaction&gt;**](Reaction.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## reactions_list_for_team_discussion_in_org

> <Array<Reaction>> reactions_list_for_team_discussion_in_org(org, team_slug, discussion_number, opts)

List reactions for a team discussion

List the reactions to a [team discussion](https://docs.github.com/rest/teams/discussions#get-a-discussion).  **Note:** You can also specify a team by `org_id` and `team_id` using the route `GET /organizations/:org_id/team/:team_id/discussions/:discussion_number/reactions`.  OAuth app tokens and personal access tokens (classic) need the `read:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
team_slug = 'team_slug_example' # String | The slug of the team name.
discussion_number = 56 # Integer | The number that identifies the discussion.
opts = {
  content: '+1', # String | Returns a single [reaction type](https://docs.github.com/rest/reactions/reactions#about-reactions). Omit this parameter to list all reactions to a team discussion.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List reactions for a team discussion
  result = api_instance.reactions_list_for_team_discussion_in_org(org, team_slug, discussion_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_list_for_team_discussion_in_org: #{e}"
end
```

#### Using the reactions_list_for_team_discussion_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Reaction>>, Integer, Hash)> reactions_list_for_team_discussion_in_org_with_http_info(org, team_slug, discussion_number, opts)

```ruby
begin
  # List reactions for a team discussion
  data, status_code, headers = api_instance.reactions_list_for_team_discussion_in_org_with_http_info(org, team_slug, discussion_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Reaction>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_list_for_team_discussion_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **team_slug** | **String** | The slug of the team name. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **content** | **String** | Returns a single [reaction type](https://docs.github.com/rest/reactions/reactions#about-reactions). Omit this parameter to list all reactions to a team discussion. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Reaction&gt;**](Reaction.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## reactions_list_for_team_discussion_legacy

> <Array<Reaction>> reactions_list_for_team_discussion_legacy(team_id, discussion_number, opts)

List reactions for a team discussion (Legacy)

**Deprecation Notice:** This endpoint route is deprecated and will be removed from the Teams API. We recommend migrating your existing code to use the new [`List reactions for a team discussion`](https://docs.github.com/rest/reactions/reactions#list-reactions-for-a-team-discussion) endpoint.  List the reactions to a [team discussion](https://docs.github.com/rest/teams/discussions#get-a-discussion).  OAuth app tokens and personal access tokens (classic) need the `read:discussion` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ReactionsApi.new
team_id = 56 # Integer | The unique identifier of the team.
discussion_number = 56 # Integer | The number that identifies the discussion.
opts = {
  content: '+1', # String | Returns a single [reaction type](https://docs.github.com/rest/reactions/reactions#about-reactions). Omit this parameter to list all reactions to a team discussion.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List reactions for a team discussion (Legacy)
  result = api_instance.reactions_list_for_team_discussion_legacy(team_id, discussion_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_list_for_team_discussion_legacy: #{e}"
end
```

#### Using the reactions_list_for_team_discussion_legacy_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Reaction>>, Integer, Hash)> reactions_list_for_team_discussion_legacy_with_http_info(team_id, discussion_number, opts)

```ruby
begin
  # List reactions for a team discussion (Legacy)
  data, status_code, headers = api_instance.reactions_list_for_team_discussion_legacy_with_http_info(team_id, discussion_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Reaction>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ReactionsApi->reactions_list_for_team_discussion_legacy_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **team_id** | **Integer** | The unique identifier of the team. |  |
| **discussion_number** | **Integer** | The number that identifies the discussion. |  |
| **content** | **String** | Returns a single [reaction type](https://docs.github.com/rest/reactions/reactions#about-reactions). Omit this parameter to list all reactions to a team discussion. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Reaction&gt;**](Reaction.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

