# OpenapiClient::SearchApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**search_code**](SearchApi.md#search_code) | **GET** /search/code | Search code |
| [**search_commits**](SearchApi.md#search_commits) | **GET** /search/commits | Search commits |
| [**search_issues_and_pull_requests**](SearchApi.md#search_issues_and_pull_requests) | **GET** /search/issues | Search issues and pull requests |
| [**search_labels**](SearchApi.md#search_labels) | **GET** /search/labels | Search labels |
| [**search_repos**](SearchApi.md#search_repos) | **GET** /search/repositories | Search repositories |
| [**search_topics**](SearchApi.md#search_topics) | **GET** /search/topics | Search topics |
| [**search_users**](SearchApi.md#search_users) | **GET** /search/users | Search users |


## search_code

> <SearchCode200Response> search_code(q, opts)

Search code

Searches for query terms inside of a file. This method returns up to 100 results [per page](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api).  When searching for code, you can get text match metadata for the file **content** and file **path** fields when you pass the `text-match` media type. For more details about how to receive highlighted search results, see [Text match metadata](https://docs.github.com/rest/search/search#text-match-metadata).  For example, if you want to find the definition of the `addClass` function inside [jQuery](https://github.com/jquery/jquery) repository, your query would look something like this:  `q=addClass+in:file+language:js+repo:jquery/jquery`  This query searches for the keyword `addClass` within a file's contents. The query limits the search to files where the language is JavaScript in the `jquery/jquery` repository.  Considerations for code search:  Due to the complexity of searching code, there are a few restrictions on how searches are performed:  *   Only the _default branch_ is considered. In most cases, this will be the `master` branch. *   Only files smaller than 384 KB are searchable. *   You must always include at least one search term when searching source code. For example, searching for [`language:go`](https://github.com/search?utf8=%E2%9C%93&q=language%3Ago&type=Code) is not valid, while [`amazing language:go`](https://github.com/search?utf8=%E2%9C%93&q=amazing+language%3Ago&type=Code) is.  This endpoint requires you to authenticate and limits you to 10 requests per minute.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SearchApi.new
q = 'q_example' # String | The query contains one or more search keywords and qualifiers. Qualifiers allow you to limit your search to specific areas of GitHub. The REST API supports the same qualifiers as the web interface for GitHub. To learn more about the format of the query, see [Constructing a search query](https://docs.github.com/rest/search/search#constructing-a-search-query). See \"[Searching code](https://docs.github.com/search-github/searching-on-github/searching-code)\" for a detailed list of qualifiers.
opts = {
  sort: 'indexed', # String | **This field is deprecated.** Sorts the results of your query. Can only be `indexed`, which indicates how recently a file has been indexed by the GitHub search infrastructure. Default: [best match](https://docs.github.com/rest/search/search#ranking-search-results)
  order: 'desc', # String | **This field is deprecated.** Determines whether the first search result returned is the highest number of matches (`desc`) or lowest number of matches (`asc`). This parameter is ignored unless you provide `sort`. 
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # Search code
  result = api_instance.search_code(q, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SearchApi->search_code: #{e}"
end
```

#### Using the search_code_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<SearchCode200Response>, Integer, Hash)> search_code_with_http_info(q, opts)

```ruby
begin
  # Search code
  data, status_code, headers = api_instance.search_code_with_http_info(q, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <SearchCode200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SearchApi->search_code_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **q** | **String** | The query contains one or more search keywords and qualifiers. Qualifiers allow you to limit your search to specific areas of GitHub. The REST API supports the same qualifiers as the web interface for GitHub. To learn more about the format of the query, see [Constructing a search query](https://docs.github.com/rest/search/search#constructing-a-search-query). See \&quot;[Searching code](https://docs.github.com/search-github/searching-on-github/searching-code)\&quot; for a detailed list of qualifiers. |  |
| **sort** | **String** | **This field is deprecated.** Sorts the results of your query. Can only be &#x60;indexed&#x60;, which indicates how recently a file has been indexed by the GitHub search infrastructure. Default: [best match](https://docs.github.com/rest/search/search#ranking-search-results) | [optional] |
| **order** | **String** | **This field is deprecated.** Determines whether the first search result returned is the highest number of matches (&#x60;desc&#x60;) or lowest number of matches (&#x60;asc&#x60;). This parameter is ignored unless you provide &#x60;sort&#x60;.  | [optional][default to &#39;desc&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**SearchCode200Response**](SearchCode200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## search_commits

> <SearchCommits200Response> search_commits(q, opts)

Search commits

Find commits via various criteria on the default branch (usually `main`). This method returns up to 100 results [per page](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api).  When searching for commits, you can get text match metadata for the **message** field when you provide the `text-match` media type. For more details about how to receive highlighted search results, see [Text match metadata](https://docs.github.com/rest/search/search#text-match-metadata).  For example, if you want to find commits related to CSS in the [octocat/Spoon-Knife](https://github.com/octocat/Spoon-Knife) repository. Your query would look something like this:  `q=repo:octocat/Spoon-Knife+css`

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SearchApi.new
q = 'q_example' # String | The query contains one or more search keywords and qualifiers. Qualifiers allow you to limit your search to specific areas of GitHub. The REST API supports the same qualifiers as the web interface for GitHub. To learn more about the format of the query, see [Constructing a search query](https://docs.github.com/rest/search/search#constructing-a-search-query). See \"[Searching commits](https://docs.github.com/search-github/searching-on-github/searching-commits)\" for a detailed list of qualifiers.
opts = {
  sort: 'author-date', # String | Sorts the results of your query by `author-date` or `committer-date`. Default: [best match](https://docs.github.com/rest/search/search#ranking-search-results)
  order: 'desc', # String | Determines whether the first search result returned is the highest number of matches (`desc`) or lowest number of matches (`asc`). This parameter is ignored unless you provide `sort`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # Search commits
  result = api_instance.search_commits(q, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SearchApi->search_commits: #{e}"
end
```

#### Using the search_commits_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<SearchCommits200Response>, Integer, Hash)> search_commits_with_http_info(q, opts)

```ruby
begin
  # Search commits
  data, status_code, headers = api_instance.search_commits_with_http_info(q, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <SearchCommits200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SearchApi->search_commits_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **q** | **String** | The query contains one or more search keywords and qualifiers. Qualifiers allow you to limit your search to specific areas of GitHub. The REST API supports the same qualifiers as the web interface for GitHub. To learn more about the format of the query, see [Constructing a search query](https://docs.github.com/rest/search/search#constructing-a-search-query). See \&quot;[Searching commits](https://docs.github.com/search-github/searching-on-github/searching-commits)\&quot; for a detailed list of qualifiers. |  |
| **sort** | **String** | Sorts the results of your query by &#x60;author-date&#x60; or &#x60;committer-date&#x60;. Default: [best match](https://docs.github.com/rest/search/search#ranking-search-results) | [optional] |
| **order** | **String** | Determines whether the first search result returned is the highest number of matches (&#x60;desc&#x60;) or lowest number of matches (&#x60;asc&#x60;). This parameter is ignored unless you provide &#x60;sort&#x60;. | [optional][default to &#39;desc&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**SearchCommits200Response**](SearchCommits200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## search_issues_and_pull_requests

> <SearchIssuesAndPullRequests200Response> search_issues_and_pull_requests(q, opts)

Search issues and pull requests

Find issues by state and keyword. This method returns up to 100 results [per page](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api).  When searching for issues, you can get text match metadata for the issue **title**, issue **body**, and issue **comment body** fields when you pass the `text-match` media type. For more details about how to receive highlighted search results, see [Text match metadata](https://docs.github.com/rest/search/search#text-match-metadata).  For example, if you want to find the oldest unresolved Python bugs on Windows. Your query might look something like this.  `q=windows+label:bug+language:python+state:open&sort=created&order=asc`  This query searches for the keyword `windows`, within any open issue that is labeled as `bug`. The search runs across repositories whose primary language is Python. The results are sorted by creation date in ascending order, which means the oldest issues appear first in the search results.  **Note:** For requests made by GitHub Apps with a user access token, you can't retrieve a combination of issues and pull requests in a single query. Requests that don't include the `is:issue` or `is:pull-request` qualifier will receive an HTTP `422 Unprocessable Entity` response. To get results for both issues and pull requests, you must send separate queries for issues and pull requests. For more information about the `is` qualifier, see \"[Searching only issues or pull requests](https://docs.github.com/github/searching-for-information-on-github/searching-issues-and-pull-requests#search-only-issues-or-pull-requests).\"

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SearchApi.new
q = 'q_example' # String | The query contains one or more search keywords and qualifiers. Qualifiers allow you to limit your search to specific areas of GitHub. The REST API supports the same qualifiers as the web interface for GitHub. To learn more about the format of the query, see [Constructing a search query](https://docs.github.com/rest/search/search#constructing-a-search-query). See \"[Searching issues and pull requests](https://docs.github.com/search-github/searching-on-github/searching-issues-and-pull-requests)\" for a detailed list of qualifiers.
opts = {
  sort: 'comments', # String | Sorts the results of your query by the number of `comments`, `reactions`, `reactions-+1`, `reactions--1`, `reactions-smile`, `reactions-thinking_face`, `reactions-heart`, `reactions-tada`, or `interactions`. You can also sort results by how recently the items were `created` or `updated`, Default: [best match](https://docs.github.com/rest/search/search#ranking-search-results)
  order: 'desc', # String | Determines whether the first search result returned is the highest number of matches (`desc`) or lowest number of matches (`asc`). This parameter is ignored unless you provide `sort`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # Search issues and pull requests
  result = api_instance.search_issues_and_pull_requests(q, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SearchApi->search_issues_and_pull_requests: #{e}"
end
```

#### Using the search_issues_and_pull_requests_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<SearchIssuesAndPullRequests200Response>, Integer, Hash)> search_issues_and_pull_requests_with_http_info(q, opts)

```ruby
begin
  # Search issues and pull requests
  data, status_code, headers = api_instance.search_issues_and_pull_requests_with_http_info(q, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <SearchIssuesAndPullRequests200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SearchApi->search_issues_and_pull_requests_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **q** | **String** | The query contains one or more search keywords and qualifiers. Qualifiers allow you to limit your search to specific areas of GitHub. The REST API supports the same qualifiers as the web interface for GitHub. To learn more about the format of the query, see [Constructing a search query](https://docs.github.com/rest/search/search#constructing-a-search-query). See \&quot;[Searching issues and pull requests](https://docs.github.com/search-github/searching-on-github/searching-issues-and-pull-requests)\&quot; for a detailed list of qualifiers. |  |
| **sort** | **String** | Sorts the results of your query by the number of &#x60;comments&#x60;, &#x60;reactions&#x60;, &#x60;reactions-+1&#x60;, &#x60;reactions--1&#x60;, &#x60;reactions-smile&#x60;, &#x60;reactions-thinking_face&#x60;, &#x60;reactions-heart&#x60;, &#x60;reactions-tada&#x60;, or &#x60;interactions&#x60;. You can also sort results by how recently the items were &#x60;created&#x60; or &#x60;updated&#x60;, Default: [best match](https://docs.github.com/rest/search/search#ranking-search-results) | [optional] |
| **order** | **String** | Determines whether the first search result returned is the highest number of matches (&#x60;desc&#x60;) or lowest number of matches (&#x60;asc&#x60;). This parameter is ignored unless you provide &#x60;sort&#x60;. | [optional][default to &#39;desc&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**SearchIssuesAndPullRequests200Response**](SearchIssuesAndPullRequests200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## search_labels

> <SearchLabels200Response> search_labels(repository_id, q, opts)

Search labels

Find labels in a repository with names or descriptions that match search keywords. Returns up to 100 results [per page](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api).  When searching for labels, you can get text match metadata for the label **name** and **description** fields when you pass the `text-match` media type. For more details about how to receive highlighted search results, see [Text match metadata](https://docs.github.com/rest/search/search#text-match-metadata).  For example, if you want to find labels in the `linguist` repository that match `bug`, `defect`, or `enhancement`. Your query might look like this:  `q=bug+defect+enhancement&repository_id=64778136`  The labels that best match the query appear first in the search results.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SearchApi.new
repository_id = 56 # Integer | The id of the repository.
q = 'q_example' # String | The search keywords. This endpoint does not accept qualifiers in the query. To learn more about the format of the query, see [Constructing a search query](https://docs.github.com/rest/search/search#constructing-a-search-query).
opts = {
  sort: 'created', # String | Sorts the results of your query by when the label was `created` or `updated`. Default: [best match](https://docs.github.com/rest/search/search#ranking-search-results)
  order: 'desc', # String | Determines whether the first search result returned is the highest number of matches (`desc`) or lowest number of matches (`asc`). This parameter is ignored unless you provide `sort`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # Search labels
  result = api_instance.search_labels(repository_id, q, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SearchApi->search_labels: #{e}"
end
```

#### Using the search_labels_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<SearchLabels200Response>, Integer, Hash)> search_labels_with_http_info(repository_id, q, opts)

```ruby
begin
  # Search labels
  data, status_code, headers = api_instance.search_labels_with_http_info(repository_id, q, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <SearchLabels200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SearchApi->search_labels_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **repository_id** | **Integer** | The id of the repository. |  |
| **q** | **String** | The search keywords. This endpoint does not accept qualifiers in the query. To learn more about the format of the query, see [Constructing a search query](https://docs.github.com/rest/search/search#constructing-a-search-query). |  |
| **sort** | **String** | Sorts the results of your query by when the label was &#x60;created&#x60; or &#x60;updated&#x60;. Default: [best match](https://docs.github.com/rest/search/search#ranking-search-results) | [optional] |
| **order** | **String** | Determines whether the first search result returned is the highest number of matches (&#x60;desc&#x60;) or lowest number of matches (&#x60;asc&#x60;). This parameter is ignored unless you provide &#x60;sort&#x60;. | [optional][default to &#39;desc&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**SearchLabels200Response**](SearchLabels200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## search_repos

> <SearchRepos200Response> search_repos(q, opts)

Search repositories

Find repositories via various criteria. This method returns up to 100 results [per page](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api).  When searching for repositories, you can get text match metadata for the **name** and **description** fields when you pass the `text-match` media type. For more details about how to receive highlighted search results, see [Text match metadata](https://docs.github.com/rest/search/search#text-match-metadata).  For example, if you want to search for popular Tetris repositories written in assembly code, your query might look like this:  `q=tetris+language:assembly&sort=stars&order=desc`  This query searches for repositories with the word `tetris` in the name, the description, or the README. The results are limited to repositories where the primary language is assembly. The results are sorted by stars in descending order, so that the most popular repositories appear first in the search results.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SearchApi.new
q = 'q_example' # String | The query contains one or more search keywords and qualifiers. Qualifiers allow you to limit your search to specific areas of GitHub. The REST API supports the same qualifiers as the web interface for GitHub. To learn more about the format of the query, see [Constructing a search query](https://docs.github.com/rest/search/search#constructing-a-search-query). See \"[Searching for repositories](https://docs.github.com/articles/searching-for-repositories/)\" for a detailed list of qualifiers.
opts = {
  sort: 'stars', # String | Sorts the results of your query by number of `stars`, `forks`, or `help-wanted-issues` or how recently the items were `updated`. Default: [best match](https://docs.github.com/rest/search/search#ranking-search-results)
  order: 'desc', # String | Determines whether the first search result returned is the highest number of matches (`desc`) or lowest number of matches (`asc`). This parameter is ignored unless you provide `sort`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # Search repositories
  result = api_instance.search_repos(q, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SearchApi->search_repos: #{e}"
end
```

#### Using the search_repos_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<SearchRepos200Response>, Integer, Hash)> search_repos_with_http_info(q, opts)

```ruby
begin
  # Search repositories
  data, status_code, headers = api_instance.search_repos_with_http_info(q, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <SearchRepos200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SearchApi->search_repos_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **q** | **String** | The query contains one or more search keywords and qualifiers. Qualifiers allow you to limit your search to specific areas of GitHub. The REST API supports the same qualifiers as the web interface for GitHub. To learn more about the format of the query, see [Constructing a search query](https://docs.github.com/rest/search/search#constructing-a-search-query). See \&quot;[Searching for repositories](https://docs.github.com/articles/searching-for-repositories/)\&quot; for a detailed list of qualifiers. |  |
| **sort** | **String** | Sorts the results of your query by number of &#x60;stars&#x60;, &#x60;forks&#x60;, or &#x60;help-wanted-issues&#x60; or how recently the items were &#x60;updated&#x60;. Default: [best match](https://docs.github.com/rest/search/search#ranking-search-results) | [optional] |
| **order** | **String** | Determines whether the first search result returned is the highest number of matches (&#x60;desc&#x60;) or lowest number of matches (&#x60;asc&#x60;). This parameter is ignored unless you provide &#x60;sort&#x60;. | [optional][default to &#39;desc&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**SearchRepos200Response**](SearchRepos200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## search_topics

> <SearchTopics200Response> search_topics(q, opts)

Search topics

Find topics via various criteria. Results are sorted by best match. This method returns up to 100 results [per page](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api). See \"[Searching topics](https://docs.github.com/articles/searching-topics/)\" for a detailed list of qualifiers.  When searching for topics, you can get text match metadata for the topic's **short\\_description**, **description**, **name**, or **display\\_name** field when you pass the `text-match` media type. For more details about how to receive highlighted search results, see [Text match metadata](https://docs.github.com/rest/search/search#text-match-metadata).  For example, if you want to search for topics related to Ruby that are featured on https://github.com/topics. Your query might look like this:  `q=ruby+is:featured`  This query searches for topics with the keyword `ruby` and limits the results to find only topics that are featured. The topics that are the best match for the query appear first in the search results.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SearchApi.new
q = 'q_example' # String | The query contains one or more search keywords and qualifiers. Qualifiers allow you to limit your search to specific areas of GitHub. The REST API supports the same qualifiers as the web interface for GitHub. To learn more about the format of the query, see [Constructing a search query](https://docs.github.com/rest/search/search#constructing-a-search-query).
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # Search topics
  result = api_instance.search_topics(q, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SearchApi->search_topics: #{e}"
end
```

#### Using the search_topics_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<SearchTopics200Response>, Integer, Hash)> search_topics_with_http_info(q, opts)

```ruby
begin
  # Search topics
  data, status_code, headers = api_instance.search_topics_with_http_info(q, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <SearchTopics200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SearchApi->search_topics_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **q** | **String** | The query contains one or more search keywords and qualifiers. Qualifiers allow you to limit your search to specific areas of GitHub. The REST API supports the same qualifiers as the web interface for GitHub. To learn more about the format of the query, see [Constructing a search query](https://docs.github.com/rest/search/search#constructing-a-search-query). |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**SearchTopics200Response**](SearchTopics200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## search_users

> <SearchUsers200Response> search_users(q, opts)

Search users

Find users via various criteria. This method returns up to 100 results [per page](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api).  When searching for users, you can get text match metadata for the issue **login**, public **email**, and **name** fields when you pass the `text-match` media type. For more details about highlighting search results, see [Text match metadata](https://docs.github.com/rest/search/search#text-match-metadata). For more details about how to receive highlighted search results, see [Text match metadata](https://docs.github.com/rest/search/search#text-match-metadata).  For example, if you're looking for a list of popular users, you might try this query:  `q=tom+repos:%3E42+followers:%3E1000`  This query searches for users with the name `tom`. The results are restricted to users with more than 42 repositories and over 1,000 followers.  This endpoint does not accept authentication and will only include publicly visible users. As an alternative, you can use the GraphQL API. The GraphQL API requires authentication and will return private users, including Enterprise Managed Users (EMUs), that you are authorized to view. For more information, see \"[GraphQL Queries](https://docs.github.com/graphql/reference/queries#search).\"

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SearchApi.new
q = 'q_example' # String | The query contains one or more search keywords and qualifiers. Qualifiers allow you to limit your search to specific areas of GitHub. The REST API supports the same qualifiers as the web interface for GitHub. To learn more about the format of the query, see [Constructing a search query](https://docs.github.com/rest/search/search#constructing-a-search-query). See \"[Searching users](https://docs.github.com/search-github/searching-on-github/searching-users)\" for a detailed list of qualifiers.
opts = {
  sort: 'followers', # String | Sorts the results of your query by number of `followers` or `repositories`, or when the person `joined` GitHub. Default: [best match](https://docs.github.com/rest/search/search#ranking-search-results)
  order: 'desc', # String | Determines whether the first search result returned is the highest number of matches (`desc`) or lowest number of matches (`asc`). This parameter is ignored unless you provide `sort`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # Search users
  result = api_instance.search_users(q, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SearchApi->search_users: #{e}"
end
```

#### Using the search_users_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<SearchUsers200Response>, Integer, Hash)> search_users_with_http_info(q, opts)

```ruby
begin
  # Search users
  data, status_code, headers = api_instance.search_users_with_http_info(q, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <SearchUsers200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SearchApi->search_users_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **q** | **String** | The query contains one or more search keywords and qualifiers. Qualifiers allow you to limit your search to specific areas of GitHub. The REST API supports the same qualifiers as the web interface for GitHub. To learn more about the format of the query, see [Constructing a search query](https://docs.github.com/rest/search/search#constructing-a-search-query). See \&quot;[Searching users](https://docs.github.com/search-github/searching-on-github/searching-users)\&quot; for a detailed list of qualifiers. |  |
| **sort** | **String** | Sorts the results of your query by number of &#x60;followers&#x60; or &#x60;repositories&#x60;, or when the person &#x60;joined&#x60; GitHub. Default: [best match](https://docs.github.com/rest/search/search#ranking-search-results) | [optional] |
| **order** | **String** | Determines whether the first search result returned is the highest number of matches (&#x60;desc&#x60;) or lowest number of matches (&#x60;asc&#x60;). This parameter is ignored unless you provide &#x60;sort&#x60;. | [optional][default to &#39;desc&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**SearchUsers200Response**](SearchUsers200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

