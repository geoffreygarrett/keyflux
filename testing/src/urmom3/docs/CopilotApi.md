# \CopilotApi

All URIs are relative to *https://api.github.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**copilot_slash_add_copilot_seats_for_teams**](CopilotApi.md#copilot_slash_add_copilot_seats_for_teams) | **POST** /orgs/{org}/copilot/billing/selected_teams | Add teams to the Copilot subscription for an organization
[**copilot_slash_add_copilot_seats_for_users**](CopilotApi.md#copilot_slash_add_copilot_seats_for_users) | **POST** /orgs/{org}/copilot/billing/selected_users | Add users to the Copilot subscription for an organization
[**copilot_slash_cancel_copilot_seat_assignment_for_teams**](CopilotApi.md#copilot_slash_cancel_copilot_seat_assignment_for_teams) | **DELETE** /orgs/{org}/copilot/billing/selected_teams | Remove teams from the Copilot subscription for an organization
[**copilot_slash_cancel_copilot_seat_assignment_for_users**](CopilotApi.md#copilot_slash_cancel_copilot_seat_assignment_for_users) | **DELETE** /orgs/{org}/copilot/billing/selected_users | Remove users from the Copilot subscription for an organization
[**copilot_slash_get_copilot_organization_details**](CopilotApi.md#copilot_slash_get_copilot_organization_details) | **GET** /orgs/{org}/copilot/billing | Get Copilot seat information and settings for an organization
[**copilot_slash_get_copilot_seat_details_for_user**](CopilotApi.md#copilot_slash_get_copilot_seat_details_for_user) | **GET** /orgs/{org}/members/{username}/copilot | Get Copilot seat assignment details for a user
[**copilot_slash_list_copilot_seats**](CopilotApi.md#copilot_slash_list_copilot_seats) | **GET** /orgs/{org}/copilot/billing/seats | List all Copilot seat assignments for an organization
[**copilot_slash_list_copilot_seats_for_enterprise**](CopilotApi.md#copilot_slash_list_copilot_seats_for_enterprise) | **GET** /enterprises/{enterprise}/copilot/billing/seats | List all Copilot seat assignments for an enterprise
[**copilot_slash_usage_metrics_for_enterprise**](CopilotApi.md#copilot_slash_usage_metrics_for_enterprise) | **GET** /enterprises/{enterprise}/copilot/usage | Get a summary of Copilot usage for enterprise members
[**copilot_slash_usage_metrics_for_org**](CopilotApi.md#copilot_slash_usage_metrics_for_org) | **GET** /orgs/{org}/copilot/usage | Get a summary of Copilot usage for organization members



## copilot_slash_add_copilot_seats_for_teams

> crate::models::CopilotAddCopilotSeatsForTeams201Response copilot_slash_add_copilot_seats_for_teams(org, copilot_add_copilot_seats_for_teams_request)
Add teams to the Copilot subscription for an organization

**Note**: This endpoint is in beta and is subject to change.  Purchases a GitHub Copilot seat for all users within each specified team. The organization will be billed accordingly. For more information about Copilot pricing, see \"[Pricing for GitHub Copilot](https://docs.github.com/billing/managing-billing-for-github-copilot/about-billing-for-github-copilot#about-billing-for-github-copilot)\".  Only organization owners can add Copilot seats for their organization members.  In order for an admin to use this endpoint, the organization must have a Copilot Business or Enterprise subscription and a configured suggestion matching policy. For more information about setting up a Copilot subscription, see \"[Setting up a Copilot subscription for your organization](https://docs.github.com/billing/managing-billing-for-github-copilot/managing-your-github-copilot-subscription-for-your-organization-or-enterprise)\". For more information about setting a suggestion matching policy, see \"[Configuring suggestion matching policies for GitHub Copilot in your organization](https://docs.github.com/copilot/managing-copilot/managing-policies-for-github-copilot-in-your-organization#configuring-suggestion-matching-policies-for-github-copilot-in-your-organization)\".  The response will contain the total number of new seats that were created and existing seats that were refreshed.  OAuth app tokens and personal access tokens (classic) need either the `manage_billing:copilot` or `admin:org` scopes to use this endpoint.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**org** | **String** | The organization name. The name is not case sensitive. | [required] |
**copilot_add_copilot_seats_for_teams_request** | [**CopilotAddCopilotSeatsForTeamsRequest**](CopilotAddCopilotSeatsForTeamsRequest.md) |  | [required] |

### Return type

[**crate::models::CopilotAddCopilotSeatsForTeams201Response**](copilot_add_copilot_seats_for_teams_201_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## copilot_slash_add_copilot_seats_for_users

> crate::models::CopilotAddCopilotSeatsForTeams201Response copilot_slash_add_copilot_seats_for_users(org, copilot_add_copilot_seats_for_users_request)
Add users to the Copilot subscription for an organization

**Note**: This endpoint is in beta and is subject to change.  Purchases a GitHub Copilot seat for each user specified. The organization will be billed accordingly. For more information about Copilot pricing, see \"[Pricing for GitHub Copilot](https://docs.github.com/billing/managing-billing-for-github-copilot/about-billing-for-github-copilot#about-billing-for-github-copilot)\".  Only organization owners can add Copilot seats for their organization members.  In order for an admin to use this endpoint, the organization must have a Copilot Business or Enterprise subscription and a configured suggestion matching policy. For more information about setting up a Copilot subscription, see \"[Setting up a Copilot subscription for your organization](https://docs.github.com/billing/managing-billing-for-github-copilot/managing-your-github-copilot-subscription-for-your-organization-or-enterprise)\". For more information about setting a suggestion matching policy, see \"[Configuring suggestion matching policies for GitHub Copilot in your organization](https://docs.github.com/copilot/managing-copilot/managing-policies-for-github-copilot-in-your-organization#configuring-suggestion-matching-policies-for-github-copilot-in-your-organization)\".  The response will contain the total number of new seats that were created and existing seats that were refreshed.  OAuth app tokens and personal access tokens (classic) need either the `manage_billing:copilot` or `admin:org` scopes to use this endpoint.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**org** | **String** | The organization name. The name is not case sensitive. | [required] |
**copilot_add_copilot_seats_for_users_request** | [**CopilotAddCopilotSeatsForUsersRequest**](CopilotAddCopilotSeatsForUsersRequest.md) |  | [required] |

### Return type

[**crate::models::CopilotAddCopilotSeatsForTeams201Response**](copilot_add_copilot_seats_for_teams_201_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## copilot_slash_cancel_copilot_seat_assignment_for_teams

> crate::models::CopilotCancelCopilotSeatAssignmentForTeams200Response copilot_slash_cancel_copilot_seat_assignment_for_teams(org, copilot_cancel_copilot_seat_assignment_for_teams_request)
Remove teams from the Copilot subscription for an organization

**Note**: This endpoint is in beta and is subject to change.  Cancels the Copilot seat assignment for all members of each team specified. This will cause the members of the specified team(s) to lose access to GitHub Copilot at the end of the current billing cycle, and the organization will not be billed further for those users.  For more information about Copilot pricing, see \"[Pricing for GitHub Copilot](https://docs.github.com/billing/managing-billing-for-github-copilot/about-billing-for-github-copilot#about-billing-for-github-copilot)\".  For more information about disabling access to Copilot Business or Enterprise, see \"[Revoking access to GitHub Copilot for specific users in your organization](https://docs.github.com/copilot/managing-copilot/managing-access-for-copilot-in-your-organization#revoking-access-to-github-copilot-for-specific-users-in-your-organization)\".  Only organization owners can cancel Copilot seats for their organization members.  OAuth app tokens and personal access tokens (classic) need either the `manage_billing:copilot` or `admin:org` scopes to use this endpoint.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**org** | **String** | The organization name. The name is not case sensitive. | [required] |
**copilot_cancel_copilot_seat_assignment_for_teams_request** | [**CopilotCancelCopilotSeatAssignmentForTeamsRequest**](CopilotCancelCopilotSeatAssignmentForTeamsRequest.md) |  | [required] |

### Return type

[**crate::models::CopilotCancelCopilotSeatAssignmentForTeams200Response**](copilot_cancel_copilot_seat_assignment_for_teams_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## copilot_slash_cancel_copilot_seat_assignment_for_users

> crate::models::CopilotCancelCopilotSeatAssignmentForTeams200Response copilot_slash_cancel_copilot_seat_assignment_for_users(org, copilot_cancel_copilot_seat_assignment_for_users_request)
Remove users from the Copilot subscription for an organization

**Note**: This endpoint is in beta and is subject to change.  Cancels the Copilot seat assignment for each user specified. This will cause the specified users to lose access to GitHub Copilot at the end of the current billing cycle, and the organization will not be billed further for those users.  For more information about Copilot pricing, see \"[Pricing for GitHub Copilot](https://docs.github.com/billing/managing-billing-for-github-copilot/about-billing-for-github-copilot#about-billing-for-github-copilot)\".  For more information about disabling access to Copilot Business or Enterprise, see \"[Revoking access to GitHub Copilot for specific users in your organization](https://docs.github.com/copilot/managing-copilot/managing-access-for-copilot-in-your-organization#revoking-access-to-github-copilot-for-specific-users-in-your-organization)\".  Only organization owners can cancel Copilot seats for their organization members.  OAuth app tokens and personal access tokens (classic) need either the `manage_billing:copilot` or `admin:org` scopes to use this endpoint.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**org** | **String** | The organization name. The name is not case sensitive. | [required] |
**copilot_cancel_copilot_seat_assignment_for_users_request** | [**CopilotCancelCopilotSeatAssignmentForUsersRequest**](CopilotCancelCopilotSeatAssignmentForUsersRequest.md) |  | [required] |

### Return type

[**crate::models::CopilotCancelCopilotSeatAssignmentForTeams200Response**](copilot_cancel_copilot_seat_assignment_for_teams_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## copilot_slash_get_copilot_organization_details

> crate::models::CopilotOrganizationDetails copilot_slash_get_copilot_organization_details(org)
Get Copilot seat information and settings for an organization

**Note**: This endpoint is in beta and is subject to change.  Gets information about an organization's Copilot subscription, including seat breakdown and feature policies. To configure these settings, go to your organization's settings on GitHub.com. For more information, see \"[Managing policies for Copilot in your organization](https://docs.github.com/copilot/managing-copilot/managing-policies-for-copilot-business-in-your-organization)\".  Only organization owners can view details about the organization's Copilot Business or Copilot Enterprise subscription.  OAuth app tokens and personal access tokens (classic) need either the `manage_billing:copilot` or `read:org` scopes to use this endpoint.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**org** | **String** | The organization name. The name is not case sensitive. | [required] |

### Return type

[**crate::models::CopilotOrganizationDetails**](copilot-organization-details.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## copilot_slash_get_copilot_seat_details_for_user

> crate::models::CopilotSeatDetails copilot_slash_get_copilot_seat_details_for_user(org, username)
Get Copilot seat assignment details for a user

**Note**: This endpoint is in beta and is subject to change.  Gets the GitHub Copilot seat assignment details for a member of an organization who currently has access to GitHub Copilot.  Only organization owners can view Copilot seat assignment details for members of their organization.  OAuth app tokens and personal access tokens (classic) need either the `manage_billing:copilot` or `read:org` scopes to use this endpoint.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**org** | **String** | The organization name. The name is not case sensitive. | [required] |
**username** | **String** | The handle for the GitHub user account. | [required] |

### Return type

[**crate::models::CopilotSeatDetails**](copilot-seat-details.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## copilot_slash_list_copilot_seats

> crate::models::CopilotListCopilotSeats200Response copilot_slash_list_copilot_seats(org, page, per_page)
List all Copilot seat assignments for an organization

**Note**: This endpoint is in beta and is subject to change.  Lists all active Copilot seats for an organization with a Copilot Business or Copilot Enterprise subscription. Only organization owners can view assigned seats.  OAuth app tokens and personal access tokens (classic) need either the `manage_billing:copilot` or `read:org` scopes to use this endpoint.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**org** | **String** | The organization name. The name is not case sensitive. | [required] |
**page** | Option<**i32**> | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\" |  |[default to 1]
**per_page** | Option<**i32**> | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\" |  |[default to 50]

### Return type

[**crate::models::CopilotListCopilotSeats200Response**](copilot_list_copilot_seats_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## copilot_slash_list_copilot_seats_for_enterprise

> crate::models::CopilotListCopilotSeatsForEnterprise200Response copilot_slash_list_copilot_seats_for_enterprise(enterprise, page, per_page)
List all Copilot seat assignments for an enterprise

**Note**: This endpoint is in beta and is subject to change.  Lists all active Copilot seats across organizations or enterprise teams for an enterprise with a Copilot Business or Copilot Enterprise subscription.  Users with access through multiple organizations or enterprise teams will only be counted toward `total_seats` once.  For each organization or enterprise team which grants Copilot access to a user, a seat detail object will appear in the `seats` array.  Only enterprise owners and billing managers can view assigned Copilot seats across their child organizations or enterprise teams.  Personal access tokens (classic) need either the `manage_billing:copilot` or `read:enterprise` scopes to use this endpoint.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**enterprise** | **String** | The slug version of the enterprise name. You can also substitute this value with the enterprise id. | [required] |
**page** | Option<**i32**> | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\" |  |[default to 1]
**per_page** | Option<**i32**> | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\" |  |[default to 50]

### Return type

[**crate::models::CopilotListCopilotSeatsForEnterprise200Response**](copilot_list_copilot_seats_for_enterprise_200_response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## copilot_slash_usage_metrics_for_enterprise

> Vec<crate::models::CopilotUsageMetrics> copilot_slash_usage_metrics_for_enterprise(enterprise, since, until, page, per_page)
Get a summary of Copilot usage for enterprise members

**Note**: This endpoint is in beta and is subject to change.  You can use this endpoint to see a daily breakdown of aggregated usage metrics for Copilot completions and Copilot Chat in the IDE for all users across organizations with access to Copilot within your enterprise, with a further breakdown of suggestions, acceptances, and number of active users by editor and language for each day. See the response schema tab for detailed metrics definitions.  The response contains metrics for the prior 28 days. Usage metrics are processed once per day for the previous day, and the response will only include data up until yesterday. In order for an end user to be counted towards these metrics, they must have telemetry enabled in their IDE.  Only owners and billing managers can view Copilot usage metrics for the enterprise.  OAuth app tokens and personal access tokens (classic) need either the `manage_billing:copilot` or `read:enterprise` scopes to use this endpoint.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**enterprise** | **String** | The slug version of the enterprise name. You can also substitute this value with the enterprise id. | [required] |
**since** | Option<**String**> | Show usage metrics since this date. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format (`YYYY-MM-DDTHH:MM:SSZ`). Maximum value is 28 days ago. |  |
**until** | Option<**String**> | Show usage metrics until this date. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format (`YYYY-MM-DDTHH:MM:SSZ`) and should not preceed the `since` date if it is passed. |  |
**page** | Option<**i32**> | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\" |  |[default to 1]
**per_page** | Option<**i32**> | The number of days of metrics to display per page (max 28). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\" |  |[default to 28]

### Return type

[**Vec<crate::models::CopilotUsageMetrics>**](copilot-usage-metrics.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## copilot_slash_usage_metrics_for_org

> Vec<crate::models::CopilotUsageMetrics> copilot_slash_usage_metrics_for_org(org, since, until, page, per_page)
Get a summary of Copilot usage for organization members

**Note**: This endpoint is in beta and is subject to change.  You can use this endpoint to see a daily breakdown of aggregated usage metrics for Copilot completions and Copilot Chat in the IDE across an organization, with a further breakdown of suggestions, acceptances, and number of active users by editor and language for each day. See the response schema tab for detailed metrics definitions.  The response contains metrics for the prior 28 days. Usage metrics are processed once per day for the previous day, and the response will only include data up until yesterday. In order for an end user to be counted towards these metrics, they must have telemetry enabled in their IDE.  Organization owners, and owners and billing managers of the parent enterprise, can view Copilot usage metrics.  OAuth app tokens and personal access tokens (classic) need either the `manage_billing:copilot`, `read:org`, or `read:enterprise` scopes to use this endpoint.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**org** | **String** | The organization name. The name is not case sensitive. | [required] |
**since** | Option<**String**> | Show usage metrics since this date. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format (`YYYY-MM-DDTHH:MM:SSZ`). Maximum value is 28 days ago. |  |
**until** | Option<**String**> | Show usage metrics until this date. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format (`YYYY-MM-DDTHH:MM:SSZ`) and should not preceed the `since` date if it is passed. |  |
**page** | Option<**i32**> | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\" |  |[default to 1]
**per_page** | Option<**i32**> | The number of days of metrics to display per page (max 28). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\" |  |[default to 28]

### Return type

[**Vec<crate::models::CopilotUsageMetrics>**](copilot-usage-metrics.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

