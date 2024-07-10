#ifndef app_14_TEST
#define app_14_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_14_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_14.h"
app_14_t* instantiate_app_14(int include_optional);

#include "test_user.c"
#include "test_app_1_permissions.c"


app_14_t* instantiate_app_14(int include_optional) {
  app_14_t* app_14 = NULL;
  if (include_optional) {
    app_14 = app_14_create(
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
    app_14 = app_14_create(
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

  return app_14;
}


#ifdef app_14_MAIN

void test_app_14(int include_optional) {
    app_14_t* app_14_1 = instantiate_app_14(include_optional);

	cJSON* jsonapp_14_1 = app_14_convertToJSON(app_14_1);
	printf("app_14 :\n%s\n", cJSON_Print(jsonapp_14_1));
	app_14_t* app_14_2 = app_14_parseFromJSON(jsonapp_14_1);
	cJSON* jsonapp_14_2 = app_14_convertToJSON(app_14_2);
	printf("repeating app_14:\n%s\n", cJSON_Print(jsonapp_14_2));
}

int main() {
  test_app_14(1);
  test_app_14(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_14_MAIN
#endif // app_14_TEST
