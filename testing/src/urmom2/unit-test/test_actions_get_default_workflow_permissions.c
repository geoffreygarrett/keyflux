#ifndef actions_get_default_workflow_permissions_TEST
#define actions_get_default_workflow_permissions_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_get_default_workflow_permissions_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_get_default_workflow_permissions.h"
actions_get_default_workflow_permissions_t* instantiate_actions_get_default_workflow_permissions(int include_optional);



actions_get_default_workflow_permissions_t* instantiate_actions_get_default_workflow_permissions(int include_optional) {
  actions_get_default_workflow_permissions_t* actions_get_default_workflow_permissions = NULL;
  if (include_optional) {
    actions_get_default_workflow_permissions = actions_get_default_workflow_permissions_create(
      github_v3_rest_api_actions_get_default_workflow_permissions__read,
      1
    );
  } else {
    actions_get_default_workflow_permissions = actions_get_default_workflow_permissions_create(
      github_v3_rest_api_actions_get_default_workflow_permissions__read,
      1
    );
  }

  return actions_get_default_workflow_permissions;
}


#ifdef actions_get_default_workflow_permissions_MAIN

void test_actions_get_default_workflow_permissions(int include_optional) {
    actions_get_default_workflow_permissions_t* actions_get_default_workflow_permissions_1 = instantiate_actions_get_default_workflow_permissions(include_optional);

	cJSON* jsonactions_get_default_workflow_permissions_1 = actions_get_default_workflow_permissions_convertToJSON(actions_get_default_workflow_permissions_1);
	printf("actions_get_default_workflow_permissions :\n%s\n", cJSON_Print(jsonactions_get_default_workflow_permissions_1));
	actions_get_default_workflow_permissions_t* actions_get_default_workflow_permissions_2 = actions_get_default_workflow_permissions_parseFromJSON(jsonactions_get_default_workflow_permissions_1);
	cJSON* jsonactions_get_default_workflow_permissions_2 = actions_get_default_workflow_permissions_convertToJSON(actions_get_default_workflow_permissions_2);
	printf("repeating actions_get_default_workflow_permissions:\n%s\n", cJSON_Print(jsonactions_get_default_workflow_permissions_2));
}

int main() {
  test_actions_get_default_workflow_permissions(1);
  test_actions_get_default_workflow_permissions(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_get_default_workflow_permissions_MAIN
#endif // actions_get_default_workflow_permissions_TEST
