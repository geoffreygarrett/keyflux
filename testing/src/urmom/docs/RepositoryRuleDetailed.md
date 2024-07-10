# OpenapiClient::RepositoryRuleDetailed

## Class instance methods

### `openapi_one_of`

Returns the list of classes defined in oneOf.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::RepositoryRuleDetailed.openapi_one_of
# =>
# [
#   :'RepositoryRuleBranchNamePattern',
#   :'RepositoryRuleCodeScanning',
#   :'RepositoryRuleCommitAuthorEmailPattern',
#   :'RepositoryRuleCommitMessagePattern',
#   :'RepositoryRuleCommitterEmailPattern',
#   :'RepositoryRuleCreation',
#   :'RepositoryRuleDeletion',
#   :'RepositoryRuleNonFastForward',
#   :'RepositoryRulePullRequest',
#   :'RepositoryRuleRequiredDeployments',
#   :'RepositoryRuleRequiredLinearHistory',
#   :'RepositoryRuleRequiredSignatures',
#   :'RepositoryRuleRequiredStatusChecks',
#   :'RepositoryRuleTagNamePattern',
#   :'RepositoryRuleUpdate',
#   :'RepositoryRuleWorkflows'
# ]
```

### build

Find the appropriate object from the `openapi_one_of` list and casts the data into it.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::RepositoryRuleDetailed.build(data)
# => #<RepositoryRuleBranchNamePattern:0x00007fdd4aab02a0>

OpenapiClient::RepositoryRuleDetailed.build(data_that_doesnt_match)
# => nil
```

#### Parameters

| Name | Type | Description |
| ---- | ---- | ----------- |
| **data** | **Mixed** | data to be matched against the list of oneOf items |

#### Return type

- `RepositoryRuleBranchNamePattern`
- `RepositoryRuleCodeScanning`
- `RepositoryRuleCommitAuthorEmailPattern`
- `RepositoryRuleCommitMessagePattern`
- `RepositoryRuleCommitterEmailPattern`
- `RepositoryRuleCreation`
- `RepositoryRuleDeletion`
- `RepositoryRuleNonFastForward`
- `RepositoryRulePullRequest`
- `RepositoryRuleRequiredDeployments`
- `RepositoryRuleRequiredLinearHistory`
- `RepositoryRuleRequiredSignatures`
- `RepositoryRuleRequiredStatusChecks`
- `RepositoryRuleTagNamePattern`
- `RepositoryRuleUpdate`
- `RepositoryRuleWorkflows`
- `nil` (if no type matches)

