#ifndef base_gist_TEST
#define base_gist_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define base_gist_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/base_gist.h"
base_gist_t* instantiate_base_gist(int include_optional);

#include "test_nullable_simple_user.c"
#include "test_simple_user.c"


base_gist_t* instantiate_base_gist(int include_optional) {
  base_gist_t* base_gist = NULL;
  if (include_optional) {
    base_gist = base_gist_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      1,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      56,
       // false, not to have infinite recursion
      instantiate_nullable_simple_user(0),
      "0",
       // false, not to have infinite recursion
      instantiate_simple_user(0),
      1,
      list_createList(),
      list_createList()
    );
  } else {
    base_gist = base_gist_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      1,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      56,
      NULL,
      "0",
      NULL,
      1,
      list_createList(),
      list_createList()
    );
  }

  return base_gist;
}


#ifdef base_gist_MAIN

void test_base_gist(int include_optional) {
    base_gist_t* base_gist_1 = instantiate_base_gist(include_optional);

	cJSON* jsonbase_gist_1 = base_gist_convertToJSON(base_gist_1);
	printf("base_gist :\n%s\n", cJSON_Print(jsonbase_gist_1));
	base_gist_t* base_gist_2 = base_gist_parseFromJSON(jsonbase_gist_1);
	cJSON* jsonbase_gist_2 = base_gist_convertToJSON(base_gist_2);
	printf("repeating base_gist:\n%s\n", cJSON_Print(jsonbase_gist_2));
}

int main() {
  test_base_gist(1);
  test_base_gist(0);

  printf("Hello world \n");
  return 0;
}

#endif // base_gist_MAIN
#endif // base_gist_TEST
