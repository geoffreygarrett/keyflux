#ifndef actions_cache_usage_org_enterprise_TEST
#define actions_cache_usage_org_enterprise_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_cache_usage_org_enterprise_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_cache_usage_org_enterprise.h"
actions_cache_usage_org_enterprise_t* instantiate_actions_cache_usage_org_enterprise(int include_optional);



actions_cache_usage_org_enterprise_t* instantiate_actions_cache_usage_org_enterprise(int include_optional) {
  actions_cache_usage_org_enterprise_t* actions_cache_usage_org_enterprise = NULL;
  if (include_optional) {
    actions_cache_usage_org_enterprise = actions_cache_usage_org_enterprise_create(
      56,
      56
    );
  } else {
    actions_cache_usage_org_enterprise = actions_cache_usage_org_enterprise_create(
      56,
      56
    );
  }

  return actions_cache_usage_org_enterprise;
}


#ifdef actions_cache_usage_org_enterprise_MAIN

void test_actions_cache_usage_org_enterprise(int include_optional) {
    actions_cache_usage_org_enterprise_t* actions_cache_usage_org_enterprise_1 = instantiate_actions_cache_usage_org_enterprise(include_optional);

	cJSON* jsonactions_cache_usage_org_enterprise_1 = actions_cache_usage_org_enterprise_convertToJSON(actions_cache_usage_org_enterprise_1);
	printf("actions_cache_usage_org_enterprise :\n%s\n", cJSON_Print(jsonactions_cache_usage_org_enterprise_1));
	actions_cache_usage_org_enterprise_t* actions_cache_usage_org_enterprise_2 = actions_cache_usage_org_enterprise_parseFromJSON(jsonactions_cache_usage_org_enterprise_1);
	cJSON* jsonactions_cache_usage_org_enterprise_2 = actions_cache_usage_org_enterprise_convertToJSON(actions_cache_usage_org_enterprise_2);
	printf("repeating actions_cache_usage_org_enterprise:\n%s\n", cJSON_Print(jsonactions_cache_usage_org_enterprise_2));
}

int main() {
  test_actions_cache_usage_org_enterprise(1);
  test_actions_cache_usage_org_enterprise(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_cache_usage_org_enterprise_MAIN
#endif // actions_cache_usage_org_enterprise_TEST
