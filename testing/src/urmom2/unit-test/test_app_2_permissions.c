#ifndef app_2_permissions_TEST
#define app_2_permissions_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_2_permissions_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_2_permissions.h"
app_2_permissions_t* instantiate_app_2_permissions(int include_optional);



app_2_permissions_t* instantiate_app_2_permissions(int include_optional) {
  app_2_permissions_t* app_2_permissions = NULL;
  if (include_optional) {
    app_2_permissions = app_2_permissions_create(
      github_v3_rest_api_app_2_permissions_ACTIONS_read,
      github_v3_rest_api_app_2_permissions_ADMINISTRATION_read,
      github_v3_rest_api_app_2_permissions_CHECKS_read,
      github_v3_rest_api_app_2_permissions_CONTENTREFERENCES_read,
      github_v3_rest_api_app_2_permissions_CONTENTS_read,
      github_v3_rest_api_app_2_permissions_DEPLOYMENTS_read,
      github_v3_rest_api_app_2_permissions_DISCUSSIONS_read,
      github_v3_rest_api_app_2_permissions_EMAILS_read,
      github_v3_rest_api_app_2_permissions_ENVIRONMENTS_read,
      github_v3_rest_api_app_2_permissions_ISSUES_read,
      github_v3_rest_api_app_2_permissions_KEYS_read,
      github_v3_rest_api_app_2_permissions_MEMBERS_read,
      github_v3_rest_api_app_2_permissions_METADATA_read,
      github_v3_rest_api_app_2_permissions_ORGANIZATIONADMINISTRATION_read,
      github_v3_rest_api_app_2_permissions_ORGANIZATIONHOOKS_read,
      github_v3_rest_api_app_2_permissions_ORGANIZATIONPACKAGES_read,
      github_v3_rest_api_app_2_permissions_ORGANIZATIONPLAN_read,
      github_v3_rest_api_app_2_permissions_ORGANIZATIONPROJECTS_read,
      github_v3_rest_api_app_2_permissions_ORGANIZATIONSECRETS_read,
      github_v3_rest_api_app_2_permissions_ORGANIZATIONSELFHOSTEDRUNNERS_read,
      github_v3_rest_api_app_2_permissions_ORGANIZATIONUSERBLOCKING_read,
      github_v3_rest_api_app_2_permissions_PACKAGES_read,
      github_v3_rest_api_app_2_permissions_PAGES_read,
      github_v3_rest_api_app_2_permissions_PULLREQUESTS_read,
      github_v3_rest_api_app_2_permissions_REPOSITORYHOOKS_read,
      github_v3_rest_api_app_2_permissions_REPOSITORYPROJECTS_read,
      github_v3_rest_api_app_2_permissions_SECRETSCANNINGALERTS_read,
      github_v3_rest_api_app_2_permissions_SECRETS_read,
      github_v3_rest_api_app_2_permissions_SECURITYEVENTS_read,
      github_v3_rest_api_app_2_permissions_SECURITYSCANNINGALERT_read,
      github_v3_rest_api_app_2_permissions_SINGLEFILE_read,
      github_v3_rest_api_app_2_permissions_STATUSES_read,
      github_v3_rest_api_app_2_permissions_TEAMDISCUSSIONS_read,
      github_v3_rest_api_app_2_permissions_VULNERABILITYALERTS_read,
      github_v3_rest_api_app_2_permissions_WORKFLOWS_read
    );
  } else {
    app_2_permissions = app_2_permissions_create(
      github_v3_rest_api_app_2_permissions_ACTIONS_read,
      github_v3_rest_api_app_2_permissions_ADMINISTRATION_read,
      github_v3_rest_api_app_2_permissions_CHECKS_read,
      github_v3_rest_api_app_2_permissions_CONTENTREFERENCES_read,
      github_v3_rest_api_app_2_permissions_CONTENTS_read,
      github_v3_rest_api_app_2_permissions_DEPLOYMENTS_read,
      github_v3_rest_api_app_2_permissions_DISCUSSIONS_read,
      github_v3_rest_api_app_2_permissions_EMAILS_read,
      github_v3_rest_api_app_2_permissions_ENVIRONMENTS_read,
      github_v3_rest_api_app_2_permissions_ISSUES_read,
      github_v3_rest_api_app_2_permissions_KEYS_read,
      github_v3_rest_api_app_2_permissions_MEMBERS_read,
      github_v3_rest_api_app_2_permissions_METADATA_read,
      github_v3_rest_api_app_2_permissions_ORGANIZATIONADMINISTRATION_read,
      github_v3_rest_api_app_2_permissions_ORGANIZATIONHOOKS_read,
      github_v3_rest_api_app_2_permissions_ORGANIZATIONPACKAGES_read,
      github_v3_rest_api_app_2_permissions_ORGANIZATIONPLAN_read,
      github_v3_rest_api_app_2_permissions_ORGANIZATIONPROJECTS_read,
      github_v3_rest_api_app_2_permissions_ORGANIZATIONSECRETS_read,
      github_v3_rest_api_app_2_permissions_ORGANIZATIONSELFHOSTEDRUNNERS_read,
      github_v3_rest_api_app_2_permissions_ORGANIZATIONUSERBLOCKING_read,
      github_v3_rest_api_app_2_permissions_PACKAGES_read,
      github_v3_rest_api_app_2_permissions_PAGES_read,
      github_v3_rest_api_app_2_permissions_PULLREQUESTS_read,
      github_v3_rest_api_app_2_permissions_REPOSITORYHOOKS_read,
      github_v3_rest_api_app_2_permissions_REPOSITORYPROJECTS_read,
      github_v3_rest_api_app_2_permissions_SECRETSCANNINGALERTS_read,
      github_v3_rest_api_app_2_permissions_SECRETS_read,
      github_v3_rest_api_app_2_permissions_SECURITYEVENTS_read,
      github_v3_rest_api_app_2_permissions_SECURITYSCANNINGALERT_read,
      github_v3_rest_api_app_2_permissions_SINGLEFILE_read,
      github_v3_rest_api_app_2_permissions_STATUSES_read,
      github_v3_rest_api_app_2_permissions_TEAMDISCUSSIONS_read,
      github_v3_rest_api_app_2_permissions_VULNERABILITYALERTS_read,
      github_v3_rest_api_app_2_permissions_WORKFLOWS_read
    );
  }

  return app_2_permissions;
}


#ifdef app_2_permissions_MAIN

void test_app_2_permissions(int include_optional) {
    app_2_permissions_t* app_2_permissions_1 = instantiate_app_2_permissions(include_optional);

	cJSON* jsonapp_2_permissions_1 = app_2_permissions_convertToJSON(app_2_permissions_1);
	printf("app_2_permissions :\n%s\n", cJSON_Print(jsonapp_2_permissions_1));
	app_2_permissions_t* app_2_permissions_2 = app_2_permissions_parseFromJSON(jsonapp_2_permissions_1);
	cJSON* jsonapp_2_permissions_2 = app_2_permissions_convertToJSON(app_2_permissions_2);
	printf("repeating app_2_permissions:\n%s\n", cJSON_Print(jsonapp_2_permissions_2));
}

int main() {
  test_app_2_permissions(1);
  test_app_2_permissions(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_2_permissions_MAIN
#endif // app_2_permissions_TEST