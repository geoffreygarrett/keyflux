# OpenapiClient::IssuesApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**issues_add_assignees**](IssuesApi.md#issues_add_assignees) | **POST** /repos/{owner}/{repo}/issues/{issue_number}/assignees | Add assignees to an issue |
| [**issues_add_labels**](IssuesApi.md#issues_add_labels) | **POST** /repos/{owner}/{repo}/issues/{issue_number}/labels | Add labels to an issue |
| [**issues_check_user_can_be_assigned**](IssuesApi.md#issues_check_user_can_be_assigned) | **GET** /repos/{owner}/{repo}/assignees/{assignee} | Check if a user can be assigned |
| [**issues_check_user_can_be_assigned_to_issue**](IssuesApi.md#issues_check_user_can_be_assigned_to_issue) | **GET** /repos/{owner}/{repo}/issues/{issue_number}/assignees/{assignee} | Check if a user can be assigned to a issue |
| [**issues_create**](IssuesApi.md#issues_create) | **POST** /repos/{owner}/{repo}/issues | Create an issue |
| [**issues_create_comment**](IssuesApi.md#issues_create_comment) | **POST** /repos/{owner}/{repo}/issues/{issue_number}/comments | Create an issue comment |
| [**issues_create_label**](IssuesApi.md#issues_create_label) | **POST** /repos/{owner}/{repo}/labels | Create a label |
| [**issues_create_milestone**](IssuesApi.md#issues_create_milestone) | **POST** /repos/{owner}/{repo}/milestones | Create a milestone |
| [**issues_delete_comment**](IssuesApi.md#issues_delete_comment) | **DELETE** /repos/{owner}/{repo}/issues/comments/{comment_id} | Delete an issue comment |
| [**issues_delete_label**](IssuesApi.md#issues_delete_label) | **DELETE** /repos/{owner}/{repo}/labels/{name} | Delete a label |
| [**issues_delete_milestone**](IssuesApi.md#issues_delete_milestone) | **DELETE** /repos/{owner}/{repo}/milestones/{milestone_number} | Delete a milestone |
| [**issues_get**](IssuesApi.md#issues_get) | **GET** /repos/{owner}/{repo}/issues/{issue_number} | Get an issue |
| [**issues_get_comment**](IssuesApi.md#issues_get_comment) | **GET** /repos/{owner}/{repo}/issues/comments/{comment_id} | Get an issue comment |
| [**issues_get_event**](IssuesApi.md#issues_get_event) | **GET** /repos/{owner}/{repo}/issues/events/{event_id} | Get an issue event |
| [**issues_get_label**](IssuesApi.md#issues_get_label) | **GET** /repos/{owner}/{repo}/labels/{name} | Get a label |
| [**issues_get_milestone**](IssuesApi.md#issues_get_milestone) | **GET** /repos/{owner}/{repo}/milestones/{milestone_number} | Get a milestone |
| [**issues_list**](IssuesApi.md#issues_list) | **GET** /issues | List issues assigned to the authenticated user |
| [**issues_list_assignees**](IssuesApi.md#issues_list_assignees) | **GET** /repos/{owner}/{repo}/assignees | List assignees |
| [**issues_list_comments**](IssuesApi.md#issues_list_comments) | **GET** /repos/{owner}/{repo}/issues/{issue_number}/comments | List issue comments |
| [**issues_list_comments_for_repo**](IssuesApi.md#issues_list_comments_for_repo) | **GET** /repos/{owner}/{repo}/issues/comments | List issue comments for a repository |
| [**issues_list_events**](IssuesApi.md#issues_list_events) | **GET** /repos/{owner}/{repo}/issues/{issue_number}/events | List issue events |
| [**issues_list_events_for_repo**](IssuesApi.md#issues_list_events_for_repo) | **GET** /repos/{owner}/{repo}/issues/events | List issue events for a repository |
| [**issues_list_events_for_timeline**](IssuesApi.md#issues_list_events_for_timeline) | **GET** /repos/{owner}/{repo}/issues/{issue_number}/timeline | List timeline events for an issue |
| [**issues_list_for_authenticated_user**](IssuesApi.md#issues_list_for_authenticated_user) | **GET** /user/issues | List user account issues assigned to the authenticated user |
| [**issues_list_for_org**](IssuesApi.md#issues_list_for_org) | **GET** /orgs/{org}/issues | List organization issues assigned to the authenticated user |
| [**issues_list_for_repo**](IssuesApi.md#issues_list_for_repo) | **GET** /repos/{owner}/{repo}/issues | List repository issues |
| [**issues_list_labels_for_milestone**](IssuesApi.md#issues_list_labels_for_milestone) | **GET** /repos/{owner}/{repo}/milestones/{milestone_number}/labels | List labels for issues in a milestone |
| [**issues_list_labels_for_repo**](IssuesApi.md#issues_list_labels_for_repo) | **GET** /repos/{owner}/{repo}/labels | List labels for a repository |
| [**issues_list_labels_on_issue**](IssuesApi.md#issues_list_labels_on_issue) | **GET** /repos/{owner}/{repo}/issues/{issue_number}/labels | List labels for an issue |
| [**issues_list_milestones**](IssuesApi.md#issues_list_milestones) | **GET** /repos/{owner}/{repo}/milestones | List milestones |
| [**issues_lock**](IssuesApi.md#issues_lock) | **PUT** /repos/{owner}/{repo}/issues/{issue_number}/lock | Lock an issue |
| [**issues_remove_all_labels**](IssuesApi.md#issues_remove_all_labels) | **DELETE** /repos/{owner}/{repo}/issues/{issue_number}/labels | Remove all labels from an issue |
| [**issues_remove_assignees**](IssuesApi.md#issues_remove_assignees) | **DELETE** /repos/{owner}/{repo}/issues/{issue_number}/assignees | Remove assignees from an issue |
| [**issues_remove_label**](IssuesApi.md#issues_remove_label) | **DELETE** /repos/{owner}/{repo}/issues/{issue_number}/labels/{name} | Remove a label from an issue |
| [**issues_set_labels**](IssuesApi.md#issues_set_labels) | **PUT** /repos/{owner}/{repo}/issues/{issue_number}/labels | Set labels for an issue |
| [**issues_unlock**](IssuesApi.md#issues_unlock) | **DELETE** /repos/{owner}/{repo}/issues/{issue_number}/lock | Unlock an issue |
| [**issues_update**](IssuesApi.md#issues_update) | **PATCH** /repos/{owner}/{repo}/issues/{issue_number} | Update an issue |
| [**issues_update_comment**](IssuesApi.md#issues_update_comment) | **PATCH** /repos/{owner}/{repo}/issues/comments/{comment_id} | Update an issue comment |
| [**issues_update_label**](IssuesApi.md#issues_update_label) | **PATCH** /repos/{owner}/{repo}/labels/{name} | Update a label |
| [**issues_update_milestone**](IssuesApi.md#issues_update_milestone) | **PATCH** /repos/{owner}/{repo}/milestones/{milestone_number} | Update a milestone |


## issues_add_assignees

> <Issue> issues_add_assignees(owner, repo, issue_number, opts)

Add assignees to an issue

Adds up to 10 assignees to an issue. Users already assigned to an issue are not replaced.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issue_number = 56 # Integer | The number that identifies the issue.
opts = {
  issues_add_assignees_request: OpenapiClient::IssuesAddAssigneesRequest.new # IssuesAddAssigneesRequest | 
}

begin
  # Add assignees to an issue
  result = api_instance.issues_add_assignees(owner, repo, issue_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_add_assignees: #{e}"
end
```

#### Using the issues_add_assignees_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Issue>, Integer, Hash)> issues_add_assignees_with_http_info(owner, repo, issue_number, opts)

```ruby
begin
  # Add assignees to an issue
  data, status_code, headers = api_instance.issues_add_assignees_with_http_info(owner, repo, issue_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Issue>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_add_assignees_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issue_number** | **Integer** | The number that identifies the issue. |  |
| **issues_add_assignees_request** | [**IssuesAddAssigneesRequest**](IssuesAddAssigneesRequest.md) |  | [optional] |

### Return type

[**Issue**](Issue.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## issues_add_labels

> <Array<Label>> issues_add_labels(owner, repo, issue_number, opts)

Add labels to an issue

Adds labels to an issue. If you provide an empty array of labels, all labels are removed from the issue. 

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issue_number = 56 # Integer | The number that identifies the issue.
opts = {
  issues_add_labels_request: nil # IssuesAddLabelsRequest | 
}

begin
  # Add labels to an issue
  result = api_instance.issues_add_labels(owner, repo, issue_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_add_labels: #{e}"
end
```

#### Using the issues_add_labels_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Label>>, Integer, Hash)> issues_add_labels_with_http_info(owner, repo, issue_number, opts)

```ruby
begin
  # Add labels to an issue
  data, status_code, headers = api_instance.issues_add_labels_with_http_info(owner, repo, issue_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Label>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_add_labels_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issue_number** | **Integer** | The number that identifies the issue. |  |
| **issues_add_labels_request** | [**IssuesAddLabelsRequest**](IssuesAddLabelsRequest.md) |  | [optional] |

### Return type

[**Array&lt;Label&gt;**](Label.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## issues_check_user_can_be_assigned

> issues_check_user_can_be_assigned(owner, repo, assignee)

Check if a user can be assigned

Checks if a user has permission to be assigned to an issue in this repository.  If the `assignee` can be assigned to issues in the repository, a `204` header with no content is returned.  Otherwise a `404` status code is returned.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
assignee = 'assignee_example' # String | 

begin
  # Check if a user can be assigned
  api_instance.issues_check_user_can_be_assigned(owner, repo, assignee)
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_check_user_can_be_assigned: #{e}"
end
```

#### Using the issues_check_user_can_be_assigned_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> issues_check_user_can_be_assigned_with_http_info(owner, repo, assignee)

```ruby
begin
  # Check if a user can be assigned
  data, status_code, headers = api_instance.issues_check_user_can_be_assigned_with_http_info(owner, repo, assignee)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_check_user_can_be_assigned_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **assignee** | **String** |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_check_user_can_be_assigned_to_issue

> issues_check_user_can_be_assigned_to_issue(owner, repo, issue_number, assignee)

Check if a user can be assigned to a issue

Checks if a user has permission to be assigned to a specific issue.  If the `assignee` can be assigned to this issue, a `204` status code with no content is returned.  Otherwise a `404` status code is returned.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issue_number = 56 # Integer | The number that identifies the issue.
assignee = 'assignee_example' # String | 

begin
  # Check if a user can be assigned to a issue
  api_instance.issues_check_user_can_be_assigned_to_issue(owner, repo, issue_number, assignee)
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_check_user_can_be_assigned_to_issue: #{e}"
end
```

#### Using the issues_check_user_can_be_assigned_to_issue_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> issues_check_user_can_be_assigned_to_issue_with_http_info(owner, repo, issue_number, assignee)

```ruby
begin
  # Check if a user can be assigned to a issue
  data, status_code, headers = api_instance.issues_check_user_can_be_assigned_to_issue_with_http_info(owner, repo, issue_number, assignee)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_check_user_can_be_assigned_to_issue_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issue_number** | **Integer** | The number that identifies the issue. |  |
| **assignee** | **String** |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_create

> <Issue> issues_create(owner, repo, issues_create_request)

Create an issue

Any user with pull access to a repository can create an issue. If [issues are disabled in the repository](https://docs.github.com/articles/disabling-issues/), the API returns a `410 Gone` status.  This endpoint triggers [notifications](https://docs.github.com/github/managing-subscriptions-and-notifications-on-github/about-notifications). Creating content too quickly using this endpoint may result in secondary rate limiting. For more information, see \"[Rate limits for the API](https://docs.github.com/rest/using-the-rest-api/rate-limits-for-the-rest-api#about-secondary-rate-limits)\" and \"[Best practices for using the REST API](https://docs.github.com/rest/guides/best-practices-for-using-the-rest-api).\"  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issues_create_request = OpenapiClient::IssuesCreateRequest.new({title: nil}) # IssuesCreateRequest | 

begin
  # Create an issue
  result = api_instance.issues_create(owner, repo, issues_create_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_create: #{e}"
end
```

#### Using the issues_create_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Issue>, Integer, Hash)> issues_create_with_http_info(owner, repo, issues_create_request)

```ruby
begin
  # Create an issue
  data, status_code, headers = api_instance.issues_create_with_http_info(owner, repo, issues_create_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Issue>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_create_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issues_create_request** | [**IssuesCreateRequest**](IssuesCreateRequest.md) |  |  |

### Return type

[**Issue**](Issue.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json, application/scim+json


## issues_create_comment

> <IssueComment> issues_create_comment(owner, repo, issue_number, issues_update_comment_request)

Create an issue comment

You can use the REST API to create comments on issues and pull requests. Every pull request is an issue, but not every issue is a pull request.  This endpoint triggers [notifications](https://docs.github.com/github/managing-subscriptions-and-notifications-on-github/about-notifications). Creating content too quickly using this endpoint may result in secondary rate limiting. For more information, see \"[Rate limits for the API](https://docs.github.com/rest/using-the-rest-api/rate-limits-for-the-rest-api#about-secondary-rate-limits)\" and \"[Best practices for using the REST API](https://docs.github.com/rest/guides/best-practices-for-using-the-rest-api).\"  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issue_number = 56 # Integer | The number that identifies the issue.
issues_update_comment_request = OpenapiClient::IssuesUpdateCommentRequest.new({body: 'body_example'}) # IssuesUpdateCommentRequest | 

begin
  # Create an issue comment
  result = api_instance.issues_create_comment(owner, repo, issue_number, issues_update_comment_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_create_comment: #{e}"
end
```

#### Using the issues_create_comment_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<IssueComment>, Integer, Hash)> issues_create_comment_with_http_info(owner, repo, issue_number, issues_update_comment_request)

```ruby
begin
  # Create an issue comment
  data, status_code, headers = api_instance.issues_create_comment_with_http_info(owner, repo, issue_number, issues_update_comment_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <IssueComment>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_create_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issue_number** | **Integer** | The number that identifies the issue. |  |
| **issues_update_comment_request** | [**IssuesUpdateCommentRequest**](IssuesUpdateCommentRequest.md) |  |  |

### Return type

[**IssueComment**](IssueComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## issues_create_label

> <Label> issues_create_label(owner, repo, issues_create_label_request)

Create a label

Creates a label for the specified repository with the given name and color. The name and color parameters are required. The color must be a valid [hexadecimal color code](http://www.color-hex.com/).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issues_create_label_request = OpenapiClient::IssuesCreateLabelRequest.new({name: 'name_example'}) # IssuesCreateLabelRequest | 

begin
  # Create a label
  result = api_instance.issues_create_label(owner, repo, issues_create_label_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_create_label: #{e}"
end
```

#### Using the issues_create_label_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Label>, Integer, Hash)> issues_create_label_with_http_info(owner, repo, issues_create_label_request)

```ruby
begin
  # Create a label
  data, status_code, headers = api_instance.issues_create_label_with_http_info(owner, repo, issues_create_label_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Label>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_create_label_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issues_create_label_request** | [**IssuesCreateLabelRequest**](IssuesCreateLabelRequest.md) |  |  |

### Return type

[**Label**](Label.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## issues_create_milestone

> <Milestone> issues_create_milestone(owner, repo, issues_create_milestone_request)

Create a milestone

Creates a milestone.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issues_create_milestone_request = OpenapiClient::IssuesCreateMilestoneRequest.new({title: 'title_example'}) # IssuesCreateMilestoneRequest | 

begin
  # Create a milestone
  result = api_instance.issues_create_milestone(owner, repo, issues_create_milestone_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_create_milestone: #{e}"
end
```

#### Using the issues_create_milestone_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Milestone>, Integer, Hash)> issues_create_milestone_with_http_info(owner, repo, issues_create_milestone_request)

```ruby
begin
  # Create a milestone
  data, status_code, headers = api_instance.issues_create_milestone_with_http_info(owner, repo, issues_create_milestone_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Milestone>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_create_milestone_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issues_create_milestone_request** | [**IssuesCreateMilestoneRequest**](IssuesCreateMilestoneRequest.md) |  |  |

### Return type

[**Milestone**](Milestone.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## issues_delete_comment

> issues_delete_comment(owner, repo, comment_id)

Delete an issue comment

You can use the REST API to delete comments on issues and pull requests. Every pull request is an issue, but not every issue is a pull request.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
comment_id = 56 # Integer | The unique identifier of the comment.

begin
  # Delete an issue comment
  api_instance.issues_delete_comment(owner, repo, comment_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_delete_comment: #{e}"
end
```

#### Using the issues_delete_comment_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> issues_delete_comment_with_http_info(owner, repo, comment_id)

```ruby
begin
  # Delete an issue comment
  data, status_code, headers = api_instance.issues_delete_comment_with_http_info(owner, repo, comment_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_delete_comment_with_http_info: #{e}"
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
- **Accept**: Not defined


## issues_delete_label

> issues_delete_label(owner, repo, name)

Delete a label

Deletes a label using the given label name.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
name = 'name_example' # String | 

begin
  # Delete a label
  api_instance.issues_delete_label(owner, repo, name)
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_delete_label: #{e}"
end
```

#### Using the issues_delete_label_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> issues_delete_label_with_http_info(owner, repo, name)

```ruby
begin
  # Delete a label
  data, status_code, headers = api_instance.issues_delete_label_with_http_info(owner, repo, name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_delete_label_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **name** | **String** |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## issues_delete_milestone

> issues_delete_milestone(owner, repo, milestone_number)

Delete a milestone

Deletes a milestone using the given milestone number.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
milestone_number = 56 # Integer | The number that identifies the milestone.

begin
  # Delete a milestone
  api_instance.issues_delete_milestone(owner, repo, milestone_number)
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_delete_milestone: #{e}"
end
```

#### Using the issues_delete_milestone_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> issues_delete_milestone_with_http_info(owner, repo, milestone_number)

```ruby
begin
  # Delete a milestone
  data, status_code, headers = api_instance.issues_delete_milestone_with_http_info(owner, repo, milestone_number)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_delete_milestone_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **milestone_number** | **Integer** | The number that identifies the milestone. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_get

> <Issue> issues_get(owner, repo, issue_number)

Get an issue

The API returns a [`301 Moved Permanently` status](https://docs.github.com/rest/guides/best-practices-for-using-the-rest-api#follow-redirects) if the issue was [transferred](https://docs.github.com/articles/transferring-an-issue-to-another-repository/) to another repository. If the issue was transferred to or deleted from a repository where the authenticated user lacks read access, the API returns a `404 Not Found` status. If the issue was deleted from a repository where the authenticated user has read access, the API returns a `410 Gone` status. To receive webhook events for transferred and deleted issues, subscribe to the [`issues`](https://docs.github.com/webhooks/event-payloads/#issues) webhook.  **Note**: GitHub's REST API considers every pull request an issue, but not every issue is a pull request. For this reason, \"Issues\" endpoints may return both issues and pull requests in the response. You can identify pull requests by the `pull_request` key. Be aware that the `id` of a pull request returned from \"Issues\" endpoints will be an _issue id_. To find out the pull request id, use the \"[List pull requests](https://docs.github.com/rest/pulls/pulls#list-pull-requests)\" endpoint.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issue_number = 56 # Integer | The number that identifies the issue.

begin
  # Get an issue
  result = api_instance.issues_get(owner, repo, issue_number)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_get: #{e}"
end
```

#### Using the issues_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Issue>, Integer, Hash)> issues_get_with_http_info(owner, repo, issue_number)

```ruby
begin
  # Get an issue
  data, status_code, headers = api_instance.issues_get_with_http_info(owner, repo, issue_number)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Issue>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issue_number** | **Integer** | The number that identifies the issue. |  |

### Return type

[**Issue**](Issue.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_get_comment

> <IssueComment> issues_get_comment(owner, repo, comment_id)

Get an issue comment

You can use the REST API to get comments on issues and pull requests. Every pull request is an issue, but not every issue is a pull request.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
comment_id = 56 # Integer | The unique identifier of the comment.

begin
  # Get an issue comment
  result = api_instance.issues_get_comment(owner, repo, comment_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_get_comment: #{e}"
end
```

#### Using the issues_get_comment_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<IssueComment>, Integer, Hash)> issues_get_comment_with_http_info(owner, repo, comment_id)

```ruby
begin
  # Get an issue comment
  data, status_code, headers = api_instance.issues_get_comment_with_http_info(owner, repo, comment_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <IssueComment>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_get_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **comment_id** | **Integer** | The unique identifier of the comment. |  |

### Return type

[**IssueComment**](IssueComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_get_event

> <IssueEvent> issues_get_event(owner, repo, event_id)

Get an issue event

Gets a single event by the event id.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
event_id = 56 # Integer | 

begin
  # Get an issue event
  result = api_instance.issues_get_event(owner, repo, event_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_get_event: #{e}"
end
```

#### Using the issues_get_event_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<IssueEvent>, Integer, Hash)> issues_get_event_with_http_info(owner, repo, event_id)

```ruby
begin
  # Get an issue event
  data, status_code, headers = api_instance.issues_get_event_with_http_info(owner, repo, event_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <IssueEvent>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_get_event_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **event_id** | **Integer** |  |  |

### Return type

[**IssueEvent**](IssueEvent.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_get_label

> <Label> issues_get_label(owner, repo, name)

Get a label

Gets a label using the given name.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
name = 'name_example' # String | 

begin
  # Get a label
  result = api_instance.issues_get_label(owner, repo, name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_get_label: #{e}"
end
```

#### Using the issues_get_label_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Label>, Integer, Hash)> issues_get_label_with_http_info(owner, repo, name)

```ruby
begin
  # Get a label
  data, status_code, headers = api_instance.issues_get_label_with_http_info(owner, repo, name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Label>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_get_label_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **name** | **String** |  |  |

### Return type

[**Label**](Label.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_get_milestone

> <Milestone> issues_get_milestone(owner, repo, milestone_number)

Get a milestone

Gets a milestone using the given milestone number.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
milestone_number = 56 # Integer | The number that identifies the milestone.

begin
  # Get a milestone
  result = api_instance.issues_get_milestone(owner, repo, milestone_number)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_get_milestone: #{e}"
end
```

#### Using the issues_get_milestone_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Milestone>, Integer, Hash)> issues_get_milestone_with_http_info(owner, repo, milestone_number)

```ruby
begin
  # Get a milestone
  data, status_code, headers = api_instance.issues_get_milestone_with_http_info(owner, repo, milestone_number)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Milestone>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_get_milestone_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **milestone_number** | **Integer** | The number that identifies the milestone. |  |

### Return type

[**Milestone**](Milestone.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_list

> <Array<Issue>> issues_list(opts)

List issues assigned to the authenticated user

List issues assigned to the authenticated user across all visible repositories including owned repositories, member repositories, and organization repositories. You can use the `filter` query parameter to fetch issues that are not necessarily assigned to you.  **Note**: GitHub's REST API considers every pull request an issue, but not every issue is a pull request. For this reason, \"Issues\" endpoints may return both issues and pull requests in the response. You can identify pull requests by the `pull_request` key. Be aware that the `id` of a pull request returned from \"Issues\" endpoints will be an _issue id_. To find out the pull request id, use the \"[List pull requests](https://docs.github.com/rest/pulls/pulls#list-pull-requests)\" endpoint.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
opts = {
  filter: 'assigned', # String | Indicates which sorts of issues to return. `assigned` means issues assigned to you. `created` means issues created by you. `mentioned` means issues mentioning you. `subscribed` means issues you're subscribed to updates for. `all` or `repos` means all issues you can see, regardless of participation or creation.
  state: 'open', # String | Indicates the state of the issues to return.
  labels: 'labels_example', # String | A list of comma separated label names. Example: `bug,ui,@high`
  sort: 'created', # String | What to sort results by.
  direction: 'asc', # String | The direction to sort the results by.
  since: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
  collab: true, # Boolean | 
  orgs: true, # Boolean | 
  owned: true, # Boolean | 
  pulls: true, # Boolean | 
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List issues assigned to the authenticated user
  result = api_instance.issues_list(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list: #{e}"
end
```

#### Using the issues_list_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Issue>>, Integer, Hash)> issues_list_with_http_info(opts)

```ruby
begin
  # List issues assigned to the authenticated user
  data, status_code, headers = api_instance.issues_list_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Issue>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **filter** | **String** | Indicates which sorts of issues to return. &#x60;assigned&#x60; means issues assigned to you. &#x60;created&#x60; means issues created by you. &#x60;mentioned&#x60; means issues mentioning you. &#x60;subscribed&#x60; means issues you&#39;re subscribed to updates for. &#x60;all&#x60; or &#x60;repos&#x60; means all issues you can see, regardless of participation or creation. | [optional][default to &#39;assigned&#39;] |
| **state** | **String** | Indicates the state of the issues to return. | [optional][default to &#39;open&#39;] |
| **labels** | **String** | A list of comma separated label names. Example: &#x60;bug,ui,@high&#x60; | [optional] |
| **sort** | **String** | What to sort results by. | [optional][default to &#39;created&#39;] |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **since** | **Time** | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **collab** | **Boolean** |  | [optional] |
| **orgs** | **Boolean** |  | [optional] |
| **owned** | **Boolean** |  | [optional] |
| **pulls** | **Boolean** |  | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Issue&gt;**](Issue.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_list_assignees

> <Array<SimpleUser>> issues_list_assignees(owner, repo, opts)

List assignees

Lists the [available assignees](https://docs.github.com/articles/assigning-issues-and-pull-requests-to-other-github-users/) for issues in a repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List assignees
  result = api_instance.issues_list_assignees(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_assignees: #{e}"
end
```

#### Using the issues_list_assignees_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SimpleUser>>, Integer, Hash)> issues_list_assignees_with_http_info(owner, repo, opts)

```ruby
begin
  # List assignees
  data, status_code, headers = api_instance.issues_list_assignees_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SimpleUser>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_assignees_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;SimpleUser&gt;**](SimpleUser.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_list_comments

> <Array<IssueComment>> issues_list_comments(owner, repo, issue_number, opts)

List issue comments

You can use the REST API to list comments on issues and pull requests. Every pull request is an issue, but not every issue is a pull request.  Issue comments are ordered by ascending ID.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issue_number = 56 # Integer | The number that identifies the issue.
opts = {
  since: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List issue comments
  result = api_instance.issues_list_comments(owner, repo, issue_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_comments: #{e}"
end
```

#### Using the issues_list_comments_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<IssueComment>>, Integer, Hash)> issues_list_comments_with_http_info(owner, repo, issue_number, opts)

```ruby
begin
  # List issue comments
  data, status_code, headers = api_instance.issues_list_comments_with_http_info(owner, repo, issue_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<IssueComment>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_comments_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issue_number** | **Integer** | The number that identifies the issue. |  |
| **since** | **Time** | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;IssueComment&gt;**](IssueComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_list_comments_for_repo

> <Array<IssueComment>> issues_list_comments_for_repo(owner, repo, opts)

List issue comments for a repository

You can use the REST API to list comments on issues and pull requests for a repository. Every pull request is an issue, but not every issue is a pull request.  By default, issue comments are ordered by ascending ID.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  sort: 'created', # String | The property to sort the results by.
  direction: 'asc', # String | Either `asc` or `desc`. Ignored without the `sort` parameter.
  since: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List issue comments for a repository
  result = api_instance.issues_list_comments_for_repo(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_comments_for_repo: #{e}"
end
```

#### Using the issues_list_comments_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<IssueComment>>, Integer, Hash)> issues_list_comments_for_repo_with_http_info(owner, repo, opts)

```ruby
begin
  # List issue comments for a repository
  data, status_code, headers = api_instance.issues_list_comments_for_repo_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<IssueComment>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_comments_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **sort** | **String** | The property to sort the results by. | [optional][default to &#39;created&#39;] |
| **direction** | **String** | Either &#x60;asc&#x60; or &#x60;desc&#x60;. Ignored without the &#x60;sort&#x60; parameter. | [optional] |
| **since** | **Time** | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;IssueComment&gt;**](IssueComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_list_events

> <Array<IssueEventForIssue>> issues_list_events(owner, repo, issue_number, opts)

List issue events

Lists all events for an issue.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issue_number = 56 # Integer | The number that identifies the issue.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List issue events
  result = api_instance.issues_list_events(owner, repo, issue_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_events: #{e}"
end
```

#### Using the issues_list_events_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<IssueEventForIssue>>, Integer, Hash)> issues_list_events_with_http_info(owner, repo, issue_number, opts)

```ruby
begin
  # List issue events
  data, status_code, headers = api_instance.issues_list_events_with_http_info(owner, repo, issue_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<IssueEventForIssue>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_events_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issue_number** | **Integer** | The number that identifies the issue. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;IssueEventForIssue&gt;**](IssueEventForIssue.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_list_events_for_repo

> <Array<IssueEvent>> issues_list_events_for_repo(owner, repo, opts)

List issue events for a repository

Lists events for a repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List issue events for a repository
  result = api_instance.issues_list_events_for_repo(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_events_for_repo: #{e}"
end
```

#### Using the issues_list_events_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<IssueEvent>>, Integer, Hash)> issues_list_events_for_repo_with_http_info(owner, repo, opts)

```ruby
begin
  # List issue events for a repository
  data, status_code, headers = api_instance.issues_list_events_for_repo_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<IssueEvent>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_events_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;IssueEvent&gt;**](IssueEvent.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_list_events_for_timeline

> <Array<TimelineIssueEvents>> issues_list_events_for_timeline(owner, repo, issue_number, opts)

List timeline events for an issue

List all timeline events for an issue.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issue_number = 56 # Integer | The number that identifies the issue.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List timeline events for an issue
  result = api_instance.issues_list_events_for_timeline(owner, repo, issue_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_events_for_timeline: #{e}"
end
```

#### Using the issues_list_events_for_timeline_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<TimelineIssueEvents>>, Integer, Hash)> issues_list_events_for_timeline_with_http_info(owner, repo, issue_number, opts)

```ruby
begin
  # List timeline events for an issue
  data, status_code, headers = api_instance.issues_list_events_for_timeline_with_http_info(owner, repo, issue_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<TimelineIssueEvents>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_events_for_timeline_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issue_number** | **Integer** | The number that identifies the issue. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;TimelineIssueEvents&gt;**](TimelineIssueEvents.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_list_for_authenticated_user

> <Array<Issue>> issues_list_for_authenticated_user(opts)

List user account issues assigned to the authenticated user

List issues across owned and member repositories assigned to the authenticated user.  **Note**: GitHub's REST API considers every pull request an issue, but not every issue is a pull request. For this reason, \"Issues\" endpoints may return both issues and pull requests in the response. You can identify pull requests by the `pull_request` key. Be aware that the `id` of a pull request returned from \"Issues\" endpoints will be an _issue id_. To find out the pull request id, use the \"[List pull requests](https://docs.github.com/rest/pulls/pulls#list-pull-requests)\" endpoint.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
opts = {
  filter: 'assigned', # String | Indicates which sorts of issues to return. `assigned` means issues assigned to you. `created` means issues created by you. `mentioned` means issues mentioning you. `subscribed` means issues you're subscribed to updates for. `all` or `repos` means all issues you can see, regardless of participation or creation.
  state: 'open', # String | Indicates the state of the issues to return.
  labels: 'labels_example', # String | A list of comma separated label names. Example: `bug,ui,@high`
  sort: 'created', # String | What to sort results by.
  direction: 'asc', # String | The direction to sort the results by.
  since: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List user account issues assigned to the authenticated user
  result = api_instance.issues_list_for_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_for_authenticated_user: #{e}"
end
```

#### Using the issues_list_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Issue>>, Integer, Hash)> issues_list_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # List user account issues assigned to the authenticated user
  data, status_code, headers = api_instance.issues_list_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Issue>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **filter** | **String** | Indicates which sorts of issues to return. &#x60;assigned&#x60; means issues assigned to you. &#x60;created&#x60; means issues created by you. &#x60;mentioned&#x60; means issues mentioning you. &#x60;subscribed&#x60; means issues you&#39;re subscribed to updates for. &#x60;all&#x60; or &#x60;repos&#x60; means all issues you can see, regardless of participation or creation. | [optional][default to &#39;assigned&#39;] |
| **state** | **String** | Indicates the state of the issues to return. | [optional][default to &#39;open&#39;] |
| **labels** | **String** | A list of comma separated label names. Example: &#x60;bug,ui,@high&#x60; | [optional] |
| **sort** | **String** | What to sort results by. | [optional][default to &#39;created&#39;] |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **since** | **Time** | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Issue&gt;**](Issue.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_list_for_org

> <Array<Issue>> issues_list_for_org(org, opts)

List organization issues assigned to the authenticated user

List issues in an organization assigned to the authenticated user.  **Note**: GitHub's REST API considers every pull request an issue, but not every issue is a pull request. For this reason, \"Issues\" endpoints may return both issues and pull requests in the response. You can identify pull requests by the `pull_request` key. Be aware that the `id` of a pull request returned from \"Issues\" endpoints will be an _issue id_. To find out the pull request id, use the \"[List pull requests](https://docs.github.com/rest/pulls/pulls#list-pull-requests)\" endpoint.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  filter: 'assigned', # String | Indicates which sorts of issues to return. `assigned` means issues assigned to you. `created` means issues created by you. `mentioned` means issues mentioning you. `subscribed` means issues you're subscribed to updates for. `all` or `repos` means all issues you can see, regardless of participation or creation.
  state: 'open', # String | Indicates the state of the issues to return.
  labels: 'labels_example', # String | A list of comma separated label names. Example: `bug,ui,@high`
  sort: 'created', # String | What to sort results by.
  direction: 'asc', # String | The direction to sort the results by.
  since: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List organization issues assigned to the authenticated user
  result = api_instance.issues_list_for_org(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_for_org: #{e}"
end
```

#### Using the issues_list_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Issue>>, Integer, Hash)> issues_list_for_org_with_http_info(org, opts)

```ruby
begin
  # List organization issues assigned to the authenticated user
  data, status_code, headers = api_instance.issues_list_for_org_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Issue>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **filter** | **String** | Indicates which sorts of issues to return. &#x60;assigned&#x60; means issues assigned to you. &#x60;created&#x60; means issues created by you. &#x60;mentioned&#x60; means issues mentioning you. &#x60;subscribed&#x60; means issues you&#39;re subscribed to updates for. &#x60;all&#x60; or &#x60;repos&#x60; means all issues you can see, regardless of participation or creation. | [optional][default to &#39;assigned&#39;] |
| **state** | **String** | Indicates the state of the issues to return. | [optional][default to &#39;open&#39;] |
| **labels** | **String** | A list of comma separated label names. Example: &#x60;bug,ui,@high&#x60; | [optional] |
| **sort** | **String** | What to sort results by. | [optional][default to &#39;created&#39;] |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **since** | **Time** | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Issue&gt;**](Issue.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_list_for_repo

> <Array<Issue>> issues_list_for_repo(owner, repo, opts)

List repository issues

List issues in a repository. Only open issues will be listed.  **Note**: GitHub's REST API considers every pull request an issue, but not every issue is a pull request. For this reason, \"Issues\" endpoints may return both issues and pull requests in the response. You can identify pull requests by the `pull_request` key. Be aware that the `id` of a pull request returned from \"Issues\" endpoints will be an _issue id_. To find out the pull request id, use the \"[List pull requests](https://docs.github.com/rest/pulls/pulls#list-pull-requests)\" endpoint.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  milestone: 'milestone_example', # String | If an `integer` is passed, it should refer to a milestone by its `number` field. If the string `*` is passed, issues with any milestone are accepted. If the string `none` is passed, issues without milestones are returned.
  state: 'open', # String | Indicates the state of the issues to return.
  assignee: 'assignee_example', # String | Can be the name of a user. Pass in `none` for issues with no assigned user, and `*` for issues assigned to any user.
  creator: 'creator_example', # String | The user that created the issue.
  mentioned: 'mentioned_example', # String | A user that's mentioned in the issue.
  labels: 'labels_example', # String | A list of comma separated label names. Example: `bug,ui,@high`
  sort: 'created', # String | What to sort results by.
  direction: 'asc', # String | The direction to sort the results by.
  since: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repository issues
  result = api_instance.issues_list_for_repo(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_for_repo: #{e}"
end
```

#### Using the issues_list_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Issue>>, Integer, Hash)> issues_list_for_repo_with_http_info(owner, repo, opts)

```ruby
begin
  # List repository issues
  data, status_code, headers = api_instance.issues_list_for_repo_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Issue>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **milestone** | **String** | If an &#x60;integer&#x60; is passed, it should refer to a milestone by its &#x60;number&#x60; field. If the string &#x60;*&#x60; is passed, issues with any milestone are accepted. If the string &#x60;none&#x60; is passed, issues without milestones are returned. | [optional] |
| **state** | **String** | Indicates the state of the issues to return. | [optional][default to &#39;open&#39;] |
| **assignee** | **String** | Can be the name of a user. Pass in &#x60;none&#x60; for issues with no assigned user, and &#x60;*&#x60; for issues assigned to any user. | [optional] |
| **creator** | **String** | The user that created the issue. | [optional] |
| **mentioned** | **String** | A user that&#39;s mentioned in the issue. | [optional] |
| **labels** | **String** | A list of comma separated label names. Example: &#x60;bug,ui,@high&#x60; | [optional] |
| **sort** | **String** | What to sort results by. | [optional][default to &#39;created&#39;] |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **since** | **Time** | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Issue&gt;**](Issue.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_list_labels_for_milestone

> <Array<Label>> issues_list_labels_for_milestone(owner, repo, milestone_number, opts)

List labels for issues in a milestone

Lists labels for issues in a milestone.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
milestone_number = 56 # Integer | The number that identifies the milestone.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List labels for issues in a milestone
  result = api_instance.issues_list_labels_for_milestone(owner, repo, milestone_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_labels_for_milestone: #{e}"
end
```

#### Using the issues_list_labels_for_milestone_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Label>>, Integer, Hash)> issues_list_labels_for_milestone_with_http_info(owner, repo, milestone_number, opts)

```ruby
begin
  # List labels for issues in a milestone
  data, status_code, headers = api_instance.issues_list_labels_for_milestone_with_http_info(owner, repo, milestone_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Label>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_labels_for_milestone_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **milestone_number** | **Integer** | The number that identifies the milestone. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Label&gt;**](Label.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_list_labels_for_repo

> <Array<Label>> issues_list_labels_for_repo(owner, repo, opts)

List labels for a repository

Lists all labels for a repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List labels for a repository
  result = api_instance.issues_list_labels_for_repo(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_labels_for_repo: #{e}"
end
```

#### Using the issues_list_labels_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Label>>, Integer, Hash)> issues_list_labels_for_repo_with_http_info(owner, repo, opts)

```ruby
begin
  # List labels for a repository
  data, status_code, headers = api_instance.issues_list_labels_for_repo_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Label>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_labels_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Label&gt;**](Label.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_list_labels_on_issue

> <Array<Label>> issues_list_labels_on_issue(owner, repo, issue_number, opts)

List labels for an issue

Lists all labels for an issue.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issue_number = 56 # Integer | The number that identifies the issue.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List labels for an issue
  result = api_instance.issues_list_labels_on_issue(owner, repo, issue_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_labels_on_issue: #{e}"
end
```

#### Using the issues_list_labels_on_issue_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Label>>, Integer, Hash)> issues_list_labels_on_issue_with_http_info(owner, repo, issue_number, opts)

```ruby
begin
  # List labels for an issue
  data, status_code, headers = api_instance.issues_list_labels_on_issue_with_http_info(owner, repo, issue_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Label>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_labels_on_issue_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issue_number** | **Integer** | The number that identifies the issue. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Label&gt;**](Label.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_list_milestones

> <Array<Milestone>> issues_list_milestones(owner, repo, opts)

List milestones

Lists milestones for a repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  state: 'open', # String | The state of the milestone. Either `open`, `closed`, or `all`.
  sort: 'due_on', # String | What to sort results by. Either `due_on` or `completeness`.
  direction: 'asc', # String | The direction of the sort. Either `asc` or `desc`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List milestones
  result = api_instance.issues_list_milestones(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_milestones: #{e}"
end
```

#### Using the issues_list_milestones_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Milestone>>, Integer, Hash)> issues_list_milestones_with_http_info(owner, repo, opts)

```ruby
begin
  # List milestones
  data, status_code, headers = api_instance.issues_list_milestones_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Milestone>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_list_milestones_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **state** | **String** | The state of the milestone. Either &#x60;open&#x60;, &#x60;closed&#x60;, or &#x60;all&#x60;. | [optional][default to &#39;open&#39;] |
| **sort** | **String** | What to sort results by. Either &#x60;due_on&#x60; or &#x60;completeness&#x60;. | [optional][default to &#39;due_on&#39;] |
| **direction** | **String** | The direction of the sort. Either &#x60;asc&#x60; or &#x60;desc&#x60;. | [optional][default to &#39;asc&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Milestone&gt;**](Milestone.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_lock

> issues_lock(owner, repo, issue_number, opts)

Lock an issue

Users with push access can lock an issue or pull request's conversation.  Note that, if you choose not to pass any parameters, you'll need to set `Content-Length` to zero when calling out to this endpoint. For more information, see \"[HTTP method](https://docs.github.com/rest/guides/getting-started-with-the-rest-api#http-method).\"

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issue_number = 56 # Integer | The number that identifies the issue.
opts = {
  issues_lock_request: OpenapiClient::IssuesLockRequest.new # IssuesLockRequest | 
}

begin
  # Lock an issue
  api_instance.issues_lock(owner, repo, issue_number, opts)
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_lock: #{e}"
end
```

#### Using the issues_lock_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> issues_lock_with_http_info(owner, repo, issue_number, opts)

```ruby
begin
  # Lock an issue
  data, status_code, headers = api_instance.issues_lock_with_http_info(owner, repo, issue_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_lock_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issue_number** | **Integer** | The number that identifies the issue. |  |
| **issues_lock_request** | [**IssuesLockRequest**](IssuesLockRequest.md) |  | [optional] |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## issues_remove_all_labels

> issues_remove_all_labels(owner, repo, issue_number)

Remove all labels from an issue

Removes all labels from an issue.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issue_number = 56 # Integer | The number that identifies the issue.

begin
  # Remove all labels from an issue
  api_instance.issues_remove_all_labels(owner, repo, issue_number)
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_remove_all_labels: #{e}"
end
```

#### Using the issues_remove_all_labels_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> issues_remove_all_labels_with_http_info(owner, repo, issue_number)

```ruby
begin
  # Remove all labels from an issue
  data, status_code, headers = api_instance.issues_remove_all_labels_with_http_info(owner, repo, issue_number)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_remove_all_labels_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issue_number** | **Integer** | The number that identifies the issue. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_remove_assignees

> <Issue> issues_remove_assignees(owner, repo, issue_number, opts)

Remove assignees from an issue

Removes one or more assignees from an issue.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issue_number = 56 # Integer | The number that identifies the issue.
opts = {
  issues_remove_assignees_request: OpenapiClient::IssuesRemoveAssigneesRequest.new # IssuesRemoveAssigneesRequest | 
}

begin
  # Remove assignees from an issue
  result = api_instance.issues_remove_assignees(owner, repo, issue_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_remove_assignees: #{e}"
end
```

#### Using the issues_remove_assignees_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Issue>, Integer, Hash)> issues_remove_assignees_with_http_info(owner, repo, issue_number, opts)

```ruby
begin
  # Remove assignees from an issue
  data, status_code, headers = api_instance.issues_remove_assignees_with_http_info(owner, repo, issue_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Issue>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_remove_assignees_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issue_number** | **Integer** | The number that identifies the issue. |  |
| **issues_remove_assignees_request** | [**IssuesRemoveAssigneesRequest**](IssuesRemoveAssigneesRequest.md) |  | [optional] |

### Return type

[**Issue**](Issue.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## issues_remove_label

> <Array<Label>> issues_remove_label(owner, repo, issue_number, name)

Remove a label from an issue

Removes the specified label from the issue, and returns the remaining labels on the issue. This endpoint returns a `404 Not Found` status if the label does not exist.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issue_number = 56 # Integer | The number that identifies the issue.
name = 'name_example' # String | 

begin
  # Remove a label from an issue
  result = api_instance.issues_remove_label(owner, repo, issue_number, name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_remove_label: #{e}"
end
```

#### Using the issues_remove_label_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Label>>, Integer, Hash)> issues_remove_label_with_http_info(owner, repo, issue_number, name)

```ruby
begin
  # Remove a label from an issue
  data, status_code, headers = api_instance.issues_remove_label_with_http_info(owner, repo, issue_number, name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Label>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_remove_label_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issue_number** | **Integer** | The number that identifies the issue. |  |
| **name** | **String** |  |  |

### Return type

[**Array&lt;Label&gt;**](Label.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_set_labels

> <Array<Label>> issues_set_labels(owner, repo, issue_number, opts)

Set labels for an issue

Removes any previous labels and sets the new labels for an issue.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issue_number = 56 # Integer | The number that identifies the issue.
opts = {
  issues_set_labels_request: nil # IssuesSetLabelsRequest | 
}

begin
  # Set labels for an issue
  result = api_instance.issues_set_labels(owner, repo, issue_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_set_labels: #{e}"
end
```

#### Using the issues_set_labels_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Label>>, Integer, Hash)> issues_set_labels_with_http_info(owner, repo, issue_number, opts)

```ruby
begin
  # Set labels for an issue
  data, status_code, headers = api_instance.issues_set_labels_with_http_info(owner, repo, issue_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Label>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_set_labels_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issue_number** | **Integer** | The number that identifies the issue. |  |
| **issues_set_labels_request** | [**IssuesSetLabelsRequest**](IssuesSetLabelsRequest.md) |  | [optional] |

### Return type

[**Array&lt;Label&gt;**](Label.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## issues_unlock

> issues_unlock(owner, repo, issue_number)

Unlock an issue

Users with push access can unlock an issue's conversation.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issue_number = 56 # Integer | The number that identifies the issue.

begin
  # Unlock an issue
  api_instance.issues_unlock(owner, repo, issue_number)
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_unlock: #{e}"
end
```

#### Using the issues_unlock_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> issues_unlock_with_http_info(owner, repo, issue_number)

```ruby
begin
  # Unlock an issue
  data, status_code, headers = api_instance.issues_unlock_with_http_info(owner, repo, issue_number)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_unlock_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issue_number** | **Integer** | The number that identifies the issue. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## issues_update

> <Issue> issues_update(owner, repo, issue_number, opts)

Update an issue

Issue owners and users with push access can edit an issue.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
issue_number = 56 # Integer | The number that identifies the issue.
opts = {
  issues_update_request: OpenapiClient::IssuesUpdateRequest.new # IssuesUpdateRequest | 
}

begin
  # Update an issue
  result = api_instance.issues_update(owner, repo, issue_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_update: #{e}"
end
```

#### Using the issues_update_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Issue>, Integer, Hash)> issues_update_with_http_info(owner, repo, issue_number, opts)

```ruby
begin
  # Update an issue
  data, status_code, headers = api_instance.issues_update_with_http_info(owner, repo, issue_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Issue>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_update_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **issue_number** | **Integer** | The number that identifies the issue. |  |
| **issues_update_request** | [**IssuesUpdateRequest**](IssuesUpdateRequest.md) |  | [optional] |

### Return type

[**Issue**](Issue.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## issues_update_comment

> <IssueComment> issues_update_comment(owner, repo, comment_id, issues_update_comment_request)

Update an issue comment

You can use the REST API to update comments on issues and pull requests. Every pull request is an issue, but not every issue is a pull request.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown body. Response will include `body`. This is the default if you do not pass any specific media type. - **`application/vnd.github.text+json`**: Returns a text only representation of the markdown body. Response will include `body_text`. - **`application/vnd.github.html+json`**: Returns HTML rendered from the body's markdown. Response will include `body_html`. - **`application/vnd.github.full+json`**: Returns raw, text, and HTML representations. Response will include `body`, `body_text`, and `body_html`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
comment_id = 56 # Integer | The unique identifier of the comment.
issues_update_comment_request = OpenapiClient::IssuesUpdateCommentRequest.new({body: 'body_example'}) # IssuesUpdateCommentRequest | 

begin
  # Update an issue comment
  result = api_instance.issues_update_comment(owner, repo, comment_id, issues_update_comment_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_update_comment: #{e}"
end
```

#### Using the issues_update_comment_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<IssueComment>, Integer, Hash)> issues_update_comment_with_http_info(owner, repo, comment_id, issues_update_comment_request)

```ruby
begin
  # Update an issue comment
  data, status_code, headers = api_instance.issues_update_comment_with_http_info(owner, repo, comment_id, issues_update_comment_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <IssueComment>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_update_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **comment_id** | **Integer** | The unique identifier of the comment. |  |
| **issues_update_comment_request** | [**IssuesUpdateCommentRequest**](IssuesUpdateCommentRequest.md) |  |  |

### Return type

[**IssueComment**](IssueComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## issues_update_label

> <Label> issues_update_label(owner, repo, name, opts)

Update a label

Updates a label using the given label name.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
name = 'name_example' # String | 
opts = {
  issues_update_label_request: OpenapiClient::IssuesUpdateLabelRequest.new # IssuesUpdateLabelRequest | 
}

begin
  # Update a label
  result = api_instance.issues_update_label(owner, repo, name, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_update_label: #{e}"
end
```

#### Using the issues_update_label_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Label>, Integer, Hash)> issues_update_label_with_http_info(owner, repo, name, opts)

```ruby
begin
  # Update a label
  data, status_code, headers = api_instance.issues_update_label_with_http_info(owner, repo, name, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Label>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_update_label_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **name** | **String** |  |  |
| **issues_update_label_request** | [**IssuesUpdateLabelRequest**](IssuesUpdateLabelRequest.md) |  | [optional] |

### Return type

[**Label**](Label.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## issues_update_milestone

> <Milestone> issues_update_milestone(owner, repo, milestone_number, opts)

Update a milestone



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::IssuesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
milestone_number = 56 # Integer | The number that identifies the milestone.
opts = {
  issues_update_milestone_request: OpenapiClient::IssuesUpdateMilestoneRequest.new # IssuesUpdateMilestoneRequest | 
}

begin
  # Update a milestone
  result = api_instance.issues_update_milestone(owner, repo, milestone_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_update_milestone: #{e}"
end
```

#### Using the issues_update_milestone_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Milestone>, Integer, Hash)> issues_update_milestone_with_http_info(owner, repo, milestone_number, opts)

```ruby
begin
  # Update a milestone
  data, status_code, headers = api_instance.issues_update_milestone_with_http_info(owner, repo, milestone_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Milestone>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IssuesApi->issues_update_milestone_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **milestone_number** | **Integer** | The number that identifies the milestone. |  |
| **issues_update_milestone_request** | [**IssuesUpdateMilestoneRequest**](IssuesUpdateMilestoneRequest.md) |  | [optional] |

### Return type

[**Milestone**](Milestone.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

