#ifndef actions_billing_usage_TEST
#define actions_billing_usage_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_billing_usage_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_billing_usage.h"
actions_billing_usage_t* instantiate_actions_billing_usage(int include_optional);

#include "test_actions_billing_usage_minutes_used_breakdown.c"


actions_billing_usage_t* instantiate_actions_billing_usage(int include_optional) {
  actions_billing_usage_t* actions_billing_usage = NULL;
  if (include_optional) {
    actions_billing_usage = actions_billing_usage_create(
      56,
      56,
      56,
       // false, not to have infinite recursion
      instantiate_actions_billing_usage_minutes_used_breakdown(0)
    );
  } else {
    actions_billing_usage = actions_billing_usage_create(
      56,
      56,
      56,
      NULL
    );
  }

  return actions_billing_usage;
}


#ifdef actions_billing_usage_MAIN

void test_actions_billing_usage(int include_optional) {
    actions_billing_usage_t* actions_billing_usage_1 = instantiate_actions_billing_usage(include_optional);

	cJSON* jsonactions_billing_usage_1 = actions_billing_usage_convertToJSON(actions_billing_usage_1);
	printf("actions_billing_usage :\n%s\n", cJSON_Print(jsonactions_billing_usage_1));
	actions_billing_usage_t* actions_billing_usage_2 = actions_billing_usage_parseFromJSON(jsonactions_billing_usage_1);
	cJSON* jsonactions_billing_usage_2 = actions_billing_usage_convertToJSON(actions_billing_usage_2);
	printf("repeating actions_billing_usage:\n%s\n", cJSON_Print(jsonactions_billing_usage_2));
}

int main() {
  test_actions_billing_usage(1);
  test_actions_billing_usage(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_billing_usage_MAIN
#endif // actions_billing_usage_TEST
