#ifndef actions_organization_permissions_TEST
#define actions_organization_permissions_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_organization_permissions_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_organization_permissions.h"
actions_organization_permissions_t* instantiate_actions_organization_permissions(int include_optional);



actions_organization_permissions_t* instantiate_actions_organization_permissions(int include_optional) {
  actions_organization_permissions_t* actions_organization_permissions = NULL;
  if (include_optional) {
    actions_organization_permissions = actions_organization_permissions_create(
      github_v3_rest_api_actions_organization_permissions__all,
      "0",
      github_v3_rest_api_actions_organization_permissions__all,
      "0"
    );
  } else {
    actions_organization_permissions = actions_organization_permissions_create(
      github_v3_rest_api_actions_organization_permissions__all,
      "0",
      github_v3_rest_api_actions_organization_permissions__all,
      "0"
    );
  }

  return actions_organization_permissions;
}


#ifdef actions_organization_permissions_MAIN

void test_actions_organization_permissions(int include_optional) {
    actions_organization_permissions_t* actions_organization_permissions_1 = instantiate_actions_organization_permissions(include_optional);

	cJSON* jsonactions_organization_permissions_1 = actions_organization_permissions_convertToJSON(actions_organization_permissions_1);
	printf("actions_organization_permissions :\n%s\n", cJSON_Print(jsonactions_organization_permissions_1));
	actions_organization_permissions_t* actions_organization_permissions_2 = actions_organization_permissions_parseFromJSON(jsonactions_organization_permissions_1);
	cJSON* jsonactions_organization_permissions_2 = actions_organization_permissions_convertToJSON(actions_organization_permissions_2);
	printf("repeating actions_organization_permissions:\n%s\n", cJSON_Print(jsonactions_organization_permissions_2));
}

int main() {
  test_actions_organization_permissions(1);
  test_actions_organization_permissions(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_organization_permissions_MAIN
#endif // actions_organization_permissions_TEST
