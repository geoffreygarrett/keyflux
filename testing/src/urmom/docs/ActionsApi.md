# OpenapiClient::ActionsApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**actions_add_custom_labels_to_self_hosted_runner_for_org**](ActionsApi.md#actions_add_custom_labels_to_self_hosted_runner_for_org) | **POST** /orgs/{org}/actions/runners/{runner_id}/labels | Add custom labels to a self-hosted runner for an organization |
| [**actions_add_custom_labels_to_self_hosted_runner_for_repo**](ActionsApi.md#actions_add_custom_labels_to_self_hosted_runner_for_repo) | **POST** /repos/{owner}/{repo}/actions/runners/{runner_id}/labels | Add custom labels to a self-hosted runner for a repository |
| [**actions_add_selected_repo_to_org_secret**](ActionsApi.md#actions_add_selected_repo_to_org_secret) | **PUT** /orgs/{org}/actions/secrets/{secret_name}/repositories/{repository_id} | Add selected repository to an organization secret |
| [**actions_add_selected_repo_to_org_variable**](ActionsApi.md#actions_add_selected_repo_to_org_variable) | **PUT** /orgs/{org}/actions/variables/{name}/repositories/{repository_id} | Add selected repository to an organization variable |
| [**actions_approve_workflow_run**](ActionsApi.md#actions_approve_workflow_run) | **POST** /repos/{owner}/{repo}/actions/runs/{run_id}/approve | Approve a workflow run for a fork pull request |
| [**actions_cancel_workflow_run**](ActionsApi.md#actions_cancel_workflow_run) | **POST** /repos/{owner}/{repo}/actions/runs/{run_id}/cancel | Cancel a workflow run |
| [**actions_create_environment_variable**](ActionsApi.md#actions_create_environment_variable) | **POST** /repos/{owner}/{repo}/environments/{environment_name}/variables | Create an environment variable |
| [**actions_create_or_update_environment_secret**](ActionsApi.md#actions_create_or_update_environment_secret) | **PUT** /repos/{owner}/{repo}/environments/{environment_name}/secrets/{secret_name} | Create or update an environment secret |
| [**actions_create_or_update_org_secret**](ActionsApi.md#actions_create_or_update_org_secret) | **PUT** /orgs/{org}/actions/secrets/{secret_name} | Create or update an organization secret |
| [**actions_create_or_update_repo_secret**](ActionsApi.md#actions_create_or_update_repo_secret) | **PUT** /repos/{owner}/{repo}/actions/secrets/{secret_name} | Create or update a repository secret |
| [**actions_create_org_variable**](ActionsApi.md#actions_create_org_variable) | **POST** /orgs/{org}/actions/variables | Create an organization variable |
| [**actions_create_registration_token_for_org**](ActionsApi.md#actions_create_registration_token_for_org) | **POST** /orgs/{org}/actions/runners/registration-token | Create a registration token for an organization |
| [**actions_create_registration_token_for_repo**](ActionsApi.md#actions_create_registration_token_for_repo) | **POST** /repos/{owner}/{repo}/actions/runners/registration-token | Create a registration token for a repository |
| [**actions_create_remove_token_for_org**](ActionsApi.md#actions_create_remove_token_for_org) | **POST** /orgs/{org}/actions/runners/remove-token | Create a remove token for an organization |
| [**actions_create_remove_token_for_repo**](ActionsApi.md#actions_create_remove_token_for_repo) | **POST** /repos/{owner}/{repo}/actions/runners/remove-token | Create a remove token for a repository |
| [**actions_create_repo_variable**](ActionsApi.md#actions_create_repo_variable) | **POST** /repos/{owner}/{repo}/actions/variables | Create a repository variable |
| [**actions_create_workflow_dispatch**](ActionsApi.md#actions_create_workflow_dispatch) | **POST** /repos/{owner}/{repo}/actions/workflows/{workflow_id}/dispatches | Create a workflow dispatch event |
| [**actions_delete_actions_cache_by_id**](ActionsApi.md#actions_delete_actions_cache_by_id) | **DELETE** /repos/{owner}/{repo}/actions/caches/{cache_id} | Delete a GitHub Actions cache for a repository (using a cache ID) |
| [**actions_delete_actions_cache_by_key**](ActionsApi.md#actions_delete_actions_cache_by_key) | **DELETE** /repos/{owner}/{repo}/actions/caches | Delete GitHub Actions caches for a repository (using a cache key) |
| [**actions_delete_artifact**](ActionsApi.md#actions_delete_artifact) | **DELETE** /repos/{owner}/{repo}/actions/artifacts/{artifact_id} | Delete an artifact |
| [**actions_delete_environment_secret**](ActionsApi.md#actions_delete_environment_secret) | **DELETE** /repos/{owner}/{repo}/environments/{environment_name}/secrets/{secret_name} | Delete an environment secret |
| [**actions_delete_environment_variable**](ActionsApi.md#actions_delete_environment_variable) | **DELETE** /repos/{owner}/{repo}/environments/{environment_name}/variables/{name} | Delete an environment variable |
| [**actions_delete_org_secret**](ActionsApi.md#actions_delete_org_secret) | **DELETE** /orgs/{org}/actions/secrets/{secret_name} | Delete an organization secret |
| [**actions_delete_org_variable**](ActionsApi.md#actions_delete_org_variable) | **DELETE** /orgs/{org}/actions/variables/{name} | Delete an organization variable |
| [**actions_delete_repo_secret**](ActionsApi.md#actions_delete_repo_secret) | **DELETE** /repos/{owner}/{repo}/actions/secrets/{secret_name} | Delete a repository secret |
| [**actions_delete_repo_variable**](ActionsApi.md#actions_delete_repo_variable) | **DELETE** /repos/{owner}/{repo}/actions/variables/{name} | Delete a repository variable |
| [**actions_delete_self_hosted_runner_from_org**](ActionsApi.md#actions_delete_self_hosted_runner_from_org) | **DELETE** /orgs/{org}/actions/runners/{runner_id} | Delete a self-hosted runner from an organization |
| [**actions_delete_self_hosted_runner_from_repo**](ActionsApi.md#actions_delete_self_hosted_runner_from_repo) | **DELETE** /repos/{owner}/{repo}/actions/runners/{runner_id} | Delete a self-hosted runner from a repository |
| [**actions_delete_workflow_run**](ActionsApi.md#actions_delete_workflow_run) | **DELETE** /repos/{owner}/{repo}/actions/runs/{run_id} | Delete a workflow run |
| [**actions_delete_workflow_run_logs**](ActionsApi.md#actions_delete_workflow_run_logs) | **DELETE** /repos/{owner}/{repo}/actions/runs/{run_id}/logs | Delete workflow run logs |
| [**actions_disable_selected_repository_github_actions_organization**](ActionsApi.md#actions_disable_selected_repository_github_actions_organization) | **DELETE** /orgs/{org}/actions/permissions/repositories/{repository_id} | Disable a selected repository for GitHub Actions in an organization |
| [**actions_disable_workflow**](ActionsApi.md#actions_disable_workflow) | **PUT** /repos/{owner}/{repo}/actions/workflows/{workflow_id}/disable | Disable a workflow |
| [**actions_download_artifact**](ActionsApi.md#actions_download_artifact) | **GET** /repos/{owner}/{repo}/actions/artifacts/{artifact_id}/{archive_format} | Download an artifact |
| [**actions_download_job_logs_for_workflow_run**](ActionsApi.md#actions_download_job_logs_for_workflow_run) | **GET** /repos/{owner}/{repo}/actions/jobs/{job_id}/logs | Download job logs for a workflow run |
| [**actions_download_workflow_run_attempt_logs**](ActionsApi.md#actions_download_workflow_run_attempt_logs) | **GET** /repos/{owner}/{repo}/actions/runs/{run_id}/attempts/{attempt_number}/logs | Download workflow run attempt logs |
| [**actions_download_workflow_run_logs**](ActionsApi.md#actions_download_workflow_run_logs) | **GET** /repos/{owner}/{repo}/actions/runs/{run_id}/logs | Download workflow run logs |
| [**actions_enable_selected_repository_github_actions_organization**](ActionsApi.md#actions_enable_selected_repository_github_actions_organization) | **PUT** /orgs/{org}/actions/permissions/repositories/{repository_id} | Enable a selected repository for GitHub Actions in an organization |
| [**actions_enable_workflow**](ActionsApi.md#actions_enable_workflow) | **PUT** /repos/{owner}/{repo}/actions/workflows/{workflow_id}/enable | Enable a workflow |
| [**actions_force_cancel_workflow_run**](ActionsApi.md#actions_force_cancel_workflow_run) | **POST** /repos/{owner}/{repo}/actions/runs/{run_id}/force-cancel | Force cancel a workflow run |
| [**actions_generate_runner_jitconfig_for_org**](ActionsApi.md#actions_generate_runner_jitconfig_for_org) | **POST** /orgs/{org}/actions/runners/generate-jitconfig | Create configuration for a just-in-time runner for an organization |
| [**actions_generate_runner_jitconfig_for_repo**](ActionsApi.md#actions_generate_runner_jitconfig_for_repo) | **POST** /repos/{owner}/{repo}/actions/runners/generate-jitconfig | Create configuration for a just-in-time runner for a repository |
| [**actions_get_actions_cache_list**](ActionsApi.md#actions_get_actions_cache_list) | **GET** /repos/{owner}/{repo}/actions/caches | List GitHub Actions caches for a repository |
| [**actions_get_actions_cache_usage**](ActionsApi.md#actions_get_actions_cache_usage) | **GET** /repos/{owner}/{repo}/actions/cache/usage | Get GitHub Actions cache usage for a repository |
| [**actions_get_actions_cache_usage_by_repo_for_org**](ActionsApi.md#actions_get_actions_cache_usage_by_repo_for_org) | **GET** /orgs/{org}/actions/cache/usage-by-repository | List repositories with GitHub Actions cache usage for an organization |
| [**actions_get_actions_cache_usage_for_org**](ActionsApi.md#actions_get_actions_cache_usage_for_org) | **GET** /orgs/{org}/actions/cache/usage | Get GitHub Actions cache usage for an organization |
| [**actions_get_allowed_actions_organization**](ActionsApi.md#actions_get_allowed_actions_organization) | **GET** /orgs/{org}/actions/permissions/selected-actions | Get allowed actions and reusable workflows for an organization |
| [**actions_get_allowed_actions_repository**](ActionsApi.md#actions_get_allowed_actions_repository) | **GET** /repos/{owner}/{repo}/actions/permissions/selected-actions | Get allowed actions and reusable workflows for a repository |
| [**actions_get_artifact**](ActionsApi.md#actions_get_artifact) | **GET** /repos/{owner}/{repo}/actions/artifacts/{artifact_id} | Get an artifact |
| [**actions_get_custom_oidc_sub_claim_for_repo**](ActionsApi.md#actions_get_custom_oidc_sub_claim_for_repo) | **GET** /repos/{owner}/{repo}/actions/oidc/customization/sub | Get the customization template for an OIDC subject claim for a repository |
| [**actions_get_environment_public_key**](ActionsApi.md#actions_get_environment_public_key) | **GET** /repos/{owner}/{repo}/environments/{environment_name}/secrets/public-key | Get an environment public key |
| [**actions_get_environment_secret**](ActionsApi.md#actions_get_environment_secret) | **GET** /repos/{owner}/{repo}/environments/{environment_name}/secrets/{secret_name} | Get an environment secret |
| [**actions_get_environment_variable**](ActionsApi.md#actions_get_environment_variable) | **GET** /repos/{owner}/{repo}/environments/{environment_name}/variables/{name} | Get an environment variable |
| [**actions_get_github_actions_default_workflow_permissions_organization**](ActionsApi.md#actions_get_github_actions_default_workflow_permissions_organization) | **GET** /orgs/{org}/actions/permissions/workflow | Get default workflow permissions for an organization |
| [**actions_get_github_actions_default_workflow_permissions_repository**](ActionsApi.md#actions_get_github_actions_default_workflow_permissions_repository) | **GET** /repos/{owner}/{repo}/actions/permissions/workflow | Get default workflow permissions for a repository |
| [**actions_get_github_actions_permissions_organization**](ActionsApi.md#actions_get_github_actions_permissions_organization) | **GET** /orgs/{org}/actions/permissions | Get GitHub Actions permissions for an organization |
| [**actions_get_github_actions_permissions_repository**](ActionsApi.md#actions_get_github_actions_permissions_repository) | **GET** /repos/{owner}/{repo}/actions/permissions | Get GitHub Actions permissions for a repository |
| [**actions_get_job_for_workflow_run**](ActionsApi.md#actions_get_job_for_workflow_run) | **GET** /repos/{owner}/{repo}/actions/jobs/{job_id} | Get a job for a workflow run |
| [**actions_get_org_public_key**](ActionsApi.md#actions_get_org_public_key) | **GET** /orgs/{org}/actions/secrets/public-key | Get an organization public key |
| [**actions_get_org_secret**](ActionsApi.md#actions_get_org_secret) | **GET** /orgs/{org}/actions/secrets/{secret_name} | Get an organization secret |
| [**actions_get_org_variable**](ActionsApi.md#actions_get_org_variable) | **GET** /orgs/{org}/actions/variables/{name} | Get an organization variable |
| [**actions_get_pending_deployments_for_run**](ActionsApi.md#actions_get_pending_deployments_for_run) | **GET** /repos/{owner}/{repo}/actions/runs/{run_id}/pending_deployments | Get pending deployments for a workflow run |
| [**actions_get_repo_public_key**](ActionsApi.md#actions_get_repo_public_key) | **GET** /repos/{owner}/{repo}/actions/secrets/public-key | Get a repository public key |
| [**actions_get_repo_secret**](ActionsApi.md#actions_get_repo_secret) | **GET** /repos/{owner}/{repo}/actions/secrets/{secret_name} | Get a repository secret |
| [**actions_get_repo_variable**](ActionsApi.md#actions_get_repo_variable) | **GET** /repos/{owner}/{repo}/actions/variables/{name} | Get a repository variable |
| [**actions_get_reviews_for_run**](ActionsApi.md#actions_get_reviews_for_run) | **GET** /repos/{owner}/{repo}/actions/runs/{run_id}/approvals | Get the review history for a workflow run |
| [**actions_get_self_hosted_runner_for_org**](ActionsApi.md#actions_get_self_hosted_runner_for_org) | **GET** /orgs/{org}/actions/runners/{runner_id} | Get a self-hosted runner for an organization |
| [**actions_get_self_hosted_runner_for_repo**](ActionsApi.md#actions_get_self_hosted_runner_for_repo) | **GET** /repos/{owner}/{repo}/actions/runners/{runner_id} | Get a self-hosted runner for a repository |
| [**actions_get_workflow**](ActionsApi.md#actions_get_workflow) | **GET** /repos/{owner}/{repo}/actions/workflows/{workflow_id} | Get a workflow |
| [**actions_get_workflow_access_to_repository**](ActionsApi.md#actions_get_workflow_access_to_repository) | **GET** /repos/{owner}/{repo}/actions/permissions/access | Get the level of access for workflows outside of the repository |
| [**actions_get_workflow_run**](ActionsApi.md#actions_get_workflow_run) | **GET** /repos/{owner}/{repo}/actions/runs/{run_id} | Get a workflow run |
| [**actions_get_workflow_run_attempt**](ActionsApi.md#actions_get_workflow_run_attempt) | **GET** /repos/{owner}/{repo}/actions/runs/{run_id}/attempts/{attempt_number} | Get a workflow run attempt |
| [**actions_get_workflow_run_usage**](ActionsApi.md#actions_get_workflow_run_usage) | **GET** /repos/{owner}/{repo}/actions/runs/{run_id}/timing | Get workflow run usage |
| [**actions_get_workflow_usage**](ActionsApi.md#actions_get_workflow_usage) | **GET** /repos/{owner}/{repo}/actions/workflows/{workflow_id}/timing | Get workflow usage |
| [**actions_list_artifacts_for_repo**](ActionsApi.md#actions_list_artifacts_for_repo) | **GET** /repos/{owner}/{repo}/actions/artifacts | List artifacts for a repository |
| [**actions_list_environment_secrets**](ActionsApi.md#actions_list_environment_secrets) | **GET** /repos/{owner}/{repo}/environments/{environment_name}/secrets | List environment secrets |
| [**actions_list_environment_variables**](ActionsApi.md#actions_list_environment_variables) | **GET** /repos/{owner}/{repo}/environments/{environment_name}/variables | List environment variables |
| [**actions_list_jobs_for_workflow_run**](ActionsApi.md#actions_list_jobs_for_workflow_run) | **GET** /repos/{owner}/{repo}/actions/runs/{run_id}/jobs | List jobs for a workflow run |
| [**actions_list_jobs_for_workflow_run_attempt**](ActionsApi.md#actions_list_jobs_for_workflow_run_attempt) | **GET** /repos/{owner}/{repo}/actions/runs/{run_id}/attempts/{attempt_number}/jobs | List jobs for a workflow run attempt |
| [**actions_list_labels_for_self_hosted_runner_for_org**](ActionsApi.md#actions_list_labels_for_self_hosted_runner_for_org) | **GET** /orgs/{org}/actions/runners/{runner_id}/labels | List labels for a self-hosted runner for an organization |
| [**actions_list_labels_for_self_hosted_runner_for_repo**](ActionsApi.md#actions_list_labels_for_self_hosted_runner_for_repo) | **GET** /repos/{owner}/{repo}/actions/runners/{runner_id}/labels | List labels for a self-hosted runner for a repository |
| [**actions_list_org_secrets**](ActionsApi.md#actions_list_org_secrets) | **GET** /orgs/{org}/actions/secrets | List organization secrets |
| [**actions_list_org_variables**](ActionsApi.md#actions_list_org_variables) | **GET** /orgs/{org}/actions/variables | List organization variables |
| [**actions_list_repo_organization_secrets**](ActionsApi.md#actions_list_repo_organization_secrets) | **GET** /repos/{owner}/{repo}/actions/organization-secrets | List repository organization secrets |
| [**actions_list_repo_organization_variables**](ActionsApi.md#actions_list_repo_organization_variables) | **GET** /repos/{owner}/{repo}/actions/organization-variables | List repository organization variables |
| [**actions_list_repo_secrets**](ActionsApi.md#actions_list_repo_secrets) | **GET** /repos/{owner}/{repo}/actions/secrets | List repository secrets |
| [**actions_list_repo_variables**](ActionsApi.md#actions_list_repo_variables) | **GET** /repos/{owner}/{repo}/actions/variables | List repository variables |
| [**actions_list_repo_workflows**](ActionsApi.md#actions_list_repo_workflows) | **GET** /repos/{owner}/{repo}/actions/workflows | List repository workflows |
| [**actions_list_runner_applications_for_org**](ActionsApi.md#actions_list_runner_applications_for_org) | **GET** /orgs/{org}/actions/runners/downloads | List runner applications for an organization |
| [**actions_list_runner_applications_for_repo**](ActionsApi.md#actions_list_runner_applications_for_repo) | **GET** /repos/{owner}/{repo}/actions/runners/downloads | List runner applications for a repository |
| [**actions_list_selected_repos_for_org_secret**](ActionsApi.md#actions_list_selected_repos_for_org_secret) | **GET** /orgs/{org}/actions/secrets/{secret_name}/repositories | List selected repositories for an organization secret |
| [**actions_list_selected_repos_for_org_variable**](ActionsApi.md#actions_list_selected_repos_for_org_variable) | **GET** /orgs/{org}/actions/variables/{name}/repositories | List selected repositories for an organization variable |
| [**actions_list_selected_repositories_enabled_github_actions_organization**](ActionsApi.md#actions_list_selected_repositories_enabled_github_actions_organization) | **GET** /orgs/{org}/actions/permissions/repositories | List selected repositories enabled for GitHub Actions in an organization |
| [**actions_list_self_hosted_runners_for_org**](ActionsApi.md#actions_list_self_hosted_runners_for_org) | **GET** /orgs/{org}/actions/runners | List self-hosted runners for an organization |
| [**actions_list_self_hosted_runners_for_repo**](ActionsApi.md#actions_list_self_hosted_runners_for_repo) | **GET** /repos/{owner}/{repo}/actions/runners | List self-hosted runners for a repository |
| [**actions_list_workflow_run_artifacts**](ActionsApi.md#actions_list_workflow_run_artifacts) | **GET** /repos/{owner}/{repo}/actions/runs/{run_id}/artifacts | List workflow run artifacts |
| [**actions_list_workflow_runs**](ActionsApi.md#actions_list_workflow_runs) | **GET** /repos/{owner}/{repo}/actions/workflows/{workflow_id}/runs | List workflow runs for a workflow |
| [**actions_list_workflow_runs_for_repo**](ActionsApi.md#actions_list_workflow_runs_for_repo) | **GET** /repos/{owner}/{repo}/actions/runs | List workflow runs for a repository |
| [**actions_re_run_job_for_workflow_run**](ActionsApi.md#actions_re_run_job_for_workflow_run) | **POST** /repos/{owner}/{repo}/actions/jobs/{job_id}/rerun | Re-run a job from a workflow run |
| [**actions_re_run_workflow**](ActionsApi.md#actions_re_run_workflow) | **POST** /repos/{owner}/{repo}/actions/runs/{run_id}/rerun | Re-run a workflow |
| [**actions_re_run_workflow_failed_jobs**](ActionsApi.md#actions_re_run_workflow_failed_jobs) | **POST** /repos/{owner}/{repo}/actions/runs/{run_id}/rerun-failed-jobs | Re-run failed jobs from a workflow run |
| [**actions_remove_all_custom_labels_from_self_hosted_runner_for_org**](ActionsApi.md#actions_remove_all_custom_labels_from_self_hosted_runner_for_org) | **DELETE** /orgs/{org}/actions/runners/{runner_id}/labels | Remove all custom labels from a self-hosted runner for an organization |
| [**actions_remove_all_custom_labels_from_self_hosted_runner_for_repo**](ActionsApi.md#actions_remove_all_custom_labels_from_self_hosted_runner_for_repo) | **DELETE** /repos/{owner}/{repo}/actions/runners/{runner_id}/labels | Remove all custom labels from a self-hosted runner for a repository |
| [**actions_remove_custom_label_from_self_hosted_runner_for_org**](ActionsApi.md#actions_remove_custom_label_from_self_hosted_runner_for_org) | **DELETE** /orgs/{org}/actions/runners/{runner_id}/labels/{name} | Remove a custom label from a self-hosted runner for an organization |
| [**actions_remove_custom_label_from_self_hosted_runner_for_repo**](ActionsApi.md#actions_remove_custom_label_from_self_hosted_runner_for_repo) | **DELETE** /repos/{owner}/{repo}/actions/runners/{runner_id}/labels/{name} | Remove a custom label from a self-hosted runner for a repository |
| [**actions_remove_selected_repo_from_org_secret**](ActionsApi.md#actions_remove_selected_repo_from_org_secret) | **DELETE** /orgs/{org}/actions/secrets/{secret_name}/repositories/{repository_id} | Remove selected repository from an organization secret |
| [**actions_remove_selected_repo_from_org_variable**](ActionsApi.md#actions_remove_selected_repo_from_org_variable) | **DELETE** /orgs/{org}/actions/variables/{name}/repositories/{repository_id} | Remove selected repository from an organization variable |
| [**actions_review_custom_gates_for_run**](ActionsApi.md#actions_review_custom_gates_for_run) | **POST** /repos/{owner}/{repo}/actions/runs/{run_id}/deployment_protection_rule | Review custom deployment protection rules for a workflow run |
| [**actions_review_pending_deployments_for_run**](ActionsApi.md#actions_review_pending_deployments_for_run) | **POST** /repos/{owner}/{repo}/actions/runs/{run_id}/pending_deployments | Review pending deployments for a workflow run |
| [**actions_set_allowed_actions_organization**](ActionsApi.md#actions_set_allowed_actions_organization) | **PUT** /orgs/{org}/actions/permissions/selected-actions | Set allowed actions and reusable workflows for an organization |
| [**actions_set_allowed_actions_repository**](ActionsApi.md#actions_set_allowed_actions_repository) | **PUT** /repos/{owner}/{repo}/actions/permissions/selected-actions | Set allowed actions and reusable workflows for a repository |
| [**actions_set_custom_labels_for_self_hosted_runner_for_org**](ActionsApi.md#actions_set_custom_labels_for_self_hosted_runner_for_org) | **PUT** /orgs/{org}/actions/runners/{runner_id}/labels | Set custom labels for a self-hosted runner for an organization |
| [**actions_set_custom_labels_for_self_hosted_runner_for_repo**](ActionsApi.md#actions_set_custom_labels_for_self_hosted_runner_for_repo) | **PUT** /repos/{owner}/{repo}/actions/runners/{runner_id}/labels | Set custom labels for a self-hosted runner for a repository |
| [**actions_set_custom_oidc_sub_claim_for_repo**](ActionsApi.md#actions_set_custom_oidc_sub_claim_for_repo) | **PUT** /repos/{owner}/{repo}/actions/oidc/customization/sub | Set the customization template for an OIDC subject claim for a repository |
| [**actions_set_github_actions_default_workflow_permissions_organization**](ActionsApi.md#actions_set_github_actions_default_workflow_permissions_organization) | **PUT** /orgs/{org}/actions/permissions/workflow | Set default workflow permissions for an organization |
| [**actions_set_github_actions_default_workflow_permissions_repository**](ActionsApi.md#actions_set_github_actions_default_workflow_permissions_repository) | **PUT** /repos/{owner}/{repo}/actions/permissions/workflow | Set default workflow permissions for a repository |
| [**actions_set_github_actions_permissions_organization**](ActionsApi.md#actions_set_github_actions_permissions_organization) | **PUT** /orgs/{org}/actions/permissions | Set GitHub Actions permissions for an organization |
| [**actions_set_github_actions_permissions_repository**](ActionsApi.md#actions_set_github_actions_permissions_repository) | **PUT** /repos/{owner}/{repo}/actions/permissions | Set GitHub Actions permissions for a repository |
| [**actions_set_selected_repos_for_org_secret**](ActionsApi.md#actions_set_selected_repos_for_org_secret) | **PUT** /orgs/{org}/actions/secrets/{secret_name}/repositories | Set selected repositories for an organization secret |
| [**actions_set_selected_repos_for_org_variable**](ActionsApi.md#actions_set_selected_repos_for_org_variable) | **PUT** /orgs/{org}/actions/variables/{name}/repositories | Set selected repositories for an organization variable |
| [**actions_set_selected_repositories_enabled_github_actions_organization**](ActionsApi.md#actions_set_selected_repositories_enabled_github_actions_organization) | **PUT** /orgs/{org}/actions/permissions/repositories | Set selected repositories enabled for GitHub Actions in an organization |
| [**actions_set_workflow_access_to_repository**](ActionsApi.md#actions_set_workflow_access_to_repository) | **PUT** /repos/{owner}/{repo}/actions/permissions/access | Set the level of access for workflows outside of the repository |
| [**actions_update_environment_variable**](ActionsApi.md#actions_update_environment_variable) | **PATCH** /repos/{owner}/{repo}/environments/{environment_name}/variables/{name} | Update an environment variable |
| [**actions_update_org_variable**](ActionsApi.md#actions_update_org_variable) | **PATCH** /orgs/{org}/actions/variables/{name} | Update an organization variable |
| [**actions_update_repo_variable**](ActionsApi.md#actions_update_repo_variable) | **PATCH** /repos/{owner}/{repo}/actions/variables/{name} | Update a repository variable |


## actions_add_custom_labels_to_self_hosted_runner_for_org

> <ActionsListLabelsForSelfHostedRunnerForOrg200Response> actions_add_custom_labels_to_self_hosted_runner_for_org(org, runner_id, actions_add_custom_labels_to_self_hosted_runner_for_org_request)

Add custom labels to a self-hosted runner for an organization

Adds custom labels to a self-hosted runner configured in an organization.  Authenticated users must have admin access to the organization to use this endpoint.  OAuth tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
runner_id = 56 # Integer | Unique identifier of the self-hosted runner.
actions_add_custom_labels_to_self_hosted_runner_for_org_request = OpenapiClient::ActionsAddCustomLabelsToSelfHostedRunnerForOrgRequest.new({labels: ['labels_example']}) # ActionsAddCustomLabelsToSelfHostedRunnerForOrgRequest | 

begin
  # Add custom labels to a self-hosted runner for an organization
  result = api_instance.actions_add_custom_labels_to_self_hosted_runner_for_org(org, runner_id, actions_add_custom_labels_to_self_hosted_runner_for_org_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_add_custom_labels_to_self_hosted_runner_for_org: #{e}"
end
```

#### Using the actions_add_custom_labels_to_self_hosted_runner_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListLabelsForSelfHostedRunnerForOrg200Response>, Integer, Hash)> actions_add_custom_labels_to_self_hosted_runner_for_org_with_http_info(org, runner_id, actions_add_custom_labels_to_self_hosted_runner_for_org_request)

```ruby
begin
  # Add custom labels to a self-hosted runner for an organization
  data, status_code, headers = api_instance.actions_add_custom_labels_to_self_hosted_runner_for_org_with_http_info(org, runner_id, actions_add_custom_labels_to_self_hosted_runner_for_org_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListLabelsForSelfHostedRunnerForOrg200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_add_custom_labels_to_self_hosted_runner_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **runner_id** | **Integer** | Unique identifier of the self-hosted runner. |  |
| **actions_add_custom_labels_to_self_hosted_runner_for_org_request** | [**ActionsAddCustomLabelsToSelfHostedRunnerForOrgRequest**](ActionsAddCustomLabelsToSelfHostedRunnerForOrgRequest.md) |  |  |

### Return type

[**ActionsListLabelsForSelfHostedRunnerForOrg200Response**](ActionsListLabelsForSelfHostedRunnerForOrg200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## actions_add_custom_labels_to_self_hosted_runner_for_repo

> <ActionsListLabelsForSelfHostedRunnerForOrg200Response> actions_add_custom_labels_to_self_hosted_runner_for_repo(owner, repo, runner_id, actions_add_custom_labels_to_self_hosted_runner_for_org_request)

Add custom labels to a self-hosted runner for a repository

Adds custom labels to a self-hosted runner configured in a repository.  Authenticated users must have admin access to the organization to use this endpoint.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
runner_id = 56 # Integer | Unique identifier of the self-hosted runner.
actions_add_custom_labels_to_self_hosted_runner_for_org_request = OpenapiClient::ActionsAddCustomLabelsToSelfHostedRunnerForOrgRequest.new({labels: ['labels_example']}) # ActionsAddCustomLabelsToSelfHostedRunnerForOrgRequest | 

begin
  # Add custom labels to a self-hosted runner for a repository
  result = api_instance.actions_add_custom_labels_to_self_hosted_runner_for_repo(owner, repo, runner_id, actions_add_custom_labels_to_self_hosted_runner_for_org_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_add_custom_labels_to_self_hosted_runner_for_repo: #{e}"
end
```

#### Using the actions_add_custom_labels_to_self_hosted_runner_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListLabelsForSelfHostedRunnerForOrg200Response>, Integer, Hash)> actions_add_custom_labels_to_self_hosted_runner_for_repo_with_http_info(owner, repo, runner_id, actions_add_custom_labels_to_self_hosted_runner_for_org_request)

```ruby
begin
  # Add custom labels to a self-hosted runner for a repository
  data, status_code, headers = api_instance.actions_add_custom_labels_to_self_hosted_runner_for_repo_with_http_info(owner, repo, runner_id, actions_add_custom_labels_to_self_hosted_runner_for_org_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListLabelsForSelfHostedRunnerForOrg200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_add_custom_labels_to_self_hosted_runner_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **runner_id** | **Integer** | Unique identifier of the self-hosted runner. |  |
| **actions_add_custom_labels_to_self_hosted_runner_for_org_request** | [**ActionsAddCustomLabelsToSelfHostedRunnerForOrgRequest**](ActionsAddCustomLabelsToSelfHostedRunnerForOrgRequest.md) |  |  |

### Return type

[**ActionsListLabelsForSelfHostedRunnerForOrg200Response**](ActionsListLabelsForSelfHostedRunnerForOrg200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## actions_add_selected_repo_to_org_secret

> actions_add_selected_repo_to_org_secret(org, secret_name, repository_id)

Add selected repository to an organization secret

Adds a repository to an organization secret when the `visibility` for repository access is set to `selected`. For more information about setting the visibility, see [Create or update an organization secret](https://docs.github.com/rest/actions/secrets#create-or-update-an-organization-secret).  Authenticated users must have collaborator access to a repository to create, update, or read secrets.  OAuth tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint. If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.
repository_id = 56 # Integer | 

begin
  # Add selected repository to an organization secret
  api_instance.actions_add_selected_repo_to_org_secret(org, secret_name, repository_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_add_selected_repo_to_org_secret: #{e}"
end
```

#### Using the actions_add_selected_repo_to_org_secret_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_add_selected_repo_to_org_secret_with_http_info(org, secret_name, repository_id)

```ruby
begin
  # Add selected repository to an organization secret
  data, status_code, headers = api_instance.actions_add_selected_repo_to_org_secret_with_http_info(org, secret_name, repository_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_add_selected_repo_to_org_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |
| **repository_id** | **Integer** |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_add_selected_repo_to_org_variable

> actions_add_selected_repo_to_org_variable(org, name, repository_id)

Add selected repository to an organization variable

Adds a repository to an organization variable that is available to selected repositories. Organization variables that are available to selected repositories have their `visibility` field set to `selected`.  Authenticated users must have collaborator access to a repository to create, update, or read secrets.  OAuth tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint. If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
name = 'name_example' # String | The name of the variable.
repository_id = 56 # Integer | 

begin
  # Add selected repository to an organization variable
  api_instance.actions_add_selected_repo_to_org_variable(org, name, repository_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_add_selected_repo_to_org_variable: #{e}"
end
```

#### Using the actions_add_selected_repo_to_org_variable_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_add_selected_repo_to_org_variable_with_http_info(org, name, repository_id)

```ruby
begin
  # Add selected repository to an organization variable
  data, status_code, headers = api_instance.actions_add_selected_repo_to_org_variable_with_http_info(org, name, repository_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_add_selected_repo_to_org_variable_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **name** | **String** | The name of the variable. |  |
| **repository_id** | **Integer** |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_approve_workflow_run

> Object actions_approve_workflow_run(owner, repo, run_id)

Approve a workflow run for a fork pull request

Approves a workflow run for a pull request from a public fork of a first time contributor. For more information, see [\"Approving workflow runs from public forks](https://docs.github.com/actions/managing-workflow-runs/approving-workflow-runs-from-public-forks).\"  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
run_id = 56 # Integer | The unique identifier of the workflow run.

begin
  # Approve a workflow run for a fork pull request
  result = api_instance.actions_approve_workflow_run(owner, repo, run_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_approve_workflow_run: #{e}"
end
```

#### Using the actions_approve_workflow_run_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> actions_approve_workflow_run_with_http_info(owner, repo, run_id)

```ruby
begin
  # Approve a workflow run for a fork pull request
  data, status_code, headers = api_instance.actions_approve_workflow_run_with_http_info(owner, repo, run_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_approve_workflow_run_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **run_id** | **Integer** | The unique identifier of the workflow run. |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_cancel_workflow_run

> Object actions_cancel_workflow_run(owner, repo, run_id)

Cancel a workflow run

Cancels a workflow run using its `id`.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
run_id = 56 # Integer | The unique identifier of the workflow run.

begin
  # Cancel a workflow run
  result = api_instance.actions_cancel_workflow_run(owner, repo, run_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_cancel_workflow_run: #{e}"
end
```

#### Using the actions_cancel_workflow_run_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> actions_cancel_workflow_run_with_http_info(owner, repo, run_id)

```ruby
begin
  # Cancel a workflow run
  data, status_code, headers = api_instance.actions_cancel_workflow_run_with_http_info(owner, repo, run_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_cancel_workflow_run_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **run_id** | **Integer** | The unique identifier of the workflow run. |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_create_environment_variable

> Object actions_create_environment_variable(owner, repo, environment_name, actions_create_repo_variable_request)

Create an environment variable

Create an environment variable that you can reference in a GitHub Actions workflow.  Authenticated users must have collaborator access to a repository to create, update, or read variables.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
environment_name = 'environment_name_example' # String | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with `%2F`.
actions_create_repo_variable_request = OpenapiClient::ActionsCreateRepoVariableRequest.new({name: 'name_example', value: 'value_example'}) # ActionsCreateRepoVariableRequest | 

begin
  # Create an environment variable
  result = api_instance.actions_create_environment_variable(owner, repo, environment_name, actions_create_repo_variable_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_environment_variable: #{e}"
end
```

#### Using the actions_create_environment_variable_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> actions_create_environment_variable_with_http_info(owner, repo, environment_name, actions_create_repo_variable_request)

```ruby
begin
  # Create an environment variable
  data, status_code, headers = api_instance.actions_create_environment_variable_with_http_info(owner, repo, environment_name, actions_create_repo_variable_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_environment_variable_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **environment_name** | **String** | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with &#x60;%2F&#x60;. |  |
| **actions_create_repo_variable_request** | [**ActionsCreateRepoVariableRequest**](ActionsCreateRepoVariableRequest.md) |  |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## actions_create_or_update_environment_secret

> Object actions_create_or_update_environment_secret(owner, repo, environment_name, secret_name, actions_create_or_update_environment_secret_request)

Create or update an environment secret

Creates or updates an environment secret with an encrypted value. Encrypt your secret using [LibSodium](https://libsodium.gitbook.io/doc/bindings_for_other_languages). For more information, see \"[Encrypting secrets for the REST API](https://docs.github.com/rest/guides/encrypting-secrets-for-the-rest-api).\"  Authenticated users must have collaborator access to a repository to create, update, or read secrets.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
environment_name = 'environment_name_example' # String | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with `%2F`.
secret_name = 'secret_name_example' # String | The name of the secret.
actions_create_or_update_environment_secret_request = OpenapiClient::ActionsCreateOrUpdateEnvironmentSecretRequest.new({encrypted_value: 'encrypted_value_example', key_id: 'key_id_example'}) # ActionsCreateOrUpdateEnvironmentSecretRequest | 

begin
  # Create or update an environment secret
  result = api_instance.actions_create_or_update_environment_secret(owner, repo, environment_name, secret_name, actions_create_or_update_environment_secret_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_or_update_environment_secret: #{e}"
end
```

#### Using the actions_create_or_update_environment_secret_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> actions_create_or_update_environment_secret_with_http_info(owner, repo, environment_name, secret_name, actions_create_or_update_environment_secret_request)

```ruby
begin
  # Create or update an environment secret
  data, status_code, headers = api_instance.actions_create_or_update_environment_secret_with_http_info(owner, repo, environment_name, secret_name, actions_create_or_update_environment_secret_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_or_update_environment_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **environment_name** | **String** | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with &#x60;%2F&#x60;. |  |
| **secret_name** | **String** | The name of the secret. |  |
| **actions_create_or_update_environment_secret_request** | [**ActionsCreateOrUpdateEnvironmentSecretRequest**](ActionsCreateOrUpdateEnvironmentSecretRequest.md) |  |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## actions_create_or_update_org_secret

> Object actions_create_or_update_org_secret(org, secret_name, actions_create_or_update_org_secret_request)

Create or update an organization secret

Creates or updates an organization secret with an encrypted value. Encrypt your secret using [LibSodium](https://libsodium.gitbook.io/doc/bindings_for_other_languages). For more information, see \"[Encrypting secrets for the REST API](https://docs.github.com/rest/guides/encrypting-secrets-for-the-rest-api).\"  Authenticated users must have collaborator access to a repository to create, update, or read secrets.  OAuth tokens and personal access tokens (classic) need the`admin:org` scope to use this endpoint. If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.
actions_create_or_update_org_secret_request = OpenapiClient::ActionsCreateOrUpdateOrgSecretRequest.new({visibility: 'all'}) # ActionsCreateOrUpdateOrgSecretRequest | 

begin
  # Create or update an organization secret
  result = api_instance.actions_create_or_update_org_secret(org, secret_name, actions_create_or_update_org_secret_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_or_update_org_secret: #{e}"
end
```

#### Using the actions_create_or_update_org_secret_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> actions_create_or_update_org_secret_with_http_info(org, secret_name, actions_create_or_update_org_secret_request)

```ruby
begin
  # Create or update an organization secret
  data, status_code, headers = api_instance.actions_create_or_update_org_secret_with_http_info(org, secret_name, actions_create_or_update_org_secret_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_or_update_org_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |
| **actions_create_or_update_org_secret_request** | [**ActionsCreateOrUpdateOrgSecretRequest**](ActionsCreateOrUpdateOrgSecretRequest.md) |  |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## actions_create_or_update_repo_secret

> Object actions_create_or_update_repo_secret(owner, repo, secret_name, actions_create_or_update_repo_secret_request)

Create or update a repository secret

Creates or updates a repository secret with an encrypted value. Encrypt your secret using [LibSodium](https://libsodium.gitbook.io/doc/bindings_for_other_languages). For more information, see \"[Encrypting secrets for the REST API](https://docs.github.com/rest/guides/encrypting-secrets-for-the-rest-api).\"  Authenticated users must have collaborator access to a repository to create, update, or read secrets.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.
actions_create_or_update_repo_secret_request = OpenapiClient::ActionsCreateOrUpdateRepoSecretRequest.new # ActionsCreateOrUpdateRepoSecretRequest | 

begin
  # Create or update a repository secret
  result = api_instance.actions_create_or_update_repo_secret(owner, repo, secret_name, actions_create_or_update_repo_secret_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_or_update_repo_secret: #{e}"
end
```

#### Using the actions_create_or_update_repo_secret_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> actions_create_or_update_repo_secret_with_http_info(owner, repo, secret_name, actions_create_or_update_repo_secret_request)

```ruby
begin
  # Create or update a repository secret
  data, status_code, headers = api_instance.actions_create_or_update_repo_secret_with_http_info(owner, repo, secret_name, actions_create_or_update_repo_secret_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_or_update_repo_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |
| **actions_create_or_update_repo_secret_request** | [**ActionsCreateOrUpdateRepoSecretRequest**](ActionsCreateOrUpdateRepoSecretRequest.md) |  |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## actions_create_org_variable

> Object actions_create_org_variable(org, actions_create_org_variable_request)

Create an organization variable

Creates an organization variable that you can reference in a GitHub Actions workflow.  Authenticated users must have collaborator access to a repository to create, update, or read variables.  OAuth tokens and personal access tokens (classic) need the`admin:org` scope to use this endpoint. If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
actions_create_org_variable_request = OpenapiClient::ActionsCreateOrgVariableRequest.new({name: 'name_example', value: 'value_example', visibility: 'all'}) # ActionsCreateOrgVariableRequest | 

begin
  # Create an organization variable
  result = api_instance.actions_create_org_variable(org, actions_create_org_variable_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_org_variable: #{e}"
end
```

#### Using the actions_create_org_variable_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> actions_create_org_variable_with_http_info(org, actions_create_org_variable_request)

```ruby
begin
  # Create an organization variable
  data, status_code, headers = api_instance.actions_create_org_variable_with_http_info(org, actions_create_org_variable_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_org_variable_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **actions_create_org_variable_request** | [**ActionsCreateOrgVariableRequest**](ActionsCreateOrgVariableRequest.md) |  |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## actions_create_registration_token_for_org

> <AuthenticationToken> actions_create_registration_token_for_org(org)

Create a registration token for an organization

Returns a token that you can pass to the `config` script. The token expires after one hour.  For example, you can replace `TOKEN` in the following example with the registration token provided by this endpoint to configure your self-hosted runner:  ``` ./config.sh --url https://github.com/octo-org --token TOKEN ```  Authenticated users must have admin access to the organization to use this endpoint.  OAuth tokens and personal access tokens (classic) need the`admin:org` scope to use this endpoint. If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Create a registration token for an organization
  result = api_instance.actions_create_registration_token_for_org(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_registration_token_for_org: #{e}"
end
```

#### Using the actions_create_registration_token_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<AuthenticationToken>, Integer, Hash)> actions_create_registration_token_for_org_with_http_info(org)

```ruby
begin
  # Create a registration token for an organization
  data, status_code, headers = api_instance.actions_create_registration_token_for_org_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <AuthenticationToken>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_registration_token_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**AuthenticationToken**](AuthenticationToken.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_create_registration_token_for_repo

> <AuthenticationToken> actions_create_registration_token_for_repo(owner, repo)

Create a registration token for a repository

Returns a token that you can pass to the `config` script. The token expires after one hour.  For example, you can replace `TOKEN` in the following example with the registration token provided by this endpoint to configure your self-hosted runner:  ``` ./config.sh --url https://github.com/octo-org --token TOKEN ```  Authenticated users must have admin access to the repository to use this endpoint.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Create a registration token for a repository
  result = api_instance.actions_create_registration_token_for_repo(owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_registration_token_for_repo: #{e}"
end
```

#### Using the actions_create_registration_token_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<AuthenticationToken>, Integer, Hash)> actions_create_registration_token_for_repo_with_http_info(owner, repo)

```ruby
begin
  # Create a registration token for a repository
  data, status_code, headers = api_instance.actions_create_registration_token_for_repo_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <AuthenticationToken>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_registration_token_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**AuthenticationToken**](AuthenticationToken.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_create_remove_token_for_org

> <AuthenticationToken> actions_create_remove_token_for_org(org)

Create a remove token for an organization

Returns a token that you can pass to the `config` script to remove a self-hosted runner from an organization. The token expires after one hour.  For example, you can replace `TOKEN` in the following example with the registration token provided by this endpoint to remove your self-hosted runner from an organization:  ``` ./config.sh remove --token TOKEN ```  Authenticated users must have admin access to the organization to use this endpoint.  OAuth tokens and personal access tokens (classic) need the`admin:org` scope to use this endpoint. If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Create a remove token for an organization
  result = api_instance.actions_create_remove_token_for_org(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_remove_token_for_org: #{e}"
end
```

#### Using the actions_create_remove_token_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<AuthenticationToken>, Integer, Hash)> actions_create_remove_token_for_org_with_http_info(org)

```ruby
begin
  # Create a remove token for an organization
  data, status_code, headers = api_instance.actions_create_remove_token_for_org_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <AuthenticationToken>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_remove_token_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**AuthenticationToken**](AuthenticationToken.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_create_remove_token_for_repo

> <AuthenticationToken> actions_create_remove_token_for_repo(owner, repo)

Create a remove token for a repository

Returns a token that you can pass to the `config` script to remove a self-hosted runner from an repository. The token expires after one hour.  For example, you can replace `TOKEN` in the following example with the registration token provided by this endpoint to remove your self-hosted runner from an organization:  ``` ./config.sh remove --token TOKEN ```  Authenticated users must have admin access to the repository to use this endpoint.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Create a remove token for a repository
  result = api_instance.actions_create_remove_token_for_repo(owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_remove_token_for_repo: #{e}"
end
```

#### Using the actions_create_remove_token_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<AuthenticationToken>, Integer, Hash)> actions_create_remove_token_for_repo_with_http_info(owner, repo)

```ruby
begin
  # Create a remove token for a repository
  data, status_code, headers = api_instance.actions_create_remove_token_for_repo_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <AuthenticationToken>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_remove_token_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**AuthenticationToken**](AuthenticationToken.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_create_repo_variable

> Object actions_create_repo_variable(owner, repo, actions_create_repo_variable_request)

Create a repository variable

Creates a repository variable that you can reference in a GitHub Actions workflow.  Authenticated users must have collaborator access to a repository to create, update, or read variables.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
actions_create_repo_variable_request = OpenapiClient::ActionsCreateRepoVariableRequest.new({name: 'name_example', value: 'value_example'}) # ActionsCreateRepoVariableRequest | 

begin
  # Create a repository variable
  result = api_instance.actions_create_repo_variable(owner, repo, actions_create_repo_variable_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_repo_variable: #{e}"
end
```

#### Using the actions_create_repo_variable_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> actions_create_repo_variable_with_http_info(owner, repo, actions_create_repo_variable_request)

```ruby
begin
  # Create a repository variable
  data, status_code, headers = api_instance.actions_create_repo_variable_with_http_info(owner, repo, actions_create_repo_variable_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_repo_variable_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **actions_create_repo_variable_request** | [**ActionsCreateRepoVariableRequest**](ActionsCreateRepoVariableRequest.md) |  |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## actions_create_workflow_dispatch

> actions_create_workflow_dispatch(owner, repo, workflow_id, actions_create_workflow_dispatch_request)

Create a workflow dispatch event

You can use this endpoint to manually trigger a GitHub Actions workflow run. You can replace `workflow_id` with the workflow file name. For example, you could use `main.yaml`.  You must configure your GitHub Actions workflow to run when the [`workflow_dispatch` webhook](/developers/webhooks-and-events/webhook-events-and-payloads#workflow_dispatch) event occurs. The `inputs` are configured in the workflow file. For more information about how to configure the `workflow_dispatch` event in the workflow file, see \"[Events that trigger workflows](/actions/reference/events-that-trigger-workflows#workflow_dispatch).\"  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
workflow_id = nil # ActionsGetWorkflowWorkflowIdParameter | The ID of the workflow. You can also pass the workflow file name as a string.
actions_create_workflow_dispatch_request = OpenapiClient::ActionsCreateWorkflowDispatchRequest.new({ref: 'ref_example'}) # ActionsCreateWorkflowDispatchRequest | 

begin
  # Create a workflow dispatch event
  api_instance.actions_create_workflow_dispatch(owner, repo, workflow_id, actions_create_workflow_dispatch_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_workflow_dispatch: #{e}"
end
```

#### Using the actions_create_workflow_dispatch_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_create_workflow_dispatch_with_http_info(owner, repo, workflow_id, actions_create_workflow_dispatch_request)

```ruby
begin
  # Create a workflow dispatch event
  data, status_code, headers = api_instance.actions_create_workflow_dispatch_with_http_info(owner, repo, workflow_id, actions_create_workflow_dispatch_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_create_workflow_dispatch_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **workflow_id** | [**ActionsGetWorkflowWorkflowIdParameter**](.md) | The ID of the workflow. You can also pass the workflow file name as a string. |  |
| **actions_create_workflow_dispatch_request** | [**ActionsCreateWorkflowDispatchRequest**](ActionsCreateWorkflowDispatchRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## actions_delete_actions_cache_by_id

> actions_delete_actions_cache_by_id(owner, repo, cache_id)

Delete a GitHub Actions cache for a repository (using a cache ID)

Deletes a GitHub Actions cache for a repository, using a cache ID.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
cache_id = 56 # Integer | The unique identifier of the GitHub Actions cache.

begin
  # Delete a GitHub Actions cache for a repository (using a cache ID)
  api_instance.actions_delete_actions_cache_by_id(owner, repo, cache_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_actions_cache_by_id: #{e}"
end
```

#### Using the actions_delete_actions_cache_by_id_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_delete_actions_cache_by_id_with_http_info(owner, repo, cache_id)

```ruby
begin
  # Delete a GitHub Actions cache for a repository (using a cache ID)
  data, status_code, headers = api_instance.actions_delete_actions_cache_by_id_with_http_info(owner, repo, cache_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_actions_cache_by_id_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **cache_id** | **Integer** | The unique identifier of the GitHub Actions cache. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_delete_actions_cache_by_key

> <ActionsCacheList> actions_delete_actions_cache_by_key(owner, repo, key, opts)

Delete GitHub Actions caches for a repository (using a cache key)

Deletes one or more GitHub Actions caches for a repository, using a complete cache key. By default, all caches that match the provided key are deleted, but you can optionally provide a Git ref to restrict deletions to caches that match both the provided key and the Git ref.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
key = 'key_example' # String | A key for identifying the cache.
opts = {
  ref: 'ref_example' # String | The full Git reference for narrowing down the cache. The `ref` for a branch should be formatted as `refs/heads/<branch name>`. To reference a pull request use `refs/pull/<number>/merge`.
}

begin
  # Delete GitHub Actions caches for a repository (using a cache key)
  result = api_instance.actions_delete_actions_cache_by_key(owner, repo, key, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_actions_cache_by_key: #{e}"
end
```

#### Using the actions_delete_actions_cache_by_key_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsCacheList>, Integer, Hash)> actions_delete_actions_cache_by_key_with_http_info(owner, repo, key, opts)

```ruby
begin
  # Delete GitHub Actions caches for a repository (using a cache key)
  data, status_code, headers = api_instance.actions_delete_actions_cache_by_key_with_http_info(owner, repo, key, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsCacheList>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_actions_cache_by_key_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **key** | **String** | A key for identifying the cache. |  |
| **ref** | **String** | The full Git reference for narrowing down the cache. The &#x60;ref&#x60; for a branch should be formatted as &#x60;refs/heads/&lt;branch name&gt;&#x60;. To reference a pull request use &#x60;refs/pull/&lt;number&gt;/merge&#x60;. | [optional] |

### Return type

[**ActionsCacheList**](ActionsCacheList.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_delete_artifact

> actions_delete_artifact(owner, repo, artifact_id)

Delete an artifact

Deletes an artifact for a workflow run. OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
artifact_id = 56 # Integer | The unique identifier of the artifact.

begin
  # Delete an artifact
  api_instance.actions_delete_artifact(owner, repo, artifact_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_artifact: #{e}"
end
```

#### Using the actions_delete_artifact_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_delete_artifact_with_http_info(owner, repo, artifact_id)

```ruby
begin
  # Delete an artifact
  data, status_code, headers = api_instance.actions_delete_artifact_with_http_info(owner, repo, artifact_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_artifact_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **artifact_id** | **Integer** | The unique identifier of the artifact. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_delete_environment_secret

> actions_delete_environment_secret(owner, repo, environment_name, secret_name)

Delete an environment secret

Deletes a secret in an environment using the secret name.  Authenticated users must have collaborator access to a repository to create, update, or read secrets.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
environment_name = 'environment_name_example' # String | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with `%2F`.
secret_name = 'secret_name_example' # String | The name of the secret.

begin
  # Delete an environment secret
  api_instance.actions_delete_environment_secret(owner, repo, environment_name, secret_name)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_environment_secret: #{e}"
end
```

#### Using the actions_delete_environment_secret_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_delete_environment_secret_with_http_info(owner, repo, environment_name, secret_name)

```ruby
begin
  # Delete an environment secret
  data, status_code, headers = api_instance.actions_delete_environment_secret_with_http_info(owner, repo, environment_name, secret_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_environment_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **environment_name** | **String** | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with &#x60;%2F&#x60;. |  |
| **secret_name** | **String** | The name of the secret. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_delete_environment_variable

> actions_delete_environment_variable(owner, repo, name, environment_name)

Delete an environment variable

Deletes an environment variable using the variable name.  Authenticated users must have collaborator access to a repository to create, update, or read variables.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
name = 'name_example' # String | The name of the variable.
environment_name = 'environment_name_example' # String | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with `%2F`.

begin
  # Delete an environment variable
  api_instance.actions_delete_environment_variable(owner, repo, name, environment_name)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_environment_variable: #{e}"
end
```

#### Using the actions_delete_environment_variable_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_delete_environment_variable_with_http_info(owner, repo, name, environment_name)

```ruby
begin
  # Delete an environment variable
  data, status_code, headers = api_instance.actions_delete_environment_variable_with_http_info(owner, repo, name, environment_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_environment_variable_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **name** | **String** | The name of the variable. |  |
| **environment_name** | **String** | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with &#x60;%2F&#x60;. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_delete_org_secret

> actions_delete_org_secret(org, secret_name)

Delete an organization secret

Deletes a secret in an organization using the secret name.  Authenticated users must have collaborator access to a repository to create, update, or read secrets.  OAuth tokens and personal access tokens (classic) need the`admin:org` scope to use this endpoint. If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.

begin
  # Delete an organization secret
  api_instance.actions_delete_org_secret(org, secret_name)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_org_secret: #{e}"
end
```

#### Using the actions_delete_org_secret_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_delete_org_secret_with_http_info(org, secret_name)

```ruby
begin
  # Delete an organization secret
  data, status_code, headers = api_instance.actions_delete_org_secret_with_http_info(org, secret_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_org_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_delete_org_variable

> actions_delete_org_variable(org, name)

Delete an organization variable

Deletes an organization variable using the variable name.  Authenticated users must have collaborator access to a repository to create, update, or read variables.  OAuth tokens and personal access tokens (classic) need the`admin:org` scope to use this endpoint. If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
name = 'name_example' # String | The name of the variable.

begin
  # Delete an organization variable
  api_instance.actions_delete_org_variable(org, name)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_org_variable: #{e}"
end
```

#### Using the actions_delete_org_variable_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_delete_org_variable_with_http_info(org, name)

```ruby
begin
  # Delete an organization variable
  data, status_code, headers = api_instance.actions_delete_org_variable_with_http_info(org, name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_org_variable_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **name** | **String** | The name of the variable. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_delete_repo_secret

> actions_delete_repo_secret(owner, repo, secret_name)

Delete a repository secret

Deletes a secret in a repository using the secret name.  Authenticated users must have collaborator access to a repository to create, update, or read secrets.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.

begin
  # Delete a repository secret
  api_instance.actions_delete_repo_secret(owner, repo, secret_name)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_repo_secret: #{e}"
end
```

#### Using the actions_delete_repo_secret_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_delete_repo_secret_with_http_info(owner, repo, secret_name)

```ruby
begin
  # Delete a repository secret
  data, status_code, headers = api_instance.actions_delete_repo_secret_with_http_info(owner, repo, secret_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_repo_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_delete_repo_variable

> actions_delete_repo_variable(owner, repo, name)

Delete a repository variable

Deletes a repository variable using the variable name.  Authenticated users must have collaborator access to a repository to create, update, or read variables.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
name = 'name_example' # String | The name of the variable.

begin
  # Delete a repository variable
  api_instance.actions_delete_repo_variable(owner, repo, name)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_repo_variable: #{e}"
end
```

#### Using the actions_delete_repo_variable_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_delete_repo_variable_with_http_info(owner, repo, name)

```ruby
begin
  # Delete a repository variable
  data, status_code, headers = api_instance.actions_delete_repo_variable_with_http_info(owner, repo, name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_repo_variable_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **name** | **String** | The name of the variable. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_delete_self_hosted_runner_from_org

> actions_delete_self_hosted_runner_from_org(org, runner_id)

Delete a self-hosted runner from an organization

Forces the removal of a self-hosted runner from an organization. You can use this endpoint to completely remove the runner when the machine you were using no longer exists.  Authenticated users must have admin access to the organization to use this endpoint.  OAuth tokens and personal access tokens (classic) need the`admin:org` scope to use this endpoint. If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
runner_id = 56 # Integer | Unique identifier of the self-hosted runner.

begin
  # Delete a self-hosted runner from an organization
  api_instance.actions_delete_self_hosted_runner_from_org(org, runner_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_self_hosted_runner_from_org: #{e}"
end
```

#### Using the actions_delete_self_hosted_runner_from_org_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_delete_self_hosted_runner_from_org_with_http_info(org, runner_id)

```ruby
begin
  # Delete a self-hosted runner from an organization
  data, status_code, headers = api_instance.actions_delete_self_hosted_runner_from_org_with_http_info(org, runner_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_self_hosted_runner_from_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **runner_id** | **Integer** | Unique identifier of the self-hosted runner. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_delete_self_hosted_runner_from_repo

> actions_delete_self_hosted_runner_from_repo(owner, repo, runner_id)

Delete a self-hosted runner from a repository

Forces the removal of a self-hosted runner from a repository. You can use this endpoint to completely remove the runner when the machine you were using no longer exists.  Authenticated users must have admin access to the repository to use this endpoint.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
runner_id = 56 # Integer | Unique identifier of the self-hosted runner.

begin
  # Delete a self-hosted runner from a repository
  api_instance.actions_delete_self_hosted_runner_from_repo(owner, repo, runner_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_self_hosted_runner_from_repo: #{e}"
end
```

#### Using the actions_delete_self_hosted_runner_from_repo_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_delete_self_hosted_runner_from_repo_with_http_info(owner, repo, runner_id)

```ruby
begin
  # Delete a self-hosted runner from a repository
  data, status_code, headers = api_instance.actions_delete_self_hosted_runner_from_repo_with_http_info(owner, repo, runner_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_self_hosted_runner_from_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **runner_id** | **Integer** | Unique identifier of the self-hosted runner. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_delete_workflow_run

> actions_delete_workflow_run(owner, repo, run_id)

Delete a workflow run

Deletes a specific workflow run.  Anyone with write access to the repository can use this endpoint.  If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
run_id = 56 # Integer | The unique identifier of the workflow run.

begin
  # Delete a workflow run
  api_instance.actions_delete_workflow_run(owner, repo, run_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_workflow_run: #{e}"
end
```

#### Using the actions_delete_workflow_run_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_delete_workflow_run_with_http_info(owner, repo, run_id)

```ruby
begin
  # Delete a workflow run
  data, status_code, headers = api_instance.actions_delete_workflow_run_with_http_info(owner, repo, run_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_workflow_run_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **run_id** | **Integer** | The unique identifier of the workflow run. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_delete_workflow_run_logs

> actions_delete_workflow_run_logs(owner, repo, run_id)

Delete workflow run logs

Deletes all logs for a workflow run.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
run_id = 56 # Integer | The unique identifier of the workflow run.

begin
  # Delete workflow run logs
  api_instance.actions_delete_workflow_run_logs(owner, repo, run_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_workflow_run_logs: #{e}"
end
```

#### Using the actions_delete_workflow_run_logs_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_delete_workflow_run_logs_with_http_info(owner, repo, run_id)

```ruby
begin
  # Delete workflow run logs
  data, status_code, headers = api_instance.actions_delete_workflow_run_logs_with_http_info(owner, repo, run_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_delete_workflow_run_logs_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **run_id** | **Integer** | The unique identifier of the workflow run. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_disable_selected_repository_github_actions_organization

> actions_disable_selected_repository_github_actions_organization(org, repository_id)

Disable a selected repository for GitHub Actions in an organization

Removes a repository from the list of selected repositories that are enabled for GitHub Actions in an organization. To use this endpoint, the organization permission policy for `enabled_repositories` must be configured to `selected`. For more information, see \"[Set GitHub Actions permissions for an organization](#set-github-actions-permissions-for-an-organization).\"  OAuth tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
repository_id = 56 # Integer | The unique identifier of the repository.

begin
  # Disable a selected repository for GitHub Actions in an organization
  api_instance.actions_disable_selected_repository_github_actions_organization(org, repository_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_disable_selected_repository_github_actions_organization: #{e}"
end
```

#### Using the actions_disable_selected_repository_github_actions_organization_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_disable_selected_repository_github_actions_organization_with_http_info(org, repository_id)

```ruby
begin
  # Disable a selected repository for GitHub Actions in an organization
  data, status_code, headers = api_instance.actions_disable_selected_repository_github_actions_organization_with_http_info(org, repository_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_disable_selected_repository_github_actions_organization_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **repository_id** | **Integer** | The unique identifier of the repository. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_disable_workflow

> actions_disable_workflow(owner, repo, workflow_id)

Disable a workflow

Disables a workflow and sets the `state` of the workflow to `disabled_manually`. You can replace `workflow_id` with the workflow file name. For example, you could use `main.yaml`.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
workflow_id = nil # ActionsGetWorkflowWorkflowIdParameter | The ID of the workflow. You can also pass the workflow file name as a string.

begin
  # Disable a workflow
  api_instance.actions_disable_workflow(owner, repo, workflow_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_disable_workflow: #{e}"
end
```

#### Using the actions_disable_workflow_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_disable_workflow_with_http_info(owner, repo, workflow_id)

```ruby
begin
  # Disable a workflow
  data, status_code, headers = api_instance.actions_disable_workflow_with_http_info(owner, repo, workflow_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_disable_workflow_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **workflow_id** | [**ActionsGetWorkflowWorkflowIdParameter**](.md) | The ID of the workflow. You can also pass the workflow file name as a string. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_download_artifact

> actions_download_artifact(owner, repo, artifact_id, archive_format)

Download an artifact

Gets a redirect URL to download an archive for a repository. This URL expires after 1 minute. Look for `Location:` in the response header to find the URL for the download. The `:archive_format` must be `zip`.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
artifact_id = 56 # Integer | The unique identifier of the artifact.
archive_format = 'archive_format_example' # String | 

begin
  # Download an artifact
  api_instance.actions_download_artifact(owner, repo, artifact_id, archive_format)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_download_artifact: #{e}"
end
```

#### Using the actions_download_artifact_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_download_artifact_with_http_info(owner, repo, artifact_id, archive_format)

```ruby
begin
  # Download an artifact
  data, status_code, headers = api_instance.actions_download_artifact_with_http_info(owner, repo, artifact_id, archive_format)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_download_artifact_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **artifact_id** | **Integer** | The unique identifier of the artifact. |  |
| **archive_format** | **String** |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_download_job_logs_for_workflow_run

> actions_download_job_logs_for_workflow_run(owner, repo, job_id)

Download job logs for a workflow run

Gets a redirect URL to download a plain text file of logs for a workflow job. This link expires after 1 minute. Look for `Location:` in the response header to find the URL for the download.  Anyone with read access to the repository can use this endpoint.  If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
job_id = 56 # Integer | The unique identifier of the job.

begin
  # Download job logs for a workflow run
  api_instance.actions_download_job_logs_for_workflow_run(owner, repo, job_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_download_job_logs_for_workflow_run: #{e}"
end
```

#### Using the actions_download_job_logs_for_workflow_run_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_download_job_logs_for_workflow_run_with_http_info(owner, repo, job_id)

```ruby
begin
  # Download job logs for a workflow run
  data, status_code, headers = api_instance.actions_download_job_logs_for_workflow_run_with_http_info(owner, repo, job_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_download_job_logs_for_workflow_run_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **job_id** | **Integer** | The unique identifier of the job. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_download_workflow_run_attempt_logs

> actions_download_workflow_run_attempt_logs(owner, repo, run_id, attempt_number)

Download workflow run attempt logs

Gets a redirect URL to download an archive of log files for a specific workflow run attempt. This link expires after 1 minute. Look for `Location:` in the response header to find the URL for the download.  Anyone with read access to the repository can use this endpoint.  If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
run_id = 56 # Integer | The unique identifier of the workflow run.
attempt_number = 56 # Integer | The attempt number of the workflow run.

begin
  # Download workflow run attempt logs
  api_instance.actions_download_workflow_run_attempt_logs(owner, repo, run_id, attempt_number)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_download_workflow_run_attempt_logs: #{e}"
end
```

#### Using the actions_download_workflow_run_attempt_logs_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_download_workflow_run_attempt_logs_with_http_info(owner, repo, run_id, attempt_number)

```ruby
begin
  # Download workflow run attempt logs
  data, status_code, headers = api_instance.actions_download_workflow_run_attempt_logs_with_http_info(owner, repo, run_id, attempt_number)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_download_workflow_run_attempt_logs_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **run_id** | **Integer** | The unique identifier of the workflow run. |  |
| **attempt_number** | **Integer** | The attempt number of the workflow run. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_download_workflow_run_logs

> actions_download_workflow_run_logs(owner, repo, run_id)

Download workflow run logs

Gets a redirect URL to download an archive of log files for a workflow run. This link expires after 1 minute. Look for `Location:` in the response header to find the URL for the download.  Anyone with read access to the repository can use this endpoint.  If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
run_id = 56 # Integer | The unique identifier of the workflow run.

begin
  # Download workflow run logs
  api_instance.actions_download_workflow_run_logs(owner, repo, run_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_download_workflow_run_logs: #{e}"
end
```

#### Using the actions_download_workflow_run_logs_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_download_workflow_run_logs_with_http_info(owner, repo, run_id)

```ruby
begin
  # Download workflow run logs
  data, status_code, headers = api_instance.actions_download_workflow_run_logs_with_http_info(owner, repo, run_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_download_workflow_run_logs_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **run_id** | **Integer** | The unique identifier of the workflow run. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_enable_selected_repository_github_actions_organization

> actions_enable_selected_repository_github_actions_organization(org, repository_id)

Enable a selected repository for GitHub Actions in an organization

Adds a repository to the list of selected repositories that are enabled for GitHub Actions in an organization. To use this endpoint, the organization permission policy for `enabled_repositories` must be must be configured to `selected`. For more information, see \"[Set GitHub Actions permissions for an organization](#set-github-actions-permissions-for-an-organization).\"  OAuth tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
repository_id = 56 # Integer | The unique identifier of the repository.

begin
  # Enable a selected repository for GitHub Actions in an organization
  api_instance.actions_enable_selected_repository_github_actions_organization(org, repository_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_enable_selected_repository_github_actions_organization: #{e}"
end
```

#### Using the actions_enable_selected_repository_github_actions_organization_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_enable_selected_repository_github_actions_organization_with_http_info(org, repository_id)

```ruby
begin
  # Enable a selected repository for GitHub Actions in an organization
  data, status_code, headers = api_instance.actions_enable_selected_repository_github_actions_organization_with_http_info(org, repository_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_enable_selected_repository_github_actions_organization_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **repository_id** | **Integer** | The unique identifier of the repository. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_enable_workflow

> actions_enable_workflow(owner, repo, workflow_id)

Enable a workflow

Enables a workflow and sets the `state` of the workflow to `active`. You can replace `workflow_id` with the workflow file name. For example, you could use `main.yaml`.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
workflow_id = nil # ActionsGetWorkflowWorkflowIdParameter | The ID of the workflow. You can also pass the workflow file name as a string.

begin
  # Enable a workflow
  api_instance.actions_enable_workflow(owner, repo, workflow_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_enable_workflow: #{e}"
end
```

#### Using the actions_enable_workflow_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_enable_workflow_with_http_info(owner, repo, workflow_id)

```ruby
begin
  # Enable a workflow
  data, status_code, headers = api_instance.actions_enable_workflow_with_http_info(owner, repo, workflow_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_enable_workflow_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **workflow_id** | [**ActionsGetWorkflowWorkflowIdParameter**](.md) | The ID of the workflow. You can also pass the workflow file name as a string. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_force_cancel_workflow_run

> Object actions_force_cancel_workflow_run(owner, repo, run_id)

Force cancel a workflow run

Cancels a workflow run and bypasses conditions that would otherwise cause a workflow execution to continue, such as an `always()` condition on a job. You should only use this endpoint to cancel a workflow run when the workflow run is not responding to [`POST /repos/{owner}/{repo}/actions/runs/{run_id}/cancel`](/rest/actions/workflow-runs#cancel-a-workflow-run).  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
run_id = 56 # Integer | The unique identifier of the workflow run.

begin
  # Force cancel a workflow run
  result = api_instance.actions_force_cancel_workflow_run(owner, repo, run_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_force_cancel_workflow_run: #{e}"
end
```

#### Using the actions_force_cancel_workflow_run_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> actions_force_cancel_workflow_run_with_http_info(owner, repo, run_id)

```ruby
begin
  # Force cancel a workflow run
  data, status_code, headers = api_instance.actions_force_cancel_workflow_run_with_http_info(owner, repo, run_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_force_cancel_workflow_run_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **run_id** | **Integer** | The unique identifier of the workflow run. |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_generate_runner_jitconfig_for_org

> <ActionsGenerateRunnerJitconfigForOrg201Response> actions_generate_runner_jitconfig_for_org(org, actions_generate_runner_jitconfig_for_org_request)

Create configuration for a just-in-time runner for an organization

Generates a configuration that can be passed to the runner application at startup.  The authenticated user must have admin access to the organization.  OAuth tokens and personal access tokens (classic) need the`admin:org` scope to use this endpoint. If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
actions_generate_runner_jitconfig_for_org_request = OpenapiClient::ActionsGenerateRunnerJitconfigForOrgRequest.new({name: 'name_example', runner_group_id: 37, labels: ['labels_example']}) # ActionsGenerateRunnerJitconfigForOrgRequest | 

begin
  # Create configuration for a just-in-time runner for an organization
  result = api_instance.actions_generate_runner_jitconfig_for_org(org, actions_generate_runner_jitconfig_for_org_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_generate_runner_jitconfig_for_org: #{e}"
end
```

#### Using the actions_generate_runner_jitconfig_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsGenerateRunnerJitconfigForOrg201Response>, Integer, Hash)> actions_generate_runner_jitconfig_for_org_with_http_info(org, actions_generate_runner_jitconfig_for_org_request)

```ruby
begin
  # Create configuration for a just-in-time runner for an organization
  data, status_code, headers = api_instance.actions_generate_runner_jitconfig_for_org_with_http_info(org, actions_generate_runner_jitconfig_for_org_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsGenerateRunnerJitconfigForOrg201Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_generate_runner_jitconfig_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **actions_generate_runner_jitconfig_for_org_request** | [**ActionsGenerateRunnerJitconfigForOrgRequest**](ActionsGenerateRunnerJitconfigForOrgRequest.md) |  |  |

### Return type

[**ActionsGenerateRunnerJitconfigForOrg201Response**](ActionsGenerateRunnerJitconfigForOrg201Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## actions_generate_runner_jitconfig_for_repo

> <ActionsGenerateRunnerJitconfigForOrg201Response> actions_generate_runner_jitconfig_for_repo(owner, repo, actions_generate_runner_jitconfig_for_org_request)

Create configuration for a just-in-time runner for a repository

Generates a configuration that can be passed to the runner application at startup.  The authenticated user must have admin access to the repository.  OAuth tokens and personal access tokens (classic) need the`repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
actions_generate_runner_jitconfig_for_org_request = OpenapiClient::ActionsGenerateRunnerJitconfigForOrgRequest.new({name: 'name_example', runner_group_id: 37, labels: ['labels_example']}) # ActionsGenerateRunnerJitconfigForOrgRequest | 

begin
  # Create configuration for a just-in-time runner for a repository
  result = api_instance.actions_generate_runner_jitconfig_for_repo(owner, repo, actions_generate_runner_jitconfig_for_org_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_generate_runner_jitconfig_for_repo: #{e}"
end
```

#### Using the actions_generate_runner_jitconfig_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsGenerateRunnerJitconfigForOrg201Response>, Integer, Hash)> actions_generate_runner_jitconfig_for_repo_with_http_info(owner, repo, actions_generate_runner_jitconfig_for_org_request)

```ruby
begin
  # Create configuration for a just-in-time runner for a repository
  data, status_code, headers = api_instance.actions_generate_runner_jitconfig_for_repo_with_http_info(owner, repo, actions_generate_runner_jitconfig_for_org_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsGenerateRunnerJitconfigForOrg201Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_generate_runner_jitconfig_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **actions_generate_runner_jitconfig_for_org_request** | [**ActionsGenerateRunnerJitconfigForOrgRequest**](ActionsGenerateRunnerJitconfigForOrgRequest.md) |  |  |

### Return type

[**ActionsGenerateRunnerJitconfigForOrg201Response**](ActionsGenerateRunnerJitconfigForOrg201Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## actions_get_actions_cache_list

> <ActionsCacheList> actions_get_actions_cache_list(owner, repo, opts)

List GitHub Actions caches for a repository

Lists the GitHub Actions caches for a repository.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  ref: 'ref_example', # String | The full Git reference for narrowing down the cache. The `ref` for a branch should be formatted as `refs/heads/<branch name>`. To reference a pull request use `refs/pull/<number>/merge`.
  key: 'key_example', # String | An explicit key or prefix for identifying the cache
  sort: 'created_at', # String | The property to sort the results by. `created_at` means when the cache was created. `last_accessed_at` means when the cache was last accessed. `size_in_bytes` is the size of the cache in bytes.
  direction: 'asc' # String | The direction to sort the results by.
}

begin
  # List GitHub Actions caches for a repository
  result = api_instance.actions_get_actions_cache_list(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_actions_cache_list: #{e}"
end
```

#### Using the actions_get_actions_cache_list_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsCacheList>, Integer, Hash)> actions_get_actions_cache_list_with_http_info(owner, repo, opts)

```ruby
begin
  # List GitHub Actions caches for a repository
  data, status_code, headers = api_instance.actions_get_actions_cache_list_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsCacheList>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_actions_cache_list_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **ref** | **String** | The full Git reference for narrowing down the cache. The &#x60;ref&#x60; for a branch should be formatted as &#x60;refs/heads/&lt;branch name&gt;&#x60;. To reference a pull request use &#x60;refs/pull/&lt;number&gt;/merge&#x60;. | [optional] |
| **key** | **String** | An explicit key or prefix for identifying the cache | [optional] |
| **sort** | **String** | The property to sort the results by. &#x60;created_at&#x60; means when the cache was created. &#x60;last_accessed_at&#x60; means when the cache was last accessed. &#x60;size_in_bytes&#x60; is the size of the cache in bytes. | [optional][default to &#39;last_accessed_at&#39;] |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |

### Return type

[**ActionsCacheList**](ActionsCacheList.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_actions_cache_usage

> <ActionsCacheUsageByRepository> actions_get_actions_cache_usage(owner, repo)

Get GitHub Actions cache usage for a repository

Gets GitHub Actions cache usage for a repository. The data fetched using this API is refreshed approximately every 5 minutes, so values returned from this endpoint may take at least 5 minutes to get updated.  Anyone with read access to the repository can use this endpoint.  If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Get GitHub Actions cache usage for a repository
  result = api_instance.actions_get_actions_cache_usage(owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_actions_cache_usage: #{e}"
end
```

#### Using the actions_get_actions_cache_usage_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsCacheUsageByRepository>, Integer, Hash)> actions_get_actions_cache_usage_with_http_info(owner, repo)

```ruby
begin
  # Get GitHub Actions cache usage for a repository
  data, status_code, headers = api_instance.actions_get_actions_cache_usage_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsCacheUsageByRepository>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_actions_cache_usage_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**ActionsCacheUsageByRepository**](ActionsCacheUsageByRepository.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_actions_cache_usage_by_repo_for_org

> <ActionsGetActionsCacheUsageByRepoForOrg200Response> actions_get_actions_cache_usage_by_repo_for_org(org, opts)

List repositories with GitHub Actions cache usage for an organization

Lists repositories and their GitHub Actions cache usage for an organization. The data fetched using this API is refreshed approximately every 5 minutes, so values returned from this endpoint may take at least 5 minutes to get updated.  OAuth tokens and personal access tokens (classic) need the `read:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repositories with GitHub Actions cache usage for an organization
  result = api_instance.actions_get_actions_cache_usage_by_repo_for_org(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_actions_cache_usage_by_repo_for_org: #{e}"
end
```

#### Using the actions_get_actions_cache_usage_by_repo_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsGetActionsCacheUsageByRepoForOrg200Response>, Integer, Hash)> actions_get_actions_cache_usage_by_repo_for_org_with_http_info(org, opts)

```ruby
begin
  # List repositories with GitHub Actions cache usage for an organization
  data, status_code, headers = api_instance.actions_get_actions_cache_usage_by_repo_for_org_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsGetActionsCacheUsageByRepoForOrg200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_actions_cache_usage_by_repo_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**ActionsGetActionsCacheUsageByRepoForOrg200Response**](ActionsGetActionsCacheUsageByRepoForOrg200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_actions_cache_usage_for_org

> <ActionsCacheUsageOrgEnterprise> actions_get_actions_cache_usage_for_org(org)

Get GitHub Actions cache usage for an organization

Gets the total GitHub Actions cache usage for an organization. The data fetched using this API is refreshed approximately every 5 minutes, so values returned from this endpoint may take at least 5 minutes to get updated.  OAuth tokens and personal access tokens (classic) need the `read:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Get GitHub Actions cache usage for an organization
  result = api_instance.actions_get_actions_cache_usage_for_org(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_actions_cache_usage_for_org: #{e}"
end
```

#### Using the actions_get_actions_cache_usage_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsCacheUsageOrgEnterprise>, Integer, Hash)> actions_get_actions_cache_usage_for_org_with_http_info(org)

```ruby
begin
  # Get GitHub Actions cache usage for an organization
  data, status_code, headers = api_instance.actions_get_actions_cache_usage_for_org_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsCacheUsageOrgEnterprise>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_actions_cache_usage_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**ActionsCacheUsageOrgEnterprise**](ActionsCacheUsageOrgEnterprise.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_allowed_actions_organization

> <SelectedActions> actions_get_allowed_actions_organization(org)

Get allowed actions and reusable workflows for an organization

Gets the selected actions and reusable workflows that are allowed in an organization. To use this endpoint, the organization permission policy for `allowed_actions` must be configured to `selected`. For more information, see \"[Set GitHub Actions permissions for an organization](#set-github-actions-permissions-for-an-organization).\"  OAuth tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Get allowed actions and reusable workflows for an organization
  result = api_instance.actions_get_allowed_actions_organization(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_allowed_actions_organization: #{e}"
end
```

#### Using the actions_get_allowed_actions_organization_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<SelectedActions>, Integer, Hash)> actions_get_allowed_actions_organization_with_http_info(org)

```ruby
begin
  # Get allowed actions and reusable workflows for an organization
  data, status_code, headers = api_instance.actions_get_allowed_actions_organization_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <SelectedActions>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_allowed_actions_organization_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**SelectedActions**](SelectedActions.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_allowed_actions_repository

> <SelectedActions> actions_get_allowed_actions_repository(owner, repo)

Get allowed actions and reusable workflows for a repository

Gets the settings for selected actions and reusable workflows that are allowed in a repository. To use this endpoint, the repository policy for `allowed_actions` must be configured to `selected`. For more information, see \"[Set GitHub Actions permissions for a repository](#set-github-actions-permissions-for-a-repository).\"  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Get allowed actions and reusable workflows for a repository
  result = api_instance.actions_get_allowed_actions_repository(owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_allowed_actions_repository: #{e}"
end
```

#### Using the actions_get_allowed_actions_repository_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<SelectedActions>, Integer, Hash)> actions_get_allowed_actions_repository_with_http_info(owner, repo)

```ruby
begin
  # Get allowed actions and reusable workflows for a repository
  data, status_code, headers = api_instance.actions_get_allowed_actions_repository_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <SelectedActions>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_allowed_actions_repository_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**SelectedActions**](SelectedActions.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_artifact

> <Artifact> actions_get_artifact(owner, repo, artifact_id)

Get an artifact

Gets a specific artifact for a workflow run.  Anyone with read access to the repository can use this endpoint.  If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
artifact_id = 56 # Integer | The unique identifier of the artifact.

begin
  # Get an artifact
  result = api_instance.actions_get_artifact(owner, repo, artifact_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_artifact: #{e}"
end
```

#### Using the actions_get_artifact_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Artifact>, Integer, Hash)> actions_get_artifact_with_http_info(owner, repo, artifact_id)

```ruby
begin
  # Get an artifact
  data, status_code, headers = api_instance.actions_get_artifact_with_http_info(owner, repo, artifact_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Artifact>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_artifact_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **artifact_id** | **Integer** | The unique identifier of the artifact. |  |

### Return type

[**Artifact**](Artifact.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_custom_oidc_sub_claim_for_repo

> <OidcCustomSubRepo> actions_get_custom_oidc_sub_claim_for_repo(owner, repo)

Get the customization template for an OIDC subject claim for a repository

Gets the customization template for an OpenID Connect (OIDC) subject claim.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Get the customization template for an OIDC subject claim for a repository
  result = api_instance.actions_get_custom_oidc_sub_claim_for_repo(owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_custom_oidc_sub_claim_for_repo: #{e}"
end
```

#### Using the actions_get_custom_oidc_sub_claim_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OidcCustomSubRepo>, Integer, Hash)> actions_get_custom_oidc_sub_claim_for_repo_with_http_info(owner, repo)

```ruby
begin
  # Get the customization template for an OIDC subject claim for a repository
  data, status_code, headers = api_instance.actions_get_custom_oidc_sub_claim_for_repo_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OidcCustomSubRepo>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_custom_oidc_sub_claim_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**OidcCustomSubRepo**](OidcCustomSubRepo.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, application/scim+json


## actions_get_environment_public_key

> <ActionsPublicKey> actions_get_environment_public_key(owner, repo, environment_name)

Get an environment public key

Get the public key for an environment, which you need to encrypt environment secrets. You need to encrypt a secret before you can create or update secrets.  Anyone with read access to the repository can use this endpoint.  If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
environment_name = 'environment_name_example' # String | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with `%2F`.

begin
  # Get an environment public key
  result = api_instance.actions_get_environment_public_key(owner, repo, environment_name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_environment_public_key: #{e}"
end
```

#### Using the actions_get_environment_public_key_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsPublicKey>, Integer, Hash)> actions_get_environment_public_key_with_http_info(owner, repo, environment_name)

```ruby
begin
  # Get an environment public key
  data, status_code, headers = api_instance.actions_get_environment_public_key_with_http_info(owner, repo, environment_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsPublicKey>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_environment_public_key_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **environment_name** | **String** | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with &#x60;%2F&#x60;. |  |

### Return type

[**ActionsPublicKey**](ActionsPublicKey.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_environment_secret

> <ActionsSecret> actions_get_environment_secret(owner, repo, environment_name, secret_name)

Get an environment secret

Gets a single environment secret without revealing its encrypted value.  Authenticated users must have collaborator access to a repository to create, update, or read secrets.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
environment_name = 'environment_name_example' # String | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with `%2F`.
secret_name = 'secret_name_example' # String | The name of the secret.

begin
  # Get an environment secret
  result = api_instance.actions_get_environment_secret(owner, repo, environment_name, secret_name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_environment_secret: #{e}"
end
```

#### Using the actions_get_environment_secret_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsSecret>, Integer, Hash)> actions_get_environment_secret_with_http_info(owner, repo, environment_name, secret_name)

```ruby
begin
  # Get an environment secret
  data, status_code, headers = api_instance.actions_get_environment_secret_with_http_info(owner, repo, environment_name, secret_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsSecret>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_environment_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **environment_name** | **String** | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with &#x60;%2F&#x60;. |  |
| **secret_name** | **String** | The name of the secret. |  |

### Return type

[**ActionsSecret**](ActionsSecret.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_environment_variable

> <ActionsVariable> actions_get_environment_variable(owner, repo, environment_name, name)

Get an environment variable

Gets a specific variable in an environment.  Authenticated users must have collaborator access to a repository to create, update, or read variables.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
environment_name = 'environment_name_example' # String | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with `%2F`.
name = 'name_example' # String | The name of the variable.

begin
  # Get an environment variable
  result = api_instance.actions_get_environment_variable(owner, repo, environment_name, name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_environment_variable: #{e}"
end
```

#### Using the actions_get_environment_variable_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsVariable>, Integer, Hash)> actions_get_environment_variable_with_http_info(owner, repo, environment_name, name)

```ruby
begin
  # Get an environment variable
  data, status_code, headers = api_instance.actions_get_environment_variable_with_http_info(owner, repo, environment_name, name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsVariable>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_environment_variable_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **environment_name** | **String** | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with &#x60;%2F&#x60;. |  |
| **name** | **String** | The name of the variable. |  |

### Return type

[**ActionsVariable**](ActionsVariable.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_github_actions_default_workflow_permissions_organization

> <ActionsGetDefaultWorkflowPermissions> actions_get_github_actions_default_workflow_permissions_organization(org)

Get default workflow permissions for an organization

Gets the default workflow permissions granted to the `GITHUB_TOKEN` when running workflows in an organization, as well as whether GitHub Actions can submit approving pull request reviews. For more information, see \"[Setting the permissions of the GITHUB_TOKEN for your organization](https://docs.github.com/organizations/managing-organization-settings/disabling-or-limiting-github-actions-for-your-organization#setting-the-permissions-of-the-github_token-for-your-organization).\"  OAuth tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Get default workflow permissions for an organization
  result = api_instance.actions_get_github_actions_default_workflow_permissions_organization(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_github_actions_default_workflow_permissions_organization: #{e}"
end
```

#### Using the actions_get_github_actions_default_workflow_permissions_organization_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsGetDefaultWorkflowPermissions>, Integer, Hash)> actions_get_github_actions_default_workflow_permissions_organization_with_http_info(org)

```ruby
begin
  # Get default workflow permissions for an organization
  data, status_code, headers = api_instance.actions_get_github_actions_default_workflow_permissions_organization_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsGetDefaultWorkflowPermissions>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_github_actions_default_workflow_permissions_organization_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**ActionsGetDefaultWorkflowPermissions**](ActionsGetDefaultWorkflowPermissions.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_github_actions_default_workflow_permissions_repository

> <ActionsGetDefaultWorkflowPermissions> actions_get_github_actions_default_workflow_permissions_repository(owner, repo)

Get default workflow permissions for a repository

Gets the default workflow permissions granted to the `GITHUB_TOKEN` when running workflows in a repository, as well as if GitHub Actions can submit approving pull request reviews. For more information, see \"[Setting the permissions of the GITHUB_TOKEN for your repository](https://docs.github.com/repositories/managing-your-repositorys-settings-and-features/enabling-features-for-your-repository/managing-github-actions-settings-for-a-repository#setting-the-permissions-of-the-github_token-for-your-repository).\"  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Get default workflow permissions for a repository
  result = api_instance.actions_get_github_actions_default_workflow_permissions_repository(owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_github_actions_default_workflow_permissions_repository: #{e}"
end
```

#### Using the actions_get_github_actions_default_workflow_permissions_repository_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsGetDefaultWorkflowPermissions>, Integer, Hash)> actions_get_github_actions_default_workflow_permissions_repository_with_http_info(owner, repo)

```ruby
begin
  # Get default workflow permissions for a repository
  data, status_code, headers = api_instance.actions_get_github_actions_default_workflow_permissions_repository_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsGetDefaultWorkflowPermissions>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_github_actions_default_workflow_permissions_repository_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**ActionsGetDefaultWorkflowPermissions**](ActionsGetDefaultWorkflowPermissions.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_github_actions_permissions_organization

> <ActionsOrganizationPermissions> actions_get_github_actions_permissions_organization(org)

Get GitHub Actions permissions for an organization

Gets the GitHub Actions permissions policy for repositories and allowed actions and reusable workflows in an organization.  OAuth tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Get GitHub Actions permissions for an organization
  result = api_instance.actions_get_github_actions_permissions_organization(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_github_actions_permissions_organization: #{e}"
end
```

#### Using the actions_get_github_actions_permissions_organization_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsOrganizationPermissions>, Integer, Hash)> actions_get_github_actions_permissions_organization_with_http_info(org)

```ruby
begin
  # Get GitHub Actions permissions for an organization
  data, status_code, headers = api_instance.actions_get_github_actions_permissions_organization_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsOrganizationPermissions>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_github_actions_permissions_organization_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**ActionsOrganizationPermissions**](ActionsOrganizationPermissions.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_github_actions_permissions_repository

> <ActionsRepositoryPermissions> actions_get_github_actions_permissions_repository(owner, repo)

Get GitHub Actions permissions for a repository

Gets the GitHub Actions permissions policy for a repository, including whether GitHub Actions is enabled and the actions and reusable workflows allowed to run in the repository.  OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Get GitHub Actions permissions for a repository
  result = api_instance.actions_get_github_actions_permissions_repository(owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_github_actions_permissions_repository: #{e}"
end
```

#### Using the actions_get_github_actions_permissions_repository_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsRepositoryPermissions>, Integer, Hash)> actions_get_github_actions_permissions_repository_with_http_info(owner, repo)

```ruby
begin
  # Get GitHub Actions permissions for a repository
  data, status_code, headers = api_instance.actions_get_github_actions_permissions_repository_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsRepositoryPermissions>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_github_actions_permissions_repository_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**ActionsRepositoryPermissions**](ActionsRepositoryPermissions.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_job_for_workflow_run

> <Job> actions_get_job_for_workflow_run(owner, repo, job_id)

Get a job for a workflow run

Gets a specific job in a workflow run.  Anyone with read access to the repository can use this endpoint.  If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
job_id = 56 # Integer | The unique identifier of the job.

begin
  # Get a job for a workflow run
  result = api_instance.actions_get_job_for_workflow_run(owner, repo, job_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_job_for_workflow_run: #{e}"
end
```

#### Using the actions_get_job_for_workflow_run_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Job>, Integer, Hash)> actions_get_job_for_workflow_run_with_http_info(owner, repo, job_id)

```ruby
begin
  # Get a job for a workflow run
  data, status_code, headers = api_instance.actions_get_job_for_workflow_run_with_http_info(owner, repo, job_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Job>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_job_for_workflow_run_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **job_id** | **Integer** | The unique identifier of the job. |  |

### Return type

[**Job**](Job.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_org_public_key

> <ActionsPublicKey> actions_get_org_public_key(org)

Get an organization public key

Gets your public key, which you need to encrypt secrets. You need to encrypt a secret before you can create or update secrets.  The authenticated user must have collaborator access to a repository to create, update, or read secrets.  OAuth tokens and personal access tokens (classic) need the`admin:org` scope to use this endpoint. If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Get an organization public key
  result = api_instance.actions_get_org_public_key(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_org_public_key: #{e}"
end
```

#### Using the actions_get_org_public_key_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsPublicKey>, Integer, Hash)> actions_get_org_public_key_with_http_info(org)

```ruby
begin
  # Get an organization public key
  data, status_code, headers = api_instance.actions_get_org_public_key_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsPublicKey>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_org_public_key_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**ActionsPublicKey**](ActionsPublicKey.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_org_secret

> <OrganizationActionsSecret> actions_get_org_secret(org, secret_name)

Get an organization secret

Gets a single organization secret without revealing its encrypted value.  The authenticated user must have collaborator access to a repository to create, update, or read secrets  OAuth tokens and personal access tokens (classic) need the`admin:org` scope to use this endpoint. If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.

begin
  # Get an organization secret
  result = api_instance.actions_get_org_secret(org, secret_name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_org_secret: #{e}"
end
```

#### Using the actions_get_org_secret_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrganizationActionsSecret>, Integer, Hash)> actions_get_org_secret_with_http_info(org, secret_name)

```ruby
begin
  # Get an organization secret
  data, status_code, headers = api_instance.actions_get_org_secret_with_http_info(org, secret_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrganizationActionsSecret>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_org_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |

### Return type

[**OrganizationActionsSecret**](OrganizationActionsSecret.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_org_variable

> <OrganizationActionsVariable> actions_get_org_variable(org, name)

Get an organization variable

Gets a specific variable in an organization.  The authenticated user must have collaborator access to a repository to create, update, or read variables.  OAuth tokens and personal access tokens (classic) need the`admin:org` scope to use this endpoint. If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
name = 'name_example' # String | The name of the variable.

begin
  # Get an organization variable
  result = api_instance.actions_get_org_variable(org, name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_org_variable: #{e}"
end
```

#### Using the actions_get_org_variable_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrganizationActionsVariable>, Integer, Hash)> actions_get_org_variable_with_http_info(org, name)

```ruby
begin
  # Get an organization variable
  data, status_code, headers = api_instance.actions_get_org_variable_with_http_info(org, name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrganizationActionsVariable>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_org_variable_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **name** | **String** | The name of the variable. |  |

### Return type

[**OrganizationActionsVariable**](OrganizationActionsVariable.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_pending_deployments_for_run

> <Array<PendingDeployment>> actions_get_pending_deployments_for_run(owner, repo, run_id)

Get pending deployments for a workflow run

Get all deployment environments for a workflow run that are waiting for protection rules to pass.  Anyone with read access to the repository can use this endpoint.  If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
run_id = 56 # Integer | The unique identifier of the workflow run.

begin
  # Get pending deployments for a workflow run
  result = api_instance.actions_get_pending_deployments_for_run(owner, repo, run_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_pending_deployments_for_run: #{e}"
end
```

#### Using the actions_get_pending_deployments_for_run_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<PendingDeployment>>, Integer, Hash)> actions_get_pending_deployments_for_run_with_http_info(owner, repo, run_id)

```ruby
begin
  # Get pending deployments for a workflow run
  data, status_code, headers = api_instance.actions_get_pending_deployments_for_run_with_http_info(owner, repo, run_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<PendingDeployment>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_pending_deployments_for_run_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **run_id** | **Integer** | The unique identifier of the workflow run. |  |

### Return type

[**Array&lt;PendingDeployment&gt;**](PendingDeployment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_repo_public_key

> <ActionsPublicKey> actions_get_repo_public_key(owner, repo)

Get a repository public key

Gets your public key, which you need to encrypt secrets. You need to encrypt a secret before you can create or update secrets.  Anyone with read access to the repository can use this endpoint.  If the repository is private, OAuth tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Get a repository public key
  result = api_instance.actions_get_repo_public_key(owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_repo_public_key: #{e}"
end
```

#### Using the actions_get_repo_public_key_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsPublicKey>, Integer, Hash)> actions_get_repo_public_key_with_http_info(owner, repo)

```ruby
begin
  # Get a repository public key
  data, status_code, headers = api_instance.actions_get_repo_public_key_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsPublicKey>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_repo_public_key_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**ActionsPublicKey**](ActionsPublicKey.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_repo_secret

> <ActionsSecret> actions_get_repo_secret(owner, repo, secret_name)

Get a repository secret

Gets a single repository secret without revealing its encrypted value.  The authenticated user must have collaborator access to the repository to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.

begin
  # Get a repository secret
  result = api_instance.actions_get_repo_secret(owner, repo, secret_name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_repo_secret: #{e}"
end
```

#### Using the actions_get_repo_secret_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsSecret>, Integer, Hash)> actions_get_repo_secret_with_http_info(owner, repo, secret_name)

```ruby
begin
  # Get a repository secret
  data, status_code, headers = api_instance.actions_get_repo_secret_with_http_info(owner, repo, secret_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsSecret>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_repo_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |

### Return type

[**ActionsSecret**](ActionsSecret.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_repo_variable

> <ActionsVariable> actions_get_repo_variable(owner, repo, name)

Get a repository variable

Gets a specific variable in a repository.  The authenticated user must have collaborator access to the repository to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
name = 'name_example' # String | The name of the variable.

begin
  # Get a repository variable
  result = api_instance.actions_get_repo_variable(owner, repo, name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_repo_variable: #{e}"
end
```

#### Using the actions_get_repo_variable_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsVariable>, Integer, Hash)> actions_get_repo_variable_with_http_info(owner, repo, name)

```ruby
begin
  # Get a repository variable
  data, status_code, headers = api_instance.actions_get_repo_variable_with_http_info(owner, repo, name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsVariable>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_repo_variable_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **name** | **String** | The name of the variable. |  |

### Return type

[**ActionsVariable**](ActionsVariable.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_reviews_for_run

> <Array<EnvironmentApprovals>> actions_get_reviews_for_run(owner, repo, run_id)

Get the review history for a workflow run

Anyone with read access to the repository can use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint with a private repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
run_id = 56 # Integer | The unique identifier of the workflow run.

begin
  # Get the review history for a workflow run
  result = api_instance.actions_get_reviews_for_run(owner, repo, run_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_reviews_for_run: #{e}"
end
```

#### Using the actions_get_reviews_for_run_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<EnvironmentApprovals>>, Integer, Hash)> actions_get_reviews_for_run_with_http_info(owner, repo, run_id)

```ruby
begin
  # Get the review history for a workflow run
  data, status_code, headers = api_instance.actions_get_reviews_for_run_with_http_info(owner, repo, run_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<EnvironmentApprovals>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_reviews_for_run_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **run_id** | **Integer** | The unique identifier of the workflow run. |  |

### Return type

[**Array&lt;EnvironmentApprovals&gt;**](EnvironmentApprovals.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_self_hosted_runner_for_org

> <Runner> actions_get_self_hosted_runner_for_org(org, runner_id)

Get a self-hosted runner for an organization

Gets a specific self-hosted runner configured in an organization.  Authenticated users must have admin access to the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint. If the repository is private, the `repo` scope is also required.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
runner_id = 56 # Integer | Unique identifier of the self-hosted runner.

begin
  # Get a self-hosted runner for an organization
  result = api_instance.actions_get_self_hosted_runner_for_org(org, runner_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_self_hosted_runner_for_org: #{e}"
end
```

#### Using the actions_get_self_hosted_runner_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Runner>, Integer, Hash)> actions_get_self_hosted_runner_for_org_with_http_info(org, runner_id)

```ruby
begin
  # Get a self-hosted runner for an organization
  data, status_code, headers = api_instance.actions_get_self_hosted_runner_for_org_with_http_info(org, runner_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Runner>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_self_hosted_runner_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **runner_id** | **Integer** | Unique identifier of the self-hosted runner. |  |

### Return type

[**Runner**](Runner.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_self_hosted_runner_for_repo

> <Runner> actions_get_self_hosted_runner_for_repo(owner, repo, runner_id)

Get a self-hosted runner for a repository

Gets a specific self-hosted runner configured in a repository.  Authenticated users must have admin access to the repository to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
runner_id = 56 # Integer | Unique identifier of the self-hosted runner.

begin
  # Get a self-hosted runner for a repository
  result = api_instance.actions_get_self_hosted_runner_for_repo(owner, repo, runner_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_self_hosted_runner_for_repo: #{e}"
end
```

#### Using the actions_get_self_hosted_runner_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Runner>, Integer, Hash)> actions_get_self_hosted_runner_for_repo_with_http_info(owner, repo, runner_id)

```ruby
begin
  # Get a self-hosted runner for a repository
  data, status_code, headers = api_instance.actions_get_self_hosted_runner_for_repo_with_http_info(owner, repo, runner_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Runner>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_self_hosted_runner_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **runner_id** | **Integer** | Unique identifier of the self-hosted runner. |  |

### Return type

[**Runner**](Runner.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_workflow

> <Workflow> actions_get_workflow(owner, repo, workflow_id)

Get a workflow

Gets a specific workflow. You can replace `workflow_id` with the workflow file name. For example, you could use `main.yaml`.  Anyone with read access to the repository can use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint with a private repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
workflow_id = nil # ActionsGetWorkflowWorkflowIdParameter | The ID of the workflow. You can also pass the workflow file name as a string.

begin
  # Get a workflow
  result = api_instance.actions_get_workflow(owner, repo, workflow_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_workflow: #{e}"
end
```

#### Using the actions_get_workflow_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Workflow>, Integer, Hash)> actions_get_workflow_with_http_info(owner, repo, workflow_id)

```ruby
begin
  # Get a workflow
  data, status_code, headers = api_instance.actions_get_workflow_with_http_info(owner, repo, workflow_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Workflow>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_workflow_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **workflow_id** | [**ActionsGetWorkflowWorkflowIdParameter**](.md) | The ID of the workflow. You can also pass the workflow file name as a string. |  |

### Return type

[**Workflow**](Workflow.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_workflow_access_to_repository

> <ActionsWorkflowAccessToRepository> actions_get_workflow_access_to_repository(owner, repo)

Get the level of access for workflows outside of the repository

Gets the level of access that workflows outside of the repository have to actions and reusable workflows in the repository. This endpoint only applies to private repositories. For more information, see \"[Allowing access to components in a private repository](https://docs.github.com/repositories/managing-your-repositorys-settings-and-features/enabling-features-for-your-repository/managing-github-actions-settings-for-a-repository#allowing-access-to-components-in-a-private-repository).\"  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Get the level of access for workflows outside of the repository
  result = api_instance.actions_get_workflow_access_to_repository(owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_workflow_access_to_repository: #{e}"
end
```

#### Using the actions_get_workflow_access_to_repository_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsWorkflowAccessToRepository>, Integer, Hash)> actions_get_workflow_access_to_repository_with_http_info(owner, repo)

```ruby
begin
  # Get the level of access for workflows outside of the repository
  data, status_code, headers = api_instance.actions_get_workflow_access_to_repository_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsWorkflowAccessToRepository>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_workflow_access_to_repository_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**ActionsWorkflowAccessToRepository**](ActionsWorkflowAccessToRepository.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_workflow_run

> <WorkflowRun> actions_get_workflow_run(owner, repo, run_id, opts)

Get a workflow run

Gets a specific workflow run.  Anyone with read access to the repository can use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint with a private repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
run_id = 56 # Integer | The unique identifier of the workflow run.
opts = {
  exclude_pull_requests: true # Boolean | If `true` pull requests are omitted from the response (empty array).
}

begin
  # Get a workflow run
  result = api_instance.actions_get_workflow_run(owner, repo, run_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_workflow_run: #{e}"
end
```

#### Using the actions_get_workflow_run_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<WorkflowRun>, Integer, Hash)> actions_get_workflow_run_with_http_info(owner, repo, run_id, opts)

```ruby
begin
  # Get a workflow run
  data, status_code, headers = api_instance.actions_get_workflow_run_with_http_info(owner, repo, run_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <WorkflowRun>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_workflow_run_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **run_id** | **Integer** | The unique identifier of the workflow run. |  |
| **exclude_pull_requests** | **Boolean** | If &#x60;true&#x60; pull requests are omitted from the response (empty array). | [optional][default to false] |

### Return type

[**WorkflowRun**](WorkflowRun.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_workflow_run_attempt

> <WorkflowRun> actions_get_workflow_run_attempt(owner, repo, run_id, attempt_number, opts)

Get a workflow run attempt

Gets a specific workflow run attempt.  Anyone with read access to the repository can use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint with a private repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
run_id = 56 # Integer | The unique identifier of the workflow run.
attempt_number = 56 # Integer | The attempt number of the workflow run.
opts = {
  exclude_pull_requests: true # Boolean | If `true` pull requests are omitted from the response (empty array).
}

begin
  # Get a workflow run attempt
  result = api_instance.actions_get_workflow_run_attempt(owner, repo, run_id, attempt_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_workflow_run_attempt: #{e}"
end
```

#### Using the actions_get_workflow_run_attempt_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<WorkflowRun>, Integer, Hash)> actions_get_workflow_run_attempt_with_http_info(owner, repo, run_id, attempt_number, opts)

```ruby
begin
  # Get a workflow run attempt
  data, status_code, headers = api_instance.actions_get_workflow_run_attempt_with_http_info(owner, repo, run_id, attempt_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <WorkflowRun>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_workflow_run_attempt_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **run_id** | **Integer** | The unique identifier of the workflow run. |  |
| **attempt_number** | **Integer** | The attempt number of the workflow run. |  |
| **exclude_pull_requests** | **Boolean** | If &#x60;true&#x60; pull requests are omitted from the response (empty array). | [optional][default to false] |

### Return type

[**WorkflowRun**](WorkflowRun.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_workflow_run_usage

> <WorkflowRunUsage> actions_get_workflow_run_usage(owner, repo, run_id)

Get workflow run usage

Gets the number of billable minutes and total run time for a specific workflow run. Billable minutes only apply to workflows in private repositories that use GitHub-hosted runners. Usage is listed for each GitHub-hosted runner operating system in milliseconds. Any job re-runs are also included in the usage. The usage does not include the multiplier for macOS and Windows runners and is not rounded up to the nearest whole minute. For more information, see \"[Managing billing for GitHub Actions](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-actions)\".  Anyone with read access to the repository can use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint with a private repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
run_id = 56 # Integer | The unique identifier of the workflow run.

begin
  # Get workflow run usage
  result = api_instance.actions_get_workflow_run_usage(owner, repo, run_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_workflow_run_usage: #{e}"
end
```

#### Using the actions_get_workflow_run_usage_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<WorkflowRunUsage>, Integer, Hash)> actions_get_workflow_run_usage_with_http_info(owner, repo, run_id)

```ruby
begin
  # Get workflow run usage
  data, status_code, headers = api_instance.actions_get_workflow_run_usage_with_http_info(owner, repo, run_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <WorkflowRunUsage>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_workflow_run_usage_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **run_id** | **Integer** | The unique identifier of the workflow run. |  |

### Return type

[**WorkflowRunUsage**](WorkflowRunUsage.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_get_workflow_usage

> <WorkflowUsage> actions_get_workflow_usage(owner, repo, workflow_id)

Get workflow usage

Gets the number of billable minutes used by a specific workflow during the current billing cycle. Billable minutes only apply to workflows in private repositories that use GitHub-hosted runners. Usage is listed for each GitHub-hosted runner operating system in milliseconds. Any job re-runs are also included in the usage. The usage does not include the multiplier for macOS and Windows runners and is not rounded up to the nearest whole minute. For more information, see \"[Managing billing for GitHub Actions](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-actions)\".  You can replace `workflow_id` with the workflow file name. For example, you could use `main.yaml`.  Anyone with read access to the repository can use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint with a private repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
workflow_id = nil # ActionsGetWorkflowWorkflowIdParameter | The ID of the workflow. You can also pass the workflow file name as a string.

begin
  # Get workflow usage
  result = api_instance.actions_get_workflow_usage(owner, repo, workflow_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_workflow_usage: #{e}"
end
```

#### Using the actions_get_workflow_usage_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<WorkflowUsage>, Integer, Hash)> actions_get_workflow_usage_with_http_info(owner, repo, workflow_id)

```ruby
begin
  # Get workflow usage
  data, status_code, headers = api_instance.actions_get_workflow_usage_with_http_info(owner, repo, workflow_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <WorkflowUsage>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_get_workflow_usage_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **workflow_id** | [**ActionsGetWorkflowWorkflowIdParameter**](.md) | The ID of the workflow. You can also pass the workflow file name as a string. |  |

### Return type

[**WorkflowUsage**](WorkflowUsage.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_artifacts_for_repo

> <ActionsListArtifactsForRepo200Response> actions_list_artifacts_for_repo(owner, repo, opts)

List artifacts for a repository

Lists all artifacts for a repository.  Anyone with read access to the repository can use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint with a private repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  name: 'name_example' # String | The name field of an artifact. When specified, only artifacts with this name will be returned.
}

begin
  # List artifacts for a repository
  result = api_instance.actions_list_artifacts_for_repo(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_artifacts_for_repo: #{e}"
end
```

#### Using the actions_list_artifacts_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListArtifactsForRepo200Response>, Integer, Hash)> actions_list_artifacts_for_repo_with_http_info(owner, repo, opts)

```ruby
begin
  # List artifacts for a repository
  data, status_code, headers = api_instance.actions_list_artifacts_for_repo_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListArtifactsForRepo200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_artifacts_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **name** | **String** | The name field of an artifact. When specified, only artifacts with this name will be returned. | [optional] |

### Return type

[**ActionsListArtifactsForRepo200Response**](ActionsListArtifactsForRepo200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_environment_secrets

> <ActionsListRepoOrganizationSecrets200Response> actions_list_environment_secrets(owner, repo, environment_name, opts)

List environment secrets

Lists all secrets available in an environment without revealing their encrypted values.  Authenticated users must have collaborator access to a repository to create, update, or read secrets.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
environment_name = 'environment_name_example' # String | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with `%2F`.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List environment secrets
  result = api_instance.actions_list_environment_secrets(owner, repo, environment_name, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_environment_secrets: #{e}"
end
```

#### Using the actions_list_environment_secrets_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListRepoOrganizationSecrets200Response>, Integer, Hash)> actions_list_environment_secrets_with_http_info(owner, repo, environment_name, opts)

```ruby
begin
  # List environment secrets
  data, status_code, headers = api_instance.actions_list_environment_secrets_with_http_info(owner, repo, environment_name, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListRepoOrganizationSecrets200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_environment_secrets_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **environment_name** | **String** | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with &#x60;%2F&#x60;. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**ActionsListRepoOrganizationSecrets200Response**](ActionsListRepoOrganizationSecrets200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_environment_variables

> <ActionsListRepoOrganizationVariables200Response> actions_list_environment_variables(owner, repo, environment_name, opts)

List environment variables

Lists all environment variables.  Authenticated users must have collaborator access to a repository to create, update, or read variables.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
environment_name = 'environment_name_example' # String | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with `%2F`.
opts = {
  per_page: 56, # Integer | The number of results per page (max 30). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List environment variables
  result = api_instance.actions_list_environment_variables(owner, repo, environment_name, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_environment_variables: #{e}"
end
```

#### Using the actions_list_environment_variables_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListRepoOrganizationVariables200Response>, Integer, Hash)> actions_list_environment_variables_with_http_info(owner, repo, environment_name, opts)

```ruby
begin
  # List environment variables
  data, status_code, headers = api_instance.actions_list_environment_variables_with_http_info(owner, repo, environment_name, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListRepoOrganizationVariables200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_environment_variables_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **environment_name** | **String** | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with &#x60;%2F&#x60;. |  |
| **per_page** | **Integer** | The number of results per page (max 30). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 10] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**ActionsListRepoOrganizationVariables200Response**](ActionsListRepoOrganizationVariables200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_jobs_for_workflow_run

> <ActionsListJobsForWorkflowRunAttempt200Response> actions_list_jobs_for_workflow_run(owner, repo, run_id, opts)

List jobs for a workflow run

Lists jobs for a workflow run. You can use parameters to narrow the list of results. For more information about using parameters, see [Parameters](https://docs.github.com/rest/guides/getting-started-with-the-rest-api#parameters).  Anyone with read access to the repository can use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint with a private repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
run_id = 56 # Integer | The unique identifier of the workflow run.
opts = {
  filter: 'latest', # String | Filters jobs by their `completed_at` timestamp. `latest` returns jobs from the most recent execution of the workflow run. `all` returns all jobs for a workflow run, including from old executions of the workflow run.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List jobs for a workflow run
  result = api_instance.actions_list_jobs_for_workflow_run(owner, repo, run_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_jobs_for_workflow_run: #{e}"
end
```

#### Using the actions_list_jobs_for_workflow_run_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListJobsForWorkflowRunAttempt200Response>, Integer, Hash)> actions_list_jobs_for_workflow_run_with_http_info(owner, repo, run_id, opts)

```ruby
begin
  # List jobs for a workflow run
  data, status_code, headers = api_instance.actions_list_jobs_for_workflow_run_with_http_info(owner, repo, run_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListJobsForWorkflowRunAttempt200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_jobs_for_workflow_run_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **run_id** | **Integer** | The unique identifier of the workflow run. |  |
| **filter** | **String** | Filters jobs by their &#x60;completed_at&#x60; timestamp. &#x60;latest&#x60; returns jobs from the most recent execution of the workflow run. &#x60;all&#x60; returns all jobs for a workflow run, including from old executions of the workflow run. | [optional][default to &#39;latest&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**ActionsListJobsForWorkflowRunAttempt200Response**](ActionsListJobsForWorkflowRunAttempt200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_jobs_for_workflow_run_attempt

> <ActionsListJobsForWorkflowRunAttempt200Response> actions_list_jobs_for_workflow_run_attempt(owner, repo, run_id, attempt_number, opts)

List jobs for a workflow run attempt

Lists jobs for a specific workflow run attempt. You can use parameters to narrow the list of results. For more information about using parameters, see [Parameters](https://docs.github.com/rest/guides/getting-started-with-the-rest-api#parameters).  Anyone with read access to the repository can use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint  with a private repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
run_id = 56 # Integer | The unique identifier of the workflow run.
attempt_number = 56 # Integer | The attempt number of the workflow run.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List jobs for a workflow run attempt
  result = api_instance.actions_list_jobs_for_workflow_run_attempt(owner, repo, run_id, attempt_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_jobs_for_workflow_run_attempt: #{e}"
end
```

#### Using the actions_list_jobs_for_workflow_run_attempt_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListJobsForWorkflowRunAttempt200Response>, Integer, Hash)> actions_list_jobs_for_workflow_run_attempt_with_http_info(owner, repo, run_id, attempt_number, opts)

```ruby
begin
  # List jobs for a workflow run attempt
  data, status_code, headers = api_instance.actions_list_jobs_for_workflow_run_attempt_with_http_info(owner, repo, run_id, attempt_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListJobsForWorkflowRunAttempt200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_jobs_for_workflow_run_attempt_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **run_id** | **Integer** | The unique identifier of the workflow run. |  |
| **attempt_number** | **Integer** | The attempt number of the workflow run. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**ActionsListJobsForWorkflowRunAttempt200Response**](ActionsListJobsForWorkflowRunAttempt200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_labels_for_self_hosted_runner_for_org

> <ActionsListLabelsForSelfHostedRunnerForOrg200Response> actions_list_labels_for_self_hosted_runner_for_org(org, runner_id)

List labels for a self-hosted runner for an organization

Lists all labels for a self-hosted runner configured in an organization.  Authenticated users must have admin access to the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint. If the repository is private, the `repo` scope is also required.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
runner_id = 56 # Integer | Unique identifier of the self-hosted runner.

begin
  # List labels for a self-hosted runner for an organization
  result = api_instance.actions_list_labels_for_self_hosted_runner_for_org(org, runner_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_labels_for_self_hosted_runner_for_org: #{e}"
end
```

#### Using the actions_list_labels_for_self_hosted_runner_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListLabelsForSelfHostedRunnerForOrg200Response>, Integer, Hash)> actions_list_labels_for_self_hosted_runner_for_org_with_http_info(org, runner_id)

```ruby
begin
  # List labels for a self-hosted runner for an organization
  data, status_code, headers = api_instance.actions_list_labels_for_self_hosted_runner_for_org_with_http_info(org, runner_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListLabelsForSelfHostedRunnerForOrg200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_labels_for_self_hosted_runner_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **runner_id** | **Integer** | Unique identifier of the self-hosted runner. |  |

### Return type

[**ActionsListLabelsForSelfHostedRunnerForOrg200Response**](ActionsListLabelsForSelfHostedRunnerForOrg200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_labels_for_self_hosted_runner_for_repo

> <ActionsListLabelsForSelfHostedRunnerForOrg200Response> actions_list_labels_for_self_hosted_runner_for_repo(owner, repo, runner_id)

List labels for a self-hosted runner for a repository

Lists all labels for a self-hosted runner configured in a repository.  Authenticated users must have admin access to the repository to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
runner_id = 56 # Integer | Unique identifier of the self-hosted runner.

begin
  # List labels for a self-hosted runner for a repository
  result = api_instance.actions_list_labels_for_self_hosted_runner_for_repo(owner, repo, runner_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_labels_for_self_hosted_runner_for_repo: #{e}"
end
```

#### Using the actions_list_labels_for_self_hosted_runner_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListLabelsForSelfHostedRunnerForOrg200Response>, Integer, Hash)> actions_list_labels_for_self_hosted_runner_for_repo_with_http_info(owner, repo, runner_id)

```ruby
begin
  # List labels for a self-hosted runner for a repository
  data, status_code, headers = api_instance.actions_list_labels_for_self_hosted_runner_for_repo_with_http_info(owner, repo, runner_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListLabelsForSelfHostedRunnerForOrg200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_labels_for_self_hosted_runner_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **runner_id** | **Integer** | Unique identifier of the self-hosted runner. |  |

### Return type

[**ActionsListLabelsForSelfHostedRunnerForOrg200Response**](ActionsListLabelsForSelfHostedRunnerForOrg200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_org_secrets

> <ActionsListOrgSecrets200Response> actions_list_org_secrets(org, opts)

List organization secrets

Lists all secrets available in an organization without revealing their encrypted values.  Authenticated users must have collaborator access to a repository to create, update, or read secrets.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint. If the repository is private, the `repo` scope is also required.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List organization secrets
  result = api_instance.actions_list_org_secrets(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_org_secrets: #{e}"
end
```

#### Using the actions_list_org_secrets_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListOrgSecrets200Response>, Integer, Hash)> actions_list_org_secrets_with_http_info(org, opts)

```ruby
begin
  # List organization secrets
  data, status_code, headers = api_instance.actions_list_org_secrets_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListOrgSecrets200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_org_secrets_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**ActionsListOrgSecrets200Response**](ActionsListOrgSecrets200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_org_variables

> <ActionsListOrgVariables200Response> actions_list_org_variables(org, opts)

List organization variables

Lists all organization variables.  Authenticated users must have collaborator access to a repository to create, update, or read variables.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint. If the repository is private, the `repo` scope is also required.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 30). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List organization variables
  result = api_instance.actions_list_org_variables(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_org_variables: #{e}"
end
```

#### Using the actions_list_org_variables_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListOrgVariables200Response>, Integer, Hash)> actions_list_org_variables_with_http_info(org, opts)

```ruby
begin
  # List organization variables
  data, status_code, headers = api_instance.actions_list_org_variables_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListOrgVariables200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_org_variables_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 30). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 10] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**ActionsListOrgVariables200Response**](ActionsListOrgVariables200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_repo_organization_secrets

> <ActionsListRepoOrganizationSecrets200Response> actions_list_repo_organization_secrets(owner, repo, opts)

List repository organization secrets

Lists all organization secrets shared with a repository without revealing their encrypted values.  Authenticated users must have collaborator access to a repository to create, update, or read secrets.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repository organization secrets
  result = api_instance.actions_list_repo_organization_secrets(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_repo_organization_secrets: #{e}"
end
```

#### Using the actions_list_repo_organization_secrets_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListRepoOrganizationSecrets200Response>, Integer, Hash)> actions_list_repo_organization_secrets_with_http_info(owner, repo, opts)

```ruby
begin
  # List repository organization secrets
  data, status_code, headers = api_instance.actions_list_repo_organization_secrets_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListRepoOrganizationSecrets200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_repo_organization_secrets_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**ActionsListRepoOrganizationSecrets200Response**](ActionsListRepoOrganizationSecrets200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_repo_organization_variables

> <ActionsListRepoOrganizationVariables200Response> actions_list_repo_organization_variables(owner, repo, opts)

List repository organization variables

Lists all organization variables shared with a repository.  Authenticated users must have collaborator access to a repository to create, update, or read variables.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 30). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repository organization variables
  result = api_instance.actions_list_repo_organization_variables(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_repo_organization_variables: #{e}"
end
```

#### Using the actions_list_repo_organization_variables_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListRepoOrganizationVariables200Response>, Integer, Hash)> actions_list_repo_organization_variables_with_http_info(owner, repo, opts)

```ruby
begin
  # List repository organization variables
  data, status_code, headers = api_instance.actions_list_repo_organization_variables_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListRepoOrganizationVariables200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_repo_organization_variables_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 30). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 10] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**ActionsListRepoOrganizationVariables200Response**](ActionsListRepoOrganizationVariables200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_repo_secrets

> <ActionsListRepoOrganizationSecrets200Response> actions_list_repo_secrets(owner, repo, opts)

List repository secrets

Lists all secrets available in a repository without revealing their encrypted values.  Authenticated users must have collaborator access to a repository to create, update, or read secrets.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repository secrets
  result = api_instance.actions_list_repo_secrets(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_repo_secrets: #{e}"
end
```

#### Using the actions_list_repo_secrets_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListRepoOrganizationSecrets200Response>, Integer, Hash)> actions_list_repo_secrets_with_http_info(owner, repo, opts)

```ruby
begin
  # List repository secrets
  data, status_code, headers = api_instance.actions_list_repo_secrets_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListRepoOrganizationSecrets200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_repo_secrets_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**ActionsListRepoOrganizationSecrets200Response**](ActionsListRepoOrganizationSecrets200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_repo_variables

> <ActionsListRepoOrganizationVariables200Response> actions_list_repo_variables(owner, repo, opts)

List repository variables

Lists all repository variables.  Authenticated users must have collaborator access to a repository to create, update, or read variables.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 30). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repository variables
  result = api_instance.actions_list_repo_variables(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_repo_variables: #{e}"
end
```

#### Using the actions_list_repo_variables_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListRepoOrganizationVariables200Response>, Integer, Hash)> actions_list_repo_variables_with_http_info(owner, repo, opts)

```ruby
begin
  # List repository variables
  data, status_code, headers = api_instance.actions_list_repo_variables_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListRepoOrganizationVariables200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_repo_variables_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 30). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 10] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**ActionsListRepoOrganizationVariables200Response**](ActionsListRepoOrganizationVariables200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_repo_workflows

> <ActionsListRepoWorkflows200Response> actions_list_repo_workflows(owner, repo, opts)

List repository workflows

Lists the workflows in a repository.  Anyone with read access to the repository can use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint with a private repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repository workflows
  result = api_instance.actions_list_repo_workflows(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_repo_workflows: #{e}"
end
```

#### Using the actions_list_repo_workflows_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListRepoWorkflows200Response>, Integer, Hash)> actions_list_repo_workflows_with_http_info(owner, repo, opts)

```ruby
begin
  # List repository workflows
  data, status_code, headers = api_instance.actions_list_repo_workflows_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListRepoWorkflows200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_repo_workflows_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**ActionsListRepoWorkflows200Response**](ActionsListRepoWorkflows200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_runner_applications_for_org

> <Array<RunnerApplication>> actions_list_runner_applications_for_org(org)

List runner applications for an organization

Lists binaries for the runner application that you can download and run.  Authenticated users must have admin access to the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.  If the repository is private, the `repo` scope is also required.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # List runner applications for an organization
  result = api_instance.actions_list_runner_applications_for_org(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_runner_applications_for_org: #{e}"
end
```

#### Using the actions_list_runner_applications_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<RunnerApplication>>, Integer, Hash)> actions_list_runner_applications_for_org_with_http_info(org)

```ruby
begin
  # List runner applications for an organization
  data, status_code, headers = api_instance.actions_list_runner_applications_for_org_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<RunnerApplication>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_runner_applications_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**Array&lt;RunnerApplication&gt;**](RunnerApplication.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_runner_applications_for_repo

> <Array<RunnerApplication>> actions_list_runner_applications_for_repo(owner, repo)

List runner applications for a repository

Lists binaries for the runner application that you can download and run.  Authenticated users must have admin access to the repository to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # List runner applications for a repository
  result = api_instance.actions_list_runner_applications_for_repo(owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_runner_applications_for_repo: #{e}"
end
```

#### Using the actions_list_runner_applications_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<RunnerApplication>>, Integer, Hash)> actions_list_runner_applications_for_repo_with_http_info(owner, repo)

```ruby
begin
  # List runner applications for a repository
  data, status_code, headers = api_instance.actions_list_runner_applications_for_repo_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<RunnerApplication>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_runner_applications_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**Array&lt;RunnerApplication&gt;**](RunnerApplication.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_selected_repos_for_org_secret

> <ActionsListSelectedReposForOrgSecret200Response> actions_list_selected_repos_for_org_secret(org, secret_name, opts)

List selected repositories for an organization secret

Lists all repositories that have been selected when the `visibility` for repository access to a secret is set to `selected`.  Authenticated users must have collaborator access to a repository to create, update, or read secrets.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint. If the repository is private, the `repo` scope is also required.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.
opts = {
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  per_page: 56 # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List selected repositories for an organization secret
  result = api_instance.actions_list_selected_repos_for_org_secret(org, secret_name, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_selected_repos_for_org_secret: #{e}"
end
```

#### Using the actions_list_selected_repos_for_org_secret_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListSelectedReposForOrgSecret200Response>, Integer, Hash)> actions_list_selected_repos_for_org_secret_with_http_info(org, secret_name, opts)

```ruby
begin
  # List selected repositories for an organization secret
  data, status_code, headers = api_instance.actions_list_selected_repos_for_org_secret_with_http_info(org, secret_name, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListSelectedReposForOrgSecret200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_selected_repos_for_org_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |

### Return type

[**ActionsListSelectedReposForOrgSecret200Response**](ActionsListSelectedReposForOrgSecret200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_selected_repos_for_org_variable

> <ActionsListSelectedReposForOrgSecret200Response> actions_list_selected_repos_for_org_variable(org, name, opts)

List selected repositories for an organization variable

Lists all repositories that can access an organization variable that is available to selected repositories.  Authenticated users must have collaborator access to a repository to create, update, or read variables.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint. If the repository is private, the `repo` scope is also required.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
name = 'name_example' # String | The name of the variable.
opts = {
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  per_page: 56 # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List selected repositories for an organization variable
  result = api_instance.actions_list_selected_repos_for_org_variable(org, name, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_selected_repos_for_org_variable: #{e}"
end
```

#### Using the actions_list_selected_repos_for_org_variable_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListSelectedReposForOrgSecret200Response>, Integer, Hash)> actions_list_selected_repos_for_org_variable_with_http_info(org, name, opts)

```ruby
begin
  # List selected repositories for an organization variable
  data, status_code, headers = api_instance.actions_list_selected_repos_for_org_variable_with_http_info(org, name, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListSelectedReposForOrgSecret200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_selected_repos_for_org_variable_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **name** | **String** | The name of the variable. |  |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |

### Return type

[**ActionsListSelectedReposForOrgSecret200Response**](ActionsListSelectedReposForOrgSecret200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_selected_repositories_enabled_github_actions_organization

> <ActionsListSelectedRepositoriesEnabledGithubActionsOrganization200Response> actions_list_selected_repositories_enabled_github_actions_organization(org, opts)

List selected repositories enabled for GitHub Actions in an organization

Lists the selected repositories that are enabled for GitHub Actions in an organization. To use this endpoint, the organization permission policy for `enabled_repositories` must be configured to `selected`. For more information, see \"[Set GitHub Actions permissions for an organization](#set-github-actions-permissions-for-an-organization).\"  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List selected repositories enabled for GitHub Actions in an organization
  result = api_instance.actions_list_selected_repositories_enabled_github_actions_organization(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_selected_repositories_enabled_github_actions_organization: #{e}"
end
```

#### Using the actions_list_selected_repositories_enabled_github_actions_organization_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListSelectedRepositoriesEnabledGithubActionsOrganization200Response>, Integer, Hash)> actions_list_selected_repositories_enabled_github_actions_organization_with_http_info(org, opts)

```ruby
begin
  # List selected repositories enabled for GitHub Actions in an organization
  data, status_code, headers = api_instance.actions_list_selected_repositories_enabled_github_actions_organization_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListSelectedRepositoriesEnabledGithubActionsOrganization200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_selected_repositories_enabled_github_actions_organization_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**ActionsListSelectedRepositoriesEnabledGithubActionsOrganization200Response**](ActionsListSelectedRepositoriesEnabledGithubActionsOrganization200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_self_hosted_runners_for_org

> <ActionsListSelfHostedRunnersForOrg200Response> actions_list_self_hosted_runners_for_org(org, opts)

List self-hosted runners for an organization

Lists all self-hosted runners configured in an organization.  Authenticated users must have admin access to the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint. If the repository is private, the `repo` scope is also required.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  name: 'name_example', # String | The name of a self-hosted runner.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List self-hosted runners for an organization
  result = api_instance.actions_list_self_hosted_runners_for_org(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_self_hosted_runners_for_org: #{e}"
end
```

#### Using the actions_list_self_hosted_runners_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListSelfHostedRunnersForOrg200Response>, Integer, Hash)> actions_list_self_hosted_runners_for_org_with_http_info(org, opts)

```ruby
begin
  # List self-hosted runners for an organization
  data, status_code, headers = api_instance.actions_list_self_hosted_runners_for_org_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListSelfHostedRunnersForOrg200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_self_hosted_runners_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **name** | **String** | The name of a self-hosted runner. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**ActionsListSelfHostedRunnersForOrg200Response**](ActionsListSelfHostedRunnersForOrg200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_self_hosted_runners_for_repo

> <ActionsListSelfHostedRunnersForOrg200Response> actions_list_self_hosted_runners_for_repo(owner, repo, opts)

List self-hosted runners for a repository

Lists all self-hosted runners configured in a repository.  Authenticated users must have admin access to the repository to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  name: 'name_example', # String | The name of a self-hosted runner.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List self-hosted runners for a repository
  result = api_instance.actions_list_self_hosted_runners_for_repo(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_self_hosted_runners_for_repo: #{e}"
end
```

#### Using the actions_list_self_hosted_runners_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListSelfHostedRunnersForOrg200Response>, Integer, Hash)> actions_list_self_hosted_runners_for_repo_with_http_info(owner, repo, opts)

```ruby
begin
  # List self-hosted runners for a repository
  data, status_code, headers = api_instance.actions_list_self_hosted_runners_for_repo_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListSelfHostedRunnersForOrg200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_self_hosted_runners_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **name** | **String** | The name of a self-hosted runner. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**ActionsListSelfHostedRunnersForOrg200Response**](ActionsListSelfHostedRunnersForOrg200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_workflow_run_artifacts

> <ActionsListArtifactsForRepo200Response> actions_list_workflow_run_artifacts(owner, repo, run_id, opts)

List workflow run artifacts

Lists artifacts for a workflow run.  Anyone with read access to the repository can use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint with a private repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
run_id = 56 # Integer | The unique identifier of the workflow run.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  name: 'name_example' # String | The name field of an artifact. When specified, only artifacts with this name will be returned.
}

begin
  # List workflow run artifacts
  result = api_instance.actions_list_workflow_run_artifacts(owner, repo, run_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_workflow_run_artifacts: #{e}"
end
```

#### Using the actions_list_workflow_run_artifacts_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListArtifactsForRepo200Response>, Integer, Hash)> actions_list_workflow_run_artifacts_with_http_info(owner, repo, run_id, opts)

```ruby
begin
  # List workflow run artifacts
  data, status_code, headers = api_instance.actions_list_workflow_run_artifacts_with_http_info(owner, repo, run_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListArtifactsForRepo200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_workflow_run_artifacts_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **run_id** | **Integer** | The unique identifier of the workflow run. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **name** | **String** | The name field of an artifact. When specified, only artifacts with this name will be returned. | [optional] |

### Return type

[**ActionsListArtifactsForRepo200Response**](ActionsListArtifactsForRepo200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_workflow_runs

> <ActionsListWorkflowRunsForRepo200Response> actions_list_workflow_runs(owner, repo, workflow_id, opts)

List workflow runs for a workflow

List all workflow runs for a workflow. You can replace `workflow_id` with the workflow file name. For example, you could use `main.yaml`. You can use parameters to narrow the list of results. For more information about using parameters, see [Parameters](https://docs.github.com/rest/guides/getting-started-with-the-rest-api#parameters).  Anyone with read access to the repository can use this endpoint  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint with a private repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
workflow_id = nil # ActionsGetWorkflowWorkflowIdParameter | The ID of the workflow. You can also pass the workflow file name as a string.
opts = {
  actor: 'actor_example', # String | Returns someone's workflow runs. Use the login for the user who created the `push` associated with the check suite or workflow run.
  branch: 'branch_example', # String | Returns workflow runs associated with a branch. Use the name of the branch of the `push`.
  event: 'event_example', # String | Returns workflow run triggered by the event you specify. For example, `push`, `pull_request` or `issue`. For more information, see \"[Events that trigger workflows](https://docs.github.com/actions/automating-your-workflow-with-github-actions/events-that-trigger-workflows).\"
  status: 'completed', # String | Returns workflow runs with the check run `status` or `conclusion` that you specify. For example, a conclusion can be `success` or a status can be `in_progress`. Only GitHub Actions can set a status of `waiting`, `pending`, or `requested`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  created: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Returns workflow runs created within the given date-time range. For more information on the syntax, see \"[Understanding the search syntax](https://docs.github.com/search-github/getting-started-with-searching-on-github/understanding-the-search-syntax#query-for-dates).\"
  exclude_pull_requests: true, # Boolean | If `true` pull requests are omitted from the response (empty array).
  check_suite_id: 56, # Integer | Returns workflow runs with the `check_suite_id` that you specify.
  head_sha: 'head_sha_example' # String | Only returns workflow runs that are associated with the specified `head_sha`.
}

begin
  # List workflow runs for a workflow
  result = api_instance.actions_list_workflow_runs(owner, repo, workflow_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_workflow_runs: #{e}"
end
```

#### Using the actions_list_workflow_runs_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListWorkflowRunsForRepo200Response>, Integer, Hash)> actions_list_workflow_runs_with_http_info(owner, repo, workflow_id, opts)

```ruby
begin
  # List workflow runs for a workflow
  data, status_code, headers = api_instance.actions_list_workflow_runs_with_http_info(owner, repo, workflow_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListWorkflowRunsForRepo200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_workflow_runs_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **workflow_id** | [**ActionsGetWorkflowWorkflowIdParameter**](.md) | The ID of the workflow. You can also pass the workflow file name as a string. |  |
| **actor** | **String** | Returns someone&#39;s workflow runs. Use the login for the user who created the &#x60;push&#x60; associated with the check suite or workflow run. | [optional] |
| **branch** | **String** | Returns workflow runs associated with a branch. Use the name of the branch of the &#x60;push&#x60;. | [optional] |
| **event** | **String** | Returns workflow run triggered by the event you specify. For example, &#x60;push&#x60;, &#x60;pull_request&#x60; or &#x60;issue&#x60;. For more information, see \&quot;[Events that trigger workflows](https://docs.github.com/actions/automating-your-workflow-with-github-actions/events-that-trigger-workflows).\&quot; | [optional] |
| **status** | **String** | Returns workflow runs with the check run &#x60;status&#x60; or &#x60;conclusion&#x60; that you specify. For example, a conclusion can be &#x60;success&#x60; or a status can be &#x60;in_progress&#x60;. Only GitHub Actions can set a status of &#x60;waiting&#x60;, &#x60;pending&#x60;, or &#x60;requested&#x60;. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **created** | **Time** | Returns workflow runs created within the given date-time range. For more information on the syntax, see \&quot;[Understanding the search syntax](https://docs.github.com/search-github/getting-started-with-searching-on-github/understanding-the-search-syntax#query-for-dates).\&quot; | [optional] |
| **exclude_pull_requests** | **Boolean** | If &#x60;true&#x60; pull requests are omitted from the response (empty array). | [optional][default to false] |
| **check_suite_id** | **Integer** | Returns workflow runs with the &#x60;check_suite_id&#x60; that you specify. | [optional] |
| **head_sha** | **String** | Only returns workflow runs that are associated with the specified &#x60;head_sha&#x60;. | [optional] |

### Return type

[**ActionsListWorkflowRunsForRepo200Response**](ActionsListWorkflowRunsForRepo200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_list_workflow_runs_for_repo

> <ActionsListWorkflowRunsForRepo200Response> actions_list_workflow_runs_for_repo(owner, repo, opts)

List workflow runs for a repository

Lists all workflow runs for a repository. You can use parameters to narrow the list of results. For more information about using parameters, see [Parameters](https://docs.github.com/rest/guides/getting-started-with-the-rest-api#parameters).  Anyone with read access to the repository can use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint with a private repository.  This API will return up to 1,000 results for each search when using the following parameters: `actor`, `branch`, `check_suite_id`, `created`, `event`, `head_sha`, `status`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  actor: 'actor_example', # String | Returns someone's workflow runs. Use the login for the user who created the `push` associated with the check suite or workflow run.
  branch: 'branch_example', # String | Returns workflow runs associated with a branch. Use the name of the branch of the `push`.
  event: 'event_example', # String | Returns workflow run triggered by the event you specify. For example, `push`, `pull_request` or `issue`. For more information, see \"[Events that trigger workflows](https://docs.github.com/actions/automating-your-workflow-with-github-actions/events-that-trigger-workflows).\"
  status: 'completed', # String | Returns workflow runs with the check run `status` or `conclusion` that you specify. For example, a conclusion can be `success` or a status can be `in_progress`. Only GitHub Actions can set a status of `waiting`, `pending`, or `requested`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  created: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Returns workflow runs created within the given date-time range. For more information on the syntax, see \"[Understanding the search syntax](https://docs.github.com/search-github/getting-started-with-searching-on-github/understanding-the-search-syntax#query-for-dates).\"
  exclude_pull_requests: true, # Boolean | If `true` pull requests are omitted from the response (empty array).
  check_suite_id: 56, # Integer | Returns workflow runs with the `check_suite_id` that you specify.
  head_sha: 'head_sha_example' # String | Only returns workflow runs that are associated with the specified `head_sha`.
}

begin
  # List workflow runs for a repository
  result = api_instance.actions_list_workflow_runs_for_repo(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_workflow_runs_for_repo: #{e}"
end
```

#### Using the actions_list_workflow_runs_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListWorkflowRunsForRepo200Response>, Integer, Hash)> actions_list_workflow_runs_for_repo_with_http_info(owner, repo, opts)

```ruby
begin
  # List workflow runs for a repository
  data, status_code, headers = api_instance.actions_list_workflow_runs_for_repo_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListWorkflowRunsForRepo200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_list_workflow_runs_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **actor** | **String** | Returns someone&#39;s workflow runs. Use the login for the user who created the &#x60;push&#x60; associated with the check suite or workflow run. | [optional] |
| **branch** | **String** | Returns workflow runs associated with a branch. Use the name of the branch of the &#x60;push&#x60;. | [optional] |
| **event** | **String** | Returns workflow run triggered by the event you specify. For example, &#x60;push&#x60;, &#x60;pull_request&#x60; or &#x60;issue&#x60;. For more information, see \&quot;[Events that trigger workflows](https://docs.github.com/actions/automating-your-workflow-with-github-actions/events-that-trigger-workflows).\&quot; | [optional] |
| **status** | **String** | Returns workflow runs with the check run &#x60;status&#x60; or &#x60;conclusion&#x60; that you specify. For example, a conclusion can be &#x60;success&#x60; or a status can be &#x60;in_progress&#x60;. Only GitHub Actions can set a status of &#x60;waiting&#x60;, &#x60;pending&#x60;, or &#x60;requested&#x60;. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **created** | **Time** | Returns workflow runs created within the given date-time range. For more information on the syntax, see \&quot;[Understanding the search syntax](https://docs.github.com/search-github/getting-started-with-searching-on-github/understanding-the-search-syntax#query-for-dates).\&quot; | [optional] |
| **exclude_pull_requests** | **Boolean** | If &#x60;true&#x60; pull requests are omitted from the response (empty array). | [optional][default to false] |
| **check_suite_id** | **Integer** | Returns workflow runs with the &#x60;check_suite_id&#x60; that you specify. | [optional] |
| **head_sha** | **String** | Only returns workflow runs that are associated with the specified &#x60;head_sha&#x60;. | [optional] |

### Return type

[**ActionsListWorkflowRunsForRepo200Response**](ActionsListWorkflowRunsForRepo200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_re_run_job_for_workflow_run

> Object actions_re_run_job_for_workflow_run(owner, repo, job_id, opts)

Re-run a job from a workflow run

Re-run a job and its dependent jobs in a workflow run.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
job_id = 56 # Integer | The unique identifier of the job.
opts = {
  actions_re_run_job_for_workflow_run_request: OpenapiClient::ActionsReRunJobForWorkflowRunRequest.new # ActionsReRunJobForWorkflowRunRequest | 
}

begin
  # Re-run a job from a workflow run
  result = api_instance.actions_re_run_job_for_workflow_run(owner, repo, job_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_re_run_job_for_workflow_run: #{e}"
end
```

#### Using the actions_re_run_job_for_workflow_run_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> actions_re_run_job_for_workflow_run_with_http_info(owner, repo, job_id, opts)

```ruby
begin
  # Re-run a job from a workflow run
  data, status_code, headers = api_instance.actions_re_run_job_for_workflow_run_with_http_info(owner, repo, job_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_re_run_job_for_workflow_run_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **job_id** | **Integer** | The unique identifier of the job. |  |
| **actions_re_run_job_for_workflow_run_request** | [**ActionsReRunJobForWorkflowRunRequest**](ActionsReRunJobForWorkflowRunRequest.md) |  | [optional] |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## actions_re_run_workflow

> Object actions_re_run_workflow(owner, repo, run_id, opts)

Re-run a workflow

Re-runs your workflow run using its `id`.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
run_id = 56 # Integer | The unique identifier of the workflow run.
opts = {
  actions_re_run_job_for_workflow_run_request: OpenapiClient::ActionsReRunJobForWorkflowRunRequest.new # ActionsReRunJobForWorkflowRunRequest | 
}

begin
  # Re-run a workflow
  result = api_instance.actions_re_run_workflow(owner, repo, run_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_re_run_workflow: #{e}"
end
```

#### Using the actions_re_run_workflow_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> actions_re_run_workflow_with_http_info(owner, repo, run_id, opts)

```ruby
begin
  # Re-run a workflow
  data, status_code, headers = api_instance.actions_re_run_workflow_with_http_info(owner, repo, run_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_re_run_workflow_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **run_id** | **Integer** | The unique identifier of the workflow run. |  |
| **actions_re_run_job_for_workflow_run_request** | [**ActionsReRunJobForWorkflowRunRequest**](ActionsReRunJobForWorkflowRunRequest.md) |  | [optional] |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## actions_re_run_workflow_failed_jobs

> Object actions_re_run_workflow_failed_jobs(owner, repo, run_id, opts)

Re-run failed jobs from a workflow run

Re-run all of the failed jobs and their dependent jobs in a workflow run using the `id` of the workflow run.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
run_id = 56 # Integer | The unique identifier of the workflow run.
opts = {
  actions_re_run_job_for_workflow_run_request: OpenapiClient::ActionsReRunJobForWorkflowRunRequest.new # ActionsReRunJobForWorkflowRunRequest | 
}

begin
  # Re-run failed jobs from a workflow run
  result = api_instance.actions_re_run_workflow_failed_jobs(owner, repo, run_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_re_run_workflow_failed_jobs: #{e}"
end
```

#### Using the actions_re_run_workflow_failed_jobs_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> actions_re_run_workflow_failed_jobs_with_http_info(owner, repo, run_id, opts)

```ruby
begin
  # Re-run failed jobs from a workflow run
  data, status_code, headers = api_instance.actions_re_run_workflow_failed_jobs_with_http_info(owner, repo, run_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_re_run_workflow_failed_jobs_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **run_id** | **Integer** | The unique identifier of the workflow run. |  |
| **actions_re_run_job_for_workflow_run_request** | [**ActionsReRunJobForWorkflowRunRequest**](ActionsReRunJobForWorkflowRunRequest.md) |  | [optional] |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## actions_remove_all_custom_labels_from_self_hosted_runner_for_org

> <ActionsListLabelsForSelfHostedRunnerForOrg200Response> actions_remove_all_custom_labels_from_self_hosted_runner_for_org(org, runner_id)

Remove all custom labels from a self-hosted runner for an organization

Remove all custom labels from a self-hosted runner configured in an organization. Returns the remaining read-only labels from the runner.  Authenticated users must have admin access to the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint. If the repository is private, the `repo` scope is also required.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
runner_id = 56 # Integer | Unique identifier of the self-hosted runner.

begin
  # Remove all custom labels from a self-hosted runner for an organization
  result = api_instance.actions_remove_all_custom_labels_from_self_hosted_runner_for_org(org, runner_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_remove_all_custom_labels_from_self_hosted_runner_for_org: #{e}"
end
```

#### Using the actions_remove_all_custom_labels_from_self_hosted_runner_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListLabelsForSelfHostedRunnerForOrg200Response>, Integer, Hash)> actions_remove_all_custom_labels_from_self_hosted_runner_for_org_with_http_info(org, runner_id)

```ruby
begin
  # Remove all custom labels from a self-hosted runner for an organization
  data, status_code, headers = api_instance.actions_remove_all_custom_labels_from_self_hosted_runner_for_org_with_http_info(org, runner_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListLabelsForSelfHostedRunnerForOrg200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_remove_all_custom_labels_from_self_hosted_runner_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **runner_id** | **Integer** | Unique identifier of the self-hosted runner. |  |

### Return type

[**ActionsListLabelsForSelfHostedRunnerForOrg200Response**](ActionsListLabelsForSelfHostedRunnerForOrg200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_remove_all_custom_labels_from_self_hosted_runner_for_repo

> <ActionsListLabelsForSelfHostedRunnerForOrg200Response> actions_remove_all_custom_labels_from_self_hosted_runner_for_repo(owner, repo, runner_id)

Remove all custom labels from a self-hosted runner for a repository

Remove all custom labels from a self-hosted runner configured in a repository. Returns the remaining read-only labels from the runner.  Authenticated users must have admin access to the repository to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
runner_id = 56 # Integer | Unique identifier of the self-hosted runner.

begin
  # Remove all custom labels from a self-hosted runner for a repository
  result = api_instance.actions_remove_all_custom_labels_from_self_hosted_runner_for_repo(owner, repo, runner_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_remove_all_custom_labels_from_self_hosted_runner_for_repo: #{e}"
end
```

#### Using the actions_remove_all_custom_labels_from_self_hosted_runner_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListLabelsForSelfHostedRunnerForOrg200Response>, Integer, Hash)> actions_remove_all_custom_labels_from_self_hosted_runner_for_repo_with_http_info(owner, repo, runner_id)

```ruby
begin
  # Remove all custom labels from a self-hosted runner for a repository
  data, status_code, headers = api_instance.actions_remove_all_custom_labels_from_self_hosted_runner_for_repo_with_http_info(owner, repo, runner_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListLabelsForSelfHostedRunnerForOrg200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_remove_all_custom_labels_from_self_hosted_runner_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **runner_id** | **Integer** | Unique identifier of the self-hosted runner. |  |

### Return type

[**ActionsListLabelsForSelfHostedRunnerForOrg200Response**](ActionsListLabelsForSelfHostedRunnerForOrg200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_remove_custom_label_from_self_hosted_runner_for_org

> <ActionsListLabelsForSelfHostedRunnerForOrg200Response> actions_remove_custom_label_from_self_hosted_runner_for_org(org, runner_id, name)

Remove a custom label from a self-hosted runner for an organization

Remove a custom label from a self-hosted runner configured in an organization. Returns the remaining labels from the runner.  This endpoint returns a `404 Not Found` status if the custom label is not present on the runner.  Authenticated users must have admin access to the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint. If the repository is private, the `repo` scope is also required.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
runner_id = 56 # Integer | Unique identifier of the self-hosted runner.
name = 'name_example' # String | The name of a self-hosted runner's custom label.

begin
  # Remove a custom label from a self-hosted runner for an organization
  result = api_instance.actions_remove_custom_label_from_self_hosted_runner_for_org(org, runner_id, name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_remove_custom_label_from_self_hosted_runner_for_org: #{e}"
end
```

#### Using the actions_remove_custom_label_from_self_hosted_runner_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListLabelsForSelfHostedRunnerForOrg200Response>, Integer, Hash)> actions_remove_custom_label_from_self_hosted_runner_for_org_with_http_info(org, runner_id, name)

```ruby
begin
  # Remove a custom label from a self-hosted runner for an organization
  data, status_code, headers = api_instance.actions_remove_custom_label_from_self_hosted_runner_for_org_with_http_info(org, runner_id, name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListLabelsForSelfHostedRunnerForOrg200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_remove_custom_label_from_self_hosted_runner_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **runner_id** | **Integer** | Unique identifier of the self-hosted runner. |  |
| **name** | **String** | The name of a self-hosted runner&#39;s custom label. |  |

### Return type

[**ActionsListLabelsForSelfHostedRunnerForOrg200Response**](ActionsListLabelsForSelfHostedRunnerForOrg200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_remove_custom_label_from_self_hosted_runner_for_repo

> <ActionsListLabelsForSelfHostedRunnerForOrg200Response> actions_remove_custom_label_from_self_hosted_runner_for_repo(owner, repo, runner_id, name)

Remove a custom label from a self-hosted runner for a repository

Remove a custom label from a self-hosted runner configured in a repository. Returns the remaining labels from the runner.  This endpoint returns a `404 Not Found` status if the custom label is not present on the runner.  Authenticated users must have admin access to the repository to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
runner_id = 56 # Integer | Unique identifier of the self-hosted runner.
name = 'name_example' # String | The name of a self-hosted runner's custom label.

begin
  # Remove a custom label from a self-hosted runner for a repository
  result = api_instance.actions_remove_custom_label_from_self_hosted_runner_for_repo(owner, repo, runner_id, name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_remove_custom_label_from_self_hosted_runner_for_repo: #{e}"
end
```

#### Using the actions_remove_custom_label_from_self_hosted_runner_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListLabelsForSelfHostedRunnerForOrg200Response>, Integer, Hash)> actions_remove_custom_label_from_self_hosted_runner_for_repo_with_http_info(owner, repo, runner_id, name)

```ruby
begin
  # Remove a custom label from a self-hosted runner for a repository
  data, status_code, headers = api_instance.actions_remove_custom_label_from_self_hosted_runner_for_repo_with_http_info(owner, repo, runner_id, name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListLabelsForSelfHostedRunnerForOrg200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_remove_custom_label_from_self_hosted_runner_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **runner_id** | **Integer** | Unique identifier of the self-hosted runner. |  |
| **name** | **String** | The name of a self-hosted runner&#39;s custom label. |  |

### Return type

[**ActionsListLabelsForSelfHostedRunnerForOrg200Response**](ActionsListLabelsForSelfHostedRunnerForOrg200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## actions_remove_selected_repo_from_org_secret

> actions_remove_selected_repo_from_org_secret(org, secret_name, repository_id)

Remove selected repository from an organization secret

Removes a repository from an organization secret when the `visibility` for repository access is set to `selected`. The visibility is set when you [Create or update an organization secret](https://docs.github.com/rest/actions/secrets#create-or-update-an-organization-secret).  Authenticated users must have collaborator access to a repository to create, update, or read secrets.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint. If the repository is private, the `repo` scope is also required.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.
repository_id = 56 # Integer | 

begin
  # Remove selected repository from an organization secret
  api_instance.actions_remove_selected_repo_from_org_secret(org, secret_name, repository_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_remove_selected_repo_from_org_secret: #{e}"
end
```

#### Using the actions_remove_selected_repo_from_org_secret_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_remove_selected_repo_from_org_secret_with_http_info(org, secret_name, repository_id)

```ruby
begin
  # Remove selected repository from an organization secret
  data, status_code, headers = api_instance.actions_remove_selected_repo_from_org_secret_with_http_info(org, secret_name, repository_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_remove_selected_repo_from_org_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |
| **repository_id** | **Integer** |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_remove_selected_repo_from_org_variable

> actions_remove_selected_repo_from_org_variable(org, name, repository_id)

Remove selected repository from an organization variable

Removes a repository from an organization variable that is available to selected repositories. Organization variables that are available to selected repositories have their `visibility` field set to `selected`.  Authenticated users must have collaborator access to a repository to create, update, or read variables.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint. If the repository is private, the `repo` scope is also required.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
name = 'name_example' # String | The name of the variable.
repository_id = 56 # Integer | 

begin
  # Remove selected repository from an organization variable
  api_instance.actions_remove_selected_repo_from_org_variable(org, name, repository_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_remove_selected_repo_from_org_variable: #{e}"
end
```

#### Using the actions_remove_selected_repo_from_org_variable_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_remove_selected_repo_from_org_variable_with_http_info(org, name, repository_id)

```ruby
begin
  # Remove selected repository from an organization variable
  data, status_code, headers = api_instance.actions_remove_selected_repo_from_org_variable_with_http_info(org, name, repository_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_remove_selected_repo_from_org_variable_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **name** | **String** | The name of the variable. |  |
| **repository_id** | **Integer** |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## actions_review_custom_gates_for_run

> actions_review_custom_gates_for_run(owner, repo, run_id, actions_review_custom_gates_for_run_request)

Review custom deployment protection rules for a workflow run

Approve or reject custom deployment protection rules provided by a GitHub App for a workflow run. For more information, see \"[Using environments for deployment](https://docs.github.com/actions/deployment/targeting-different-environments/using-environments-for-deployment).\"  **Note:** GitHub Apps can only review their own custom deployment protection rules. To approve or reject pending deployments that are waiting for review from a specific person or team, see [`POST /repos/{owner}/{repo}/actions/runs/{run_id}/pending_deployments`](/rest/actions/workflow-runs#review-pending-deployments-for-a-workflow-run).  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint with a private repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
run_id = 56 # Integer | The unique identifier of the workflow run.
actions_review_custom_gates_for_run_request = OpenapiClient::ActionsReviewCustomGatesForRunRequest.new({environment_name: 'environment_name_example', comment: 'comment_example', state: 'approved'}) # ActionsReviewCustomGatesForRunRequest | 

begin
  # Review custom deployment protection rules for a workflow run
  api_instance.actions_review_custom_gates_for_run(owner, repo, run_id, actions_review_custom_gates_for_run_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_review_custom_gates_for_run: #{e}"
end
```

#### Using the actions_review_custom_gates_for_run_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_review_custom_gates_for_run_with_http_info(owner, repo, run_id, actions_review_custom_gates_for_run_request)

```ruby
begin
  # Review custom deployment protection rules for a workflow run
  data, status_code, headers = api_instance.actions_review_custom_gates_for_run_with_http_info(owner, repo, run_id, actions_review_custom_gates_for_run_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_review_custom_gates_for_run_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **run_id** | **Integer** | The unique identifier of the workflow run. |  |
| **actions_review_custom_gates_for_run_request** | [**ActionsReviewCustomGatesForRunRequest**](ActionsReviewCustomGatesForRunRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## actions_review_pending_deployments_for_run

> <Array<Deployment>> actions_review_pending_deployments_for_run(owner, repo, run_id, actions_review_pending_deployments_for_run_request)

Review pending deployments for a workflow run

Approve or reject pending deployments that are waiting on approval by a required reviewer.  Required reviewers with read access to the repository contents and deployments can use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
run_id = 56 # Integer | The unique identifier of the workflow run.
actions_review_pending_deployments_for_run_request = OpenapiClient::ActionsReviewPendingDeploymentsForRunRequest.new({environment_ids: [161171787, 161171795], state: 'approved', comment: 'Ship it!'}) # ActionsReviewPendingDeploymentsForRunRequest | 

begin
  # Review pending deployments for a workflow run
  result = api_instance.actions_review_pending_deployments_for_run(owner, repo, run_id, actions_review_pending_deployments_for_run_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_review_pending_deployments_for_run: #{e}"
end
```

#### Using the actions_review_pending_deployments_for_run_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Deployment>>, Integer, Hash)> actions_review_pending_deployments_for_run_with_http_info(owner, repo, run_id, actions_review_pending_deployments_for_run_request)

```ruby
begin
  # Review pending deployments for a workflow run
  data, status_code, headers = api_instance.actions_review_pending_deployments_for_run_with_http_info(owner, repo, run_id, actions_review_pending_deployments_for_run_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Deployment>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_review_pending_deployments_for_run_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **run_id** | **Integer** | The unique identifier of the workflow run. |  |
| **actions_review_pending_deployments_for_run_request** | [**ActionsReviewPendingDeploymentsForRunRequest**](ActionsReviewPendingDeploymentsForRunRequest.md) |  |  |

### Return type

[**Array&lt;Deployment&gt;**](Deployment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## actions_set_allowed_actions_organization

> actions_set_allowed_actions_organization(org, opts)

Set allowed actions and reusable workflows for an organization

Sets the actions and reusable workflows that are allowed in an organization. To use this endpoint, the organization permission policy for `allowed_actions` must be configured to `selected`. For more information, see \"[Set GitHub Actions permissions for an organization](#set-github-actions-permissions-for-an-organization).\"  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  selected_actions: OpenapiClient::SelectedActions.new # SelectedActions | 
}

begin
  # Set allowed actions and reusable workflows for an organization
  api_instance.actions_set_allowed_actions_organization(org, opts)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_allowed_actions_organization: #{e}"
end
```

#### Using the actions_set_allowed_actions_organization_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_set_allowed_actions_organization_with_http_info(org, opts)

```ruby
begin
  # Set allowed actions and reusable workflows for an organization
  data, status_code, headers = api_instance.actions_set_allowed_actions_organization_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_allowed_actions_organization_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **selected_actions** | [**SelectedActions**](SelectedActions.md) |  | [optional] |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## actions_set_allowed_actions_repository

> actions_set_allowed_actions_repository(owner, repo, opts)

Set allowed actions and reusable workflows for a repository

Sets the actions and reusable workflows that are allowed in a repository. To use this endpoint, the repository permission policy for `allowed_actions` must be configured to `selected`. For more information, see \"[Set GitHub Actions permissions for a repository](#set-github-actions-permissions-for-a-repository).\"  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  selected_actions: OpenapiClient::SelectedActions.new # SelectedActions | 
}

begin
  # Set allowed actions and reusable workflows for a repository
  api_instance.actions_set_allowed_actions_repository(owner, repo, opts)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_allowed_actions_repository: #{e}"
end
```

#### Using the actions_set_allowed_actions_repository_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_set_allowed_actions_repository_with_http_info(owner, repo, opts)

```ruby
begin
  # Set allowed actions and reusable workflows for a repository
  data, status_code, headers = api_instance.actions_set_allowed_actions_repository_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_allowed_actions_repository_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **selected_actions** | [**SelectedActions**](SelectedActions.md) |  | [optional] |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## actions_set_custom_labels_for_self_hosted_runner_for_org

> <ActionsListLabelsForSelfHostedRunnerForOrg200Response> actions_set_custom_labels_for_self_hosted_runner_for_org(org, runner_id, actions_set_custom_labels_for_self_hosted_runner_for_org_request)

Set custom labels for a self-hosted runner for an organization

Remove all previous custom labels and set the new custom labels for a specific self-hosted runner configured in an organization.  Authenticated users must have admin access to the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint. If the repository is private, the `repo` scope is also required.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
runner_id = 56 # Integer | Unique identifier of the self-hosted runner.
actions_set_custom_labels_for_self_hosted_runner_for_org_request = OpenapiClient::ActionsSetCustomLabelsForSelfHostedRunnerForOrgRequest.new({labels: ['labels_example']}) # ActionsSetCustomLabelsForSelfHostedRunnerForOrgRequest | 

begin
  # Set custom labels for a self-hosted runner for an organization
  result = api_instance.actions_set_custom_labels_for_self_hosted_runner_for_org(org, runner_id, actions_set_custom_labels_for_self_hosted_runner_for_org_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_custom_labels_for_self_hosted_runner_for_org: #{e}"
end
```

#### Using the actions_set_custom_labels_for_self_hosted_runner_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListLabelsForSelfHostedRunnerForOrg200Response>, Integer, Hash)> actions_set_custom_labels_for_self_hosted_runner_for_org_with_http_info(org, runner_id, actions_set_custom_labels_for_self_hosted_runner_for_org_request)

```ruby
begin
  # Set custom labels for a self-hosted runner for an organization
  data, status_code, headers = api_instance.actions_set_custom_labels_for_self_hosted_runner_for_org_with_http_info(org, runner_id, actions_set_custom_labels_for_self_hosted_runner_for_org_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListLabelsForSelfHostedRunnerForOrg200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_custom_labels_for_self_hosted_runner_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **runner_id** | **Integer** | Unique identifier of the self-hosted runner. |  |
| **actions_set_custom_labels_for_self_hosted_runner_for_org_request** | [**ActionsSetCustomLabelsForSelfHostedRunnerForOrgRequest**](ActionsSetCustomLabelsForSelfHostedRunnerForOrgRequest.md) |  |  |

### Return type

[**ActionsListLabelsForSelfHostedRunnerForOrg200Response**](ActionsListLabelsForSelfHostedRunnerForOrg200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## actions_set_custom_labels_for_self_hosted_runner_for_repo

> <ActionsListLabelsForSelfHostedRunnerForOrg200Response> actions_set_custom_labels_for_self_hosted_runner_for_repo(owner, repo, runner_id, actions_set_custom_labels_for_self_hosted_runner_for_org_request)

Set custom labels for a self-hosted runner for a repository

Remove all previous custom labels and set the new custom labels for a specific self-hosted runner configured in a repository.  Authenticated users must have admin access to the repository to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
runner_id = 56 # Integer | Unique identifier of the self-hosted runner.
actions_set_custom_labels_for_self_hosted_runner_for_org_request = OpenapiClient::ActionsSetCustomLabelsForSelfHostedRunnerForOrgRequest.new({labels: ['labels_example']}) # ActionsSetCustomLabelsForSelfHostedRunnerForOrgRequest | 

begin
  # Set custom labels for a self-hosted runner for a repository
  result = api_instance.actions_set_custom_labels_for_self_hosted_runner_for_repo(owner, repo, runner_id, actions_set_custom_labels_for_self_hosted_runner_for_org_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_custom_labels_for_self_hosted_runner_for_repo: #{e}"
end
```

#### Using the actions_set_custom_labels_for_self_hosted_runner_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListLabelsForSelfHostedRunnerForOrg200Response>, Integer, Hash)> actions_set_custom_labels_for_self_hosted_runner_for_repo_with_http_info(owner, repo, runner_id, actions_set_custom_labels_for_self_hosted_runner_for_org_request)

```ruby
begin
  # Set custom labels for a self-hosted runner for a repository
  data, status_code, headers = api_instance.actions_set_custom_labels_for_self_hosted_runner_for_repo_with_http_info(owner, repo, runner_id, actions_set_custom_labels_for_self_hosted_runner_for_org_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListLabelsForSelfHostedRunnerForOrg200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_custom_labels_for_self_hosted_runner_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **runner_id** | **Integer** | Unique identifier of the self-hosted runner. |  |
| **actions_set_custom_labels_for_self_hosted_runner_for_org_request** | [**ActionsSetCustomLabelsForSelfHostedRunnerForOrgRequest**](ActionsSetCustomLabelsForSelfHostedRunnerForOrgRequest.md) |  |  |

### Return type

[**ActionsListLabelsForSelfHostedRunnerForOrg200Response**](ActionsListLabelsForSelfHostedRunnerForOrg200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## actions_set_custom_oidc_sub_claim_for_repo

> Object actions_set_custom_oidc_sub_claim_for_repo(owner, repo, actions_oidc_subject_customization_for_a_repository)

Set the customization template for an OIDC subject claim for a repository

Sets the customization template and `opt-in` or `opt-out` flag for an OpenID Connect (OIDC) subject claim for a repository.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
actions_oidc_subject_customization_for_a_repository = OpenapiClient::ActionsOIDCSubjectCustomizationForARepository.new({use_default: false}) # ActionsOIDCSubjectCustomizationForARepository | 

begin
  # Set the customization template for an OIDC subject claim for a repository
  result = api_instance.actions_set_custom_oidc_sub_claim_for_repo(owner, repo, actions_oidc_subject_customization_for_a_repository)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_custom_oidc_sub_claim_for_repo: #{e}"
end
```

#### Using the actions_set_custom_oidc_sub_claim_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> actions_set_custom_oidc_sub_claim_for_repo_with_http_info(owner, repo, actions_oidc_subject_customization_for_a_repository)

```ruby
begin
  # Set the customization template for an OIDC subject claim for a repository
  data, status_code, headers = api_instance.actions_set_custom_oidc_sub_claim_for_repo_with_http_info(owner, repo, actions_oidc_subject_customization_for_a_repository)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_custom_oidc_sub_claim_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **actions_oidc_subject_customization_for_a_repository** | [**ActionsOIDCSubjectCustomizationForARepository**](ActionsOIDCSubjectCustomizationForARepository.md) |  |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json, application/scim+json


## actions_set_github_actions_default_workflow_permissions_organization

> actions_set_github_actions_default_workflow_permissions_organization(org, opts)

Set default workflow permissions for an organization

Sets the default workflow permissions granted to the `GITHUB_TOKEN` when running workflows in an organization, and sets if GitHub Actions can submit approving pull request reviews. For more information, see \"[Setting the permissions of the GITHUB_TOKEN for your organization](https://docs.github.com/organizations/managing-organization-settings/disabling-or-limiting-github-actions-for-your-organization#setting-the-permissions-of-the-github_token-for-your-organization).\"  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  actions_set_default_workflow_permissions: OpenapiClient::ActionsSetDefaultWorkflowPermissions.new # ActionsSetDefaultWorkflowPermissions | 
}

begin
  # Set default workflow permissions for an organization
  api_instance.actions_set_github_actions_default_workflow_permissions_organization(org, opts)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_github_actions_default_workflow_permissions_organization: #{e}"
end
```

#### Using the actions_set_github_actions_default_workflow_permissions_organization_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_set_github_actions_default_workflow_permissions_organization_with_http_info(org, opts)

```ruby
begin
  # Set default workflow permissions for an organization
  data, status_code, headers = api_instance.actions_set_github_actions_default_workflow_permissions_organization_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_github_actions_default_workflow_permissions_organization_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **actions_set_default_workflow_permissions** | [**ActionsSetDefaultWorkflowPermissions**](ActionsSetDefaultWorkflowPermissions.md) |  | [optional] |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## actions_set_github_actions_default_workflow_permissions_repository

> actions_set_github_actions_default_workflow_permissions_repository(owner, repo, actions_set_default_workflow_permissions)

Set default workflow permissions for a repository

Sets the default workflow permissions granted to the `GITHUB_TOKEN` when running workflows in a repository, and sets if GitHub Actions can submit approving pull request reviews. For more information, see \"[Setting the permissions of the GITHUB_TOKEN for your repository](https://docs.github.com/repositories/managing-your-repositorys-settings-and-features/enabling-features-for-your-repository/managing-github-actions-settings-for-a-repository#setting-the-permissions-of-the-github_token-for-your-repository).\"  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
actions_set_default_workflow_permissions = OpenapiClient::ActionsSetDefaultWorkflowPermissions.new # ActionsSetDefaultWorkflowPermissions | 

begin
  # Set default workflow permissions for a repository
  api_instance.actions_set_github_actions_default_workflow_permissions_repository(owner, repo, actions_set_default_workflow_permissions)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_github_actions_default_workflow_permissions_repository: #{e}"
end
```

#### Using the actions_set_github_actions_default_workflow_permissions_repository_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_set_github_actions_default_workflow_permissions_repository_with_http_info(owner, repo, actions_set_default_workflow_permissions)

```ruby
begin
  # Set default workflow permissions for a repository
  data, status_code, headers = api_instance.actions_set_github_actions_default_workflow_permissions_repository_with_http_info(owner, repo, actions_set_default_workflow_permissions)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_github_actions_default_workflow_permissions_repository_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **actions_set_default_workflow_permissions** | [**ActionsSetDefaultWorkflowPermissions**](ActionsSetDefaultWorkflowPermissions.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## actions_set_github_actions_permissions_organization

> actions_set_github_actions_permissions_organization(org, actions_set_github_actions_permissions_organization_request)

Set GitHub Actions permissions for an organization

Sets the GitHub Actions permissions policy for repositories and allowed actions and reusable workflows in an organization.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
actions_set_github_actions_permissions_organization_request = OpenapiClient::ActionsSetGithubActionsPermissionsOrganizationRequest.new({enabled_repositories: OpenapiClient::EnabledRepositories::ALL}) # ActionsSetGithubActionsPermissionsOrganizationRequest | 

begin
  # Set GitHub Actions permissions for an organization
  api_instance.actions_set_github_actions_permissions_organization(org, actions_set_github_actions_permissions_organization_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_github_actions_permissions_organization: #{e}"
end
```

#### Using the actions_set_github_actions_permissions_organization_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_set_github_actions_permissions_organization_with_http_info(org, actions_set_github_actions_permissions_organization_request)

```ruby
begin
  # Set GitHub Actions permissions for an organization
  data, status_code, headers = api_instance.actions_set_github_actions_permissions_organization_with_http_info(org, actions_set_github_actions_permissions_organization_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_github_actions_permissions_organization_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **actions_set_github_actions_permissions_organization_request** | [**ActionsSetGithubActionsPermissionsOrganizationRequest**](ActionsSetGithubActionsPermissionsOrganizationRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## actions_set_github_actions_permissions_repository

> actions_set_github_actions_permissions_repository(owner, repo, actions_set_github_actions_permissions_repository_request)

Set GitHub Actions permissions for a repository

Sets the GitHub Actions permissions policy for enabling GitHub Actions and allowed actions and reusable workflows in the repository.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
actions_set_github_actions_permissions_repository_request = OpenapiClient::ActionsSetGithubActionsPermissionsRepositoryRequest.new({enabled: false}) # ActionsSetGithubActionsPermissionsRepositoryRequest | 

begin
  # Set GitHub Actions permissions for a repository
  api_instance.actions_set_github_actions_permissions_repository(owner, repo, actions_set_github_actions_permissions_repository_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_github_actions_permissions_repository: #{e}"
end
```

#### Using the actions_set_github_actions_permissions_repository_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_set_github_actions_permissions_repository_with_http_info(owner, repo, actions_set_github_actions_permissions_repository_request)

```ruby
begin
  # Set GitHub Actions permissions for a repository
  data, status_code, headers = api_instance.actions_set_github_actions_permissions_repository_with_http_info(owner, repo, actions_set_github_actions_permissions_repository_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_github_actions_permissions_repository_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **actions_set_github_actions_permissions_repository_request** | [**ActionsSetGithubActionsPermissionsRepositoryRequest**](ActionsSetGithubActionsPermissionsRepositoryRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## actions_set_selected_repos_for_org_secret

> actions_set_selected_repos_for_org_secret(org, secret_name, actions_set_selected_repos_for_org_secret_request)

Set selected repositories for an organization secret

Replaces all repositories for an organization secret when the `visibility` for repository access is set to `selected`. The visibility is set when you [Create or update an organization secret](https://docs.github.com/rest/actions/secrets#create-or-update-an-organization-secret).  Authenticated users must have collaborator access to a repository to create, update, or read secrets.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint. If the repository is private, the `repo` scope is also required.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.
actions_set_selected_repos_for_org_secret_request = OpenapiClient::ActionsSetSelectedReposForOrgSecretRequest.new({selected_repository_ids: [37]}) # ActionsSetSelectedReposForOrgSecretRequest | 

begin
  # Set selected repositories for an organization secret
  api_instance.actions_set_selected_repos_for_org_secret(org, secret_name, actions_set_selected_repos_for_org_secret_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_selected_repos_for_org_secret: #{e}"
end
```

#### Using the actions_set_selected_repos_for_org_secret_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_set_selected_repos_for_org_secret_with_http_info(org, secret_name, actions_set_selected_repos_for_org_secret_request)

```ruby
begin
  # Set selected repositories for an organization secret
  data, status_code, headers = api_instance.actions_set_selected_repos_for_org_secret_with_http_info(org, secret_name, actions_set_selected_repos_for_org_secret_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_selected_repos_for_org_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |
| **actions_set_selected_repos_for_org_secret_request** | [**ActionsSetSelectedReposForOrgSecretRequest**](ActionsSetSelectedReposForOrgSecretRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## actions_set_selected_repos_for_org_variable

> actions_set_selected_repos_for_org_variable(org, name, actions_set_selected_repos_for_org_variable_request)

Set selected repositories for an organization variable

Replaces all repositories for an organization variable that is available to selected repositories. Organization variables that are available to selected repositories have their `visibility` field set to `selected`.  Authenticated users must have collaborator access to a repository to create, update, or read variables.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint. If the repository is private, the `repo` scope is also required.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
name = 'name_example' # String | The name of the variable.
actions_set_selected_repos_for_org_variable_request = OpenapiClient::ActionsSetSelectedReposForOrgVariableRequest.new({selected_repository_ids: [37]}) # ActionsSetSelectedReposForOrgVariableRequest | 

begin
  # Set selected repositories for an organization variable
  api_instance.actions_set_selected_repos_for_org_variable(org, name, actions_set_selected_repos_for_org_variable_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_selected_repos_for_org_variable: #{e}"
end
```

#### Using the actions_set_selected_repos_for_org_variable_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_set_selected_repos_for_org_variable_with_http_info(org, name, actions_set_selected_repos_for_org_variable_request)

```ruby
begin
  # Set selected repositories for an organization variable
  data, status_code, headers = api_instance.actions_set_selected_repos_for_org_variable_with_http_info(org, name, actions_set_selected_repos_for_org_variable_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_selected_repos_for_org_variable_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **name** | **String** | The name of the variable. |  |
| **actions_set_selected_repos_for_org_variable_request** | [**ActionsSetSelectedReposForOrgVariableRequest**](ActionsSetSelectedReposForOrgVariableRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## actions_set_selected_repositories_enabled_github_actions_organization

> actions_set_selected_repositories_enabled_github_actions_organization(org, actions_set_selected_repositories_enabled_github_actions_organization_request)

Set selected repositories enabled for GitHub Actions in an organization

Replaces the list of selected repositories that are enabled for GitHub Actions in an organization. To use this endpoint, the organization permission policy for `enabled_repositories` must be configured to `selected`. For more information, see \"[Set GitHub Actions permissions for an organization](#set-github-actions-permissions-for-an-organization).\"   OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
actions_set_selected_repositories_enabled_github_actions_organization_request = OpenapiClient::ActionsSetSelectedRepositoriesEnabledGithubActionsOrganizationRequest.new({selected_repository_ids: [37]}) # ActionsSetSelectedRepositoriesEnabledGithubActionsOrganizationRequest | 

begin
  # Set selected repositories enabled for GitHub Actions in an organization
  api_instance.actions_set_selected_repositories_enabled_github_actions_organization(org, actions_set_selected_repositories_enabled_github_actions_organization_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_selected_repositories_enabled_github_actions_organization: #{e}"
end
```

#### Using the actions_set_selected_repositories_enabled_github_actions_organization_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_set_selected_repositories_enabled_github_actions_organization_with_http_info(org, actions_set_selected_repositories_enabled_github_actions_organization_request)

```ruby
begin
  # Set selected repositories enabled for GitHub Actions in an organization
  data, status_code, headers = api_instance.actions_set_selected_repositories_enabled_github_actions_organization_with_http_info(org, actions_set_selected_repositories_enabled_github_actions_organization_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_selected_repositories_enabled_github_actions_organization_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **actions_set_selected_repositories_enabled_github_actions_organization_request** | [**ActionsSetSelectedRepositoriesEnabledGithubActionsOrganizationRequest**](ActionsSetSelectedRepositoriesEnabledGithubActionsOrganizationRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## actions_set_workflow_access_to_repository

> actions_set_workflow_access_to_repository(owner, repo, actions_workflow_access_to_repository)

Set the level of access for workflows outside of the repository

Sets the level of access that workflows outside of the repository have to actions and reusable workflows in the repository. This endpoint only applies to private repositories. For more information, see \"[Allowing access to components in a private repository](https://docs.github.com/repositories/managing-your-repositorys-settings-and-features/enabling-features-for-your-repository/managing-github-actions-settings-for-a-repository#allowing-access-to-components-in-a-private-repository)\".  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
actions_workflow_access_to_repository = OpenapiClient::ActionsWorkflowAccessToRepository.new({access_level: 'none'}) # ActionsWorkflowAccessToRepository | 

begin
  # Set the level of access for workflows outside of the repository
  api_instance.actions_set_workflow_access_to_repository(owner, repo, actions_workflow_access_to_repository)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_workflow_access_to_repository: #{e}"
end
```

#### Using the actions_set_workflow_access_to_repository_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_set_workflow_access_to_repository_with_http_info(owner, repo, actions_workflow_access_to_repository)

```ruby
begin
  # Set the level of access for workflows outside of the repository
  data, status_code, headers = api_instance.actions_set_workflow_access_to_repository_with_http_info(owner, repo, actions_workflow_access_to_repository)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_set_workflow_access_to_repository_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **actions_workflow_access_to_repository** | [**ActionsWorkflowAccessToRepository**](ActionsWorkflowAccessToRepository.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## actions_update_environment_variable

> actions_update_environment_variable(owner, repo, name, environment_name, actions_update_repo_variable_request)

Update an environment variable

Updates an environment variable that you can reference in a GitHub Actions workflow.  Authenticated users must have collaborator access to a repository to create, update, or read variables.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
name = 'name_example' # String | The name of the variable.
environment_name = 'environment_name_example' # String | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with `%2F`.
actions_update_repo_variable_request = OpenapiClient::ActionsUpdateRepoVariableRequest.new # ActionsUpdateRepoVariableRequest | 

begin
  # Update an environment variable
  api_instance.actions_update_environment_variable(owner, repo, name, environment_name, actions_update_repo_variable_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_update_environment_variable: #{e}"
end
```

#### Using the actions_update_environment_variable_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_update_environment_variable_with_http_info(owner, repo, name, environment_name, actions_update_repo_variable_request)

```ruby
begin
  # Update an environment variable
  data, status_code, headers = api_instance.actions_update_environment_variable_with_http_info(owner, repo, name, environment_name, actions_update_repo_variable_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_update_environment_variable_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **name** | **String** | The name of the variable. |  |
| **environment_name** | **String** | The name of the environment. The name must be URL encoded. For example, any slashes in the name must be replaced with &#x60;%2F&#x60;. |  |
| **actions_update_repo_variable_request** | [**ActionsUpdateRepoVariableRequest**](ActionsUpdateRepoVariableRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## actions_update_org_variable

> actions_update_org_variable(org, name, actions_update_org_variable_request)

Update an organization variable

Updates an organization variable that you can reference in a GitHub Actions workflow.  Authenticated users must have collaborator access to a repository to create, update, or read variables.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint. If the repository is private, the `repo` scope is also required.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
name = 'name_example' # String | The name of the variable.
actions_update_org_variable_request = OpenapiClient::ActionsUpdateOrgVariableRequest.new # ActionsUpdateOrgVariableRequest | 

begin
  # Update an organization variable
  api_instance.actions_update_org_variable(org, name, actions_update_org_variable_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_update_org_variable: #{e}"
end
```

#### Using the actions_update_org_variable_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_update_org_variable_with_http_info(org, name, actions_update_org_variable_request)

```ruby
begin
  # Update an organization variable
  data, status_code, headers = api_instance.actions_update_org_variable_with_http_info(org, name, actions_update_org_variable_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_update_org_variable_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **name** | **String** | The name of the variable. |  |
| **actions_update_org_variable_request** | [**ActionsUpdateOrgVariableRequest**](ActionsUpdateOrgVariableRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## actions_update_repo_variable

> actions_update_repo_variable(owner, repo, name, actions_update_repo_variable_request)

Update a repository variable

Updates a repository variable that you can reference in a GitHub Actions workflow.  Authenticated users must have collaborator access to a repository to create, update, or read variables.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::ActionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
name = 'name_example' # String | The name of the variable.
actions_update_repo_variable_request = OpenapiClient::ActionsUpdateRepoVariableRequest.new # ActionsUpdateRepoVariableRequest | 

begin
  # Update a repository variable
  api_instance.actions_update_repo_variable(owner, repo, name, actions_update_repo_variable_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_update_repo_variable: #{e}"
end
```

#### Using the actions_update_repo_variable_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> actions_update_repo_variable_with_http_info(owner, repo, name, actions_update_repo_variable_request)

```ruby
begin
  # Update a repository variable
  data, status_code, headers = api_instance.actions_update_repo_variable_with_http_info(owner, repo, name, actions_update_repo_variable_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling ActionsApi->actions_update_repo_variable_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **name** | **String** | The name of the variable. |  |
| **actions_update_repo_variable_request** | [**ActionsUpdateRepoVariableRequest**](ActionsUpdateRepoVariableRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined

