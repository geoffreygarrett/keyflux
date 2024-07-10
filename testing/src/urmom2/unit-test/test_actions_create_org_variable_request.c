#ifndef actions_create_org_variable_request_TEST
#define actions_create_org_variable_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_create_org_variable_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_create_org_variable_request.h"
actions_create_org_variable_request_t* instantiate_actions_create_org_variable_request(int include_optional);



actions_create_org_variable_request_t* instantiate_actions_create_org_variable_request(int include_optional) {
  actions_create_org_variable_request_t* actions_create_org_variable_request = NULL;
  if (include_optional) {
    actions_create_org_variable_request = actions_create_org_variable_request_create(
      "0",
      "0",
      github_v3_rest_api_actions_create_org_variable_request_VISIBILITY_all,
      list_createList()
    );
  } else {
    actions_create_org_variable_request = actions_create_org_variable_request_create(
      "0",
      "0",
      github_v3_rest_api_actions_create_org_variable_request_VISIBILITY_all,
      list_createList()
    );
  }

  return actions_create_org_variable_request;
}


#ifdef actions_create_org_variable_request_MAIN

void test_actions_create_org_variable_request(int include_optional) {
    actions_create_org_variable_request_t* actions_create_org_variable_request_1 = instantiate_actions_create_org_variable_request(include_optional);

	cJSON* jsonactions_create_org_variable_request_1 = actions_create_org_variable_request_convertToJSON(actions_create_org_variable_request_1);
	printf("actions_create_org_variable_request :\n%s\n", cJSON_Print(jsonactions_create_org_variable_request_1));
	actions_create_org_variable_request_t* actions_create_org_variable_request_2 = actions_create_org_variable_request_parseFromJSON(jsonactions_create_org_variable_request_1);
	cJSON* jsonactions_create_org_variable_request_2 = actions_create_org_variable_request_convertToJSON(actions_create_org_variable_request_2);
	printf("repeating actions_create_org_variable_request:\n%s\n", cJSON_Print(jsonactions_create_org_variable_request_2));
}

int main() {
  test_actions_create_org_variable_request(1);
  test_actions_create_org_variable_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_create_org_variable_request_MAIN
#endif // actions_create_org_variable_request_TEST
