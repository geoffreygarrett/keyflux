#ifndef actions_variable_TEST
#define actions_variable_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_variable_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_variable.h"
actions_variable_t* instantiate_actions_variable(int include_optional);



actions_variable_t* instantiate_actions_variable(int include_optional) {
  actions_variable_t* actions_variable = NULL;
  if (include_optional) {
    actions_variable = actions_variable_create(
      "USERNAME",
      "octocat",
      "2019-01-24T22:45:36Z",
      "2019-01-24T22:45:36Z"
    );
  } else {
    actions_variable = actions_variable_create(
      "USERNAME",
      "octocat",
      "2019-01-24T22:45:36Z",
      "2019-01-24T22:45:36Z"
    );
  }

  return actions_variable;
}


#ifdef actions_variable_MAIN

void test_actions_variable(int include_optional) {
    actions_variable_t* actions_variable_1 = instantiate_actions_variable(include_optional);

	cJSON* jsonactions_variable_1 = actions_variable_convertToJSON(actions_variable_1);
	printf("actions_variable :\n%s\n", cJSON_Print(jsonactions_variable_1));
	actions_variable_t* actions_variable_2 = actions_variable_parseFromJSON(jsonactions_variable_1);
	cJSON* jsonactions_variable_2 = actions_variable_convertToJSON(actions_variable_2);
	printf("repeating actions_variable:\n%s\n", cJSON_Print(jsonactions_variable_2));
}

int main() {
  test_actions_variable(1);
  test_actions_variable(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_variable_MAIN
#endif // actions_variable_TEST
