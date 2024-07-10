#ifndef app_permissions_TEST
#define app_permissions_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_permissions_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_permissions.h"
app_permissions_t* instantiate_app_permissions(int include_optional);



app_permissions_t* instantiate_app_permissions(int include_optional) {
  app_permissions_t* app_permissions = NULL;
  if (include_optional) {
    app_permissions = app_permissions_create(
      github_v3_rest_api_app_permissions_ACTIONS_read,
      github_v3_rest_api_app_permissions_ADMINISTRATION_read,
      github_v3_rest_api_app_permissions_CHECKS_read,
      github_v3_rest_api_app_permissions_CONTENTREFERENCES_read,
      github_v3_rest_api_app_permissions_CONTENTS_read,
      github_v3_rest_api_app_permissions_DEPLOYMENTS_read,
      github_v3_rest_api_app_permissions_DISCUSSIONS_read,
      github_v3_rest_api_app_permissions_EMAILS_read,
      github_v3_rest_api_app_permissions_ENVIRONMENTS_read,
      github_v3_rest_api_app_permissions_ISSUES_read,
      github_v3_rest_api_app_permissions_KEYS_read,
      github_v3_rest_api_app_permissions_MEMBERS_read,
      github_v3_rest_api_app_permissions_METADATA_read,
      github_v3_rest_api_app_permissions_ORGANIZATIONADMINISTRATION_read,
      github_v3_rest_api_app_permissions_ORGANIZATIONHOOKS_read,
      github_v3_rest_api_app_permissions_ORGANIZATIONPACKAGES_read,
      github_v3_rest_api_app_permissions_ORGANIZATIONPLAN_read,
      github_v3_rest_api_app_permissions_ORGANIZATIONPROJECTS_read,
      github_v3_rest_api_app_permissions_ORGANIZATIONSECRETS_read,
      github_v3_rest_api_app_permissions_ORGANIZATIONSELFHOSTEDRUNNERS_read,
      github_v3_rest_api_app_permissions_ORGANIZATIONUSERBLOCKING_read,
      github_v3_rest_api_app_permissions_PACKAGES_read,
      github_v3_rest_api_app_permissions_PAGES_read,
      github_v3_rest_api_app_permissions_PULLREQUESTS_read,
      github_v3_rest_api_app_permissions_REPOSITORYHOOKS_read,
      github_v3_rest_api_app_permissions_REPOSITORYPROJECTS_read,
      github_v3_rest_api_app_permissions_SECRETSCANNINGALERTS_read,
      github_v3_rest_api_app_permissions_SECRETS_read,
      github_v3_rest_api_app_permissions_SECURITYEVENTS_read,
      github_v3_rest_api_app_permissions_SECURITYSCANNINGALERT_read,
      github_v3_rest_api_app_permissions_SINGLEFILE_read,
      github_v3_rest_api_app_permissions_STATUSES_read,
      github_v3_rest_api_app_permissions_TEAMDISCUSSIONS_read,
      github_v3_rest_api_app_permissions_VULNERABILITYALERTS_read,
      github_v3_rest_api_app_permissions_WORKFLOWS_read
    );
  } else {
    app_permissions = app_permissions_create(
      github_v3_rest_api_app_permissions_ACTIONS_read,
      github_v3_rest_api_app_permissions_ADMINISTRATION_read,
      github_v3_rest_api_app_permissions_CHECKS_read,
      github_v3_rest_api_app_permissions_CONTENTREFERENCES_read,
      github_v3_rest_api_app_permissions_CONTENTS_read,
      github_v3_rest_api_app_permissions_DEPLOYMENTS_read,
      github_v3_rest_api_app_permissions_DISCUSSIONS_read,
      github_v3_rest_api_app_permissions_EMAILS_read,
      github_v3_rest_api_app_permissions_ENVIRONMENTS_read,
      github_v3_rest_api_app_permissions_ISSUES_read,
      github_v3_rest_api_app_permissions_KEYS_read,
      github_v3_rest_api_app_permissions_MEMBERS_read,
      github_v3_rest_api_app_permissions_METADATA_read,
      github_v3_rest_api_app_permissions_ORGANIZATIONADMINISTRATION_read,
      github_v3_rest_api_app_permissions_ORGANIZATIONHOOKS_read,
      github_v3_rest_api_app_permissions_ORGANIZATIONPACKAGES_read,
      github_v3_rest_api_app_permissions_ORGANIZATIONPLAN_read,
      github_v3_rest_api_app_permissions_ORGANIZATIONPROJECTS_read,
      github_v3_rest_api_app_permissions_ORGANIZATIONSECRETS_read,
      github_v3_rest_api_app_permissions_ORGANIZATIONSELFHOSTEDRUNNERS_read,
      github_v3_rest_api_app_permissions_ORGANIZATIONUSERBLOCKING_read,
      github_v3_rest_api_app_permissions_PACKAGES_read,
      github_v3_rest_api_app_permissions_PAGES_read,
      github_v3_rest_api_app_permissions_PULLREQUESTS_read,
      github_v3_rest_api_app_permissions_REPOSITORYHOOKS_read,
      github_v3_rest_api_app_permissions_REPOSITORYPROJECTS_read,
      github_v3_rest_api_app_permissions_SECRETSCANNINGALERTS_read,
      github_v3_rest_api_app_permissions_SECRETS_read,
      github_v3_rest_api_app_permissions_SECURITYEVENTS_read,
      github_v3_rest_api_app_permissions_SECURITYSCANNINGALERT_read,
      github_v3_rest_api_app_permissions_SINGLEFILE_read,
      github_v3_rest_api_app_permissions_STATUSES_read,
      github_v3_rest_api_app_permissions_TEAMDISCUSSIONS_read,
      github_v3_rest_api_app_permissions_VULNERABILITYALERTS_read,
      github_v3_rest_api_app_permissions_WORKFLOWS_read
    );
  }

  return app_permissions;
}


#ifdef app_permissions_MAIN

void test_app_permissions(int include_optional) {
    app_permissions_t* app_permissions_1 = instantiate_app_permissions(include_optional);

	cJSON* jsonapp_permissions_1 = app_permissions_convertToJSON(app_permissions_1);
	printf("app_permissions :\n%s\n", cJSON_Print(jsonapp_permissions_1));
	app_permissions_t* app_permissions_2 = app_permissions_parseFromJSON(jsonapp_permissions_1);
	cJSON* jsonapp_permissions_2 = app_permissions_convertToJSON(app_permissions_2);
	printf("repeating app_permissions:\n%s\n", cJSON_Print(jsonapp_permissions_2));
}

int main() {
  test_app_permissions(1);
  test_app_permissions(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_permissions_MAIN
#endif // app_permissions_TEST
