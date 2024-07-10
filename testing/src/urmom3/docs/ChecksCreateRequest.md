# ChecksCreateRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**name** | **String** | The name of the check. For example, \"code-coverage\". | 
**head_sha** | **String** | The SHA of the commit. | 
**details_url** | Option<**String**> | The URL of the integrator's site that has the full details of the check. If the integrator does not provide this, then the homepage of the GitHub app is used. | [optional]
**external_id** | Option<**String**> | A reference for the run on the integrator's system. | [optional]
**status** | Option<**String**> | The current status of the check run. Only GitHub Actions can set a status of `waiting`, `pending`, or `requested`. | [optional][default to Queued]
**started_at** | Option<**String**> | The time that the check run began. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`. | [optional]
**conclusion** | Option<**String**> | **Required if you provide `completed_at` or a `status` of `completed`**. The final conclusion of the check.  **Note:** Providing `conclusion` will automatically set the `status` parameter to `completed`. You cannot change a check run conclusion to `stale`, only GitHub can set this. | [optional]
**completed_at** | Option<**String**> | The time the check completed. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`. | [optional]
**output** | Option<[**crate::models::ChecksCreateRequestOutput**](checks_create_request_output.md)> |  | [optional]
**actions** | Option<[**Vec<crate::models::ChecksCreateRequestActionsInner>**](checks_create_request_actions_inner.md)> | Displays a button on GitHub that can be clicked to alert your app to do additional tasks. For example, a code linting app can display a button that automatically fixes detected errors. The button created in this object is displayed after the check run completes. When a user clicks the button, GitHub sends the [`check_run.requested_action` webhook](https://docs.github.com/webhooks/event-payloads/#check_run) to your app. Each action includes a `label`, `identifier` and `description`. A maximum of three actions are accepted. To learn more about check runs and requested actions, see \"[Check runs and requested actions](https://docs.github.com/rest/guides/using-the-rest-api-to-interact-with-checks#check-runs-and-requested-actions).\" | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


