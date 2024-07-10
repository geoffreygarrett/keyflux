#ifndef app_10_TEST
#define app_10_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_10_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_10.h"
app_10_t* instantiate_app_10(int include_optional);

#include "test_user.c"
#include "test_app_1_permissions.c"


app_10_t* instantiate_app_10(int include_optional) {
  app_10_t* app_10 = NULL;
  if (include_optional) {
    app_10 = app_10_create(
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList(),
      "0",
      "0",
      56,
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_user(0),
       // false, not to have infinite recursion
      instantiate_app_1_permissions(0),
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    app_10 = app_10_create(
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList(),
      "0",
      "0",
      56,
      "0",
      "0",
      NULL,
      NULL,
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return app_10;
}


#ifdef app_10_MAIN

void test_app_10(int include_optional) {
    app_10_t* app_10_1 = instantiate_app_10(include_optional);

	cJSON* jsonapp_10_1 = app_10_convertToJSON(app_10_1);
	printf("app_10 :\n%s\n", cJSON_Print(jsonapp_10_1));
	app_10_t* app_10_2 = app_10_parseFromJSON(jsonapp_10_1);
	cJSON* jsonapp_10_2 = app_10_convertToJSON(app_10_2);
	printf("repeating app_10:\n%s\n", cJSON_Print(jsonapp_10_2));
}

int main() {
  test_app_10(1);
  test_app_10(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_10_MAIN
#endif // app_10_TEST
