#ifndef actions_cache_list_TEST
#define actions_cache_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_cache_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_cache_list.h"
actions_cache_list_t* instantiate_actions_cache_list(int include_optional);



actions_cache_list_t* instantiate_actions_cache_list(int include_optional) {
  actions_cache_list_t* actions_cache_list = NULL;
  if (include_optional) {
    actions_cache_list = actions_cache_list_create(
      2,
      list_createList()
    );
  } else {
    actions_cache_list = actions_cache_list_create(
      2,
      list_createList()
    );
  }

  return actions_cache_list;
}


#ifdef actions_cache_list_MAIN

void test_actions_cache_list(int include_optional) {
    actions_cache_list_t* actions_cache_list_1 = instantiate_actions_cache_list(include_optional);

	cJSON* jsonactions_cache_list_1 = actions_cache_list_convertToJSON(actions_cache_list_1);
	printf("actions_cache_list :\n%s\n", cJSON_Print(jsonactions_cache_list_1));
	actions_cache_list_t* actions_cache_list_2 = actions_cache_list_parseFromJSON(jsonactions_cache_list_1);
	cJSON* jsonactions_cache_list_2 = actions_cache_list_convertToJSON(actions_cache_list_2);
	printf("repeating actions_cache_list:\n%s\n", cJSON_Print(jsonactions_cache_list_2));
}

int main() {
  test_actions_cache_list(1);
  test_actions_cache_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_cache_list_MAIN
#endif // actions_cache_list_TEST
