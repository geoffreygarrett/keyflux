#ifndef actions_get_workflow_workflow_id_parameter_TEST
#define actions_get_workflow_workflow_id_parameter_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_get_workflow_workflow_id_parameter_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_get_workflow_workflow_id_parameter.h"
actions_get_workflow_workflow_id_parameter_t* instantiate_actions_get_workflow_workflow_id_parameter(int include_optional);



actions_get_workflow_workflow_id_parameter_t* instantiate_actions_get_workflow_workflow_id_parameter(int include_optional) {
  actions_get_workflow_workflow_id_parameter_t* actions_get_workflow_workflow_id_parameter = NULL;
  if (include_optional) {
    actions_get_workflow_workflow_id_parameter = actions_get_workflow_workflow_id_parameter_create(
    );
  } else {
    actions_get_workflow_workflow_id_parameter = actions_get_workflow_workflow_id_parameter_create(
    );
  }

  return actions_get_workflow_workflow_id_parameter;
}


#ifdef actions_get_workflow_workflow_id_parameter_MAIN

void test_actions_get_workflow_workflow_id_parameter(int include_optional) {
    actions_get_workflow_workflow_id_parameter_t* actions_get_workflow_workflow_id_parameter_1 = instantiate_actions_get_workflow_workflow_id_parameter(include_optional);

	cJSON* jsonactions_get_workflow_workflow_id_parameter_1 = actions_get_workflow_workflow_id_parameter_convertToJSON(actions_get_workflow_workflow_id_parameter_1);
	printf("actions_get_workflow_workflow_id_parameter :\n%s\n", cJSON_Print(jsonactions_get_workflow_workflow_id_parameter_1));
	actions_get_workflow_workflow_id_parameter_t* actions_get_workflow_workflow_id_parameter_2 = actions_get_workflow_workflow_id_parameter_parseFromJSON(jsonactions_get_workflow_workflow_id_parameter_1);
	cJSON* jsonactions_get_workflow_workflow_id_parameter_2 = actions_get_workflow_workflow_id_parameter_convertToJSON(actions_get_workflow_workflow_id_parameter_2);
	printf("repeating actions_get_workflow_workflow_id_parameter:\n%s\n", cJSON_Print(jsonactions_get_workflow_workflow_id_parameter_2));
}

int main() {
  test_actions_get_workflow_workflow_id_parameter(1);
  test_actions_get_workflow_workflow_id_parameter(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_get_workflow_workflow_id_parameter_MAIN
#endif // actions_get_workflow_workflow_id_parameter_TEST
