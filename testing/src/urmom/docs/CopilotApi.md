# OpenapiClient::CopilotApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**copilot_add_copilot_seats_for_teams**](CopilotApi.md#copilot_add_copilot_seats_for_teams) | **POST** /orgs/{org}/copilot/billing/selected_teams | Add teams to the Copilot subscription for an organization |
| [**copilot_add_copilot_seats_for_users**](CopilotApi.md#copilot_add_copilot_seats_for_users) | **POST** /orgs/{org}/copilot/billing/selected_users | Add users to the Copilot subscription for an organization |
| [**copilot_cancel_copilot_seat_assignment_for_teams**](CopilotApi.md#copilot_cancel_copilot_seat_assignment_for_teams) | **DELETE** /orgs/{org}/copilot/billing/selected_teams | Remove teams from the Copilot subscription for an organization |
| [**copilot_cancel_copilot_seat_assignment_for_users**](CopilotApi.md#copilot_cancel_copilot_seat_assignment_for_users) | **DELETE** /orgs/{org}/copilot/billing/selected_users | Remove users from the Copilot subscription for an organization |
| [**copilot_get_copilot_organization_details**](CopilotApi.md#copilot_get_copilot_organization_details) | **GET** /orgs/{org}/copilot/billing | Get Copilot seat information and settings for an organization |
| [**copilot_get_copilot_seat_details_for_user**](CopilotApi.md#copilot_get_copilot_seat_details_for_user) | **GET** /orgs/{org}/members/{username}/copilot | Get Copilot seat assignment details for a user |
| [**copilot_list_copilot_seats**](CopilotApi.md#copilot_list_copilot_seats) | **GET** /orgs/{org}/copilot/billing/seats | List all Copilot seat assignments for an organization |
| [**copilot_list_copilot_seats_for_enterprise**](CopilotApi.md#copilot_list_copilot_seats_for_enterprise) | **GET** /enterprises/{enterprise}/copilot/billing/seats | List all Copilot seat assignments for an enterprise |
| [**copilot_usage_metrics_for_enterprise**](CopilotApi.md#copilot_usage_metrics_for_enterprise) | **GET** /enterprises/{enterprise}/copilot/usage | Get a summary of Copilot usage for enterprise members |
| [**copilot_usage_metrics_for_org**](CopilotApi.md#copilot_usage_metrics_for_org) | **GET** /orgs/{org}/copilot/usage | Get a summary of Copilot usage for organization members |


## copilot_add_copilot_seats_for_teams

> <CopilotAddCopilotSeatsForTeams201Response> copilot_add_copilot_seats_for_teams(org, copilot_add_copilot_seats_for_teams_request)

Add teams to the Copilot subscription for an organization

**Note**: This endpoint is in beta and is subject to change.  Purchases a GitHub Copilot seat for all users within each specified team. The organization will be billed accordingly. For more information about Copilot pricing, see \"[Pricing for GitHub Copilot](https://docs.github.com/billing/managing-billing-for-github-copilot/about-billing-for-github-copilot#about-billing-for-github-copilot)\".  Only organization owners can add Copilot seats for their organization members.  In order for an admin to use this endpoint, the organization must have a Copilot Business or Enterprise subscription and a configured suggestion matching policy. For more information about setting up a Copilot subscription, see \"[Setting up a Copilot subscription for your organization](https://docs.github.com/billing/managing-billing-for-github-copilot/managing-your-github-copilot-subscription-for-your-organization-or-enterprise)\". For more information about setting a suggestion matching policy, see \"[Configuring suggestion matching policies for GitHub Copilot in your organization](https://docs.github.com/copilot/managing-copilot/managing-policies-for-github-copilot-in-your-organization#configuring-suggestion-matching-policies-for-github-copilot-in-your-organization)\".  The response will contain the total number of new seats that were created and existing seats that were refreshed.  OAuth app tokens and personal access tokens (classic) need either the `manage_billing:copilot` or `admin:org` scopes to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CopilotApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
copilot_add_copilot_seats_for_teams_request = OpenapiClient::CopilotAddCopilotSeatsForTeamsRequest.new({selected_teams: ['selected_teams_example']}) # CopilotAddCopilotSeatsForTeamsRequest | 

begin
  # Add teams to the Copilot subscription for an organization
  result = api_instance.copilot_add_copilot_seats_for_teams(org, copilot_add_copilot_seats_for_teams_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_add_copilot_seats_for_teams: #{e}"
end
```

#### Using the copilot_add_copilot_seats_for_teams_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CopilotAddCopilotSeatsForTeams201Response>, Integer, Hash)> copilot_add_copilot_seats_for_teams_with_http_info(org, copilot_add_copilot_seats_for_teams_request)

```ruby
begin
  # Add teams to the Copilot subscription for an organization
  data, status_code, headers = api_instance.copilot_add_copilot_seats_for_teams_with_http_info(org, copilot_add_copilot_seats_for_teams_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CopilotAddCopilotSeatsForTeams201Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_add_copilot_seats_for_teams_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **copilot_add_copilot_seats_for_teams_request** | [**CopilotAddCopilotSeatsForTeamsRequest**](CopilotAddCopilotSeatsForTeamsRequest.md) |  |  |

### Return type

[**CopilotAddCopilotSeatsForTeams201Response**](CopilotAddCopilotSeatsForTeams201Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## copilot_add_copilot_seats_for_users

> <CopilotAddCopilotSeatsForTeams201Response> copilot_add_copilot_seats_for_users(org, copilot_add_copilot_seats_for_users_request)

Add users to the Copilot subscription for an organization

**Note**: This endpoint is in beta and is subject to change.  Purchases a GitHub Copilot seat for each user specified. The organization will be billed accordingly. For more information about Copilot pricing, see \"[Pricing for GitHub Copilot](https://docs.github.com/billing/managing-billing-for-github-copilot/about-billing-for-github-copilot#about-billing-for-github-copilot)\".  Only organization owners can add Copilot seats for their organization members.  In order for an admin to use this endpoint, the organization must have a Copilot Business or Enterprise subscription and a configured suggestion matching policy. For more information about setting up a Copilot subscription, see \"[Setting up a Copilot subscription for your organization](https://docs.github.com/billing/managing-billing-for-github-copilot/managing-your-github-copilot-subscription-for-your-organization-or-enterprise)\". For more information about setting a suggestion matching policy, see \"[Configuring suggestion matching policies for GitHub Copilot in your organization](https://docs.github.com/copilot/managing-copilot/managing-policies-for-github-copilot-in-your-organization#configuring-suggestion-matching-policies-for-github-copilot-in-your-organization)\".  The response will contain the total number of new seats that were created and existing seats that were refreshed.  OAuth app tokens and personal access tokens (classic) need either the `manage_billing:copilot` or `admin:org` scopes to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CopilotApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
copilot_add_copilot_seats_for_users_request = OpenapiClient::CopilotAddCopilotSeatsForUsersRequest.new({selected_usernames: ['selected_usernames_example']}) # CopilotAddCopilotSeatsForUsersRequest | 

begin
  # Add users to the Copilot subscription for an organization
  result = api_instance.copilot_add_copilot_seats_for_users(org, copilot_add_copilot_seats_for_users_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_add_copilot_seats_for_users: #{e}"
end
```

#### Using the copilot_add_copilot_seats_for_users_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CopilotAddCopilotSeatsForTeams201Response>, Integer, Hash)> copilot_add_copilot_seats_for_users_with_http_info(org, copilot_add_copilot_seats_for_users_request)

```ruby
begin
  # Add users to the Copilot subscription for an organization
  data, status_code, headers = api_instance.copilot_add_copilot_seats_for_users_with_http_info(org, copilot_add_copilot_seats_for_users_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CopilotAddCopilotSeatsForTeams201Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_add_copilot_seats_for_users_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **copilot_add_copilot_seats_for_users_request** | [**CopilotAddCopilotSeatsForUsersRequest**](CopilotAddCopilotSeatsForUsersRequest.md) |  |  |

### Return type

[**CopilotAddCopilotSeatsForTeams201Response**](CopilotAddCopilotSeatsForTeams201Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## copilot_cancel_copilot_seat_assignment_for_teams

> <CopilotCancelCopilotSeatAssignmentForTeams200Response> copilot_cancel_copilot_seat_assignment_for_teams(org, copilot_cancel_copilot_seat_assignment_for_teams_request)

Remove teams from the Copilot subscription for an organization

**Note**: This endpoint is in beta and is subject to change.  Cancels the Copilot seat assignment for all members of each team specified. This will cause the members of the specified team(s) to lose access to GitHub Copilot at the end of the current billing cycle, and the organization will not be billed further for those users.  For more information about Copilot pricing, see \"[Pricing for GitHub Copilot](https://docs.github.com/billing/managing-billing-for-github-copilot/about-billing-for-github-copilot#about-billing-for-github-copilot)\".  For more information about disabling access to Copilot Business or Enterprise, see \"[Revoking access to GitHub Copilot for specific users in your organization](https://docs.github.com/copilot/managing-copilot/managing-access-for-copilot-in-your-organization#revoking-access-to-github-copilot-for-specific-users-in-your-organization)\".  Only organization owners can cancel Copilot seats for their organization members.  OAuth app tokens and personal access tokens (classic) need either the `manage_billing:copilot` or `admin:org` scopes to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CopilotApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
copilot_cancel_copilot_seat_assignment_for_teams_request = OpenapiClient::CopilotCancelCopilotSeatAssignmentForTeamsRequest.new({selected_teams: ['selected_teams_example']}) # CopilotCancelCopilotSeatAssignmentForTeamsRequest | 

begin
  # Remove teams from the Copilot subscription for an organization
  result = api_instance.copilot_cancel_copilot_seat_assignment_for_teams(org, copilot_cancel_copilot_seat_assignment_for_teams_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_cancel_copilot_seat_assignment_for_teams: #{e}"
end
```

#### Using the copilot_cancel_copilot_seat_assignment_for_teams_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CopilotCancelCopilotSeatAssignmentForTeams200Response>, Integer, Hash)> copilot_cancel_copilot_seat_assignment_for_teams_with_http_info(org, copilot_cancel_copilot_seat_assignment_for_teams_request)

```ruby
begin
  # Remove teams from the Copilot subscription for an organization
  data, status_code, headers = api_instance.copilot_cancel_copilot_seat_assignment_for_teams_with_http_info(org, copilot_cancel_copilot_seat_assignment_for_teams_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CopilotCancelCopilotSeatAssignmentForTeams200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_cancel_copilot_seat_assignment_for_teams_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **copilot_cancel_copilot_seat_assignment_for_teams_request** | [**CopilotCancelCopilotSeatAssignmentForTeamsRequest**](CopilotCancelCopilotSeatAssignmentForTeamsRequest.md) |  |  |

### Return type

[**CopilotCancelCopilotSeatAssignmentForTeams200Response**](CopilotCancelCopilotSeatAssignmentForTeams200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## copilot_cancel_copilot_seat_assignment_for_users

> <CopilotCancelCopilotSeatAssignmentForTeams200Response> copilot_cancel_copilot_seat_assignment_for_users(org, copilot_cancel_copilot_seat_assignment_for_users_request)

Remove users from the Copilot subscription for an organization

**Note**: This endpoint is in beta and is subject to change.  Cancels the Copilot seat assignment for each user specified. This will cause the specified users to lose access to GitHub Copilot at the end of the current billing cycle, and the organization will not be billed further for those users.  For more information about Copilot pricing, see \"[Pricing for GitHub Copilot](https://docs.github.com/billing/managing-billing-for-github-copilot/about-billing-for-github-copilot#about-billing-for-github-copilot)\".  For more information about disabling access to Copilot Business or Enterprise, see \"[Revoking access to GitHub Copilot for specific users in your organization](https://docs.github.com/copilot/managing-copilot/managing-access-for-copilot-in-your-organization#revoking-access-to-github-copilot-for-specific-users-in-your-organization)\".  Only organization owners can cancel Copilot seats for their organization members.  OAuth app tokens and personal access tokens (classic) need either the `manage_billing:copilot` or `admin:org` scopes to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CopilotApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
copilot_cancel_copilot_seat_assignment_for_users_request = OpenapiClient::CopilotCancelCopilotSeatAssignmentForUsersRequest.new({selected_usernames: ['selected_usernames_example']}) # CopilotCancelCopilotSeatAssignmentForUsersRequest | 

begin
  # Remove users from the Copilot subscription for an organization
  result = api_instance.copilot_cancel_copilot_seat_assignment_for_users(org, copilot_cancel_copilot_seat_assignment_for_users_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_cancel_copilot_seat_assignment_for_users: #{e}"
end
```

#### Using the copilot_cancel_copilot_seat_assignment_for_users_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CopilotCancelCopilotSeatAssignmentForTeams200Response>, Integer, Hash)> copilot_cancel_copilot_seat_assignment_for_users_with_http_info(org, copilot_cancel_copilot_seat_assignment_for_users_request)

```ruby
begin
  # Remove users from the Copilot subscription for an organization
  data, status_code, headers = api_instance.copilot_cancel_copilot_seat_assignment_for_users_with_http_info(org, copilot_cancel_copilot_seat_assignment_for_users_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CopilotCancelCopilotSeatAssignmentForTeams200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_cancel_copilot_seat_assignment_for_users_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **copilot_cancel_copilot_seat_assignment_for_users_request** | [**CopilotCancelCopilotSeatAssignmentForUsersRequest**](CopilotCancelCopilotSeatAssignmentForUsersRequest.md) |  |  |

### Return type

[**CopilotCancelCopilotSeatAssignmentForTeams200Response**](CopilotCancelCopilotSeatAssignmentForTeams200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## copilot_get_copilot_organization_details

> <CopilotOrganizationDetails> copilot_get_copilot_organization_details(org)

Get Copilot seat information and settings for an organization

**Note**: This endpoint is in beta and is subject to change.  Gets information about an organization's Copilot subscription, including seat breakdown and feature policies. To configure these settings, go to your organization's settings on GitHub.com. For more information, see \"[Managing policies for Copilot in your organization](https://docs.github.com/copilot/managing-copilot/managing-policies-for-copilot-business-in-your-organization)\".  Only organization owners can view details about the organization's Copilot Business or Copilot Enterprise subscription.  OAuth app tokens and personal access tokens (classic) need either the `manage_billing:copilot` or `read:org` scopes to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CopilotApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Get Copilot seat information and settings for an organization
  result = api_instance.copilot_get_copilot_organization_details(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_get_copilot_organization_details: #{e}"
end
```

#### Using the copilot_get_copilot_organization_details_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CopilotOrganizationDetails>, Integer, Hash)> copilot_get_copilot_organization_details_with_http_info(org)

```ruby
begin
  # Get Copilot seat information and settings for an organization
  data, status_code, headers = api_instance.copilot_get_copilot_organization_details_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CopilotOrganizationDetails>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_get_copilot_organization_details_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**CopilotOrganizationDetails**](CopilotOrganizationDetails.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## copilot_get_copilot_seat_details_for_user

> <CopilotSeatDetails> copilot_get_copilot_seat_details_for_user(org, username)

Get Copilot seat assignment details for a user

**Note**: This endpoint is in beta and is subject to change.  Gets the GitHub Copilot seat assignment details for a member of an organization who currently has access to GitHub Copilot.  Only organization owners can view Copilot seat assignment details for members of their organization.  OAuth app tokens and personal access tokens (classic) need either the `manage_billing:copilot` or `read:org` scopes to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CopilotApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Get Copilot seat assignment details for a user
  result = api_instance.copilot_get_copilot_seat_details_for_user(org, username)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_get_copilot_seat_details_for_user: #{e}"
end
```

#### Using the copilot_get_copilot_seat_details_for_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CopilotSeatDetails>, Integer, Hash)> copilot_get_copilot_seat_details_for_user_with_http_info(org, username)

```ruby
begin
  # Get Copilot seat assignment details for a user
  data, status_code, headers = api_instance.copilot_get_copilot_seat_details_for_user_with_http_info(org, username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CopilotSeatDetails>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_get_copilot_seat_details_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

[**CopilotSeatDetails**](CopilotSeatDetails.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## copilot_list_copilot_seats

> <CopilotListCopilotSeats200Response> copilot_list_copilot_seats(org, opts)

List all Copilot seat assignments for an organization

**Note**: This endpoint is in beta and is subject to change.  Lists all active Copilot seats for an organization with a Copilot Business or Copilot Enterprise subscription. Only organization owners can view assigned seats.  OAuth app tokens and personal access tokens (classic) need either the `manage_billing:copilot` or `read:org` scopes to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CopilotApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  per_page: 56 # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List all Copilot seat assignments for an organization
  result = api_instance.copilot_list_copilot_seats(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_list_copilot_seats: #{e}"
end
```

#### Using the copilot_list_copilot_seats_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CopilotListCopilotSeats200Response>, Integer, Hash)> copilot_list_copilot_seats_with_http_info(org, opts)

```ruby
begin
  # List all Copilot seat assignments for an organization
  data, status_code, headers = api_instance.copilot_list_copilot_seats_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CopilotListCopilotSeats200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_list_copilot_seats_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 50] |

### Return type

[**CopilotListCopilotSeats200Response**](CopilotListCopilotSeats200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## copilot_list_copilot_seats_for_enterprise

> <CopilotListCopilotSeatsForEnterprise200Response> copilot_list_copilot_seats_for_enterprise(enterprise, opts)

List all Copilot seat assignments for an enterprise

**Note**: This endpoint is in beta and is subject to change.  Lists all active Copilot seats across organizations or enterprise teams for an enterprise with a Copilot Business or Copilot Enterprise subscription.  Users with access through multiple organizations or enterprise teams will only be counted toward `total_seats` once.  For each organization or enterprise team which grants Copilot access to a user, a seat detail object will appear in the `seats` array.  Only enterprise owners and billing managers can view assigned Copilot seats across their child organizations or enterprise teams.  Personal access tokens (classic) need either the `manage_billing:copilot` or `read:enterprise` scopes to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CopilotApi.new
enterprise = 'enterprise_example' # String | The slug version of the enterprise name. You can also substitute this value with the enterprise id.
opts = {
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  per_page: 56 # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List all Copilot seat assignments for an enterprise
  result = api_instance.copilot_list_copilot_seats_for_enterprise(enterprise, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_list_copilot_seats_for_enterprise: #{e}"
end
```

#### Using the copilot_list_copilot_seats_for_enterprise_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CopilotListCopilotSeatsForEnterprise200Response>, Integer, Hash)> copilot_list_copilot_seats_for_enterprise_with_http_info(enterprise, opts)

```ruby
begin
  # List all Copilot seat assignments for an enterprise
  data, status_code, headers = api_instance.copilot_list_copilot_seats_for_enterprise_with_http_info(enterprise, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CopilotListCopilotSeatsForEnterprise200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_list_copilot_seats_for_enterprise_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **enterprise** | **String** | The slug version of the enterprise name. You can also substitute this value with the enterprise id. |  |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 50] |

### Return type

[**CopilotListCopilotSeatsForEnterprise200Response**](CopilotListCopilotSeatsForEnterprise200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## copilot_usage_metrics_for_enterprise

> <Array<CopilotUsageMetrics>> copilot_usage_metrics_for_enterprise(enterprise, opts)

Get a summary of Copilot usage for enterprise members

**Note**: This endpoint is in beta and is subject to change.  You can use this endpoint to see a daily breakdown of aggregated usage metrics for Copilot completions and Copilot Chat in the IDE for all users across organizations with access to Copilot within your enterprise, with a further breakdown of suggestions, acceptances, and number of active users by editor and language for each day. See the response schema tab for detailed metrics definitions.  The response contains metrics for the prior 28 days. Usage metrics are processed once per day for the previous day, and the response will only include data up until yesterday. In order for an end user to be counted towards these metrics, they must have telemetry enabled in their IDE.  Only owners and billing managers can view Copilot usage metrics for the enterprise.  OAuth app tokens and personal access tokens (classic) need either the `manage_billing:copilot` or `read:enterprise` scopes to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CopilotApi.new
enterprise = 'enterprise_example' # String | The slug version of the enterprise name. You can also substitute this value with the enterprise id.
opts = {
  since: 'since_example', # String | Show usage metrics since this date. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format (`YYYY-MM-DDTHH:MM:SSZ`). Maximum value is 28 days ago.
  _until: '_until_example', # String | Show usage metrics until this date. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format (`YYYY-MM-DDTHH:MM:SSZ`) and should not preceed the `since` date if it is passed.
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  per_page: 56 # Integer | The number of days of metrics to display per page (max 28). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # Get a summary of Copilot usage for enterprise members
  result = api_instance.copilot_usage_metrics_for_enterprise(enterprise, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_usage_metrics_for_enterprise: #{e}"
end
```

#### Using the copilot_usage_metrics_for_enterprise_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<CopilotUsageMetrics>>, Integer, Hash)> copilot_usage_metrics_for_enterprise_with_http_info(enterprise, opts)

```ruby
begin
  # Get a summary of Copilot usage for enterprise members
  data, status_code, headers = api_instance.copilot_usage_metrics_for_enterprise_with_http_info(enterprise, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<CopilotUsageMetrics>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_usage_metrics_for_enterprise_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **enterprise** | **String** | The slug version of the enterprise name. You can also substitute this value with the enterprise id. |  |
| **since** | **String** | Show usage metrics since this date. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format (&#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;). Maximum value is 28 days ago. | [optional] |
| **_until** | **String** | Show usage metrics until this date. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format (&#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;) and should not preceed the &#x60;since&#x60; date if it is passed. | [optional] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **per_page** | **Integer** | The number of days of metrics to display per page (max 28). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 28] |

### Return type

[**Array&lt;CopilotUsageMetrics&gt;**](CopilotUsageMetrics.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## copilot_usage_metrics_for_org

> <Array<CopilotUsageMetrics>> copilot_usage_metrics_for_org(org, opts)

Get a summary of Copilot usage for organization members

**Note**: This endpoint is in beta and is subject to change.  You can use this endpoint to see a daily breakdown of aggregated usage metrics for Copilot completions and Copilot Chat in the IDE across an organization, with a further breakdown of suggestions, acceptances, and number of active users by editor and language for each day. See the response schema tab for detailed metrics definitions.  The response contains metrics for the prior 28 days. Usage metrics are processed once per day for the previous day, and the response will only include data up until yesterday. In order for an end user to be counted towards these metrics, they must have telemetry enabled in their IDE.  Organization owners, and owners and billing managers of the parent enterprise, can view Copilot usage metrics.  OAuth app tokens and personal access tokens (classic) need either the `manage_billing:copilot`, `read:org`, or `read:enterprise` scopes to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CopilotApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  since: 'since_example', # String | Show usage metrics since this date. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format (`YYYY-MM-DDTHH:MM:SSZ`). Maximum value is 28 days ago.
  _until: '_until_example', # String | Show usage metrics until this date. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format (`YYYY-MM-DDTHH:MM:SSZ`) and should not preceed the `since` date if it is passed.
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  per_page: 56 # Integer | The number of days of metrics to display per page (max 28). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # Get a summary of Copilot usage for organization members
  result = api_instance.copilot_usage_metrics_for_org(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_usage_metrics_for_org: #{e}"
end
```

#### Using the copilot_usage_metrics_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<CopilotUsageMetrics>>, Integer, Hash)> copilot_usage_metrics_for_org_with_http_info(org, opts)

```ruby
begin
  # Get a summary of Copilot usage for organization members
  data, status_code, headers = api_instance.copilot_usage_metrics_for_org_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<CopilotUsageMetrics>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CopilotApi->copilot_usage_metrics_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **since** | **String** | Show usage metrics since this date. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format (&#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;). Maximum value is 28 days ago. | [optional] |
| **_until** | **String** | Show usage metrics until this date. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format (&#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;) and should not preceed the &#x60;since&#x60; date if it is passed. | [optional] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **per_page** | **Integer** | The number of days of metrics to display per page (max 28). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 28] |

### Return type

[**Array&lt;CopilotUsageMetrics&gt;**](CopilotUsageMetrics.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

