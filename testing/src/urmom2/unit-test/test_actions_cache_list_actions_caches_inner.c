#ifndef actions_cache_list_actions_caches_inner_TEST
#define actions_cache_list_actions_caches_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_cache_list_actions_caches_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_cache_list_actions_caches_inner.h"
actions_cache_list_actions_caches_inner_t* instantiate_actions_cache_list_actions_caches_inner(int include_optional);



actions_cache_list_actions_caches_inner_t* instantiate_actions_cache_list_actions_caches_inner(int include_optional) {
  actions_cache_list_actions_caches_inner_t* actions_cache_list_actions_caches_inner = NULL;
  if (include_optional) {
    actions_cache_list_actions_caches_inner = actions_cache_list_actions_caches_inner_create(
      2,
      "refs/heads/main",
      "Linux-node-958aff96db2d75d67787d1e634ae70b659de937b",
      "73885106f58cc52a7df9ec4d4a5622a5614813162cb516c759a30af6bf56e6f0",
      "2019-01-24T22:45:36Z",
      "2019-01-24T22:45:36Z",
      1024
    );
  } else {
    actions_cache_list_actions_caches_inner = actions_cache_list_actions_caches_inner_create(
      2,
      "refs/heads/main",
      "Linux-node-958aff96db2d75d67787d1e634ae70b659de937b",
      "73885106f58cc52a7df9ec4d4a5622a5614813162cb516c759a30af6bf56e6f0",
      "2019-01-24T22:45:36Z",
      "2019-01-24T22:45:36Z",
      1024
    );
  }

  return actions_cache_list_actions_caches_inner;
}


#ifdef actions_cache_list_actions_caches_inner_MAIN

void test_actions_cache_list_actions_caches_inner(int include_optional) {
    actions_cache_list_actions_caches_inner_t* actions_cache_list_actions_caches_inner_1 = instantiate_actions_cache_list_actions_caches_inner(include_optional);

	cJSON* jsonactions_cache_list_actions_caches_inner_1 = actions_cache_list_actions_caches_inner_convertToJSON(actions_cache_list_actions_caches_inner_1);
	printf("actions_cache_list_actions_caches_inner :\n%s\n", cJSON_Print(jsonactions_cache_list_actions_caches_inner_1));
	actions_cache_list_actions_caches_inner_t* actions_cache_list_actions_caches_inner_2 = actions_cache_list_actions_caches_inner_parseFromJSON(jsonactions_cache_list_actions_caches_inner_1);
	cJSON* jsonactions_cache_list_actions_caches_inner_2 = actions_cache_list_actions_caches_inner_convertToJSON(actions_cache_list_actions_caches_inner_2);
	printf("repeating actions_cache_list_actions_caches_inner:\n%s\n", cJSON_Print(jsonactions_cache_list_actions_caches_inner_2));
}

int main() {
  test_actions_cache_list_actions_caches_inner(1);
  test_actions_cache_list_actions_caches_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_cache_list_actions_caches_inner_MAIN
#endif // actions_cache_list_actions_caches_inner_TEST
