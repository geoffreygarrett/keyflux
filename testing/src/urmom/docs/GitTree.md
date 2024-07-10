# OpenapiClient::GitTree

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **sha** | **String** |  |  |
| **url** | **String** |  |  |
| **truncated** | **Boolean** |  |  |
| **tree** | [**Array&lt;GitTreeTreeInner&gt;**](GitTreeTreeInner.md) | Objects specifying a tree structure |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::GitTree.new(
  sha: null,
  url: null,
  truncated: null,
  tree: [{&quot;path&quot;:&quot;file.rb&quot;,&quot;mode&quot;:&quot;100644&quot;,&quot;type&quot;:&quot;blob&quot;,&quot;size&quot;:30,&quot;sha&quot;:&quot;44b4fc6d56897b048c772eb4087f854f46256132&quot;,&quot;url&quot;:&quot;https://api.github.com/repos/octocat/Hello-World/git/blobs/44b4fc6d56897b048c772eb4087f854f46256132&quot;,&quot;properties&quot;:{&quot;path&quot;:{&quot;type&quot;:&quot;string&quot;},&quot;mode&quot;:{&quot;type&quot;:&quot;string&quot;},&quot;type&quot;:{&quot;type&quot;:&quot;string&quot;},&quot;size&quot;:{&quot;type&quot;:&quot;integer&quot;},&quot;sha&quot;:{&quot;type&quot;:&quot;string&quot;},&quot;url&quot;:{&quot;type&quot;:&quot;string&quot;}},&quot;required&quot;:[&quot;path&quot;,&quot;mode&quot;,&quot;type&quot;,&quot;sha&quot;,&quot;url&quot;,&quot;size&quot;]}]
)
```

