# OpenapiClient::ActivityApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**activity_check_repo_is_starred_by_authenticated_user**](ActivityApi.md#activity_check_repo_is_starred_by_authenticated_user) | **GET** /user/starred/{owner}/{repo} | Check if a repository is starred by the authenticated user |
| [**activity_delete_repo_subscription**](ActivityApi.md#activity_delete_repo_subscription) | **DELETE** /repos/{owner}/{repo}/subscription | Delete a repository subscription |
| [**activity_delete_thread_subscription**](ActivityApi.md#activity_delete_thread_subscription) | **DELETE** /notifications/threads/{thread_id}/subscription | Delete a thread subscription |
| [**activity_get_feeds**](ActivityApi.md#activity_get_feeds) | **GET** /feeds | Get feeds |
| [**activity_get_repo_subscription**](ActivityApi.md#activity_get_repo_subscription) | **GET** /repos/{owner}/{repo}/subscription | Get a repository subscription |
| [**activity_get_thread**](ActivityApi.md#activity_get_thread) | **GET** /notifications/threads/{thread_id} | Get a thread |
| [**activity_get_thread_subscription_for_authenticated_user**](ActivityApi.md#activity_get_thread_subscription_for_authenticated_user) | **GET** /notifications/threads/{thread_id}/subscription | Get a thread subscription for the authenticated user |
| [**activity_list_events_for_authenticated_user**](ActivityApi.md#activity_list_events_for_authenticated_user) | **GET** /users/{username}/events | List events for the authenticated user |
| [**activity_list_notifications_for_authenticated_user**](ActivityApi.md#activity_list_notifications_for_authenticated_user) | **GET** /notifications | List notifications for the authenticated user |
| [**activity_list_org_events_for_authenticated_user**](ActivityApi.md#activity_list_org_events_for_authenticated_user) | **GET** /users/{username}/events/orgs/{org} | List organization events for the authenticated user |
| [**activity_list_public_events**](ActivityApi.md#activity_list_public_events) | **GET** /events | List public events |
| [**activity_list_public_events_for_repo_network**](ActivityApi.md#activity_list_public_events_for_repo_network) | **GET** /networks/{owner}/{repo}/events | List public events for a network of repositories |
| [**activity_list_public_events_for_user**](ActivityApi.md#activity_list_public_events_for_user) | **GET** /users/{username}/events/public | List public events for a user |
| [**activity_list_public_org_events**](ActivityApi.md#activity_list_public_org_events) | **GET** /orgs/{org}/events | List public organization events |
| [**activity_list_received_events_for_user**](ActivityApi.md#activity_list_received_events_for_user) | **GET** /users/{username}/received_events | List events received by the authenticated user |
| [**activity_list_received_public_events_for_user**](ActivityApi.md#activity_list_received_public_events_for_user) | **GET** /users/{username}/received_events/public | List public events received by a user |
| [**activity_list_repo_events**](ActivityApi.md#activity_list_repo_events) | **GET** /repos/{owner}/{repo}/events | List repository events |
| [**activity_list_repo_notifications_for_authenticated_user**](ActivityApi.md#activity_list_repo_notifications_for_authenticated_user) | **GET** /repos/{owner}/{repo}/notifications | List repository notifications for the authenticated user |
| [**activity_list_repos_starred_by_authenticated_user**](ActivityApi.md#activity_list_repos_starred_by_authenticated_user) | **GET** /user/starred | List repositories starred by the authenticated user |
| [**activity_list_repos_starred_by_user**](ActivityApi.md#activity_list_repos_starred_by_user) | **GET** /users/{username}/starred | List repositories starred by a user |
| [**activity_list_repos_watched_by_user**](ActivityApi.md#activity_list_repos_watched_by_user) | **GET** /users/{username}/subscriptions | List repositories watched by a user |
| [**activity_list_stargazers_for_repo**](ActivityApi.md#activity_list_stargazers_for_repo) | **GET** /repos/{owner}/{repo}/stargazers | List stargazers |
| [**activity_list_watched_repos_for_authenticated_user**](ActivityApi.md#activity_list_watched_repos_for_authenticated_user) | **GET** /user/subscriptions | List repositories watched by the authenticated user |
| [**activity_list_watchers_for_repo**](ActivityApi.md#activity_list_watchers_for_repo) | **GET** /repos/{owner}/{repo}/subscribers | List watchers |
| [**activity_mark_notifications_as_read**](ActivityApi.md#activity_mark_notifications_as_read) | **PUT** /notifications | Mark notifications as read |
| [**activity_mark_repo_notifications_as_read**](ActivityApi.md#activity_mark_repo_notifications_as_read) | **PUT** /repos/{owner}/{repo}/notifications | Mark repository notifications as read |
| [**activity_mark_thread_as_done**](ActivityApi.md#activity_mark_thread_as_done) | **DELETE** /notifications/threads/{thread_id} | Mark a thread as done |
| [**activity_mark_thread_as_read**](ActivityApi.md#activity_mark_thread_as_read) | **PATCH** /notifications/threads/{thread_id} | Mark a thread as read |
| [**activity_set_repo_subscription**](ActivityApi.md#activity_set_repo_subscription) | **PUT** /repos/{owner}/{repo}/subscription | Set a repository subscription |
| [**activity_set_thread_subscription**](ActivityApi.md#activity_set_thread_subscription) | **PUT** /notifications/threads/{thread_id}/subscription | Set a thread subscription |
| [**activity_star_repo_for_authenticated_user**](ActivityApi.md#activity_star_repo_for_authenticated_user) | **PUT** /user/starred/{owner}/{repo} | Star a repository for the authenticated user |
| [**activity_unstar_repo_for_authenticated_user**](ActivityApi.md#activity_unstar_repo_for_authenticated_user) | **DELETE** /user/starred/{owner}/{repo} | Unstar a repository for the authenticated user |


## activity_check_repo_is_starred_by_authenticated_user

> activity_check_repo_is_starred_by_authenticated_user(owner, repo)

Check if a repository is starred by the authenticated user

Whether the authenticated user has starred the repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Check if a repository is starred by the authenticated user
  api_instance.activity_check_repo_is_starred_by_authenticated_user(owner, repo)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_check_repo_is_starred_by_authenticated_user: #{e}"
end
```

#### Using the activity_check_repo_is_starred_by_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> activity_check_repo_is_starred_by_authenticated_user_with_http_info(owner, repo)

```ruby
begin
  # Check if a repository is starred by the authenticated user
  data, status_code, headers = api_instance.activity_check_repo_is_starred_by_authenticated_user_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_check_repo_is_starred_by_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_delete_repo_subscription

> activity_delete_repo_subscription(owner, repo)

Delete a repository subscription

This endpoint should only be used to stop watching a repository. To control whether or not you wish to receive notifications from a repository, [set the repository's subscription manually](https://docs.github.com/rest/activity/watching#set-a-repository-subscription).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Delete a repository subscription
  api_instance.activity_delete_repo_subscription(owner, repo)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_delete_repo_subscription: #{e}"
end
```

#### Using the activity_delete_repo_subscription_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> activity_delete_repo_subscription_with_http_info(owner, repo)

```ruby
begin
  # Delete a repository subscription
  data, status_code, headers = api_instance.activity_delete_repo_subscription_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_delete_repo_subscription_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## activity_delete_thread_subscription

> activity_delete_thread_subscription(thread_id)

Delete a thread subscription

Mutes all future notifications for a conversation until you comment on the thread or get an **@mention**. If you are watching the repository of the thread, you will still receive notifications. To ignore future notifications for a repository you are watching, use the [Set a thread subscription](https://docs.github.com/rest/activity/notifications#set-a-thread-subscription) endpoint and set `ignore` to `true`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
thread_id = 56 # Integer | The unique identifier of the notification thread. This corresponds to the value returned in the `id` field when you retrieve notifications (for example with the [`GET /notifications` operation](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user)).

begin
  # Delete a thread subscription
  api_instance.activity_delete_thread_subscription(thread_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_delete_thread_subscription: #{e}"
end
```

#### Using the activity_delete_thread_subscription_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> activity_delete_thread_subscription_with_http_info(thread_id)

```ruby
begin
  # Delete a thread subscription
  data, status_code, headers = api_instance.activity_delete_thread_subscription_with_http_info(thread_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_delete_thread_subscription_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **thread_id** | **Integer** | The unique identifier of the notification thread. This corresponds to the value returned in the &#x60;id&#x60; field when you retrieve notifications (for example with the [&#x60;GET /notifications&#x60; operation](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user)). |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_get_feeds

> <Feed> activity_get_feeds

Get feeds

Lists the feeds available to the authenticated user. The response provides a URL for each feed. You can then get a specific feed by sending a request to one of the feed URLs.  *   **Timeline**: The GitHub global public timeline *   **User**: The public timeline for any user, using `uri_template`. For more information, see \"[Hypermedia](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#hypermedia).\" *   **Current user public**: The public timeline for the authenticated user *   **Current user**: The private timeline for the authenticated user *   **Current user actor**: The private timeline for activity created by the authenticated user *   **Current user organizations**: The private timeline for the organizations the authenticated user is a member of. *   **Security advisories**: A collection of public announcements that provide information about security-related vulnerabilities in software on GitHub.  By default, timeline resources are returned in JSON. You can specify the `application/atom+xml` type in the `Accept` header to return timeline resources in Atom format. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  **Note**: Private feeds are only returned when [authenticating via Basic Auth](https://docs.github.com/rest/authentication/authenticating-to-the-rest-api#using-basic-authentication) since current feed URIs use the older, non revocable auth tokens.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new

begin
  # Get feeds
  result = api_instance.activity_get_feeds
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_get_feeds: #{e}"
end
```

#### Using the activity_get_feeds_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Feed>, Integer, Hash)> activity_get_feeds_with_http_info

```ruby
begin
  # Get feeds
  data, status_code, headers = api_instance.activity_get_feeds_with_http_info
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Feed>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_get_feeds_with_http_info: #{e}"
end
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**Feed**](Feed.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_get_repo_subscription

> <RepositorySubscription> activity_get_repo_subscription(owner, repo)

Get a repository subscription

Gets information about whether the authenticated user is subscribed to the repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Get a repository subscription
  result = api_instance.activity_get_repo_subscription(owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_get_repo_subscription: #{e}"
end
```

#### Using the activity_get_repo_subscription_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<RepositorySubscription>, Integer, Hash)> activity_get_repo_subscription_with_http_info(owner, repo)

```ruby
begin
  # Get a repository subscription
  data, status_code, headers = api_instance.activity_get_repo_subscription_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <RepositorySubscription>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_get_repo_subscription_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**RepositorySubscription**](RepositorySubscription.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_get_thread

> <Thread> activity_get_thread(thread_id)

Get a thread

Gets information about a notification thread.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
thread_id = 56 # Integer | The unique identifier of the notification thread. This corresponds to the value returned in the `id` field when you retrieve notifications (for example with the [`GET /notifications` operation](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user)).

begin
  # Get a thread
  result = api_instance.activity_get_thread(thread_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_get_thread: #{e}"
end
```

#### Using the activity_get_thread_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Thread>, Integer, Hash)> activity_get_thread_with_http_info(thread_id)

```ruby
begin
  # Get a thread
  data, status_code, headers = api_instance.activity_get_thread_with_http_info(thread_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Thread>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_get_thread_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **thread_id** | **Integer** | The unique identifier of the notification thread. This corresponds to the value returned in the &#x60;id&#x60; field when you retrieve notifications (for example with the [&#x60;GET /notifications&#x60; operation](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user)). |  |

### Return type

[**Thread**](Thread.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_get_thread_subscription_for_authenticated_user

> <ThreadSubscription> activity_get_thread_subscription_for_authenticated_user(thread_id)

Get a thread subscription for the authenticated user

This checks to see if the current user is subscribed to a thread. You can also [get a repository subscription](https://docs.github.com/rest/activity/watching#get-a-repository-subscription).  Note that subscriptions are only generated if a user is participating in a conversation--for example, they've replied to the thread, were **@mentioned**, or manually subscribe to a thread.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
thread_id = 56 # Integer | The unique identifier of the notification thread. This corresponds to the value returned in the `id` field when you retrieve notifications (for example with the [`GET /notifications` operation](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user)).

begin
  # Get a thread subscription for the authenticated user
  result = api_instance.activity_get_thread_subscription_for_authenticated_user(thread_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_get_thread_subscription_for_authenticated_user: #{e}"
end
```

#### Using the activity_get_thread_subscription_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ThreadSubscription>, Integer, Hash)> activity_get_thread_subscription_for_authenticated_user_with_http_info(thread_id)

```ruby
begin
  # Get a thread subscription for the authenticated user
  data, status_code, headers = api_instance.activity_get_thread_subscription_for_authenticated_user_with_http_info(thread_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ThreadSubscription>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_get_thread_subscription_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **thread_id** | **Integer** | The unique identifier of the notification thread. This corresponds to the value returned in the &#x60;id&#x60; field when you retrieve notifications (for example with the [&#x60;GET /notifications&#x60; operation](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user)). |  |

### Return type

[**ThreadSubscription**](ThreadSubscription.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_list_events_for_authenticated_user

> <Array<Event>> activity_list_events_for_authenticated_user(username, opts)

List events for the authenticated user

If you are authenticated as the given user, you will see your private events. Otherwise, you'll only see public events.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List events for the authenticated user
  result = api_instance.activity_list_events_for_authenticated_user(username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_events_for_authenticated_user: #{e}"
end
```

#### Using the activity_list_events_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Event>>, Integer, Hash)> activity_list_events_for_authenticated_user_with_http_info(username, opts)

```ruby
begin
  # List events for the authenticated user
  data, status_code, headers = api_instance.activity_list_events_for_authenticated_user_with_http_info(username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Event>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_events_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Event&gt;**](Event.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_list_notifications_for_authenticated_user

> <Array<Thread>> activity_list_notifications_for_authenticated_user(opts)

List notifications for the authenticated user

List all notifications for the current user, sorted by most recently updated.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
opts = {
  all: true, # Boolean | If `true`, show notifications marked as read.
  participating: true, # Boolean | If `true`, only shows notifications in which the user is directly participating or mentioned.
  since: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
  before: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Only show notifications updated before the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  per_page: 56 # Integer | The number of results per page (max 50). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List notifications for the authenticated user
  result = api_instance.activity_list_notifications_for_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_notifications_for_authenticated_user: #{e}"
end
```

#### Using the activity_list_notifications_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Thread>>, Integer, Hash)> activity_list_notifications_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # List notifications for the authenticated user
  data, status_code, headers = api_instance.activity_list_notifications_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Thread>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_notifications_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **all** | **Boolean** | If &#x60;true&#x60;, show notifications marked as read. | [optional][default to false] |
| **participating** | **Boolean** | If &#x60;true&#x60;, only shows notifications in which the user is directly participating or mentioned. | [optional][default to false] |
| **since** | **Time** | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **before** | **Time** | Only show notifications updated before the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **per_page** | **Integer** | The number of results per page (max 50). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 50] |

### Return type

[**Array&lt;Thread&gt;**](Thread.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_list_org_events_for_authenticated_user

> <Array<Event>> activity_list_org_events_for_authenticated_user(username, org, opts)

List organization events for the authenticated user

This is the user's organization dashboard. You must be authenticated as the user to view this.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
username = 'username_example' # String | The handle for the GitHub user account.
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List organization events for the authenticated user
  result = api_instance.activity_list_org_events_for_authenticated_user(username, org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_org_events_for_authenticated_user: #{e}"
end
```

#### Using the activity_list_org_events_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Event>>, Integer, Hash)> activity_list_org_events_for_authenticated_user_with_http_info(username, org, opts)

```ruby
begin
  # List organization events for the authenticated user
  data, status_code, headers = api_instance.activity_list_org_events_for_authenticated_user_with_http_info(username, org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Event>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_org_events_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Event&gt;**](Event.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_list_public_events

> <Array<Event>> activity_list_public_events(opts)

List public events

We delay the public events feed by five minutes, which means the most recent event returned by the public events API actually occurred at least five minutes ago.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List public events
  result = api_instance.activity_list_public_events(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_public_events: #{e}"
end
```

#### Using the activity_list_public_events_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Event>>, Integer, Hash)> activity_list_public_events_with_http_info(opts)

```ruby
begin
  # List public events
  data, status_code, headers = api_instance.activity_list_public_events_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Event>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_public_events_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Event&gt;**](Event.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_list_public_events_for_repo_network

> <Array<Event>> activity_list_public_events_for_repo_network(owner, repo, opts)

List public events for a network of repositories



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List public events for a network of repositories
  result = api_instance.activity_list_public_events_for_repo_network(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_public_events_for_repo_network: #{e}"
end
```

#### Using the activity_list_public_events_for_repo_network_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Event>>, Integer, Hash)> activity_list_public_events_for_repo_network_with_http_info(owner, repo, opts)

```ruby
begin
  # List public events for a network of repositories
  data, status_code, headers = api_instance.activity_list_public_events_for_repo_network_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Event>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_public_events_for_repo_network_with_http_info: #{e}"
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

[**Array&lt;Event&gt;**](Event.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_list_public_events_for_user

> <Array<Event>> activity_list_public_events_for_user(username, opts)

List public events for a user



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List public events for a user
  result = api_instance.activity_list_public_events_for_user(username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_public_events_for_user: #{e}"
end
```

#### Using the activity_list_public_events_for_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Event>>, Integer, Hash)> activity_list_public_events_for_user_with_http_info(username, opts)

```ruby
begin
  # List public events for a user
  data, status_code, headers = api_instance.activity_list_public_events_for_user_with_http_info(username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Event>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_public_events_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Event&gt;**](Event.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_list_public_org_events

> <Array<Event>> activity_list_public_org_events(org, opts)

List public organization events



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List public organization events
  result = api_instance.activity_list_public_org_events(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_public_org_events: #{e}"
end
```

#### Using the activity_list_public_org_events_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Event>>, Integer, Hash)> activity_list_public_org_events_with_http_info(org, opts)

```ruby
begin
  # List public organization events
  data, status_code, headers = api_instance.activity_list_public_org_events_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Event>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_public_org_events_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Event&gt;**](Event.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_list_received_events_for_user

> <Array<Event>> activity_list_received_events_for_user(username, opts)

List events received by the authenticated user

These are events that you've received by watching repositories and following users. If you are authenticated as the given user, you will see private events. Otherwise, you'll only see public events.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List events received by the authenticated user
  result = api_instance.activity_list_received_events_for_user(username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_received_events_for_user: #{e}"
end
```

#### Using the activity_list_received_events_for_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Event>>, Integer, Hash)> activity_list_received_events_for_user_with_http_info(username, opts)

```ruby
begin
  # List events received by the authenticated user
  data, status_code, headers = api_instance.activity_list_received_events_for_user_with_http_info(username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Event>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_received_events_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Event&gt;**](Event.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_list_received_public_events_for_user

> <Array<Event>> activity_list_received_public_events_for_user(username, opts)

List public events received by a user



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List public events received by a user
  result = api_instance.activity_list_received_public_events_for_user(username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_received_public_events_for_user: #{e}"
end
```

#### Using the activity_list_received_public_events_for_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Event>>, Integer, Hash)> activity_list_received_public_events_for_user_with_http_info(username, opts)

```ruby
begin
  # List public events received by a user
  data, status_code, headers = api_instance.activity_list_received_public_events_for_user_with_http_info(username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Event>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_received_public_events_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Event&gt;**](Event.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_list_repo_events

> <Array<Event>> activity_list_repo_events(owner, repo, opts)

List repository events

**Note**: This API is not built to serve real-time use cases. Depending on the time of day, event latency can be anywhere from 30s to 6h. 

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repository events
  result = api_instance.activity_list_repo_events(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_repo_events: #{e}"
end
```

#### Using the activity_list_repo_events_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Event>>, Integer, Hash)> activity_list_repo_events_with_http_info(owner, repo, opts)

```ruby
begin
  # List repository events
  data, status_code, headers = api_instance.activity_list_repo_events_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Event>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_repo_events_with_http_info: #{e}"
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

[**Array&lt;Event&gt;**](Event.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_list_repo_notifications_for_authenticated_user

> <Array<Thread>> activity_list_repo_notifications_for_authenticated_user(owner, repo, opts)

List repository notifications for the authenticated user

Lists all notifications for the current user in the specified repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  all: true, # Boolean | If `true`, show notifications marked as read.
  participating: true, # Boolean | If `true`, only shows notifications in which the user is directly participating or mentioned.
  since: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
  before: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Only show notifications updated before the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repository notifications for the authenticated user
  result = api_instance.activity_list_repo_notifications_for_authenticated_user(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_repo_notifications_for_authenticated_user: #{e}"
end
```

#### Using the activity_list_repo_notifications_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Thread>>, Integer, Hash)> activity_list_repo_notifications_for_authenticated_user_with_http_info(owner, repo, opts)

```ruby
begin
  # List repository notifications for the authenticated user
  data, status_code, headers = api_instance.activity_list_repo_notifications_for_authenticated_user_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Thread>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_repo_notifications_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **all** | **Boolean** | If &#x60;true&#x60;, show notifications marked as read. | [optional][default to false] |
| **participating** | **Boolean** | If &#x60;true&#x60;, only shows notifications in which the user is directly participating or mentioned. | [optional][default to false] |
| **since** | **Time** | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **before** | **Time** | Only show notifications updated before the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Thread&gt;**](Thread.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_list_repos_starred_by_authenticated_user

> <Array<Repository>> activity_list_repos_starred_by_authenticated_user(opts)

List repositories starred by the authenticated user

Lists repositories the authenticated user has starred.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.star+json`**: Includes a timestamp of when the star was created.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
opts = {
  sort: 'created', # String | The property to sort the results by. `created` means when the repository was starred. `updated` means when the repository was last pushed to.
  direction: 'asc', # String | The direction to sort the results by.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repositories starred by the authenticated user
  result = api_instance.activity_list_repos_starred_by_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_repos_starred_by_authenticated_user: #{e}"
end
```

#### Using the activity_list_repos_starred_by_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Repository>>, Integer, Hash)> activity_list_repos_starred_by_authenticated_user_with_http_info(opts)

```ruby
begin
  # List repositories starred by the authenticated user
  data, status_code, headers = api_instance.activity_list_repos_starred_by_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Repository>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_repos_starred_by_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **sort** | **String** | The property to sort the results by. &#x60;created&#x60; means when the repository was starred. &#x60;updated&#x60; means when the repository was last pushed to. | [optional][default to &#39;created&#39;] |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Repository&gt;**](Repository.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, application/vnd.github.v3.star+json


## activity_list_repos_starred_by_user

> <ActivityListReposStarredByUser200Response> activity_list_repos_starred_by_user(username, opts)

List repositories starred by a user

Lists repositories a user has starred.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.star+json`**: Includes a timestamp of when the star was created.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  sort: 'created', # String | The property to sort the results by. `created` means when the repository was starred. `updated` means when the repository was last pushed to.
  direction: 'asc', # String | The direction to sort the results by.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repositories starred by a user
  result = api_instance.activity_list_repos_starred_by_user(username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_repos_starred_by_user: #{e}"
end
```

#### Using the activity_list_repos_starred_by_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActivityListReposStarredByUser200Response>, Integer, Hash)> activity_list_repos_starred_by_user_with_http_info(username, opts)

```ruby
begin
  # List repositories starred by a user
  data, status_code, headers = api_instance.activity_list_repos_starred_by_user_with_http_info(username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActivityListReposStarredByUser200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_repos_starred_by_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |
| **sort** | **String** | The property to sort the results by. &#x60;created&#x60; means when the repository was starred. &#x60;updated&#x60; means when the repository was last pushed to. | [optional][default to &#39;created&#39;] |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**ActivityListReposStarredByUser200Response**](ActivityListReposStarredByUser200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_list_repos_watched_by_user

> <Array<MinimalRepository>> activity_list_repos_watched_by_user(username, opts)

List repositories watched by a user

Lists repositories a user is watching.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repositories watched by a user
  result = api_instance.activity_list_repos_watched_by_user(username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_repos_watched_by_user: #{e}"
end
```

#### Using the activity_list_repos_watched_by_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<MinimalRepository>>, Integer, Hash)> activity_list_repos_watched_by_user_with_http_info(username, opts)

```ruby
begin
  # List repositories watched by a user
  data, status_code, headers = api_instance.activity_list_repos_watched_by_user_with_http_info(username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<MinimalRepository>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_repos_watched_by_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;MinimalRepository&gt;**](MinimalRepository.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_list_stargazers_for_repo

> <ActivityListStargazersForRepo200Response> activity_list_stargazers_for_repo(owner, repo, opts)

List stargazers

Lists the people that have starred the repository.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.star+json`**: Includes a timestamp of when the star was created.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List stargazers
  result = api_instance.activity_list_stargazers_for_repo(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_stargazers_for_repo: #{e}"
end
```

#### Using the activity_list_stargazers_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActivityListStargazersForRepo200Response>, Integer, Hash)> activity_list_stargazers_for_repo_with_http_info(owner, repo, opts)

```ruby
begin
  # List stargazers
  data, status_code, headers = api_instance.activity_list_stargazers_for_repo_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActivityListStargazersForRepo200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_stargazers_for_repo_with_http_info: #{e}"
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

[**ActivityListStargazersForRepo200Response**](ActivityListStargazersForRepo200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_list_watched_repos_for_authenticated_user

> <Array<MinimalRepository>> activity_list_watched_repos_for_authenticated_user(opts)

List repositories watched by the authenticated user

Lists repositories the authenticated user is watching.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repositories watched by the authenticated user
  result = api_instance.activity_list_watched_repos_for_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_watched_repos_for_authenticated_user: #{e}"
end
```

#### Using the activity_list_watched_repos_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<MinimalRepository>>, Integer, Hash)> activity_list_watched_repos_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # List repositories watched by the authenticated user
  data, status_code, headers = api_instance.activity_list_watched_repos_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<MinimalRepository>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_watched_repos_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;MinimalRepository&gt;**](MinimalRepository.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_list_watchers_for_repo

> <Array<SimpleUser>> activity_list_watchers_for_repo(owner, repo, opts)

List watchers

Lists the people watching the specified repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List watchers
  result = api_instance.activity_list_watchers_for_repo(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_watchers_for_repo: #{e}"
end
```

#### Using the activity_list_watchers_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SimpleUser>>, Integer, Hash)> activity_list_watchers_for_repo_with_http_info(owner, repo, opts)

```ruby
begin
  # List watchers
  data, status_code, headers = api_instance.activity_list_watchers_for_repo_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SimpleUser>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_list_watchers_for_repo_with_http_info: #{e}"
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


## activity_mark_notifications_as_read

> <ActivityMarkNotificationsAsRead202Response> activity_mark_notifications_as_read(opts)

Mark notifications as read

Marks all notifications as \"read\" for the current user. If the number of notifications is too large to complete in one request, you will receive a `202 Accepted` status and GitHub will run an asynchronous process to mark notifications as \"read.\" To check whether any \"unread\" notifications remain, you can use the [List notifications for the authenticated user](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user) endpoint and pass the query parameter `all=false`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
opts = {
  activity_mark_notifications_as_read_request: OpenapiClient::ActivityMarkNotificationsAsReadRequest.new # ActivityMarkNotificationsAsReadRequest | 
}

begin
  # Mark notifications as read
  result = api_instance.activity_mark_notifications_as_read(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_mark_notifications_as_read: #{e}"
end
```

#### Using the activity_mark_notifications_as_read_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActivityMarkNotificationsAsRead202Response>, Integer, Hash)> activity_mark_notifications_as_read_with_http_info(opts)

```ruby
begin
  # Mark notifications as read
  data, status_code, headers = api_instance.activity_mark_notifications_as_read_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActivityMarkNotificationsAsRead202Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_mark_notifications_as_read_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **activity_mark_notifications_as_read_request** | [**ActivityMarkNotificationsAsReadRequest**](ActivityMarkNotificationsAsReadRequest.md) |  | [optional] |

### Return type

[**ActivityMarkNotificationsAsRead202Response**](ActivityMarkNotificationsAsRead202Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## activity_mark_repo_notifications_as_read

> <ActivityMarkRepoNotificationsAsRead202Response> activity_mark_repo_notifications_as_read(owner, repo, opts)

Mark repository notifications as read

Marks all notifications in a repository as \"read\" for the current user. If the number of notifications is too large to complete in one request, you will receive a `202 Accepted` status and GitHub will run an asynchronous process to mark notifications as \"read.\" To check whether any \"unread\" notifications remain, you can use the [List repository notifications for the authenticated user](https://docs.github.com/rest/activity/notifications#list-repository-notifications-for-the-authenticated-user) endpoint and pass the query parameter `all=false`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  activity_mark_repo_notifications_as_read_request: OpenapiClient::ActivityMarkRepoNotificationsAsReadRequest.new # ActivityMarkRepoNotificationsAsReadRequest | 
}

begin
  # Mark repository notifications as read
  result = api_instance.activity_mark_repo_notifications_as_read(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_mark_repo_notifications_as_read: #{e}"
end
```

#### Using the activity_mark_repo_notifications_as_read_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActivityMarkRepoNotificationsAsRead202Response>, Integer, Hash)> activity_mark_repo_notifications_as_read_with_http_info(owner, repo, opts)

```ruby
begin
  # Mark repository notifications as read
  data, status_code, headers = api_instance.activity_mark_repo_notifications_as_read_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActivityMarkRepoNotificationsAsRead202Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_mark_repo_notifications_as_read_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **activity_mark_repo_notifications_as_read_request** | [**ActivityMarkRepoNotificationsAsReadRequest**](ActivityMarkRepoNotificationsAsReadRequest.md) |  | [optional] |

### Return type

[**ActivityMarkRepoNotificationsAsRead202Response**](ActivityMarkRepoNotificationsAsRead202Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## activity_mark_thread_as_done

> activity_mark_thread_as_done(thread_id)

Mark a thread as done

Marks a thread as \"done.\" Marking a thread as \"done\" is equivalent to marking a notification in your notification inbox on GitHub as done: https://github.com/notifications.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
thread_id = 56 # Integer | The unique identifier of the notification thread. This corresponds to the value returned in the `id` field when you retrieve notifications (for example with the [`GET /notifications` operation](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user)).

begin
  # Mark a thread as done
  api_instance.activity_mark_thread_as_done(thread_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_mark_thread_as_done: #{e}"
end
```

#### Using the activity_mark_thread_as_done_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> activity_mark_thread_as_done_with_http_info(thread_id)

```ruby
begin
  # Mark a thread as done
  data, status_code, headers = api_instance.activity_mark_thread_as_done_with_http_info(thread_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_mark_thread_as_done_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **thread_id** | **Integer** | The unique identifier of the notification thread. This corresponds to the value returned in the &#x60;id&#x60; field when you retrieve notifications (for example with the [&#x60;GET /notifications&#x60; operation](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user)). |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## activity_mark_thread_as_read

> activity_mark_thread_as_read(thread_id)

Mark a thread as read

Marks a thread as \"read.\" Marking a thread as \"read\" is equivalent to clicking a notification in your notification inbox on GitHub: https://github.com/notifications.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
thread_id = 56 # Integer | The unique identifier of the notification thread. This corresponds to the value returned in the `id` field when you retrieve notifications (for example with the [`GET /notifications` operation](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user)).

begin
  # Mark a thread as read
  api_instance.activity_mark_thread_as_read(thread_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_mark_thread_as_read: #{e}"
end
```

#### Using the activity_mark_thread_as_read_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> activity_mark_thread_as_read_with_http_info(thread_id)

```ruby
begin
  # Mark a thread as read
  data, status_code, headers = api_instance.activity_mark_thread_as_read_with_http_info(thread_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_mark_thread_as_read_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **thread_id** | **Integer** | The unique identifier of the notification thread. This corresponds to the value returned in the &#x60;id&#x60; field when you retrieve notifications (for example with the [&#x60;GET /notifications&#x60; operation](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user)). |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_set_repo_subscription

> <RepositorySubscription> activity_set_repo_subscription(owner, repo, opts)

Set a repository subscription

If you would like to watch a repository, set `subscribed` to `true`. If you would like to ignore notifications made within a repository, set `ignored` to `true`. If you would like to stop watching a repository, [delete the repository's subscription](https://docs.github.com/rest/activity/watching#delete-a-repository-subscription) completely.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  activity_set_repo_subscription_request: OpenapiClient::ActivitySetRepoSubscriptionRequest.new # ActivitySetRepoSubscriptionRequest | 
}

begin
  # Set a repository subscription
  result = api_instance.activity_set_repo_subscription(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_set_repo_subscription: #{e}"
end
```

#### Using the activity_set_repo_subscription_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<RepositorySubscription>, Integer, Hash)> activity_set_repo_subscription_with_http_info(owner, repo, opts)

```ruby
begin
  # Set a repository subscription
  data, status_code, headers = api_instance.activity_set_repo_subscription_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <RepositorySubscription>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_set_repo_subscription_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **activity_set_repo_subscription_request** | [**ActivitySetRepoSubscriptionRequest**](ActivitySetRepoSubscriptionRequest.md) |  | [optional] |

### Return type

[**RepositorySubscription**](RepositorySubscription.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## activity_set_thread_subscription

> <ThreadSubscription> activity_set_thread_subscription(thread_id, opts)

Set a thread subscription

If you are watching a repository, you receive notifications for all threads by default. Use this endpoint to ignore future notifications for threads until you comment on the thread or get an **@mention**.  You can also use this endpoint to subscribe to threads that you are currently not receiving notifications for or to subscribed to threads that you have previously ignored.  Unsubscribing from a conversation in a repository that you are not watching is functionally equivalent to the [Delete a thread subscription](https://docs.github.com/rest/activity/notifications#delete-a-thread-subscription) endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
thread_id = 56 # Integer | The unique identifier of the notification thread. This corresponds to the value returned in the `id` field when you retrieve notifications (for example with the [`GET /notifications` operation](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user)).
opts = {
  activity_set_thread_subscription_request: OpenapiClient::ActivitySetThreadSubscriptionRequest.new # ActivitySetThreadSubscriptionRequest | 
}

begin
  # Set a thread subscription
  result = api_instance.activity_set_thread_subscription(thread_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_set_thread_subscription: #{e}"
end
```

#### Using the activity_set_thread_subscription_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ThreadSubscription>, Integer, Hash)> activity_set_thread_subscription_with_http_info(thread_id, opts)

```ruby
begin
  # Set a thread subscription
  data, status_code, headers = api_instance.activity_set_thread_subscription_with_http_info(thread_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ThreadSubscription>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_set_thread_subscription_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **thread_id** | **Integer** | The unique identifier of the notification thread. This corresponds to the value returned in the &#x60;id&#x60; field when you retrieve notifications (for example with the [&#x60;GET /notifications&#x60; operation](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user)). |  |
| **activity_set_thread_subscription_request** | [**ActivitySetThreadSubscriptionRequest**](ActivitySetThreadSubscriptionRequest.md) |  | [optional] |

### Return type

[**ThreadSubscription**](ThreadSubscription.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## activity_star_repo_for_authenticated_user

> activity_star_repo_for_authenticated_user(owner, repo)

Star a repository for the authenticated user

Note that you'll need to set `Content-Length` to zero when calling out to this endpoint. For more information, see \"[HTTP method](https://docs.github.com/rest/guides/getting-started-with-the-rest-api#http-method).\"

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Star a repository for the authenticated user
  api_instance.activity_star_repo_for_authenticated_user(owner, repo)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_star_repo_for_authenticated_user: #{e}"
end
```

#### Using the activity_star_repo_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> activity_star_repo_for_authenticated_user_with_http_info(owner, repo)

```ruby
begin
  # Star a repository for the authenticated user
  data, status_code, headers = api_instance.activity_star_repo_for_authenticated_user_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_star_repo_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## activity_unstar_repo_for_authenticated_user

> activity_unstar_repo_for_authenticated_user(owner, repo)

Unstar a repository for the authenticated user

Unstar a repository that the authenticated user has previously starred.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActivityApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Unstar a repository for the authenticated user
  api_instance.activity_unstar_repo_for_authenticated_user(owner, repo)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_unstar_repo_for_authenticated_user: #{e}"
end
```

#### Using the activity_unstar_repo_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> activity_unstar_repo_for_authenticated_user_with_http_info(owner, repo)

```ruby
begin
  # Unstar a repository for the authenticated user
  data, status_code, headers = api_instance.activity_unstar_repo_for_authenticated_user_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActivityApi->activity_unstar_repo_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

