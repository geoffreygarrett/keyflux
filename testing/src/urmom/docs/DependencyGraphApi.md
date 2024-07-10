# OpenapiClient::DependencyGraphApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**dependency_graph_create_repository_snapshot**](DependencyGraphApi.md#dependency_graph_create_repository_snapshot) | **POST** /repos/{owner}/{repo}/dependency-graph/snapshots | Create a snapshot of dependencies for a repository |
| [**dependency_graph_diff_range**](DependencyGraphApi.md#dependency_graph_diff_range) | **GET** /repos/{owner}/{repo}/dependency-graph/compare/{basehead} | Get a diff of the dependencies between commits |
| [**dependency_graph_export_sbom**](DependencyGraphApi.md#dependency_graph_export_sbom) | **GET** /repos/{owner}/{repo}/dependency-graph/sbom | Export a software bill of materials (SBOM) for a repository. |


## dependency_graph_create_repository_snapshot

> <DependencyGraphCreateRepositorySnapshot201Response> dependency_graph_create_repository_snapshot(owner, repo, snapshot)

Create a snapshot of dependencies for a repository

Create a new snapshot of a repository's dependencies.  The authenticated user must have access to the repository.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependencyGraphApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
snapshot = OpenapiClient::Snapshot.new({version: 37, job: OpenapiClient::SnapshotJob.new({id: '5622a2b0-63f6-4732-8c34-a1ab27e102a11', correlator: 'yourworkflowname_yourjobname'}), sha: 'ddc951f4b1293222421f2c8df679786153acf689', ref: 'refs/heads/main', detector: OpenapiClient::SnapshotDetector.new({name: 'docker buildtime detector', version: '1.0.0', url: 'http://example.com/docker-buildtimer-detector'}), scanned: Time.parse('2020-06-13T14:52:50-05:00')}) # Snapshot | 

begin
  # Create a snapshot of dependencies for a repository
  result = api_instance.dependency_graph_create_repository_snapshot(owner, repo, snapshot)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependencyGraphApi->dependency_graph_create_repository_snapshot: #{e}"
end
```

#### Using the dependency_graph_create_repository_snapshot_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<DependencyGraphCreateRepositorySnapshot201Response>, Integer, Hash)> dependency_graph_create_repository_snapshot_with_http_info(owner, repo, snapshot)

```ruby
begin
  # Create a snapshot of dependencies for a repository
  data, status_code, headers = api_instance.dependency_graph_create_repository_snapshot_with_http_info(owner, repo, snapshot)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <DependencyGraphCreateRepositorySnapshot201Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependencyGraphApi->dependency_graph_create_repository_snapshot_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **snapshot** | [**Snapshot**](Snapshot.md) |  |  |

### Return type

[**DependencyGraphCreateRepositorySnapshot201Response**](DependencyGraphCreateRepositorySnapshot201Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## dependency_graph_diff_range

> <Array<DependencyGraphDiffInner>> dependency_graph_diff_range(owner, repo, basehead, opts)

Get a diff of the dependencies between commits

Gets the diff of the dependency changes between two commits of a repository, based on the changes to the dependency manifests made in those commits.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependencyGraphApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
basehead = 'basehead_example' # String | The base and head Git revisions to compare. The Git revisions will be resolved to commit SHAs. Named revisions will be resolved to their corresponding HEAD commits, and an appropriate merge base will be determined. This parameter expects the format `{base}...{head}`.
opts = {
  name: 'name_example' # String | The full path, relative to the repository root, of the dependency manifest file.
}

begin
  # Get a diff of the dependencies between commits
  result = api_instance.dependency_graph_diff_range(owner, repo, basehead, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependencyGraphApi->dependency_graph_diff_range: #{e}"
end
```

#### Using the dependency_graph_diff_range_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<DependencyGraphDiffInner>>, Integer, Hash)> dependency_graph_diff_range_with_http_info(owner, repo, basehead, opts)

```ruby
begin
  # Get a diff of the dependencies between commits
  data, status_code, headers = api_instance.dependency_graph_diff_range_with_http_info(owner, repo, basehead, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<DependencyGraphDiffInner>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependencyGraphApi->dependency_graph_diff_range_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **basehead** | **String** | The base and head Git revisions to compare. The Git revisions will be resolved to commit SHAs. Named revisions will be resolved to their corresponding HEAD commits, and an appropriate merge base will be determined. This parameter expects the format &#x60;{base}...{head}&#x60;. |  |
| **name** | **String** | The full path, relative to the repository root, of the dependency manifest file. | [optional] |

### Return type

[**Array&lt;DependencyGraphDiffInner&gt;**](DependencyGraphDiffInner.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## dependency_graph_export_sbom

> <DependencyGraphSpdxSbom> dependency_graph_export_sbom(owner, repo)

Export a software bill of materials (SBOM) for a repository.

Exports the software bill of materials (SBOM) for a repository in SPDX JSON format.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependencyGraphApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Export a software bill of materials (SBOM) for a repository.
  result = api_instance.dependency_graph_export_sbom(owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependencyGraphApi->dependency_graph_export_sbom: #{e}"
end
```

#### Using the dependency_graph_export_sbom_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<DependencyGraphSpdxSbom>, Integer, Hash)> dependency_graph_export_sbom_with_http_info(owner, repo)

```ruby
begin
  # Export a software bill of materials (SBOM) for a repository.
  data, status_code, headers = api_instance.dependency_graph_export_sbom_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <DependencyGraphSpdxSbom>
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependencyGraphApi->dependency_graph_export_sbom_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**DependencyGraphSpdxSbom**](DependencyGraphSpdxSbom.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

