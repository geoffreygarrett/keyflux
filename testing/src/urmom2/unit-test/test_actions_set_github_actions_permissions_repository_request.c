#ifndef actions_set_github_actions_permissions_repository_request_TEST
#define actions_set_github_actions_permissions_repository_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_set_github_actions_permissions_repository_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_set_github_actions_permissions_repository_request.h"
actions_set_github_actions_permissions_repository_request_t* instantiate_actions_set_github_actions_permissions_repository_request(int include_optional);



actions_set_github_actions_permissions_repository_request_t* instantiate_actions_set_github_actions_permissions_repository_request(int include_optional) {
  actions_set_github_actions_permissions_repository_request_t* actions_set_github_actions_permissions_repository_request = NULL;
  if (include_optional) {
    actions_set_github_actions_permissions_repository_request = actions_set_github_actions_permissions_repository_request_create(
      1,
      github_v3_rest_api_actions_set_github_actions_permissions_repository_request__all
    );
  } else {
    actions_set_github_actions_permissions_repository_request = actions_set_github_actions_permissions_repository_request_create(
      1,
      github_v3_rest_api_actions_set_github_actions_permissions_repository_request__all
    );
  }

  return actions_set_github_actions_permissions_repository_request;
}


#ifdef actions_set_github_actions_permissions_repository_request_MAIN

void test_actions_set_github_actions_permissions_repository_request(int include_optional) {
    actions_set_github_actions_permissions_repository_request_t* actions_set_github_actions_permissions_repository_request_1 = instantiate_actions_set_github_actions_permissions_repository_request(include_optional);

	cJSON* jsonactions_set_github_actions_permissions_repository_request_1 = actions_set_github_actions_permissions_repository_request_convertToJSON(actions_set_github_actions_permissions_repository_request_1);
	printf("actions_set_github_actions_permissions_repository_request :\n%s\n", cJSON_Print(jsonactions_set_github_actions_permissions_repository_request_1));
	actions_set_github_actions_permissions_repository_request_t* actions_set_github_actions_permissions_repository_request_2 = actions_set_github_actions_permissions_repository_request_parseFromJSON(jsonactions_set_github_actions_permissions_repository_request_1);
	cJSON* jsonactions_set_github_actions_permissions_repository_request_2 = actions_set_github_actions_permissions_repository_request_convertToJSON(actions_set_github_actions_permissions_repository_request_2);
	printf("repeating actions_set_github_actions_permissions_repository_request:\n%s\n", cJSON_Print(jsonactions_set_github_actions_permissions_repository_request_2));
}

int main() {
  test_actions_set_github_actions_permissions_repository_request(1);
  test_actions_set_github_actions_permissions_repository_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_set_github_actions_permissions_repository_request_MAIN
#endif // actions_set_github_actions_permissions_repository_request_TEST
