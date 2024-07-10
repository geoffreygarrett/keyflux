# OpenapiClient::ProjectsApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**projects_add_collaborator**](ProjectsApi.md#projects_add_collaborator) | **PUT** /projects/{project_id}/collaborators/{username} | Add project collaborator |
| [**projects_create_card**](ProjectsApi.md#projects_create_card) | **POST** /projects/columns/{column_id}/cards | Create a project card |
| [**projects_create_column**](ProjectsApi.md#projects_create_column) | **POST** /projects/{project_id}/columns | Create a project column |
| [**projects_create_for_authenticated_user**](ProjectsApi.md#projects_create_for_authenticated_user) | **POST** /user/projects | Create a user project |
| [**projects_create_for_org**](ProjectsApi.md#projects_create_for_org) | **POST** /orgs/{org}/projects | Create an organization project |
| [**projects_create_for_repo**](ProjectsApi.md#projects_create_for_repo) | **POST** /repos/{owner}/{repo}/projects | Create a repository project |
| [**projects_delete**](ProjectsApi.md#projects_delete) | **DELETE** /projects/{project_id} | Delete a project |
| [**projects_delete_card**](ProjectsApi.md#projects_delete_card) | **DELETE** /projects/columns/cards/{card_id} | Delete a project card |
| [**projects_delete_column**](ProjectsApi.md#projects_delete_column) | **DELETE** /projects/columns/{column_id} | Delete a project column |
| [**projects_get**](ProjectsApi.md#projects_get) | **GET** /projects/{project_id} | Get a project |
| [**projects_get_card**](ProjectsApi.md#projects_get_card) | **GET** /projects/columns/cards/{card_id} | Get a project card |
| [**projects_get_column**](ProjectsApi.md#projects_get_column) | **GET** /projects/columns/{column_id} | Get a project column |
| [**projects_get_permission_for_user**](ProjectsApi.md#projects_get_permission_for_user) | **GET** /projects/{project_id}/collaborators/{username}/permission | Get project permission for a user |
| [**projects_list_cards**](ProjectsApi.md#projects_list_cards) | **GET** /projects/columns/{column_id}/cards | List project cards |
| [**projects_list_collaborators**](ProjectsApi.md#projects_list_collaborators) | **GET** /projects/{project_id}/collaborators | List project collaborators |
| [**projects_list_columns**](ProjectsApi.md#projects_list_columns) | **GET** /projects/{project_id}/columns | List project columns |
| [**projects_list_for_org**](ProjectsApi.md#projects_list_for_org) | **GET** /orgs/{org}/projects | List organization projects |
| [**projects_list_for_repo**](ProjectsApi.md#projects_list_for_repo) | **GET** /repos/{owner}/{repo}/projects | List repository projects |
| [**projects_list_for_user**](ProjectsApi.md#projects_list_for_user) | **GET** /users/{username}/projects | List user projects |
| [**projects_move_card**](ProjectsApi.md#projects_move_card) | **POST** /projects/columns/cards/{card_id}/moves | Move a project card |
| [**projects_move_column**](ProjectsApi.md#projects_move_column) | **POST** /projects/columns/{column_id}/moves | Move a project column |
| [**projects_remove_collaborator**](ProjectsApi.md#projects_remove_collaborator) | **DELETE** /projects/{project_id}/collaborators/{username} | Remove user as a collaborator |
| [**projects_update**](ProjectsApi.md#projects_update) | **PATCH** /projects/{project_id} | Update a project |
| [**projects_update_card**](ProjectsApi.md#projects_update_card) | **PATCH** /projects/columns/cards/{card_id} | Update an existing project card |
| [**projects_update_column**](ProjectsApi.md#projects_update_column) | **PATCH** /projects/columns/{column_id} | Update an existing project column |


## projects_add_collaborator

> projects_add_collaborator(project_id, username, opts)

Add project collaborator

Adds a collaborator to an organization project and sets their permission level. You must be an organization owner or a project `admin` to add a collaborator.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
project_id = 56 # Integer | The unique identifier of the project.
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  projects_add_collaborator_request: OpenapiClient::ProjectsAddCollaboratorRequest.new # ProjectsAddCollaboratorRequest | 
}

begin
  # Add project collaborator
  api_instance.projects_add_collaborator(project_id, username, opts)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_add_collaborator: #{e}"
end
```

#### Using the projects_add_collaborator_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> projects_add_collaborator_with_http_info(project_id, username, opts)

```ruby
begin
  # Add project collaborator
  data, status_code, headers = api_instance.projects_add_collaborator_with_http_info(project_id, username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_add_collaborator_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **project_id** | **Integer** | The unique identifier of the project. |  |
| **username** | **String** | The handle for the GitHub user account. |  |
| **projects_add_collaborator_request** | [**ProjectsAddCollaboratorRequest**](ProjectsAddCollaboratorRequest.md) |  | [optional] |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projects_create_card

> <ProjectCard> projects_create_card(column_id, projects_create_card_request)

Create a project card



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
column_id = 56 # Integer | The unique identifier of the column.
projects_create_card_request = OpenapiClient::ProjectsCreateCardRequestOneOf.new({note: 'Update all gems'}) # ProjectsCreateCardRequest | 

begin
  # Create a project card
  result = api_instance.projects_create_card(column_id, projects_create_card_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_create_card: #{e}"
end
```

#### Using the projects_create_card_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ProjectCard>, Integer, Hash)> projects_create_card_with_http_info(column_id, projects_create_card_request)

```ruby
begin
  # Create a project card
  data, status_code, headers = api_instance.projects_create_card_with_http_info(column_id, projects_create_card_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ProjectCard>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_create_card_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **column_id** | **Integer** | The unique identifier of the column. |  |
| **projects_create_card_request** | [**ProjectsCreateCardRequest**](ProjectsCreateCardRequest.md) |  |  |

### Return type

[**ProjectCard**](ProjectCard.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projects_create_column

> <ProjectColumn> projects_create_column(project_id, projects_update_column_request)

Create a project column

Creates a new project column.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
project_id = 56 # Integer | The unique identifier of the project.
projects_update_column_request = OpenapiClient::ProjectsUpdateColumnRequest.new({name: 'Remaining tasks'}) # ProjectsUpdateColumnRequest | 

begin
  # Create a project column
  result = api_instance.projects_create_column(project_id, projects_update_column_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_create_column: #{e}"
end
```

#### Using the projects_create_column_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ProjectColumn>, Integer, Hash)> projects_create_column_with_http_info(project_id, projects_update_column_request)

```ruby
begin
  # Create a project column
  data, status_code, headers = api_instance.projects_create_column_with_http_info(project_id, projects_update_column_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ProjectColumn>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_create_column_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **project_id** | **Integer** | The unique identifier of the project. |  |
| **projects_update_column_request** | [**ProjectsUpdateColumnRequest**](ProjectsUpdateColumnRequest.md) |  |  |

### Return type

[**ProjectColumn**](ProjectColumn.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projects_create_for_authenticated_user

> <Project> projects_create_for_authenticated_user(projects_create_for_authenticated_user_request)

Create a user project

Creates a user project board. Returns a `410 Gone` status if the user does not have existing classic projects. If you do not have sufficient privileges to perform this action, a `401 Unauthorized` or `410 Gone` status is returned.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
projects_create_for_authenticated_user_request = OpenapiClient::ProjectsCreateForAuthenticatedUserRequest.new({name: 'Week One Sprint'}) # ProjectsCreateForAuthenticatedUserRequest | 

begin
  # Create a user project
  result = api_instance.projects_create_for_authenticated_user(projects_create_for_authenticated_user_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_create_for_authenticated_user: #{e}"
end
```

#### Using the projects_create_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Project>, Integer, Hash)> projects_create_for_authenticated_user_with_http_info(projects_create_for_authenticated_user_request)

```ruby
begin
  # Create a user project
  data, status_code, headers = api_instance.projects_create_for_authenticated_user_with_http_info(projects_create_for_authenticated_user_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Project>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_create_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **projects_create_for_authenticated_user_request** | [**ProjectsCreateForAuthenticatedUserRequest**](ProjectsCreateForAuthenticatedUserRequest.md) |  |  |

### Return type

[**Project**](Project.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projects_create_for_org

> <Project> projects_create_for_org(org, projects_create_for_org_request)

Create an organization project

Creates an organization project board. Returns a `410 Gone` status if projects are disabled in the organization or if the organization does not have existing classic projects. If you do not have sufficient privileges to perform this action, a `401 Unauthorized` or `410 Gone` status is returned.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
projects_create_for_org_request = OpenapiClient::ProjectsCreateForOrgRequest.new({name: 'name_example'}) # ProjectsCreateForOrgRequest | 

begin
  # Create an organization project
  result = api_instance.projects_create_for_org(org, projects_create_for_org_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_create_for_org: #{e}"
end
```

#### Using the projects_create_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Project>, Integer, Hash)> projects_create_for_org_with_http_info(org, projects_create_for_org_request)

```ruby
begin
  # Create an organization project
  data, status_code, headers = api_instance.projects_create_for_org_with_http_info(org, projects_create_for_org_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Project>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_create_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **projects_create_for_org_request** | [**ProjectsCreateForOrgRequest**](ProjectsCreateForOrgRequest.md) |  |  |

### Return type

[**Project**](Project.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projects_create_for_repo

> <Project> projects_create_for_repo(owner, repo, projects_create_for_org_request)

Create a repository project

Creates a repository project board. Returns a `410 Gone` status if projects are disabled in the repository or if the repository does not have existing classic projects. If you do not have sufficient privileges to perform this action, a `401 Unauthorized` or `410 Gone` status is returned.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
projects_create_for_org_request = OpenapiClient::ProjectsCreateForOrgRequest.new({name: 'name_example'}) # ProjectsCreateForOrgRequest | 

begin
  # Create a repository project
  result = api_instance.projects_create_for_repo(owner, repo, projects_create_for_org_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_create_for_repo: #{e}"
end
```

#### Using the projects_create_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Project>, Integer, Hash)> projects_create_for_repo_with_http_info(owner, repo, projects_create_for_org_request)

```ruby
begin
  # Create a repository project
  data, status_code, headers = api_instance.projects_create_for_repo_with_http_info(owner, repo, projects_create_for_org_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Project>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_create_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **projects_create_for_org_request** | [**ProjectsCreateForOrgRequest**](ProjectsCreateForOrgRequest.md) |  |  |

### Return type

[**Project**](Project.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projects_delete

> projects_delete(project_id)

Delete a project

Deletes a project board. Returns a `404 Not Found` status if projects are disabled.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
project_id = 56 # Integer | The unique identifier of the project.

begin
  # Delete a project
  api_instance.projects_delete(project_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_delete: #{e}"
end
```

#### Using the projects_delete_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> projects_delete_with_http_info(project_id)

```ruby
begin
  # Delete a project
  data, status_code, headers = api_instance.projects_delete_with_http_info(project_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_delete_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **project_id** | **Integer** | The unique identifier of the project. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projects_delete_card

> projects_delete_card(card_id)

Delete a project card

Deletes a project card

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
card_id = 56 # Integer | The unique identifier of the card.

begin
  # Delete a project card
  api_instance.projects_delete_card(card_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_delete_card: #{e}"
end
```

#### Using the projects_delete_card_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> projects_delete_card_with_http_info(card_id)

```ruby
begin
  # Delete a project card
  data, status_code, headers = api_instance.projects_delete_card_with_http_info(card_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_delete_card_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **card_id** | **Integer** | The unique identifier of the card. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projects_delete_column

> projects_delete_column(column_id)

Delete a project column

Deletes a project column.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
column_id = 56 # Integer | The unique identifier of the column.

begin
  # Delete a project column
  api_instance.projects_delete_column(column_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_delete_column: #{e}"
end
```

#### Using the projects_delete_column_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> projects_delete_column_with_http_info(column_id)

```ruby
begin
  # Delete a project column
  data, status_code, headers = api_instance.projects_delete_column_with_http_info(column_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_delete_column_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **column_id** | **Integer** | The unique identifier of the column. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projects_get

> <Project> projects_get(project_id)

Get a project

Gets a project by its `id`. Returns a `404 Not Found` status if projects are disabled. If you do not have sufficient privileges to perform this action, a `401 Unauthorized` or `410 Gone` status is returned.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
project_id = 56 # Integer | The unique identifier of the project.

begin
  # Get a project
  result = api_instance.projects_get(project_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_get: #{e}"
end
```

#### Using the projects_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Project>, Integer, Hash)> projects_get_with_http_info(project_id)

```ruby
begin
  # Get a project
  data, status_code, headers = api_instance.projects_get_with_http_info(project_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Project>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **project_id** | **Integer** | The unique identifier of the project. |  |

### Return type

[**Project**](Project.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projects_get_card

> <ProjectCard> projects_get_card(card_id)

Get a project card

Gets information about a project card.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
card_id = 56 # Integer | The unique identifier of the card.

begin
  # Get a project card
  result = api_instance.projects_get_card(card_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_get_card: #{e}"
end
```

#### Using the projects_get_card_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ProjectCard>, Integer, Hash)> projects_get_card_with_http_info(card_id)

```ruby
begin
  # Get a project card
  data, status_code, headers = api_instance.projects_get_card_with_http_info(card_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ProjectCard>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_get_card_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **card_id** | **Integer** | The unique identifier of the card. |  |

### Return type

[**ProjectCard**](ProjectCard.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projects_get_column

> <ProjectColumn> projects_get_column(column_id)

Get a project column

Gets information about a project column.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
column_id = 56 # Integer | The unique identifier of the column.

begin
  # Get a project column
  result = api_instance.projects_get_column(column_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_get_column: #{e}"
end
```

#### Using the projects_get_column_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ProjectColumn>, Integer, Hash)> projects_get_column_with_http_info(column_id)

```ruby
begin
  # Get a project column
  data, status_code, headers = api_instance.projects_get_column_with_http_info(column_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ProjectColumn>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_get_column_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **column_id** | **Integer** | The unique identifier of the column. |  |

### Return type

[**ProjectColumn**](ProjectColumn.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projects_get_permission_for_user

> <ProjectCollaboratorPermission> projects_get_permission_for_user(project_id, username)

Get project permission for a user

Returns the collaborator's permission level for an organization project. Possible values for the `permission` key: `admin`, `write`, `read`, `none`. You must be an organization owner or a project `admin` to review a user's permission level.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
project_id = 56 # Integer | The unique identifier of the project.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Get project permission for a user
  result = api_instance.projects_get_permission_for_user(project_id, username)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_get_permission_for_user: #{e}"
end
```

#### Using the projects_get_permission_for_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ProjectCollaboratorPermission>, Integer, Hash)> projects_get_permission_for_user_with_http_info(project_id, username)

```ruby
begin
  # Get project permission for a user
  data, status_code, headers = api_instance.projects_get_permission_for_user_with_http_info(project_id, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ProjectCollaboratorPermission>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_get_permission_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **project_id** | **Integer** | The unique identifier of the project. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

[**ProjectCollaboratorPermission**](ProjectCollaboratorPermission.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projects_list_cards

> <Array<ProjectCard>> projects_list_cards(column_id, opts)

List project cards

Lists the project cards in a project.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
column_id = 56 # Integer | The unique identifier of the column.
opts = {
  archived_state: 'all', # String | Filters the project cards that are returned by the card's state.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List project cards
  result = api_instance.projects_list_cards(column_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_list_cards: #{e}"
end
```

#### Using the projects_list_cards_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<ProjectCard>>, Integer, Hash)> projects_list_cards_with_http_info(column_id, opts)

```ruby
begin
  # List project cards
  data, status_code, headers = api_instance.projects_list_cards_with_http_info(column_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<ProjectCard>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_list_cards_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **column_id** | **Integer** | The unique identifier of the column. |  |
| **archived_state** | **String** | Filters the project cards that are returned by the card&#39;s state. | [optional][default to &#39;not_archived&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;ProjectCard&gt;**](ProjectCard.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projects_list_collaborators

> <Array<SimpleUser>> projects_list_collaborators(project_id, opts)

List project collaborators

Lists the collaborators for an organization project. For a project, the list of collaborators includes outside collaborators, organization members that are direct collaborators, organization members with access through team memberships, organization members with access through default organization permissions, and organization owners. You must be an organization owner or a project `admin` to list collaborators.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
project_id = 56 # Integer | The unique identifier of the project.
opts = {
  affiliation: 'outside', # String | Filters the collaborators by their affiliation. `outside` means outside collaborators of a project that are not a member of the project's organization. `direct` means collaborators with permissions to a project, regardless of organization membership status. `all` means all collaborators the authenticated user can see.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List project collaborators
  result = api_instance.projects_list_collaborators(project_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_list_collaborators: #{e}"
end
```

#### Using the projects_list_collaborators_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SimpleUser>>, Integer, Hash)> projects_list_collaborators_with_http_info(project_id, opts)

```ruby
begin
  # List project collaborators
  data, status_code, headers = api_instance.projects_list_collaborators_with_http_info(project_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SimpleUser>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_list_collaborators_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **project_id** | **Integer** | The unique identifier of the project. |  |
| **affiliation** | **String** | Filters the collaborators by their affiliation. &#x60;outside&#x60; means outside collaborators of a project that are not a member of the project&#39;s organization. &#x60;direct&#x60; means collaborators with permissions to a project, regardless of organization membership status. &#x60;all&#x60; means all collaborators the authenticated user can see. | [optional][default to &#39;all&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;SimpleUser&gt;**](SimpleUser.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projects_list_columns

> <Array<ProjectColumn>> projects_list_columns(project_id, opts)

List project columns

Lists the project columns in a project.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
project_id = 56 # Integer | The unique identifier of the project.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List project columns
  result = api_instance.projects_list_columns(project_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_list_columns: #{e}"
end
```

#### Using the projects_list_columns_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<ProjectColumn>>, Integer, Hash)> projects_list_columns_with_http_info(project_id, opts)

```ruby
begin
  # List project columns
  data, status_code, headers = api_instance.projects_list_columns_with_http_info(project_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<ProjectColumn>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_list_columns_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **project_id** | **Integer** | The unique identifier of the project. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;ProjectColumn&gt;**](ProjectColumn.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projects_list_for_org

> <Array<Project>> projects_list_for_org(org, opts)

List organization projects

Lists the projects in an organization. Returns a `404 Not Found` status if projects are disabled in the organization. If you do not have sufficient privileges to perform this action, a `401 Unauthorized` or `410 Gone` status is returned.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  state: 'open', # String | Indicates the state of the projects to return.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List organization projects
  result = api_instance.projects_list_for_org(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_list_for_org: #{e}"
end
```

#### Using the projects_list_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Project>>, Integer, Hash)> projects_list_for_org_with_http_info(org, opts)

```ruby
begin
  # List organization projects
  data, status_code, headers = api_instance.projects_list_for_org_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Project>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_list_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **state** | **String** | Indicates the state of the projects to return. | [optional][default to &#39;open&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Project&gt;**](Project.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projects_list_for_repo

> <Array<Project>> projects_list_for_repo(owner, repo, opts)

List repository projects

Lists the projects in a repository. Returns a `404 Not Found` status if projects are disabled in the repository. If you do not have sufficient privileges to perform this action, a `401 Unauthorized` or `410 Gone` status is returned.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  state: 'open', # String | Indicates the state of the projects to return.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repository projects
  result = api_instance.projects_list_for_repo(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_list_for_repo: #{e}"
end
```

#### Using the projects_list_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Project>>, Integer, Hash)> projects_list_for_repo_with_http_info(owner, repo, opts)

```ruby
begin
  # List repository projects
  data, status_code, headers = api_instance.projects_list_for_repo_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Project>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_list_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **state** | **String** | Indicates the state of the projects to return. | [optional][default to &#39;open&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Project&gt;**](Project.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projects_list_for_user

> <Array<Project>> projects_list_for_user(username, opts)

List user projects

Lists projects for a user.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  state: 'open', # String | Indicates the state of the projects to return.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List user projects
  result = api_instance.projects_list_for_user(username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_list_for_user: #{e}"
end
```

#### Using the projects_list_for_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Project>>, Integer, Hash)> projects_list_for_user_with_http_info(username, opts)

```ruby
begin
  # List user projects
  data, status_code, headers = api_instance.projects_list_for_user_with_http_info(username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Project>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_list_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |
| **state** | **String** | Indicates the state of the projects to return. | [optional][default to &#39;open&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Project&gt;**](Project.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projects_move_card

> Object projects_move_card(card_id, projects_move_card_request)

Move a project card



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
card_id = 56 # Integer | The unique identifier of the card.
projects_move_card_request = OpenapiClient::ProjectsMoveCardRequest.new({position: 'bottom'}) # ProjectsMoveCardRequest | 

begin
  # Move a project card
  result = api_instance.projects_move_card(card_id, projects_move_card_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_move_card: #{e}"
end
```

#### Using the projects_move_card_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> projects_move_card_with_http_info(card_id, projects_move_card_request)

```ruby
begin
  # Move a project card
  data, status_code, headers = api_instance.projects_move_card_with_http_info(card_id, projects_move_card_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_move_card_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **card_id** | **Integer** | The unique identifier of the card. |  |
| **projects_move_card_request** | [**ProjectsMoveCardRequest**](ProjectsMoveCardRequest.md) |  |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projects_move_column

> Object projects_move_column(column_id, projects_move_column_request)

Move a project column



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
column_id = 56 # Integer | The unique identifier of the column.
projects_move_column_request = OpenapiClient::ProjectsMoveColumnRequest.new({position: 'last'}) # ProjectsMoveColumnRequest | 

begin
  # Move a project column
  result = api_instance.projects_move_column(column_id, projects_move_column_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_move_column: #{e}"
end
```

#### Using the projects_move_column_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> projects_move_column_with_http_info(column_id, projects_move_column_request)

```ruby
begin
  # Move a project column
  data, status_code, headers = api_instance.projects_move_column_with_http_info(column_id, projects_move_column_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_move_column_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **column_id** | **Integer** | The unique identifier of the column. |  |
| **projects_move_column_request** | [**ProjectsMoveColumnRequest**](ProjectsMoveColumnRequest.md) |  |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projects_remove_collaborator

> projects_remove_collaborator(project_id, username)

Remove user as a collaborator

Removes a collaborator from an organization project. You must be an organization owner or a project `admin` to remove a collaborator.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
project_id = 56 # Integer | The unique identifier of the project.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Remove user as a collaborator
  api_instance.projects_remove_collaborator(project_id, username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_remove_collaborator: #{e}"
end
```

#### Using the projects_remove_collaborator_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> projects_remove_collaborator_with_http_info(project_id, username)

```ruby
begin
  # Remove user as a collaborator
  data, status_code, headers = api_instance.projects_remove_collaborator_with_http_info(project_id, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_remove_collaborator_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **project_id** | **Integer** | The unique identifier of the project. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projects_update

> <Project> projects_update(project_id, opts)

Update a project

Updates a project board's information. Returns a `404 Not Found` status if projects are disabled. If you do not have sufficient privileges to perform this action, a `401 Unauthorized` or `410 Gone` status is returned.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
project_id = 56 # Integer | The unique identifier of the project.
opts = {
  projects_update_request: OpenapiClient::ProjectsUpdateRequest.new # ProjectsUpdateRequest | 
}

begin
  # Update a project
  result = api_instance.projects_update(project_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_update: #{e}"
end
```

#### Using the projects_update_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Project>, Integer, Hash)> projects_update_with_http_info(project_id, opts)

```ruby
begin
  # Update a project
  data, status_code, headers = api_instance.projects_update_with_http_info(project_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Project>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_update_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **project_id** | **Integer** | The unique identifier of the project. |  |
| **projects_update_request** | [**ProjectsUpdateRequest**](ProjectsUpdateRequest.md) |  | [optional] |

### Return type

[**Project**](Project.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projects_update_card

> <ProjectCard> projects_update_card(card_id, opts)

Update an existing project card



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
card_id = 56 # Integer | The unique identifier of the card.
opts = {
  projects_update_card_request: OpenapiClient::ProjectsUpdateCardRequest.new # ProjectsUpdateCardRequest | 
}

begin
  # Update an existing project card
  result = api_instance.projects_update_card(card_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_update_card: #{e}"
end
```

#### Using the projects_update_card_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ProjectCard>, Integer, Hash)> projects_update_card_with_http_info(card_id, opts)

```ruby
begin
  # Update an existing project card
  data, status_code, headers = api_instance.projects_update_card_with_http_info(card_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ProjectCard>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_update_card_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **card_id** | **Integer** | The unique identifier of the card. |  |
| **projects_update_card_request** | [**ProjectsUpdateCardRequest**](ProjectsUpdateCardRequest.md) |  | [optional] |

### Return type

[**ProjectCard**](ProjectCard.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projects_update_column

> <ProjectColumn> projects_update_column(column_id, projects_update_column_request)

Update an existing project column



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ProjectsApi.new
column_id = 56 # Integer | The unique identifier of the column.
projects_update_column_request = OpenapiClient::ProjectsUpdateColumnRequest.new({name: 'Remaining tasks'}) # ProjectsUpdateColumnRequest | 

begin
  # Update an existing project column
  result = api_instance.projects_update_column(column_id, projects_update_column_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_update_column: #{e}"
end
```

#### Using the projects_update_column_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ProjectColumn>, Integer, Hash)> projects_update_column_with_http_info(column_id, projects_update_column_request)

```ruby
begin
  # Update an existing project column
  data, status_code, headers = api_instance.projects_update_column_with_http_info(column_id, projects_update_column_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ProjectColumn>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ProjectsApi->projects_update_column_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **column_id** | **Integer** | The unique identifier of the column. |  |
| **projects_update_column_request** | [**ProjectsUpdateColumnRequest**](ProjectsUpdateColumnRequest.md) |  |  |

### Return type

[**ProjectColumn**](ProjectColumn.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

