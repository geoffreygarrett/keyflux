# OpenapiClient::MigrationsApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**migrations_cancel_import**](MigrationsApi.md#migrations_cancel_import) | **DELETE** /repos/{owner}/{repo}/import | Cancel an import |
| [**migrations_delete_archive_for_authenticated_user**](MigrationsApi.md#migrations_delete_archive_for_authenticated_user) | **DELETE** /user/migrations/{migration_id}/archive | Delete a user migration archive |
| [**migrations_delete_archive_for_org**](MigrationsApi.md#migrations_delete_archive_for_org) | **DELETE** /orgs/{org}/migrations/{migration_id}/archive | Delete an organization migration archive |
| [**migrations_download_archive_for_org**](MigrationsApi.md#migrations_download_archive_for_org) | **GET** /orgs/{org}/migrations/{migration_id}/archive | Download an organization migration archive |
| [**migrations_get_archive_for_authenticated_user**](MigrationsApi.md#migrations_get_archive_for_authenticated_user) | **GET** /user/migrations/{migration_id}/archive | Download a user migration archive |
| [**migrations_get_commit_authors**](MigrationsApi.md#migrations_get_commit_authors) | **GET** /repos/{owner}/{repo}/import/authors | Get commit authors |
| [**migrations_get_import_status**](MigrationsApi.md#migrations_get_import_status) | **GET** /repos/{owner}/{repo}/import | Get an import status |
| [**migrations_get_large_files**](MigrationsApi.md#migrations_get_large_files) | **GET** /repos/{owner}/{repo}/import/large_files | Get large files |
| [**migrations_get_status_for_authenticated_user**](MigrationsApi.md#migrations_get_status_for_authenticated_user) | **GET** /user/migrations/{migration_id} | Get a user migration status |
| [**migrations_get_status_for_org**](MigrationsApi.md#migrations_get_status_for_org) | **GET** /orgs/{org}/migrations/{migration_id} | Get an organization migration status |
| [**migrations_list_for_authenticated_user**](MigrationsApi.md#migrations_list_for_authenticated_user) | **GET** /user/migrations | List user migrations |
| [**migrations_list_for_org**](MigrationsApi.md#migrations_list_for_org) | **GET** /orgs/{org}/migrations | List organization migrations |
| [**migrations_list_repos_for_authenticated_user**](MigrationsApi.md#migrations_list_repos_for_authenticated_user) | **GET** /user/migrations/{migration_id}/repositories | List repositories for a user migration |
| [**migrations_list_repos_for_org**](MigrationsApi.md#migrations_list_repos_for_org) | **GET** /orgs/{org}/migrations/{migration_id}/repositories | List repositories in an organization migration |
| [**migrations_map_commit_author**](MigrationsApi.md#migrations_map_commit_author) | **PATCH** /repos/{owner}/{repo}/import/authors/{author_id} | Map a commit author |
| [**migrations_set_lfs_preference**](MigrationsApi.md#migrations_set_lfs_preference) | **PATCH** /repos/{owner}/{repo}/import/lfs | Update Git LFS preference |
| [**migrations_start_for_authenticated_user**](MigrationsApi.md#migrations_start_for_authenticated_user) | **POST** /user/migrations | Start a user migration |
| [**migrations_start_for_org**](MigrationsApi.md#migrations_start_for_org) | **POST** /orgs/{org}/migrations | Start an organization migration |
| [**migrations_start_import**](MigrationsApi.md#migrations_start_import) | **PUT** /repos/{owner}/{repo}/import | Start an import |
| [**migrations_unlock_repo_for_authenticated_user**](MigrationsApi.md#migrations_unlock_repo_for_authenticated_user) | **DELETE** /user/migrations/{migration_id}/repos/{repo_name}/lock | Unlock a user repository |
| [**migrations_unlock_repo_for_org**](MigrationsApi.md#migrations_unlock_repo_for_org) | **DELETE** /orgs/{org}/migrations/{migration_id}/repos/{repo_name}/lock | Unlock an organization repository |
| [**migrations_update_import**](MigrationsApi.md#migrations_update_import) | **PATCH** /repos/{owner}/{repo}/import | Update an import |


## migrations_cancel_import

> migrations_cancel_import(owner, repo)

Cancel an import

Stop an import for a repository.  **Warning:** Due to very low levels of usage and available alternatives, this endpoint is deprecated and will no longer be available from 00:00 UTC on April 12, 2024. For more details and alternatives, see the [changelog](https://gh.io/source-imports-api-deprecation). 

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Cancel an import
  api_instance.migrations_cancel_import(owner, repo)
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_cancel_import: #{e}"
end
```

#### Using the migrations_cancel_import_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> migrations_cancel_import_with_http_info(owner, repo)

```ruby
begin
  # Cancel an import
  data, status_code, headers = api_instance.migrations_cancel_import_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_cancel_import_with_http_info: #{e}"
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


## migrations_delete_archive_for_authenticated_user

> migrations_delete_archive_for_authenticated_user(migration_id)

Delete a user migration archive

Deletes a previous migration archive. Downloadable migration archives are automatically deleted after seven days. Migration metadata, which is returned in the [List user migrations](https://docs.github.com/rest/migrations/users#list-user-migrations) and [Get a user migration status](https://docs.github.com/rest/migrations/users#get-a-user-migration-status) endpoints, will continue to be available even after an archive is deleted.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
migration_id = 56 # Integer | The unique identifier of the migration.

begin
  # Delete a user migration archive
  api_instance.migrations_delete_archive_for_authenticated_user(migration_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_delete_archive_for_authenticated_user: #{e}"
end
```

#### Using the migrations_delete_archive_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> migrations_delete_archive_for_authenticated_user_with_http_info(migration_id)

```ruby
begin
  # Delete a user migration archive
  data, status_code, headers = api_instance.migrations_delete_archive_for_authenticated_user_with_http_info(migration_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_delete_archive_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **migration_id** | **Integer** | The unique identifier of the migration. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## migrations_delete_archive_for_org

> migrations_delete_archive_for_org(org, migration_id)

Delete an organization migration archive

Deletes a previous migration archive. Migration archives are automatically deleted after seven days.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
migration_id = 56 # Integer | The unique identifier of the migration.

begin
  # Delete an organization migration archive
  api_instance.migrations_delete_archive_for_org(org, migration_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_delete_archive_for_org: #{e}"
end
```

#### Using the migrations_delete_archive_for_org_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> migrations_delete_archive_for_org_with_http_info(org, migration_id)

```ruby
begin
  # Delete an organization migration archive
  data, status_code, headers = api_instance.migrations_delete_archive_for_org_with_http_info(org, migration_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_delete_archive_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **migration_id** | **Integer** | The unique identifier of the migration. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## migrations_download_archive_for_org

> migrations_download_archive_for_org(org, migration_id)

Download an organization migration archive

Fetches the URL to a migration archive.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
migration_id = 56 # Integer | The unique identifier of the migration.

begin
  # Download an organization migration archive
  api_instance.migrations_download_archive_for_org(org, migration_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_download_archive_for_org: #{e}"
end
```

#### Using the migrations_download_archive_for_org_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> migrations_download_archive_for_org_with_http_info(org, migration_id)

```ruby
begin
  # Download an organization migration archive
  data, status_code, headers = api_instance.migrations_download_archive_for_org_with_http_info(org, migration_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_download_archive_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **migration_id** | **Integer** | The unique identifier of the migration. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## migrations_get_archive_for_authenticated_user

> migrations_get_archive_for_authenticated_user(migration_id)

Download a user migration archive

Fetches the URL to download the migration archive as a `tar.gz` file. Depending on the resources your repository uses, the migration archive can contain JSON files with data for these objects:  *   attachments *   bases *   commit\\_comments *   issue\\_comments *   issue\\_events *   issues *   milestones *   organizations *   projects *   protected\\_branches *   pull\\_request\\_reviews *   pull\\_requests *   releases *   repositories *   review\\_comments *   schema *   users  The archive will also contain an `attachments` directory that includes all attachment files uploaded to GitHub.com and a `repositories` directory that contains the repository's Git data.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
migration_id = 56 # Integer | The unique identifier of the migration.

begin
  # Download a user migration archive
  api_instance.migrations_get_archive_for_authenticated_user(migration_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_get_archive_for_authenticated_user: #{e}"
end
```

#### Using the migrations_get_archive_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> migrations_get_archive_for_authenticated_user_with_http_info(migration_id)

```ruby
begin
  # Download a user migration archive
  data, status_code, headers = api_instance.migrations_get_archive_for_authenticated_user_with_http_info(migration_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_get_archive_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **migration_id** | **Integer** | The unique identifier of the migration. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## migrations_get_commit_authors

> <Array<PorterAuthor>> migrations_get_commit_authors(owner, repo, opts)

Get commit authors

Each type of source control system represents authors in a different way. For example, a Git commit author has a display name and an email address, but a Subversion commit author just has a username. The GitHub Importer will make the author information valid, but the author might not be correct. For example, it will change the bare Subversion username `hubot` into something like `hubot <hubot@12341234-abab-fefe-8787-fedcba987654>`.  This endpoint and the [Map a commit author](https://docs.github.com/rest/migrations/source-imports#map-a-commit-author) endpoint allow you to provide correct Git author information.  **Warning:** Due to very low levels of usage and available alternatives, this endpoint is deprecated and will no longer be available from 00:00 UTC on April 12, 2024. For more details and alternatives, see the [changelog](https://gh.io/source-imports-api-deprecation).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  since: 56 # Integer | A user ID. Only return users with an ID greater than this ID.
}

begin
  # Get commit authors
  result = api_instance.migrations_get_commit_authors(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_get_commit_authors: #{e}"
end
```

#### Using the migrations_get_commit_authors_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<PorterAuthor>>, Integer, Hash)> migrations_get_commit_authors_with_http_info(owner, repo, opts)

```ruby
begin
  # Get commit authors
  data, status_code, headers = api_instance.migrations_get_commit_authors_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<PorterAuthor>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_get_commit_authors_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **since** | **Integer** | A user ID. Only return users with an ID greater than this ID. | [optional] |

### Return type

[**Array&lt;PorterAuthor&gt;**](PorterAuthor.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## migrations_get_import_status

> <Import> migrations_get_import_status(owner, repo)

Get an import status

View the progress of an import.  **Warning:** Due to very low levels of usage and available alternatives, this endpoint is deprecated and will no longer be available from 00:00 UTC on April 12, 2024. For more details and alternatives, see the [changelog](https://gh.io/source-imports-api-deprecation).  **Import status**  This section includes details about the possible values of the `status` field of the Import Progress response.  An import that does not have errors will progress through these steps:  *   `detecting` - the \"detection\" step of the import is in progress because the request did not include a `vcs` parameter. The import is identifying the type of source control present at the URL. *   `importing` - the \"raw\" step of the import is in progress. This is where commit data is fetched from the original repository. The import progress response will include `commit_count` (the total number of raw commits that will be imported) and `percent` (0 - 100, the current progress through the import). *   `mapping` - the \"rewrite\" step of the import is in progress. This is where SVN branches are converted to Git branches, and where author updates are applied. The import progress response does not include progress information. *   `pushing` - the \"push\" step of the import is in progress. This is where the importer updates the repository on GitHub. The import progress response will include `push_percent`, which is the percent value reported by `git push` when it is \"Writing objects\". *   `complete` - the import is complete, and the repository is ready on GitHub.  If there are problems, you will see one of these in the `status` field:  *   `auth_failed` - the import requires authentication in order to connect to the original repository. To update authentication for the import, please see the [Update an import](https://docs.github.com/rest/migrations/source-imports#update-an-import) section. *   `error` - the import encountered an error. The import progress response will include the `failed_step` and an error message. Contact [GitHub Support](https://support.github.com/contact?tags=dotcom-rest-api) for more information. *   `detection_needs_auth` - the importer requires authentication for the originating repository to continue detection. To update authentication for the import, please see the [Update an import](https://docs.github.com/rest/migrations/source-imports#update-an-import) section. *   `detection_found_nothing` - the importer didn't recognize any source control at the URL. To resolve, [Cancel the import](https://docs.github.com/rest/migrations/source-imports#cancel-an-import) and [retry](https://docs.github.com/rest/migrations/source-imports#start-an-import) with the correct URL. *   `detection_found_multiple` - the importer found several projects or repositories at the provided URL. When this is the case, the Import Progress response will also include a `project_choices` field with the possible project choices as values. To update project choice, please see the [Update an import](https://docs.github.com/rest/migrations/source-imports#update-an-import) section.  **The project_choices field**  When multiple projects are found at the provided URL, the response hash will include a `project_choices` field, the value of which is an array of hashes each representing a project choice. The exact key/value pairs of the project hashes will differ depending on the version control type.  **Git LFS related fields**  This section includes details about Git LFS related fields that may be present in the Import Progress response.  *   `use_lfs` - describes whether the import has been opted in or out of using Git LFS. The value can be `opt_in`, `opt_out`, or `undecided` if no action has been taken. *   `has_large_files` - the boolean value describing whether files larger than 100MB were found during the `importing` step. *   `large_files_size` - the total size in gigabytes of files larger than 100MB found in the originating repository. *   `large_files_count` - the total number of files larger than 100MB found in the originating repository. To see a list of these files, make a \"Get Large Files\" request.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Get an import status
  result = api_instance.migrations_get_import_status(owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_get_import_status: #{e}"
end
```

#### Using the migrations_get_import_status_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Import>, Integer, Hash)> migrations_get_import_status_with_http_info(owner, repo)

```ruby
begin
  # Get an import status
  data, status_code, headers = api_instance.migrations_get_import_status_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Import>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_get_import_status_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**Import**](Import.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## migrations_get_large_files

> <Array<PorterLargeFile>> migrations_get_large_files(owner, repo)

Get large files

List files larger than 100MB found during the import  **Warning:** Due to very low levels of usage and available alternatives, this endpoint is deprecated and will no longer be available from 00:00 UTC on April 12, 2024. For more details and alternatives, see the [changelog](https://gh.io/source-imports-api-deprecation). 

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Get large files
  result = api_instance.migrations_get_large_files(owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_get_large_files: #{e}"
end
```

#### Using the migrations_get_large_files_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<PorterLargeFile>>, Integer, Hash)> migrations_get_large_files_with_http_info(owner, repo)

```ruby
begin
  # Get large files
  data, status_code, headers = api_instance.migrations_get_large_files_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<PorterLargeFile>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_get_large_files_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**Array&lt;PorterLargeFile&gt;**](PorterLargeFile.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## migrations_get_status_for_authenticated_user

> <Migration> migrations_get_status_for_authenticated_user(migration_id, opts)

Get a user migration status

Fetches a single user migration. The response includes the `state` of the migration, which can be one of the following values:  *   `pending` - the migration hasn't started yet. *   `exporting` - the migration is in progress. *   `exported` - the migration finished successfully. *   `failed` - the migration failed.  Once the migration has been `exported` you can [download the migration archive](https://docs.github.com/rest/migrations/users#download-a-user-migration-archive).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
migration_id = 56 # Integer | The unique identifier of the migration.
opts = {
  exclude: ['inner_example'] # Array<String> | 
}

begin
  # Get a user migration status
  result = api_instance.migrations_get_status_for_authenticated_user(migration_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_get_status_for_authenticated_user: #{e}"
end
```

#### Using the migrations_get_status_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Migration>, Integer, Hash)> migrations_get_status_for_authenticated_user_with_http_info(migration_id, opts)

```ruby
begin
  # Get a user migration status
  data, status_code, headers = api_instance.migrations_get_status_for_authenticated_user_with_http_info(migration_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Migration>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_get_status_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **migration_id** | **Integer** | The unique identifier of the migration. |  |
| **exclude** | [**Array&lt;String&gt;**](String.md) |  | [optional] |

### Return type

[**Migration**](Migration.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## migrations_get_status_for_org

> <Migration> migrations_get_status_for_org(org, migration_id, opts)

Get an organization migration status

Fetches the status of a migration.  The `state` of a migration can be one of the following values:  *   `pending`, which means the migration hasn't started yet. *   `exporting`, which means the migration is in progress. *   `exported`, which means the migration finished successfully. *   `failed`, which means the migration failed.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
migration_id = 56 # Integer | The unique identifier of the migration.
opts = {
  exclude: ['repositories'] # Array<String> | Exclude attributes from the API response to improve performance
}

begin
  # Get an organization migration status
  result = api_instance.migrations_get_status_for_org(org, migration_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_get_status_for_org: #{e}"
end
```

#### Using the migrations_get_status_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Migration>, Integer, Hash)> migrations_get_status_for_org_with_http_info(org, migration_id, opts)

```ruby
begin
  # Get an organization migration status
  data, status_code, headers = api_instance.migrations_get_status_for_org_with_http_info(org, migration_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Migration>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_get_status_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **migration_id** | **Integer** | The unique identifier of the migration. |  |
| **exclude** | [**Array&lt;String&gt;**](String.md) | Exclude attributes from the API response to improve performance | [optional] |

### Return type

[**Migration**](Migration.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## migrations_list_for_authenticated_user

> <Array<Migration>> migrations_list_for_authenticated_user(opts)

List user migrations

Lists all migrations a user has started.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List user migrations
  result = api_instance.migrations_list_for_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_list_for_authenticated_user: #{e}"
end
```

#### Using the migrations_list_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Migration>>, Integer, Hash)> migrations_list_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # List user migrations
  data, status_code, headers = api_instance.migrations_list_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Migration>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_list_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Migration&gt;**](Migration.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## migrations_list_for_org

> <Array<Migration>> migrations_list_for_org(org, opts)

List organization migrations

Lists the most recent migrations, including both exports (which can be started through the REST API) and imports (which cannot be started using the REST API).  A list of `repositories` is only returned for export migrations.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  exclude: ['repositories'] # Array<String> | Exclude attributes from the API response to improve performance
}

begin
  # List organization migrations
  result = api_instance.migrations_list_for_org(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_list_for_org: #{e}"
end
```

#### Using the migrations_list_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Migration>>, Integer, Hash)> migrations_list_for_org_with_http_info(org, opts)

```ruby
begin
  # List organization migrations
  data, status_code, headers = api_instance.migrations_list_for_org_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Migration>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_list_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **exclude** | [**Array&lt;String&gt;**](String.md) | Exclude attributes from the API response to improve performance | [optional] |

### Return type

[**Array&lt;Migration&gt;**](Migration.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## migrations_list_repos_for_authenticated_user

> <Array<MinimalRepository>> migrations_list_repos_for_authenticated_user(migration_id, opts)

List repositories for a user migration

Lists all the repositories for this user migration.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
migration_id = 56 # Integer | The unique identifier of the migration.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repositories for a user migration
  result = api_instance.migrations_list_repos_for_authenticated_user(migration_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_list_repos_for_authenticated_user: #{e}"
end
```

#### Using the migrations_list_repos_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<MinimalRepository>>, Integer, Hash)> migrations_list_repos_for_authenticated_user_with_http_info(migration_id, opts)

```ruby
begin
  # List repositories for a user migration
  data, status_code, headers = api_instance.migrations_list_repos_for_authenticated_user_with_http_info(migration_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<MinimalRepository>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_list_repos_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **migration_id** | **Integer** | The unique identifier of the migration. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;MinimalRepository&gt;**](MinimalRepository.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## migrations_list_repos_for_org

> <Array<MinimalRepository>> migrations_list_repos_for_org(org, migration_id, opts)

List repositories in an organization migration

List all the repositories for this organization migration.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
migration_id = 56 # Integer | The unique identifier of the migration.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repositories in an organization migration
  result = api_instance.migrations_list_repos_for_org(org, migration_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_list_repos_for_org: #{e}"
end
```

#### Using the migrations_list_repos_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<MinimalRepository>>, Integer, Hash)> migrations_list_repos_for_org_with_http_info(org, migration_id, opts)

```ruby
begin
  # List repositories in an organization migration
  data, status_code, headers = api_instance.migrations_list_repos_for_org_with_http_info(org, migration_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<MinimalRepository>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_list_repos_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **migration_id** | **Integer** | The unique identifier of the migration. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;MinimalRepository&gt;**](MinimalRepository.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## migrations_map_commit_author

> <PorterAuthor> migrations_map_commit_author(owner, repo, author_id, opts)

Map a commit author

Update an author's identity for the import. Your application can continue updating authors any time before you push new commits to the repository.  **Warning:** Due to very low levels of usage and available alternatives, this endpoint is deprecated and will no longer be available from 00:00 UTC on April 12, 2024. For more details and alternatives, see the [changelog](https://gh.io/source-imports-api-deprecation). 

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
author_id = 56 # Integer | 
opts = {
  migrations_map_commit_author_request: OpenapiClient::MigrationsMapCommitAuthorRequest.new # MigrationsMapCommitAuthorRequest | 
}

begin
  # Map a commit author
  result = api_instance.migrations_map_commit_author(owner, repo, author_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_map_commit_author: #{e}"
end
```

#### Using the migrations_map_commit_author_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PorterAuthor>, Integer, Hash)> migrations_map_commit_author_with_http_info(owner, repo, author_id, opts)

```ruby
begin
  # Map a commit author
  data, status_code, headers = api_instance.migrations_map_commit_author_with_http_info(owner, repo, author_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PorterAuthor>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_map_commit_author_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **author_id** | **Integer** |  |  |
| **migrations_map_commit_author_request** | [**MigrationsMapCommitAuthorRequest**](MigrationsMapCommitAuthorRequest.md) |  | [optional] |

### Return type

[**PorterAuthor**](PorterAuthor.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## migrations_set_lfs_preference

> <Import> migrations_set_lfs_preference(owner, repo, migrations_set_lfs_preference_request)

Update Git LFS preference

You can import repositories from Subversion, Mercurial, and TFS that include files larger than 100MB. This ability is powered by [Git LFS](https://git-lfs.com).  You can learn more about our LFS feature and working with large files [on our help site](https://docs.github.com/repositories/working-with-files/managing-large-files).  **Warning:** Due to very low levels of usage and available alternatives, this endpoint is deprecated and will no longer be available from 00:00 UTC on April 12, 2024. For more details and alternatives, see the [changelog](https://gh.io/source-imports-api-deprecation). 

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
migrations_set_lfs_preference_request = OpenapiClient::MigrationsSetLfsPreferenceRequest.new({use_lfs: 'opt_in'}) # MigrationsSetLfsPreferenceRequest | 

begin
  # Update Git LFS preference
  result = api_instance.migrations_set_lfs_preference(owner, repo, migrations_set_lfs_preference_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_set_lfs_preference: #{e}"
end
```

#### Using the migrations_set_lfs_preference_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Import>, Integer, Hash)> migrations_set_lfs_preference_with_http_info(owner, repo, migrations_set_lfs_preference_request)

```ruby
begin
  # Update Git LFS preference
  data, status_code, headers = api_instance.migrations_set_lfs_preference_with_http_info(owner, repo, migrations_set_lfs_preference_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Import>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_set_lfs_preference_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **migrations_set_lfs_preference_request** | [**MigrationsSetLfsPreferenceRequest**](MigrationsSetLfsPreferenceRequest.md) |  |  |

### Return type

[**Import**](Import.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## migrations_start_for_authenticated_user

> <Migration> migrations_start_for_authenticated_user(migrations_start_for_authenticated_user_request)

Start a user migration

Initiates the generation of a user migration archive.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
migrations_start_for_authenticated_user_request = OpenapiClient::MigrationsStartForAuthenticatedUserRequest.new({repositories: ['acme/widgets']}) # MigrationsStartForAuthenticatedUserRequest | 

begin
  # Start a user migration
  result = api_instance.migrations_start_for_authenticated_user(migrations_start_for_authenticated_user_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_start_for_authenticated_user: #{e}"
end
```

#### Using the migrations_start_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Migration>, Integer, Hash)> migrations_start_for_authenticated_user_with_http_info(migrations_start_for_authenticated_user_request)

```ruby
begin
  # Start a user migration
  data, status_code, headers = api_instance.migrations_start_for_authenticated_user_with_http_info(migrations_start_for_authenticated_user_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Migration>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_start_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **migrations_start_for_authenticated_user_request** | [**MigrationsStartForAuthenticatedUserRequest**](MigrationsStartForAuthenticatedUserRequest.md) |  |  |

### Return type

[**Migration**](Migration.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## migrations_start_for_org

> <Migration> migrations_start_for_org(org, migrations_start_for_org_request)

Start an organization migration

Initiates the generation of a migration archive.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
migrations_start_for_org_request = OpenapiClient::MigrationsStartForOrgRequest.new({repositories: ['repositories_example']}) # MigrationsStartForOrgRequest | 

begin
  # Start an organization migration
  result = api_instance.migrations_start_for_org(org, migrations_start_for_org_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_start_for_org: #{e}"
end
```

#### Using the migrations_start_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Migration>, Integer, Hash)> migrations_start_for_org_with_http_info(org, migrations_start_for_org_request)

```ruby
begin
  # Start an organization migration
  data, status_code, headers = api_instance.migrations_start_for_org_with_http_info(org, migrations_start_for_org_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Migration>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_start_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **migrations_start_for_org_request** | [**MigrationsStartForOrgRequest**](MigrationsStartForOrgRequest.md) |  |  |

### Return type

[**Migration**](Migration.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## migrations_start_import

> <Import> migrations_start_import(owner, repo, migrations_start_import_request)

Start an import

Start a source import to a GitHub repository using GitHub Importer. Importing into a GitHub repository with GitHub Actions enabled is not supported and will return a status `422 Unprocessable Entity` response.  **Warning:** Due to very low levels of usage and available alternatives, this endpoint is deprecated and will no longer be available from 00:00 UTC on April 12, 2024. For more details and alternatives, see the [changelog](https://gh.io/source-imports-api-deprecation). 

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
migrations_start_import_request = OpenapiClient::MigrationsStartImportRequest.new({vcs_url: 'vcs_url_example'}) # MigrationsStartImportRequest | 

begin
  # Start an import
  result = api_instance.migrations_start_import(owner, repo, migrations_start_import_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_start_import: #{e}"
end
```

#### Using the migrations_start_import_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Import>, Integer, Hash)> migrations_start_import_with_http_info(owner, repo, migrations_start_import_request)

```ruby
begin
  # Start an import
  data, status_code, headers = api_instance.migrations_start_import_with_http_info(owner, repo, migrations_start_import_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Import>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_start_import_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **migrations_start_import_request** | [**MigrationsStartImportRequest**](MigrationsStartImportRequest.md) |  |  |

### Return type

[**Import**](Import.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## migrations_unlock_repo_for_authenticated_user

> migrations_unlock_repo_for_authenticated_user(migration_id, repo_name)

Unlock a user repository

Unlocks a repository. You can lock repositories when you [start a user migration](https://docs.github.com/rest/migrations/users#start-a-user-migration). Once the migration is complete you can unlock each repository to begin using it again or [delete the repository](https://docs.github.com/rest/repos/repos#delete-a-repository) if you no longer need the source data. Returns a status of `404 Not Found` if the repository is not locked.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
migration_id = 56 # Integer | The unique identifier of the migration.
repo_name = 'repo_name_example' # String | repo_name parameter

begin
  # Unlock a user repository
  api_instance.migrations_unlock_repo_for_authenticated_user(migration_id, repo_name)
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_unlock_repo_for_authenticated_user: #{e}"
end
```

#### Using the migrations_unlock_repo_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> migrations_unlock_repo_for_authenticated_user_with_http_info(migration_id, repo_name)

```ruby
begin
  # Unlock a user repository
  data, status_code, headers = api_instance.migrations_unlock_repo_for_authenticated_user_with_http_info(migration_id, repo_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_unlock_repo_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **migration_id** | **Integer** | The unique identifier of the migration. |  |
| **repo_name** | **String** | repo_name parameter |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## migrations_unlock_repo_for_org

> migrations_unlock_repo_for_org(org, migration_id, repo_name)

Unlock an organization repository

Unlocks a repository that was locked for migration. You should unlock each migrated repository and [delete them](https://docs.github.com/rest/repos/repos#delete-a-repository) when the migration is complete and you no longer need the source data.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
migration_id = 56 # Integer | The unique identifier of the migration.
repo_name = 'repo_name_example' # String | repo_name parameter

begin
  # Unlock an organization repository
  api_instance.migrations_unlock_repo_for_org(org, migration_id, repo_name)
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_unlock_repo_for_org: #{e}"
end
```

#### Using the migrations_unlock_repo_for_org_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> migrations_unlock_repo_for_org_with_http_info(org, migration_id, repo_name)

```ruby
begin
  # Unlock an organization repository
  data, status_code, headers = api_instance.migrations_unlock_repo_for_org_with_http_info(org, migration_id, repo_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_unlock_repo_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **migration_id** | **Integer** | The unique identifier of the migration. |  |
| **repo_name** | **String** | repo_name parameter |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## migrations_update_import

> <Import> migrations_update_import(owner, repo, opts)

Update an import

An import can be updated with credentials or a project choice by passing in the appropriate parameters in this API request. If no parameters are provided, the import will be restarted.  Some servers (e.g. TFS servers) can have several projects at a single URL. In those cases the import progress will have the status `detection_found_multiple` and the Import Progress response will include a `project_choices` array. You can select the project to import by providing one of the objects in the `project_choices` array in the update request.  **Warning:** Due to very low levels of usage and available alternatives, this endpoint is deprecated and will no longer be available from 00:00 UTC on April 12, 2024. For more details and alternatives, see the [changelog](https://gh.io/source-imports-api-deprecation).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MigrationsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  migrations_update_import_request: OpenapiClient::MigrationsUpdateImportRequest.new # MigrationsUpdateImportRequest | 
}

begin
  # Update an import
  result = api_instance.migrations_update_import(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_update_import: #{e}"
end
```

#### Using the migrations_update_import_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Import>, Integer, Hash)> migrations_update_import_with_http_info(owner, repo, opts)

```ruby
begin
  # Update an import
  data, status_code, headers = api_instance.migrations_update_import_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Import>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MigrationsApi->migrations_update_import_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **migrations_update_import_request** | [**MigrationsUpdateImportRequest**](MigrationsUpdateImportRequest.md) |  | [optional] |

### Return type

[**Import**](Import.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

