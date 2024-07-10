# OpenapiClient::ClassroomApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**classroom_get_a_classroom**](ClassroomApi.md#classroom_get_a_classroom) | **GET** /classrooms/{classroom_id} | Get a classroom |
| [**classroom_get_an_assignment**](ClassroomApi.md#classroom_get_an_assignment) | **GET** /assignments/{assignment_id} | Get an assignment |
| [**classroom_get_assignment_grades**](ClassroomApi.md#classroom_get_assignment_grades) | **GET** /assignments/{assignment_id}/grades | Get assignment grades |
| [**classroom_list_accepted_assigments_for_an_assignment**](ClassroomApi.md#classroom_list_accepted_assigments_for_an_assignment) | **GET** /assignments/{assignment_id}/accepted_assignments | List accepted assignments for an assignment |
| [**classroom_list_assignments_for_a_classroom**](ClassroomApi.md#classroom_list_assignments_for_a_classroom) | **GET** /classrooms/{classroom_id}/assignments | List assignments for a classroom |
| [**classroom_list_classrooms**](ClassroomApi.md#classroom_list_classrooms) | **GET** /classrooms | List classrooms |


## classroom_get_a_classroom

> <Classroom> classroom_get_a_classroom(classroom_id)

Get a classroom

Gets a GitHub Classroom classroom for the current user. Classroom will only be returned if the current user is an administrator of the GitHub Classroom.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ClassroomApi.new
classroom_id = 56 # Integer | The unique identifier of the classroom.

begin
  # Get a classroom
  result = api_instance.classroom_get_a_classroom(classroom_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ClassroomApi->classroom_get_a_classroom: #{e}"
end
```

#### Using the classroom_get_a_classroom_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Classroom>, Integer, Hash)> classroom_get_a_classroom_with_http_info(classroom_id)

```ruby
begin
  # Get a classroom
  data, status_code, headers = api_instance.classroom_get_a_classroom_with_http_info(classroom_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Classroom>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ClassroomApi->classroom_get_a_classroom_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **classroom_id** | **Integer** | The unique identifier of the classroom. |  |

### Return type

[**Classroom**](Classroom.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## classroom_get_an_assignment

> <ClassroomAssignment> classroom_get_an_assignment(assignment_id)

Get an assignment

Gets a GitHub Classroom assignment. Assignment will only be returned if the current user is an administrator of the GitHub Classroom for the assignment.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ClassroomApi.new
assignment_id = 56 # Integer | The unique identifier of the classroom assignment.

begin
  # Get an assignment
  result = api_instance.classroom_get_an_assignment(assignment_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ClassroomApi->classroom_get_an_assignment: #{e}"
end
```

#### Using the classroom_get_an_assignment_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ClassroomAssignment>, Integer, Hash)> classroom_get_an_assignment_with_http_info(assignment_id)

```ruby
begin
  # Get an assignment
  data, status_code, headers = api_instance.classroom_get_an_assignment_with_http_info(assignment_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ClassroomAssignment>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ClassroomApi->classroom_get_an_assignment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **assignment_id** | **Integer** | The unique identifier of the classroom assignment. |  |

### Return type

[**ClassroomAssignment**](ClassroomAssignment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## classroom_get_assignment_grades

> <Array<ClassroomAssignmentGrade>> classroom_get_assignment_grades(assignment_id)

Get assignment grades

Gets grades for a GitHub Classroom assignment. Grades will only be returned if the current user is an administrator of the GitHub Classroom for the assignment.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ClassroomApi.new
assignment_id = 56 # Integer | The unique identifier of the classroom assignment.

begin
  # Get assignment grades
  result = api_instance.classroom_get_assignment_grades(assignment_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ClassroomApi->classroom_get_assignment_grades: #{e}"
end
```

#### Using the classroom_get_assignment_grades_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<ClassroomAssignmentGrade>>, Integer, Hash)> classroom_get_assignment_grades_with_http_info(assignment_id)

```ruby
begin
  # Get assignment grades
  data, status_code, headers = api_instance.classroom_get_assignment_grades_with_http_info(assignment_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<ClassroomAssignmentGrade>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ClassroomApi->classroom_get_assignment_grades_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **assignment_id** | **Integer** | The unique identifier of the classroom assignment. |  |

### Return type

[**Array&lt;ClassroomAssignmentGrade&gt;**](ClassroomAssignmentGrade.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## classroom_list_accepted_assigments_for_an_assignment

> <Array<ClassroomAcceptedAssignment>> classroom_list_accepted_assigments_for_an_assignment(assignment_id, opts)

List accepted assignments for an assignment

Lists any assignment repositories that have been created by students accepting a GitHub Classroom assignment. Accepted assignments will only be returned if the current user is an administrator of the GitHub Classroom for the assignment.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ClassroomApi.new
assignment_id = 56 # Integer | The unique identifier of the classroom assignment.
opts = {
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  per_page: 56 # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List accepted assignments for an assignment
  result = api_instance.classroom_list_accepted_assigments_for_an_assignment(assignment_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ClassroomApi->classroom_list_accepted_assigments_for_an_assignment: #{e}"
end
```

#### Using the classroom_list_accepted_assigments_for_an_assignment_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<ClassroomAcceptedAssignment>>, Integer, Hash)> classroom_list_accepted_assigments_for_an_assignment_with_http_info(assignment_id, opts)

```ruby
begin
  # List accepted assignments for an assignment
  data, status_code, headers = api_instance.classroom_list_accepted_assigments_for_an_assignment_with_http_info(assignment_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<ClassroomAcceptedAssignment>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ClassroomApi->classroom_list_accepted_assigments_for_an_assignment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **assignment_id** | **Integer** | The unique identifier of the classroom assignment. |  |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |

### Return type

[**Array&lt;ClassroomAcceptedAssignment&gt;**](ClassroomAcceptedAssignment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## classroom_list_assignments_for_a_classroom

> <Array<SimpleClassroomAssignment>> classroom_list_assignments_for_a_classroom(classroom_id, opts)

List assignments for a classroom

Lists GitHub Classroom assignments for a classroom. Assignments will only be returned if the current user is an administrator of the GitHub Classroom.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ClassroomApi.new
classroom_id = 56 # Integer | The unique identifier of the classroom.
opts = {
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  per_page: 56 # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List assignments for a classroom
  result = api_instance.classroom_list_assignments_for_a_classroom(classroom_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ClassroomApi->classroom_list_assignments_for_a_classroom: #{e}"
end
```

#### Using the classroom_list_assignments_for_a_classroom_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SimpleClassroomAssignment>>, Integer, Hash)> classroom_list_assignments_for_a_classroom_with_http_info(classroom_id, opts)

```ruby
begin
  # List assignments for a classroom
  data, status_code, headers = api_instance.classroom_list_assignments_for_a_classroom_with_http_info(classroom_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SimpleClassroomAssignment>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ClassroomApi->classroom_list_assignments_for_a_classroom_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **classroom_id** | **Integer** | The unique identifier of the classroom. |  |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |

### Return type

[**Array&lt;SimpleClassroomAssignment&gt;**](SimpleClassroomAssignment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## classroom_list_classrooms

> <Array<SimpleClassroom>> classroom_list_classrooms(opts)

List classrooms

Lists GitHub Classroom classrooms for the current user. Classrooms will only be returned if the current user is an administrator of one or more GitHub Classrooms.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ClassroomApi.new
opts = {
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  per_page: 56 # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List classrooms
  result = api_instance.classroom_list_classrooms(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ClassroomApi->classroom_list_classrooms: #{e}"
end
```

#### Using the classroom_list_classrooms_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SimpleClassroom>>, Integer, Hash)> classroom_list_classrooms_with_http_info(opts)

```ruby
begin
  # List classrooms
  data, status_code, headers = api_instance.classroom_list_classrooms_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SimpleClassroom>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ClassroomApi->classroom_list_classrooms_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |

### Return type

[**Array&lt;SimpleClassroom&gt;**](SimpleClassroom.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

