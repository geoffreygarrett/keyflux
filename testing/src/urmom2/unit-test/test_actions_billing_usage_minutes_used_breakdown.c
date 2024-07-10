#ifndef actions_billing_usage_minutes_used_breakdown_TEST
#define actions_billing_usage_minutes_used_breakdown_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_billing_usage_minutes_used_breakdown_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_billing_usage_minutes_used_breakdown.h"
actions_billing_usage_minutes_used_breakdown_t* instantiate_actions_billing_usage_minutes_used_breakdown(int include_optional);



actions_billing_usage_minutes_used_breakdown_t* instantiate_actions_billing_usage_minutes_used_breakdown(int include_optional) {
  actions_billing_usage_minutes_used_breakdown_t* actions_billing_usage_minutes_used_breakdown = NULL;
  if (include_optional) {
    actions_billing_usage_minutes_used_breakdown = actions_billing_usage_minutes_used_breakdown_create(
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56
    );
  } else {
    actions_billing_usage_minutes_used_breakdown = actions_billing_usage_minutes_used_breakdown_create(
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56
    );
  }

  return actions_billing_usage_minutes_used_breakdown;
}


#ifdef actions_billing_usage_minutes_used_breakdown_MAIN

void test_actions_billing_usage_minutes_used_breakdown(int include_optional) {
    actions_billing_usage_minutes_used_breakdown_t* actions_billing_usage_minutes_used_breakdown_1 = instantiate_actions_billing_usage_minutes_used_breakdown(include_optional);

	cJSON* jsonactions_billing_usage_minutes_used_breakdown_1 = actions_billing_usage_minutes_used_breakdown_convertToJSON(actions_billing_usage_minutes_used_breakdown_1);
	printf("actions_billing_usage_minutes_used_breakdown :\n%s\n", cJSON_Print(jsonactions_billing_usage_minutes_used_breakdown_1));
	actions_billing_usage_minutes_used_breakdown_t* actions_billing_usage_minutes_used_breakdown_2 = actions_billing_usage_minutes_used_breakdown_parseFromJSON(jsonactions_billing_usage_minutes_used_breakdown_1);
	cJSON* jsonactions_billing_usage_minutes_used_breakdown_2 = actions_billing_usage_minutes_used_breakdown_convertToJSON(actions_billing_usage_minutes_used_breakdown_2);
	printf("repeating actions_billing_usage_minutes_used_breakdown:\n%s\n", cJSON_Print(jsonactions_billing_usage_minutes_used_breakdown_2));
}

int main() {
  test_actions_billing_usage_minutes_used_breakdown(1);
  test_actions_billing_usage_minutes_used_breakdown(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_billing_usage_minutes_used_breakdown_MAIN
#endif // actions_billing_usage_minutes_used_breakdown_TEST
