# OpenapiClient::PullsCreateReviewRequestCommentsInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **path** | **String** | The relative path to the file that necessitates a review comment. |  |
| **position** | **Integer** | The position in the diff where you want to add a review comment. Note this value is not the same as the line number in the file. The &#x60;position&#x60; value equals the number of lines down from the first \&quot;@@\&quot; hunk header in the file you want to add a comment. The line just below the \&quot;@@\&quot; line is position 1, the next line is position 2, and so on. The position in the diff continues to increase through lines of whitespace and additional hunks until the beginning of a new file. | [optional] |
| **body** | **String** | Text of the review comment. |  |
| **line** | **Integer** |  | [optional] |
| **side** | **String** |  | [optional] |
| **start_line** | **Integer** |  | [optional] |
| **start_side** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PullsCreateReviewRequestCommentsInner.new(
  path: null,
  position: null,
  body: null,
  line: 28,
  side: RIGHT,
  start_line: 26,
  start_side: LEFT
)
```

