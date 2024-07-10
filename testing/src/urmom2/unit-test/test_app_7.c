#ifndef app_7_TEST
#define app_7_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_7_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_7.h"
app_7_t* instantiate_app_7(int include_optional);

#include "test_user.c"
#include "test_app_1_permissions.c"


app_7_t* instantiate_app_7(int include_optional) {
  app_7_t* app_7 = NULL;
  if (include_optional) {
    app_7 = app_7_create(
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
    app_7 = app_7_create(
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

  return app_7;
}


#ifdef app_7_MAIN

void test_app_7(int include_optional) {
    app_7_t* app_7_1 = instantiate_app_7(include_optional);

	cJSON* jsonapp_7_1 = app_7_convertToJSON(app_7_1);
	printf("app_7 :\n%s\n", cJSON_Print(jsonapp_7_1));
	app_7_t* app_7_2 = app_7_parseFromJSON(jsonapp_7_1);
	cJSON* jsonapp_7_2 = app_7_convertToJSON(app_7_2);
	printf("repeating app_7:\n%s\n", cJSON_Print(jsonapp_7_2));
}

int main() {
  test_app_7(1);
  test_app_7(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_7_MAIN
#endif // app_7_TEST
