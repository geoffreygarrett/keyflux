# OpenapiClient::Import

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **vcs** | **String** |  |  |
| **use_lfs** | **Boolean** |  | [optional] |
| **vcs_url** | **String** | The URL of the originating repository. |  |
| **svc_root** | **String** |  | [optional] |
| **tfvc_project** | **String** |  | [optional] |
| **status** | **String** |  |  |
| **status_text** | **String** |  | [optional] |
| **failed_step** | **String** |  | [optional] |
| **error_message** | **String** |  | [optional] |
| **import_percent** | **Integer** |  | [optional] |
| **commit_count** | **Integer** |  | [optional] |
| **push_percent** | **Integer** |  | [optional] |
| **has_large_files** | **Boolean** |  | [optional] |
| **large_files_size** | **Integer** |  | [optional] |
| **large_files_count** | **Integer** |  | [optional] |
| **project_choices** | [**Array&lt;ImportProjectChoicesInner&gt;**](ImportProjectChoicesInner.md) |  | [optional] |
| **message** | **String** |  | [optional] |
| **authors_count** | **Integer** |  | [optional] |
| **url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **authors_url** | **String** |  |  |
| **repository_url** | **String** |  |  |
| **svn_root** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Import.new(
  vcs: null,
  use_lfs: null,
  vcs_url: null,
  svc_root: null,
  tfvc_project: null,
  status: null,
  status_text: null,
  failed_step: null,
  error_message: null,
  import_percent: null,
  commit_count: null,
  push_percent: null,
  has_large_files: null,
  large_files_size: null,
  large_files_count: null,
  project_choices: null,
  message: null,
  authors_count: null,
  url: null,
  html_url: null,
  authors_url: null,
  repository_url: null,
  svn_root: null
)
```

