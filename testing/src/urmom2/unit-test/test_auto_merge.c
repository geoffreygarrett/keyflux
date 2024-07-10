#ifndef auto_merge_TEST
#define auto_merge_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define auto_merge_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/auto_merge.h"
auto_merge_t* instantiate_auto_merge(int include_optional);

#include "test_simple_user.c"


auto_merge_t* instantiate_auto_merge(int include_optional) {
  auto_merge_t* auto_merge = NULL;
  if (include_optional) {
    auto_merge = auto_merge_create(
       // false, not to have infinite recursion
      instantiate_simple_user(0),
      github_v3_rest_api_auto_merge_MERGEMETHOD_merge,
      "0",
      "0"
    );
  } else {
    auto_merge = auto_merge_create(
      NULL,
      github_v3_rest_api_auto_merge_MERGEMETHOD_merge,
      "0",
      "0"
    );
  }

  return auto_merge;
}


#ifdef auto_merge_MAIN

void test_auto_merge(int include_optional) {
    auto_merge_t* auto_merge_1 = instantiate_auto_merge(include_optional);

	cJSON* jsonauto_merge_1 = auto_merge_convertToJSON(auto_merge_1);
	printf("auto_merge :\n%s\n", cJSON_Print(jsonauto_merge_1));
	auto_merge_t* auto_merge_2 = auto_merge_parseFromJSON(jsonauto_merge_1);
	cJSON* jsonauto_merge_2 = auto_merge_convertToJSON(auto_merge_2);
	printf("repeating auto_merge:\n%s\n", cJSON_Print(jsonauto_merge_2));
}

int main() {
  test_auto_merge(1);
  test_auto_merge(0);

  printf("Hello world \n");
  return 0;
}

#endif // auto_merge_MAIN
#endif // auto_merge_TEST
