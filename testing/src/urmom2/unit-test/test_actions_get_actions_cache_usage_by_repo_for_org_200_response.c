#ifndef actions_get_actions_cache_usage_by_repo_for_org_200_response_TEST
#define actions_get_actions_cache_usage_by_repo_for_org_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_get_actions_cache_usage_by_repo_for_org_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_get_actions_cache_usage_by_repo_for_org_200_response.h"
actions_get_actions_cache_usage_by_repo_for_org_200_response_t* instantiate_actions_get_actions_cache_usage_by_repo_for_org_200_response(int include_optional);



actions_get_actions_cache_usage_by_repo_for_org_200_response_t* instantiate_actions_get_actions_cache_usage_by_repo_for_org_200_response(int include_optional) {
  actions_get_actions_cache_usage_by_repo_for_org_200_response_t* actions_get_actions_cache_usage_by_repo_for_org_200_response = NULL;
  if (include_optional) {
    actions_get_actions_cache_usage_by_repo_for_org_200_response = actions_get_actions_cache_usage_by_repo_for_org_200_response_create(
      56,
      list_createList()
    );
  } else {
    actions_get_actions_cache_usage_by_repo_for_org_200_response = actions_get_actions_cache_usage_by_repo_for_org_200_response_create(
      56,
      list_createList()
    );
  }

  return actions_get_actions_cache_usage_by_repo_for_org_200_response;
}


#ifdef actions_get_actions_cache_usage_by_repo_for_org_200_response_MAIN

void test_actions_get_actions_cache_usage_by_repo_for_org_200_response(int include_optional) {
    actions_get_actions_cache_usage_by_repo_for_org_200_response_t* actions_get_actions_cache_usage_by_repo_for_org_200_response_1 = instantiate_actions_get_actions_cache_usage_by_repo_for_org_200_response(include_optional);

	cJSON* jsonactions_get_actions_cache_usage_by_repo_for_org_200_response_1 = actions_get_actions_cache_usage_by_repo_for_org_200_response_convertToJSON(actions_get_actions_cache_usage_by_repo_for_org_200_response_1);
	printf("actions_get_actions_cache_usage_by_repo_for_org_200_response :\n%s\n", cJSON_Print(jsonactions_get_actions_cache_usage_by_repo_for_org_200_response_1));
	actions_get_actions_cache_usage_by_repo_for_org_200_response_t* actions_get_actions_cache_usage_by_repo_for_org_200_response_2 = actions_get_actions_cache_usage_by_repo_for_org_200_response_parseFromJSON(jsonactions_get_actions_cache_usage_by_repo_for_org_200_response_1);
	cJSON* jsonactions_get_actions_cache_usage_by_repo_for_org_200_response_2 = actions_get_actions_cache_usage_by_repo_for_org_200_response_convertToJSON(actions_get_actions_cache_usage_by_repo_for_org_200_response_2);
	printf("repeating actions_get_actions_cache_usage_by_repo_for_org_200_response:\n%s\n", cJSON_Print(jsonactions_get_actions_cache_usage_by_repo_for_org_200_response_2));
}

int main() {
  test_actions_get_actions_cache_usage_by_repo_for_org_200_response(1);
  test_actions_get_actions_cache_usage_by_repo_for_org_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_get_actions_cache_usage_by_repo_for_org_200_response_MAIN
#endif // actions_get_actions_cache_usage_by_repo_for_org_200_response_TEST
