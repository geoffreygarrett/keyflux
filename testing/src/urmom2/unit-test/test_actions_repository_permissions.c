#ifndef actions_repository_permissions_TEST
#define actions_repository_permissions_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_repository_permissions_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_repository_permissions.h"
actions_repository_permissions_t* instantiate_actions_repository_permissions(int include_optional);



actions_repository_permissions_t* instantiate_actions_repository_permissions(int include_optional) {
  actions_repository_permissions_t* actions_repository_permissions = NULL;
  if (include_optional) {
    actions_repository_permissions = actions_repository_permissions_create(
      1,
      github_v3_rest_api_actions_repository_permissions__all,
      "0"
    );
  } else {
    actions_repository_permissions = actions_repository_permissions_create(
      1,
      github_v3_rest_api_actions_repository_permissions__all,
      "0"
    );
  }

  return actions_repository_permissions;
}


#ifdef actions_repository_permissions_MAIN

void test_actions_repository_permissions(int include_optional) {
    actions_repository_permissions_t* actions_repository_permissions_1 = instantiate_actions_repository_permissions(include_optional);

	cJSON* jsonactions_repository_permissions_1 = actions_repository_permissions_convertToJSON(actions_repository_permissions_1);
	printf("actions_repository_permissions :\n%s\n", cJSON_Print(jsonactions_repository_permissions_1));
	actions_repository_permissions_t* actions_repository_permissions_2 = actions_repository_permissions_parseFromJSON(jsonactions_repository_permissions_1);
	cJSON* jsonactions_repository_permissions_2 = actions_repository_permissions_convertToJSON(actions_repository_permissions_2);
	printf("repeating actions_repository_permissions:\n%s\n", cJSON_Print(jsonactions_repository_permissions_2));
}

int main() {
  test_actions_repository_permissions(1);
  test_actions_repository_permissions(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_repository_permissions_MAIN
#endif // actions_repository_permissions_TEST
