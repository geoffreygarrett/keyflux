#ifndef actions_generate_runner_jitconfig_for_org_request_TEST
#define actions_generate_runner_jitconfig_for_org_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_generate_runner_jitconfig_for_org_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_generate_runner_jitconfig_for_org_request.h"
actions_generate_runner_jitconfig_for_org_request_t* instantiate_actions_generate_runner_jitconfig_for_org_request(int include_optional);



actions_generate_runner_jitconfig_for_org_request_t* instantiate_actions_generate_runner_jitconfig_for_org_request(int include_optional) {
  actions_generate_runner_jitconfig_for_org_request_t* actions_generate_runner_jitconfig_for_org_request = NULL;
  if (include_optional) {
    actions_generate_runner_jitconfig_for_org_request = actions_generate_runner_jitconfig_for_org_request_create(
      "0",
      56,
      list_createList(),
      "_work"
    );
  } else {
    actions_generate_runner_jitconfig_for_org_request = actions_generate_runner_jitconfig_for_org_request_create(
      "0",
      56,
      list_createList(),
      "_work"
    );
  }

  return actions_generate_runner_jitconfig_for_org_request;
}


#ifdef actions_generate_runner_jitconfig_for_org_request_MAIN

void test_actions_generate_runner_jitconfig_for_org_request(int include_optional) {
    actions_generate_runner_jitconfig_for_org_request_t* actions_generate_runner_jitconfig_for_org_request_1 = instantiate_actions_generate_runner_jitconfig_for_org_request(include_optional);

	cJSON* jsonactions_generate_runner_jitconfig_for_org_request_1 = actions_generate_runner_jitconfig_for_org_request_convertToJSON(actions_generate_runner_jitconfig_for_org_request_1);
	printf("actions_generate_runner_jitconfig_for_org_request :\n%s\n", cJSON_Print(jsonactions_generate_runner_jitconfig_for_org_request_1));
	actions_generate_runner_jitconfig_for_org_request_t* actions_generate_runner_jitconfig_for_org_request_2 = actions_generate_runner_jitconfig_for_org_request_parseFromJSON(jsonactions_generate_runner_jitconfig_for_org_request_1);
	cJSON* jsonactions_generate_runner_jitconfig_for_org_request_2 = actions_generate_runner_jitconfig_for_org_request_convertToJSON(actions_generate_runner_jitconfig_for_org_request_2);
	printf("repeating actions_generate_runner_jitconfig_for_org_request:\n%s\n", cJSON_Print(jsonactions_generate_runner_jitconfig_for_org_request_2));
}

int main() {
  test_actions_generate_runner_jitconfig_for_org_request(1);
  test_actions_generate_runner_jitconfig_for_org_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_generate_runner_jitconfig_for_org_request_MAIN
#endif // actions_generate_runner_jitconfig_for_org_request_TEST
