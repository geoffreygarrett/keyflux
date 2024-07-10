#ifndef actions_generate_runner_jitconfig_for_org_201_response_TEST
#define actions_generate_runner_jitconfig_for_org_201_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_generate_runner_jitconfig_for_org_201_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_generate_runner_jitconfig_for_org_201_response.h"
actions_generate_runner_jitconfig_for_org_201_response_t* instantiate_actions_generate_runner_jitconfig_for_org_201_response(int include_optional);

#include "test_runner.c"


actions_generate_runner_jitconfig_for_org_201_response_t* instantiate_actions_generate_runner_jitconfig_for_org_201_response(int include_optional) {
  actions_generate_runner_jitconfig_for_org_201_response_t* actions_generate_runner_jitconfig_for_org_201_response = NULL;
  if (include_optional) {
    actions_generate_runner_jitconfig_for_org_201_response = actions_generate_runner_jitconfig_for_org_201_response_create(
       // false, not to have infinite recursion
      instantiate_runner(0),
      "0"
    );
  } else {
    actions_generate_runner_jitconfig_for_org_201_response = actions_generate_runner_jitconfig_for_org_201_response_create(
      NULL,
      "0"
    );
  }

  return actions_generate_runner_jitconfig_for_org_201_response;
}


#ifdef actions_generate_runner_jitconfig_for_org_201_response_MAIN

void test_actions_generate_runner_jitconfig_for_org_201_response(int include_optional) {
    actions_generate_runner_jitconfig_for_org_201_response_t* actions_generate_runner_jitconfig_for_org_201_response_1 = instantiate_actions_generate_runner_jitconfig_for_org_201_response(include_optional);

	cJSON* jsonactions_generate_runner_jitconfig_for_org_201_response_1 = actions_generate_runner_jitconfig_for_org_201_response_convertToJSON(actions_generate_runner_jitconfig_for_org_201_response_1);
	printf("actions_generate_runner_jitconfig_for_org_201_response :\n%s\n", cJSON_Print(jsonactions_generate_runner_jitconfig_for_org_201_response_1));
	actions_generate_runner_jitconfig_for_org_201_response_t* actions_generate_runner_jitconfig_for_org_201_response_2 = actions_generate_runner_jitconfig_for_org_201_response_parseFromJSON(jsonactions_generate_runner_jitconfig_for_org_201_response_1);
	cJSON* jsonactions_generate_runner_jitconfig_for_org_201_response_2 = actions_generate_runner_jitconfig_for_org_201_response_convertToJSON(actions_generate_runner_jitconfig_for_org_201_response_2);
	printf("repeating actions_generate_runner_jitconfig_for_org_201_response:\n%s\n", cJSON_Print(jsonactions_generate_runner_jitconfig_for_org_201_response_2));
}

int main() {
  test_actions_generate_runner_jitconfig_for_org_201_response(1);
  test_actions_generate_runner_jitconfig_for_org_201_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_generate_runner_jitconfig_for_org_201_response_MAIN
#endif // actions_generate_runner_jitconfig_for_org_201_response_TEST
