#ifndef actions_cache_usage_by_repository_TEST
#define actions_cache_usage_by_repository_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_cache_usage_by_repository_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_cache_usage_by_repository.h"
actions_cache_usage_by_repository_t* instantiate_actions_cache_usage_by_repository(int include_optional);



actions_cache_usage_by_repository_t* instantiate_actions_cache_usage_by_repository(int include_optional) {
  actions_cache_usage_by_repository_t* actions_cache_usage_by_repository = NULL;
  if (include_optional) {
    actions_cache_usage_by_repository = actions_cache_usage_by_repository_create(
      "octo-org/Hello-World",
      2322142,
      3
    );
  } else {
    actions_cache_usage_by_repository = actions_cache_usage_by_repository_create(
      "octo-org/Hello-World",
      2322142,
      3
    );
  }

  return actions_cache_usage_by_repository;
}


#ifdef actions_cache_usage_by_repository_MAIN

void test_actions_cache_usage_by_repository(int include_optional) {
    actions_cache_usage_by_repository_t* actions_cache_usage_by_repository_1 = instantiate_actions_cache_usage_by_repository(include_optional);

	cJSON* jsonactions_cache_usage_by_repository_1 = actions_cache_usage_by_repository_convertToJSON(actions_cache_usage_by_repository_1);
	printf("actions_cache_usage_by_repository :\n%s\n", cJSON_Print(jsonactions_cache_usage_by_repository_1));
	actions_cache_usage_by_repository_t* actions_cache_usage_by_repository_2 = actions_cache_usage_by_repository_parseFromJSON(jsonactions_cache_usage_by_repository_1);
	cJSON* jsonactions_cache_usage_by_repository_2 = actions_cache_usage_by_repository_convertToJSON(actions_cache_usage_by_repository_2);
	printf("repeating actions_cache_usage_by_repository:\n%s\n", cJSON_Print(jsonactions_cache_usage_by_repository_2));
}

int main() {
  test_actions_cache_usage_by_repository(1);
  test_actions_cache_usage_by_repository(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_cache_usage_by_repository_MAIN
#endif // actions_cache_usage_by_repository_TEST
