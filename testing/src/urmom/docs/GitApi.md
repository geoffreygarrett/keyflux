# OpenapiClient::GitApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**git_create_blob**](GitApi.md#git_create_blob) | **POST** /repos/{owner}/{repo}/git/blobs | Create a blob |
| [**git_create_commit**](GitApi.md#git_create_commit) | **POST** /repos/{owner}/{repo}/git/commits | Create a commit |
| [**git_create_ref**](GitApi.md#git_create_ref) | **POST** /repos/{owner}/{repo}/git/refs | Create a reference |
| [**git_create_tag**](GitApi.md#git_create_tag) | **POST** /repos/{owner}/{repo}/git/tags | Create a tag object |
| [**git_create_tree**](GitApi.md#git_create_tree) | **POST** /repos/{owner}/{repo}/git/trees | Create a tree |
| [**git_delete_ref**](GitApi.md#git_delete_ref) | **DELETE** /repos/{owner}/{repo}/git/refs/{ref} | Delete a reference |
| [**git_get_blob**](GitApi.md#git_get_blob) | **GET** /repos/{owner}/{repo}/git/blobs/{file_sha} | Get a blob |
| [**git_get_commit**](GitApi.md#git_get_commit) | **GET** /repos/{owner}/{repo}/git/commits/{commit_sha} | Get a commit object |
| [**git_get_ref**](GitApi.md#git_get_ref) | **GET** /repos/{owner}/{repo}/git/ref/{ref} | Get a reference |
| [**git_get_tag**](GitApi.md#git_get_tag) | **GET** /repos/{owner}/{repo}/git/tags/{tag_sha} | Get a tag |
| [**git_get_tree**](GitApi.md#git_get_tree) | **GET** /repos/{owner}/{repo}/git/trees/{tree_sha} | Get a tree |
| [**git_list_matching_refs**](GitApi.md#git_list_matching_refs) | **GET** /repos/{owner}/{repo}/git/matching-refs/{ref} | List matching references |
| [**git_update_ref**](GitApi.md#git_update_ref) | **PATCH** /repos/{owner}/{repo}/git/refs/{ref} | Update a reference |


## git_create_blob

> <ShortBlob> git_create_blob(owner, repo, git_create_blob_request)

Create a blob



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GitApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
git_create_blob_request = OpenapiClient::GitCreateBlobRequest.new({content: 'content_example'}) # GitCreateBlobRequest | 

begin
  # Create a blob
  result = api_instance.git_create_blob(owner, repo, git_create_blob_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_create_blob: #{e}"
end
```

#### Using the git_create_blob_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ShortBlob>, Integer, Hash)> git_create_blob_with_http_info(owner, repo, git_create_blob_request)

```ruby
begin
  # Create a blob
  data, status_code, headers = api_instance.git_create_blob_with_http_info(owner, repo, git_create_blob_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ShortBlob>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_create_blob_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **git_create_blob_request** | [**GitCreateBlobRequest**](GitCreateBlobRequest.md) |  |  |

### Return type

[**ShortBlob**](ShortBlob.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## git_create_commit

> <GitCommit> git_create_commit(owner, repo, git_create_commit_request)

Create a commit

Creates a new Git [commit object](https://git-scm.com/book/en/v2/Git-Internals-Git-Objects).  **Signature verification object**  The response will include a `verification` object that describes the result of verifying the commit's signature. The following fields are included in the `verification` object:  | Name | Type | Description | | ---- | ---- | ----------- | | `verified` | `boolean` | Indicates whether GitHub considers the signature in this commit to be verified. | | `reason` | `string` | The reason for verified value. Possible values and their meanings are enumerated in the table below. | | `signature` | `string` | The signature that was extracted from the commit. | | `payload` | `string` | The value that was signed. |  These are the possible values for `reason` in the `verification` object:  | Value | Description | | ----- | ----------- | | `expired_key` | The key that made the signature is expired. | | `not_signing_key` | The \"signing\" flag is not among the usage flags in the GPG key that made the signature. | | `gpgverify_error` | There was an error communicating with the signature verification service. | | `gpgverify_unavailable` | The signature verification service is currently unavailable. | | `unsigned` | The object does not include a signature. | | `unknown_signature_type` | A non-PGP signature was found in the commit. | | `no_user` | No user was associated with the `committer` email address in the commit. | | `unverified_email` | The `committer` email address in the commit was associated with a user, but the email address is not verified on their account. | | `bad_email` | The `committer` email address in the commit is not included in the identities of the PGP key that made the signature. | | `unknown_key` | The key that made the signature has not been registered with any user's account. | | `malformed_signature` | There was an error parsing the signature. | | `invalid` | The signature could not be cryptographically verified using the key whose key-id was found in the signature. | | `valid` | None of the above errors applied, so the signature is considered to be verified. |

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GitApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
git_create_commit_request = OpenapiClient::GitCreateCommitRequest.new({message: 'message_example', tree: 'tree_example'}) # GitCreateCommitRequest | 

begin
  # Create a commit
  result = api_instance.git_create_commit(owner, repo, git_create_commit_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_create_commit: #{e}"
end
```

#### Using the git_create_commit_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GitCommit>, Integer, Hash)> git_create_commit_with_http_info(owner, repo, git_create_commit_request)

```ruby
begin
  # Create a commit
  data, status_code, headers = api_instance.git_create_commit_with_http_info(owner, repo, git_create_commit_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GitCommit>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_create_commit_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **git_create_commit_request** | [**GitCreateCommitRequest**](GitCreateCommitRequest.md) |  |  |

### Return type

[**GitCommit**](GitCommit.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## git_create_ref

> <GitRef> git_create_ref(owner, repo, git_create_ref_request)

Create a reference

Creates a reference for your repository. You are unable to create new references for empty repositories, even if the commit SHA-1 hash used exists. Empty repositories are repositories without branches.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GitApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
git_create_ref_request = OpenapiClient::GitCreateRefRequest.new({ref: 'ref_example', sha: 'sha_example'}) # GitCreateRefRequest | 

begin
  # Create a reference
  result = api_instance.git_create_ref(owner, repo, git_create_ref_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_create_ref: #{e}"
end
```

#### Using the git_create_ref_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GitRef>, Integer, Hash)> git_create_ref_with_http_info(owner, repo, git_create_ref_request)

```ruby
begin
  # Create a reference
  data, status_code, headers = api_instance.git_create_ref_with_http_info(owner, repo, git_create_ref_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GitRef>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_create_ref_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **git_create_ref_request** | [**GitCreateRefRequest**](GitCreateRefRequest.md) |  |  |

### Return type

[**GitRef**](GitRef.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## git_create_tag

> <GitTag> git_create_tag(owner, repo, git_create_tag_request)

Create a tag object

Note that creating a tag object does not create the reference that makes a tag in Git. If you want to create an annotated tag in Git, you have to do this call to create the tag object, and then [create](https://docs.github.com/rest/git/refs#create-a-reference) the `refs/tags/[tag]` reference. If you want to create a lightweight tag, you only have to [create](https://docs.github.com/rest/git/refs#create-a-reference) the tag reference - this call would be unnecessary.  **Signature verification object**  The response will include a `verification` object that describes the result of verifying the commit's signature. The following fields are included in the `verification` object:  | Name | Type | Description | | ---- | ---- | ----------- | | `verified` | `boolean` | Indicates whether GitHub considers the signature in this commit to be verified. | | `reason` | `string` | The reason for verified value. Possible values and their meanings are enumerated in table below. | | `signature` | `string` | The signature that was extracted from the commit. | | `payload` | `string` | The value that was signed. |  These are the possible values for `reason` in the `verification` object:  | Value | Description | | ----- | ----------- | | `expired_key` | The key that made the signature is expired. | | `not_signing_key` | The \"signing\" flag is not among the usage flags in the GPG key that made the signature. | | `gpgverify_error` | There was an error communicating with the signature verification service. | | `gpgverify_unavailable` | The signature verification service is currently unavailable. | | `unsigned` | The object does not include a signature. | | `unknown_signature_type` | A non-PGP signature was found in the commit. | | `no_user` | No user was associated with the `committer` email address in the commit. | | `unverified_email` | The `committer` email address in the commit was associated with a user, but the email address is not verified on their account. | | `bad_email` | The `committer` email address in the commit is not included in the identities of the PGP key that made the signature. | | `unknown_key` | The key that made the signature has not been registered with any user's account. | | `malformed_signature` | There was an error parsing the signature. | | `invalid` | The signature could not be cryptographically verified using the key whose key-id was found in the signature. | | `valid` | None of the above errors applied, so the signature is considered to be verified. |

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GitApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
git_create_tag_request = OpenapiClient::GitCreateTagRequest.new({tag: 'tag_example', message: 'message_example', object: 'object_example', type: 'commit'}) # GitCreateTagRequest | 

begin
  # Create a tag object
  result = api_instance.git_create_tag(owner, repo, git_create_tag_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_create_tag: #{e}"
end
```

#### Using the git_create_tag_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GitTag>, Integer, Hash)> git_create_tag_with_http_info(owner, repo, git_create_tag_request)

```ruby
begin
  # Create a tag object
  data, status_code, headers = api_instance.git_create_tag_with_http_info(owner, repo, git_create_tag_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GitTag>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_create_tag_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **git_create_tag_request** | [**GitCreateTagRequest**](GitCreateTagRequest.md) |  |  |

### Return type

[**GitTag**](GitTag.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## git_create_tree

> <GitTree> git_create_tree(owner, repo, git_create_tree_request)

Create a tree

The tree creation API accepts nested entries. If you specify both a tree and a nested path modifying that tree, this endpoint will overwrite the contents of the tree with the new path contents, and create a new tree structure.  If you use this endpoint to add, delete, or modify the file contents in a tree, you will need to commit the tree and then update a branch to point to the commit. For more information see \"[Create a commit](https://docs.github.com/rest/git/commits#create-a-commit)\" and \"[Update a reference](https://docs.github.com/rest/git/refs#update-a-reference).\"  Returns an error if you try to delete a file that does not exist.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GitApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
git_create_tree_request = OpenapiClient::GitCreateTreeRequest.new({tree: [OpenapiClient::GitCreateTreeRequestTreeInner.new]}) # GitCreateTreeRequest | 

begin
  # Create a tree
  result = api_instance.git_create_tree(owner, repo, git_create_tree_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_create_tree: #{e}"
end
```

#### Using the git_create_tree_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GitTree>, Integer, Hash)> git_create_tree_with_http_info(owner, repo, git_create_tree_request)

```ruby
begin
  # Create a tree
  data, status_code, headers = api_instance.git_create_tree_with_http_info(owner, repo, git_create_tree_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GitTree>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_create_tree_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **git_create_tree_request** | [**GitCreateTreeRequest**](GitCreateTreeRequest.md) |  |  |

### Return type

[**GitTree**](GitTree.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## git_delete_ref

> git_delete_ref(owner, repo, ref)

Delete a reference

Deletes the provided reference.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GitApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
ref = 'heads/feature-a' # String | The Git reference. For more information, see \"[Git References](https://git-scm.com/book/en/v2/Git-Internals-Git-References)\" in the Git documentation.

begin
  # Delete a reference
  api_instance.git_delete_ref(owner, repo, ref)
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_delete_ref: #{e}"
end
```

#### Using the git_delete_ref_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> git_delete_ref_with_http_info(owner, repo, ref)

```ruby
begin
  # Delete a reference
  data, status_code, headers = api_instance.git_delete_ref_with_http_info(owner, repo, ref)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_delete_ref_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **ref** | **String** | The Git reference. For more information, see \&quot;[Git References](https://git-scm.com/book/en/v2/Git-Internals-Git-References)\&quot; in the Git documentation. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## git_get_blob

> <Blob> git_get_blob(owner, repo, file_sha)

Get a blob

The `content` in the response will always be Base64 encoded.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw blob data. - **`application/vnd.github+json`**: Returns a JSON representation of the blob with `content` as a base64 encoded string. This is the default if no media type is specified.  **Note** This endpoint supports blobs up to 100 megabytes in size.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GitApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
file_sha = 'file_sha_example' # String | 

begin
  # Get a blob
  result = api_instance.git_get_blob(owner, repo, file_sha)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_get_blob: #{e}"
end
```

#### Using the git_get_blob_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Blob>, Integer, Hash)> git_get_blob_with_http_info(owner, repo, file_sha)

```ruby
begin
  # Get a blob
  data, status_code, headers = api_instance.git_get_blob_with_http_info(owner, repo, file_sha)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Blob>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_get_blob_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **file_sha** | **String** |  |  |

### Return type

[**Blob**](Blob.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## git_get_commit

> <GitCommit> git_get_commit(owner, repo, commit_sha)

Get a commit object

Gets a Git [commit object](https://git-scm.com/book/en/v2/Git-Internals-Git-Objects).  To get the contents of a commit, see \"[Get a commit](/rest/commits/commits#get-a-commit).\"  **Signature verification object**  The response will include a `verification` object that describes the result of verifying the commit's signature. The following fields are included in the `verification` object:  | Name | Type | Description | | ---- | ---- | ----------- | | `verified` | `boolean` | Indicates whether GitHub considers the signature in this commit to be verified. | | `reason` | `string` | The reason for verified value. Possible values and their meanings are enumerated in the table below. | | `signature` | `string` | The signature that was extracted from the commit. | | `payload` | `string` | The value that was signed. |  These are the possible values for `reason` in the `verification` object:  | Value | Description | | ----- | ----------- | | `expired_key` | The key that made the signature is expired. | | `not_signing_key` | The \"signing\" flag is not among the usage flags in the GPG key that made the signature. | | `gpgverify_error` | There was an error communicating with the signature verification service. | | `gpgverify_unavailable` | The signature verification service is currently unavailable. | | `unsigned` | The object does not include a signature. | | `unknown_signature_type` | A non-PGP signature was found in the commit. | | `no_user` | No user was associated with the `committer` email address in the commit. | | `unverified_email` | The `committer` email address in the commit was associated with a user, but the email address is not verified on their account. | | `bad_email` | The `committer` email address in the commit is not included in the identities of the PGP key that made the signature. | | `unknown_key` | The key that made the signature has not been registered with any user's account. | | `malformed_signature` | There was an error parsing the signature. | | `invalid` | The signature could not be cryptographically verified using the key whose key-id was found in the signature. | | `valid` | None of the above errors applied, so the signature is considered to be verified. |

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GitApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
commit_sha = 'commit_sha_example' # String | The SHA of the commit.

begin
  # Get a commit object
  result = api_instance.git_get_commit(owner, repo, commit_sha)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_get_commit: #{e}"
end
```

#### Using the git_get_commit_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GitCommit>, Integer, Hash)> git_get_commit_with_http_info(owner, repo, commit_sha)

```ruby
begin
  # Get a commit object
  data, status_code, headers = api_instance.git_get_commit_with_http_info(owner, repo, commit_sha)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GitCommit>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_get_commit_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **commit_sha** | **String** | The SHA of the commit. |  |

### Return type

[**GitCommit**](GitCommit.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## git_get_ref

> <GitRef> git_get_ref(owner, repo, ref)

Get a reference

Returns a single reference from your Git database. The `:ref` in the URL must be formatted as `heads/<branch name>` for branches and `tags/<tag name>` for tags. If the `:ref` doesn't match an existing ref, a `404` is returned.  **Note:** You need to explicitly [request a pull request](https://docs.github.com/rest/pulls/pulls#get-a-pull-request) to trigger a test merge commit, which checks the mergeability of pull requests. For more information, see \"[Checking mergeability of pull requests](https://docs.github.com/rest/guides/getting-started-with-the-git-database-api#checking-mergeability-of-pull-requests)\".

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GitApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
ref = 'heads/feature-a' # String | The Git reference. For more information, see \"[Git References](https://git-scm.com/book/en/v2/Git-Internals-Git-References)\" in the Git documentation.

begin
  # Get a reference
  result = api_instance.git_get_ref(owner, repo, ref)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_get_ref: #{e}"
end
```

#### Using the git_get_ref_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GitRef>, Integer, Hash)> git_get_ref_with_http_info(owner, repo, ref)

```ruby
begin
  # Get a reference
  data, status_code, headers = api_instance.git_get_ref_with_http_info(owner, repo, ref)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GitRef>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_get_ref_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **ref** | **String** | The Git reference. For more information, see \&quot;[Git References](https://git-scm.com/book/en/v2/Git-Internals-Git-References)\&quot; in the Git documentation. |  |

### Return type

[**GitRef**](GitRef.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## git_get_tag

> <GitTag> git_get_tag(owner, repo, tag_sha)

Get a tag

**Signature verification object**  The response will include a `verification` object that describes the result of verifying the commit's signature. The following fields are included in the `verification` object:  | Name | Type | Description | | ---- | ---- | ----------- | | `verified` | `boolean` | Indicates whether GitHub considers the signature in this commit to be verified. | | `reason` | `string` | The reason for verified value. Possible values and their meanings are enumerated in table below. | | `signature` | `string` | The signature that was extracted from the commit. | | `payload` | `string` | The value that was signed. |  These are the possible values for `reason` in the `verification` object:  | Value | Description | | ----- | ----------- | | `expired_key` | The key that made the signature is expired. | | `not_signing_key` | The \"signing\" flag is not among the usage flags in the GPG key that made the signature. | | `gpgverify_error` | There was an error communicating with the signature verification service. | | `gpgverify_unavailable` | The signature verification service is currently unavailable. | | `unsigned` | The object does not include a signature. | | `unknown_signature_type` | A non-PGP signature was found in the commit. | | `no_user` | No user was associated with the `committer` email address in the commit. | | `unverified_email` | The `committer` email address in the commit was associated with a user, but the email address is not verified on their account. | | `bad_email` | The `committer` email address in the commit is not included in the identities of the PGP key that made the signature. | | `unknown_key` | The key that made the signature has not been registered with any user's account. | | `malformed_signature` | There was an error parsing the signature. | | `invalid` | The signature could not be cryptographically verified using the key whose key-id was found in the signature. | | `valid` | None of the above errors applied, so the signature is considered to be verified. |

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GitApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
tag_sha = 'tag_sha_example' # String | 

begin
  # Get a tag
  result = api_instance.git_get_tag(owner, repo, tag_sha)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_get_tag: #{e}"
end
```

#### Using the git_get_tag_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GitTag>, Integer, Hash)> git_get_tag_with_http_info(owner, repo, tag_sha)

```ruby
begin
  # Get a tag
  data, status_code, headers = api_instance.git_get_tag_with_http_info(owner, repo, tag_sha)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GitTag>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_get_tag_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **tag_sha** | **String** |  |  |

### Return type

[**GitTag**](GitTag.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## git_get_tree

> <GitTree> git_get_tree(owner, repo, tree_sha, opts)

Get a tree

Returns a single tree using the SHA1 value or ref name for that tree.  If `truncated` is `true` in the response then the number of items in the `tree` array exceeded our maximum limit. If you need to fetch more items, use the non-recursive method of fetching trees, and fetch one sub-tree at a time.   **Note**: The limit for the `tree` array is 100,000 entries with a maximum size of 7 MB when using the `recursive` parameter.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GitApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
tree_sha = 'tree_sha_example' # String | The SHA1 value or ref (branch or tag) name of the tree.
opts = {
  recursive: 'recursive_example' # String | Setting this parameter to any value returns the objects or subtrees referenced by the tree specified in `:tree_sha`. For example, setting `recursive` to any of the following will enable returning objects or subtrees: `0`, `1`, `\"true\"`, and `\"false\"`. Omit this parameter to prevent recursively returning objects or subtrees.
}

begin
  # Get a tree
  result = api_instance.git_get_tree(owner, repo, tree_sha, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_get_tree: #{e}"
end
```

#### Using the git_get_tree_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GitTree>, Integer, Hash)> git_get_tree_with_http_info(owner, repo, tree_sha, opts)

```ruby
begin
  # Get a tree
  data, status_code, headers = api_instance.git_get_tree_with_http_info(owner, repo, tree_sha, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GitTree>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_get_tree_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **tree_sha** | **String** | The SHA1 value or ref (branch or tag) name of the tree. |  |
| **recursive** | **String** | Setting this parameter to any value returns the objects or subtrees referenced by the tree specified in &#x60;:tree_sha&#x60;. For example, setting &#x60;recursive&#x60; to any of the following will enable returning objects or subtrees: &#x60;0&#x60;, &#x60;1&#x60;, &#x60;\&quot;true\&quot;&#x60;, and &#x60;\&quot;false\&quot;&#x60;. Omit this parameter to prevent recursively returning objects or subtrees. | [optional] |

### Return type

[**GitTree**](GitTree.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## git_list_matching_refs

> <Array<GitRef>> git_list_matching_refs(owner, repo, ref)

List matching references

Returns an array of references from your Git database that match the supplied name. The `:ref` in the URL must be formatted as `heads/<branch name>` for branches and `tags/<tag name>` for tags. If the `:ref` doesn't exist in the repository, but existing refs start with `:ref`, they will be returned as an array.  When you use this endpoint without providing a `:ref`, it will return an array of all the references from your Git database, including notes and stashes if they exist on the server. Anything in the namespace is returned, not just `heads` and `tags`.  **Note:** You need to explicitly [request a pull request](https://docs.github.com/rest/pulls/pulls#get-a-pull-request) to trigger a test merge commit, which checks the mergeability of pull requests. For more information, see \"[Checking mergeability of pull requests](https://docs.github.com/rest/guides/getting-started-with-the-git-database-api#checking-mergeability-of-pull-requests)\".  If you request matching references for a branch named `feature` but the branch `feature` doesn't exist, the response can still include other matching head refs that start with the word `feature`, such as `featureA` and `featureB`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GitApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
ref = 'heads/feature-a' # String | The Git reference. For more information, see \"[Git References](https://git-scm.com/book/en/v2/Git-Internals-Git-References)\" in the Git documentation.

begin
  # List matching references
  result = api_instance.git_list_matching_refs(owner, repo, ref)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_list_matching_refs: #{e}"
end
```

#### Using the git_list_matching_refs_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<GitRef>>, Integer, Hash)> git_list_matching_refs_with_http_info(owner, repo, ref)

```ruby
begin
  # List matching references
  data, status_code, headers = api_instance.git_list_matching_refs_with_http_info(owner, repo, ref)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<GitRef>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_list_matching_refs_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **ref** | **String** | The Git reference. For more information, see \&quot;[Git References](https://git-scm.com/book/en/v2/Git-Internals-Git-References)\&quot; in the Git documentation. |  |

### Return type

[**Array&lt;GitRef&gt;**](GitRef.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## git_update_ref

> <GitRef> git_update_ref(owner, repo, ref, git_update_ref_request)

Update a reference

Updates the provided reference to point to a new SHA. For more information, see \"[Git References](https://git-scm.com/book/en/v2/Git-Internals-Git-References)\" in the Git documentation.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GitApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
ref = 'heads/feature-a' # String | The Git reference. For more information, see \"[Git References](https://git-scm.com/book/en/v2/Git-Internals-Git-References)\" in the Git documentation.
git_update_ref_request = OpenapiClient::GitUpdateRefRequest.new({sha: 'sha_example'}) # GitUpdateRefRequest | 

begin
  # Update a reference
  result = api_instance.git_update_ref(owner, repo, ref, git_update_ref_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_update_ref: #{e}"
end
```

#### Using the git_update_ref_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GitRef>, Integer, Hash)> git_update_ref_with_http_info(owner, repo, ref, git_update_ref_request)

```ruby
begin
  # Update a reference
  data, status_code, headers = api_instance.git_update_ref_with_http_info(owner, repo, ref, git_update_ref_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GitRef>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitApi->git_update_ref_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **ref** | **String** | The Git reference. For more information, see \&quot;[Git References](https://git-scm.com/book/en/v2/Git-Internals-Git-References)\&quot; in the Git documentation. |  |
| **git_update_ref_request** | [**GitUpdateRefRequest**](GitUpdateRefRequest.md) |  |  |

### Return type

[**GitRef**](GitRef.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

