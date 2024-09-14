# OpenapiClient::SecurityAdvisoriesApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**security_advisories_create_fork**](SecurityAdvisoriesApi.md#security_advisories_create_fork) | **POST** /repos/{owner}/{repo}/security-advisories/{ghsa_id}/forks | Create a temporary private fork |
| [**security_advisories_create_private_vulnerability_report**](SecurityAdvisoriesApi.md#security_advisories_create_private_vulnerability_report) | **POST** /repos/{owner}/{repo}/security-advisories/reports | Privately report a security vulnerability |
| [**security_advisories_create_repository_advisory**](SecurityAdvisoriesApi.md#security_advisories_create_repository_advisory) | **POST** /repos/{owner}/{repo}/security-advisories | Create a repository security advisory |
| [**security_advisories_create_repository_advisory_cve_request**](SecurityAdvisoriesApi.md#security_advisories_create_repository_advisory_cve_request) | **POST** /repos/{owner}/{repo}/security-advisories/{ghsa_id}/cve | Request a CVE for a repository security advisory |
| [**security_advisories_get_global_advisory**](SecurityAdvisoriesApi.md#security_advisories_get_global_advisory) | **GET** /advisories/{ghsa_id} | Get a global security advisory |
| [**security_advisories_get_repository_advisory**](SecurityAdvisoriesApi.md#security_advisories_get_repository_advisory) | **GET** /repos/{owner}/{repo}/security-advisories/{ghsa_id} | Get a repository security advisory |
| [**security_advisories_list_global_advisories**](SecurityAdvisoriesApi.md#security_advisories_list_global_advisories) | **GET** /advisories | List global security advisories |
| [**security_advisories_list_org_repository_advisories**](SecurityAdvisoriesApi.md#security_advisories_list_org_repository_advisories) | **GET** /orgs/{org}/security-advisories | List repository security advisories for an organization |
| [**security_advisories_list_repository_advisories**](SecurityAdvisoriesApi.md#security_advisories_list_repository_advisories) | **GET** /repos/{owner}/{repo}/security-advisories | List repository security advisories |
| [**security_advisories_update_repository_advisory**](SecurityAdvisoriesApi.md#security_advisories_update_repository_advisory) | **PATCH** /repos/{owner}/{repo}/security-advisories/{ghsa_id} | Update a repository security advisory |


## security_advisories_create_fork

> <FullRepository> security_advisories_create_fork(owner, repo, ghsa_id)

Create a temporary private fork

Create a temporary private fork to collaborate on fixing a security vulnerability in your repository.  **Note**: Forking a repository happens asynchronously. You may have to wait up to 5 minutes before you can access the fork.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SecurityAdvisoriesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
ghsa_id = 'ghsa_id_example' # String | The GHSA (GitHub Security Advisory) identifier of the advisory.

begin
  # Create a temporary private fork
  result = api_instance.security_advisories_create_fork(owner, repo, ghsa_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_create_fork: #{e}"
end
```

#### Using the security_advisories_create_fork_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<FullRepository>, Integer, Hash)> security_advisories_create_fork_with_http_info(owner, repo, ghsa_id)

```ruby
begin
  # Create a temporary private fork
  data, status_code, headers = api_instance.security_advisories_create_fork_with_http_info(owner, repo, ghsa_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <FullRepository>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_create_fork_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **ghsa_id** | **String** | The GHSA (GitHub Security Advisory) identifier of the advisory. |  |

### Return type

[**FullRepository**](FullRepository.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, application/scim+json


## security_advisories_create_private_vulnerability_report

> <RepositoryAdvisory> security_advisories_create_private_vulnerability_report(owner, repo, private_vulnerability_report_create)

Privately report a security vulnerability

Report a security vulnerability to the maintainers of the repository. See \"[Privately reporting a security vulnerability](https://docs.github.com/code-security/security-advisories/guidance-on-reporting-and-writing/privately-reporting-a-security-vulnerability)\" for more information about private vulnerability reporting.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SecurityAdvisoriesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
private_vulnerability_report_create = OpenapiClient::PrivateVulnerabilityReportCreate.new({summary: 'summary_example', description: 'description_example'}) # PrivateVulnerabilityReportCreate | 

begin
  # Privately report a security vulnerability
  result = api_instance.security_advisories_create_private_vulnerability_report(owner, repo, private_vulnerability_report_create)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_create_private_vulnerability_report: #{e}"
end
```

#### Using the security_advisories_create_private_vulnerability_report_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<RepositoryAdvisory>, Integer, Hash)> security_advisories_create_private_vulnerability_report_with_http_info(owner, repo, private_vulnerability_report_create)

```ruby
begin
  # Privately report a security vulnerability
  data, status_code, headers = api_instance.security_advisories_create_private_vulnerability_report_with_http_info(owner, repo, private_vulnerability_report_create)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <RepositoryAdvisory>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_create_private_vulnerability_report_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **private_vulnerability_report_create** | [**PrivateVulnerabilityReportCreate**](PrivateVulnerabilityReportCreate.md) |  |  |

### Return type

[**RepositoryAdvisory**](RepositoryAdvisory.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## security_advisories_create_repository_advisory

> <RepositoryAdvisory> security_advisories_create_repository_advisory(owner, repo, repository_advisory_create)

Create a repository security advisory

Creates a new repository security advisory.  In order to create a draft repository security advisory, the authenticated user must be a security manager or administrator of that repository.  OAuth app tokens and personal access tokens (classic) need the `repo` or `repository_advisories:write` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SecurityAdvisoriesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
repository_advisory_create = OpenapiClient::RepositoryAdvisoryCreate.new({summary: 'summary_example', description: 'description_example', vulnerabilities: [OpenapiClient::RepositoryAdvisoryCreateVulnerabilitiesInner.new({package: OpenapiClient::RepositoryAdvisoryCreateVulnerabilitiesInnerPackage.new({ecosystem: OpenapiClient::SecurityAdvisoryEcosystems::RUBYGEMS})})]}) # RepositoryAdvisoryCreate | 

begin
  # Create a repository security advisory
  result = api_instance.security_advisories_create_repository_advisory(owner, repo, repository_advisory_create)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_create_repository_advisory: #{e}"
end
```

#### Using the security_advisories_create_repository_advisory_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<RepositoryAdvisory>, Integer, Hash)> security_advisories_create_repository_advisory_with_http_info(owner, repo, repository_advisory_create)

```ruby
begin
  # Create a repository security advisory
  data, status_code, headers = api_instance.security_advisories_create_repository_advisory_with_http_info(owner, repo, repository_advisory_create)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <RepositoryAdvisory>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_create_repository_advisory_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **repository_advisory_create** | [**RepositoryAdvisoryCreate**](RepositoryAdvisoryCreate.md) |  |  |

### Return type

[**RepositoryAdvisory**](RepositoryAdvisory.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## security_advisories_create_repository_advisory_cve_request

> Object security_advisories_create_repository_advisory_cve_request(owner, repo, ghsa_id)

Request a CVE for a repository security advisory

If you want a CVE identification number for the security vulnerability in your project, and don't already have one, you can request a CVE identification number from GitHub. For more information see \"[Requesting a CVE identification number](https://docs.github.com/code-security/security-advisories/repository-security-advisories/publishing-a-repository-security-advisory#requesting-a-cve-identification-number-optional).\"  You may request a CVE for public repositories, but cannot do so for private repositories.  In order to request a CVE for a repository security advisory, the authenticated user must be a security manager or administrator of that repository.  OAuth app tokens and personal access tokens (classic) need the `repo` or `repository_advisories:write` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SecurityAdvisoriesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
ghsa_id = 'ghsa_id_example' # String | The GHSA (GitHub Security Advisory) identifier of the advisory.

begin
  # Request a CVE for a repository security advisory
  result = api_instance.security_advisories_create_repository_advisory_cve_request(owner, repo, ghsa_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_create_repository_advisory_cve_request: #{e}"
end
```

#### Using the security_advisories_create_repository_advisory_cve_request_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> security_advisories_create_repository_advisory_cve_request_with_http_info(owner, repo, ghsa_id)

```ruby
begin
  # Request a CVE for a repository security advisory
  data, status_code, headers = api_instance.security_advisories_create_repository_advisory_cve_request_with_http_info(owner, repo, ghsa_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_create_repository_advisory_cve_request_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **ghsa_id** | **String** | The GHSA (GitHub Security Advisory) identifier of the advisory. |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, application/scim+json


## security_advisories_get_global_advisory

> <GlobalAdvisory> security_advisories_get_global_advisory(ghsa_id)

Get a global security advisory

Gets a global security advisory using its GitHub Security Advisory (GHSA) identifier.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SecurityAdvisoriesApi.new
ghsa_id = 'ghsa_id_example' # String | The GHSA (GitHub Security Advisory) identifier of the advisory.

begin
  # Get a global security advisory
  result = api_instance.security_advisories_get_global_advisory(ghsa_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_get_global_advisory: #{e}"
end
```

#### Using the security_advisories_get_global_advisory_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GlobalAdvisory>, Integer, Hash)> security_advisories_get_global_advisory_with_http_info(ghsa_id)

```ruby
begin
  # Get a global security advisory
  data, status_code, headers = api_instance.security_advisories_get_global_advisory_with_http_info(ghsa_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GlobalAdvisory>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_get_global_advisory_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **ghsa_id** | **String** | The GHSA (GitHub Security Advisory) identifier of the advisory. |  |

### Return type

[**GlobalAdvisory**](GlobalAdvisory.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## security_advisories_get_repository_advisory

> <RepositoryAdvisory> security_advisories_get_repository_advisory(owner, repo, ghsa_id)

Get a repository security advisory

Get a repository security advisory using its GitHub Security Advisory (GHSA) identifier.  Anyone can access any published security advisory on a public repository.  The authenticated user can access an unpublished security advisory from a repository if they are a security manager or administrator of that repository, or if they are a collaborator on the security advisory.  OAuth app tokens and personal access tokens (classic) need the `repo` or `repository_advisories:read` scope to to get a published security advisory in a private repository, or any unpublished security advisory that the authenticated user has access to.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SecurityAdvisoriesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
ghsa_id = 'ghsa_id_example' # String | The GHSA (GitHub Security Advisory) identifier of the advisory.

begin
  # Get a repository security advisory
  result = api_instance.security_advisories_get_repository_advisory(owner, repo, ghsa_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_get_repository_advisory: #{e}"
end
```

#### Using the security_advisories_get_repository_advisory_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<RepositoryAdvisory>, Integer, Hash)> security_advisories_get_repository_advisory_with_http_info(owner, repo, ghsa_id)

```ruby
begin
  # Get a repository security advisory
  data, status_code, headers = api_instance.security_advisories_get_repository_advisory_with_http_info(owner, repo, ghsa_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <RepositoryAdvisory>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_get_repository_advisory_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **ghsa_id** | **String** | The GHSA (GitHub Security Advisory) identifier of the advisory. |  |

### Return type

[**RepositoryAdvisory**](RepositoryAdvisory.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## security_advisories_list_global_advisories

> <Array<GlobalAdvisory>> security_advisories_list_global_advisories(opts)

List global security advisories

Lists all global security advisories that match the specified parameters. If no other parameters are defined, the request will return only GitHub-reviewed advisories that are not malware.  By default, all responses will exclude advisories for malware, because malware are not standard vulnerabilities. To list advisories for malware, you must include the `type` parameter in your request, with the value `malware`. For more information about the different types of security advisories, see \"[About the GitHub Advisory database](https://docs.github.com/code-security/security-advisories/global-security-advisories/about-the-github-advisory-database#about-types-of-security-advisories).\"

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SecurityAdvisoriesApi.new
opts = {
  ghsa_id: 'ghsa_id_example', # String | If specified, only advisories with this GHSA (GitHub Security Advisory) identifier will be returned.
  type: 'reviewed', # String | If specified, only advisories of this type will be returned. By default, a request with no other parameters defined will only return reviewed advisories that are not malware.
  cve_id: 'cve_id_example', # String | If specified, only advisories with this CVE (Common Vulnerabilities and Exposures) identifier will be returned.
  ecosystem: OpenapiClient::SecurityAdvisoryEcosystems::RUBYGEMS, # SecurityAdvisoryEcosystems | If specified, only advisories for these ecosystems will be returned.
  severity: 'unknown', # String | If specified, only advisories with these severities will be returned.
  cwes: nil, # SecurityAdvisoriesListGlobalAdvisoriesCwesParameter | If specified, only advisories with these Common Weakness Enumerations (CWEs) will be returned.  Example: `cwes=79,284,22` or `cwes[]=79&cwes[]=284&cwes[]=22`
  is_withdrawn: true, # Boolean | Whether to only return advisories that have been withdrawn.
  affects: nil, # SecurityAdvisoriesListGlobalAdvisoriesAffectsParameter | If specified, only return advisories that affect any of `package` or `package@version`. A maximum of 1000 packages can be specified. If the query parameter causes the URL to exceed the maximum URL length supported by your client, you must specify fewer packages.  Example: `affects=package1,package2@1.0.0,package3@^2.0.0` or `affects[]=package1&affects[]=package2@1.0.0`
  published: 'published_example', # String | If specified, only return advisories that were published on a date or date range.  For more information on the syntax of the date range, see \"[Understanding the search syntax](https://docs.github.com/search-github/getting-started-with-searching-on-github/understanding-the-search-syntax#query-for-dates).\"
  updated: 'updated_example', # String | If specified, only return advisories that were updated on a date or date range.  For more information on the syntax of the date range, see \"[Understanding the search syntax](https://docs.github.com/search-github/getting-started-with-searching-on-github/understanding-the-search-syntax#query-for-dates).\"
  modified: 'modified_example', # String | If specified, only show advisories that were updated or published on a date or date range.  For more information on the syntax of the date range, see \"[Understanding the search syntax](https://docs.github.com/search-github/getting-started-with-searching-on-github/understanding-the-search-syntax#query-for-dates).\"
  before: 'before_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  after: 'after_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  direction: 'asc', # String | The direction to sort the results by.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  sort: 'updated' # String | The property to sort the results by.
}

begin
  # List global security advisories
  result = api_instance.security_advisories_list_global_advisories(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_list_global_advisories: #{e}"
end
```

#### Using the security_advisories_list_global_advisories_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<GlobalAdvisory>>, Integer, Hash)> security_advisories_list_global_advisories_with_http_info(opts)

```ruby
begin
  # List global security advisories
  data, status_code, headers = api_instance.security_advisories_list_global_advisories_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<GlobalAdvisory>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_list_global_advisories_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **ghsa_id** | **String** | If specified, only advisories with this GHSA (GitHub Security Advisory) identifier will be returned. | [optional] |
| **type** | **String** | If specified, only advisories of this type will be returned. By default, a request with no other parameters defined will only return reviewed advisories that are not malware. | [optional][default to &#39;reviewed&#39;] |
| **cve_id** | **String** | If specified, only advisories with this CVE (Common Vulnerabilities and Exposures) identifier will be returned. | [optional] |
| **ecosystem** | [**SecurityAdvisoryEcosystems**](.md) | If specified, only advisories for these ecosystems will be returned. | [optional] |
| **severity** | **String** | If specified, only advisories with these severities will be returned. | [optional] |
| **cwes** | [**SecurityAdvisoriesListGlobalAdvisoriesCwesParameter**](.md) | If specified, only advisories with these Common Weakness Enumerations (CWEs) will be returned.  Example: &#x60;cwes&#x3D;79,284,22&#x60; or &#x60;cwes[]&#x3D;79&amp;cwes[]&#x3D;284&amp;cwes[]&#x3D;22&#x60; | [optional] |
| **is_withdrawn** | **Boolean** | Whether to only return advisories that have been withdrawn. | [optional] |
| **affects** | [**SecurityAdvisoriesListGlobalAdvisoriesAffectsParameter**](.md) | If specified, only return advisories that affect any of &#x60;package&#x60; or &#x60;package@version&#x60;. A maximum of 1000 packages can be specified. If the query parameter causes the URL to exceed the maximum URL length supported by your client, you must specify fewer packages.  Example: &#x60;affects&#x3D;package1,package2@1.0.0,package3@^2.0.0&#x60; or &#x60;affects[]&#x3D;package1&amp;affects[]&#x3D;package2@1.0.0&#x60; | [optional] |
| **published** | **String** | If specified, only return advisories that were published on a date or date range.  For more information on the syntax of the date range, see \&quot;[Understanding the search syntax](https://docs.github.com/search-github/getting-started-with-searching-on-github/understanding-the-search-syntax#query-for-dates).\&quot; | [optional] |
| **updated** | **String** | If specified, only return advisories that were updated on a date or date range.  For more information on the syntax of the date range, see \&quot;[Understanding the search syntax](https://docs.github.com/search-github/getting-started-with-searching-on-github/understanding-the-search-syntax#query-for-dates).\&quot; | [optional] |
| **modified** | **String** | If specified, only show advisories that were updated or published on a date or date range.  For more information on the syntax of the date range, see \&quot;[Understanding the search syntax](https://docs.github.com/search-github/getting-started-with-searching-on-github/understanding-the-search-syntax#query-for-dates).\&quot; | [optional] |
| **before** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |
| **after** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **sort** | **String** | The property to sort the results by. | [optional][default to &#39;published&#39;] |

### Return type

[**Array&lt;GlobalAdvisory&gt;**](GlobalAdvisory.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## security_advisories_list_org_repository_advisories

> <Array<RepositoryAdvisory>> security_advisories_list_org_repository_advisories(org, opts)

List repository security advisories for an organization

Lists repository security advisories for an organization.  The authenticated user must be an owner or security manager for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` or `repository_advisories:write` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SecurityAdvisoriesApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  direction: 'asc', # String | The direction to sort the results by.
  sort: 'created', # String | The property to sort the results by.
  before: 'before_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  after: 'after_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  per_page: 56, # Integer | The number of advisories to return per page. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  state: 'triage' # String | Filter by the state of the repository advisories. Only advisories of this state will be returned.
}

begin
  # List repository security advisories for an organization
  result = api_instance.security_advisories_list_org_repository_advisories(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_list_org_repository_advisories: #{e}"
end
```

#### Using the security_advisories_list_org_repository_advisories_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<RepositoryAdvisory>>, Integer, Hash)> security_advisories_list_org_repository_advisories_with_http_info(org, opts)

```ruby
begin
  # List repository security advisories for an organization
  data, status_code, headers = api_instance.security_advisories_list_org_repository_advisories_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<RepositoryAdvisory>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_list_org_repository_advisories_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **sort** | **String** | The property to sort the results by. | [optional][default to &#39;created&#39;] |
| **before** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |
| **after** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |
| **per_page** | **Integer** | The number of advisories to return per page. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **state** | **String** | Filter by the state of the repository advisories. Only advisories of this state will be returned. | [optional] |

### Return type

[**Array&lt;RepositoryAdvisory&gt;**](RepositoryAdvisory.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, application/scim+json


## security_advisories_list_repository_advisories

> <Array<RepositoryAdvisory>> security_advisories_list_repository_advisories(owner, repo, opts)

List repository security advisories

Lists security advisories in a repository.  The authenticated user can access unpublished security advisories from a repository if they are a security manager or administrator of that repository, or if they are a collaborator on any security advisory.  OAuth app tokens and personal access tokens (classic) need the `repo` or `repository_advisories:read` scope to to get a published security advisory in a private repository, or any unpublished security advisory that the authenticated user has access to.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SecurityAdvisoriesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  direction: 'asc', # String | The direction to sort the results by.
  sort: 'created', # String | The property to sort the results by.
  before: 'before_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  after: 'after_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  per_page: 56, # Integer | The number of advisories to return per page. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  state: 'triage' # String | Filter by state of the repository advisories. Only advisories of this state will be returned.
}

begin
  # List repository security advisories
  result = api_instance.security_advisories_list_repository_advisories(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_list_repository_advisories: #{e}"
end
```

#### Using the security_advisories_list_repository_advisories_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<RepositoryAdvisory>>, Integer, Hash)> security_advisories_list_repository_advisories_with_http_info(owner, repo, opts)

```ruby
begin
  # List repository security advisories
  data, status_code, headers = api_instance.security_advisories_list_repository_advisories_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<RepositoryAdvisory>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_list_repository_advisories_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **sort** | **String** | The property to sort the results by. | [optional][default to &#39;created&#39;] |
| **before** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |
| **after** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |
| **per_page** | **Integer** | The number of advisories to return per page. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **state** | **String** | Filter by state of the repository advisories. Only advisories of this state will be returned. | [optional] |

### Return type

[**Array&lt;RepositoryAdvisory&gt;**](RepositoryAdvisory.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, application/scim+json


## security_advisories_update_repository_advisory

> <RepositoryAdvisory> security_advisories_update_repository_advisory(owner, repo, ghsa_id, repository_advisory_update)

Update a repository security advisory

Update a repository security advisory using its GitHub Security Advisory (GHSA) identifier.  In order to update any security advisory, the authenticated user must be a security manager or administrator of that repository, or a collaborator on the repository security advisory.  OAuth app tokens and personal access tokens (classic) need the `repo` or `repository_advisories:write` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SecurityAdvisoriesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
ghsa_id = 'ghsa_id_example' # String | The GHSA (GitHub Security Advisory) identifier of the advisory.
repository_advisory_update = OpenapiClient::RepositoryAdvisoryUpdate.new # RepositoryAdvisoryUpdate | 

begin
  # Update a repository security advisory
  result = api_instance.security_advisories_update_repository_advisory(owner, repo, ghsa_id, repository_advisory_update)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_update_repository_advisory: #{e}"
end
```

#### Using the security_advisories_update_repository_advisory_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<RepositoryAdvisory>, Integer, Hash)> security_advisories_update_repository_advisory_with_http_info(owner, repo, ghsa_id, repository_advisory_update)

```ruby
begin
  # Update a repository security advisory
  data, status_code, headers = api_instance.security_advisories_update_repository_advisory_with_http_info(owner, repo, ghsa_id, repository_advisory_update)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <RepositoryAdvisory>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecurityAdvisoriesApi->security_advisories_update_repository_advisory_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **ghsa_id** | **String** | The GHSA (GitHub Security Advisory) identifier of the advisory. |  |
| **repository_advisory_update** | [**RepositoryAdvisoryUpdate**](RepositoryAdvisoryUpdate.md) |  |  |

### Return type

[**RepositoryAdvisory**](RepositoryAdvisory.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json
