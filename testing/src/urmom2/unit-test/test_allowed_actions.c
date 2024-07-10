#ifndef allowed_actions_TEST
#define allowed_actions_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define allowed_actions_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/allowed_actions.h"
allowed_actions_t* instantiate_allowed_actions(int include_optional);



allowed_actions_t* instantiate_allowed_actions(int include_optional) {
  allowed_actions_t* allowed_actions = NULL;
  if (include_optional) {
    allowed_actions = allowed_actions_create(
    );
  } else {
    allowed_actions = allowed_actions_create(
    );
  }

  return allowed_actions;
}


#ifdef allowed_actions_MAIN

void test_allowed_actions(int include_optional) {
    allowed_actions_t* allowed_actions_1 = instantiate_allowed_actions(include_optional);

	cJSON* jsonallowed_actions_1 = allowed_actions_convertToJSON(allowed_actions_1);
	printf("allowed_actions :\n%s\n", cJSON_Print(jsonallowed_actions_1));
	allowed_actions_t* allowed_actions_2 = allowed_actions_parseFromJSON(jsonallowed_actions_1);
	cJSON* jsonallowed_actions_2 = allowed_actions_convertToJSON(allowed_actions_2);
	printf("repeating allowed_actions:\n%s\n", cJSON_Print(jsonallowed_actions_2));
}

int main() {
  test_allowed_actions(1);
  test_allowed_actions(0);

  printf("Hello world \n");
  return 0;
}

#endif // allowed_actions_MAIN
#endif // allowed_actions_TEST
