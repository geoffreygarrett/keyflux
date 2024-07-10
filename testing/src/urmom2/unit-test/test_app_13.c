#ifndef app_13_TEST
#define app_13_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_13_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_13.h"
app_13_t* instantiate_app_13(int include_optional);

#include "test_user.c"
#include "test_app_permissions.c"


app_13_t* instantiate_app_13(int include_optional) {
  app_13_t* app_13 = NULL;
  if (include_optional) {
    app_13 = app_13_create(
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
      instantiate_app_permissions(0),
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    app_13 = app_13_create(
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

  return app_13;
}


#ifdef app_13_MAIN

void test_app_13(int include_optional) {
    app_13_t* app_13_1 = instantiate_app_13(include_optional);

	cJSON* jsonapp_13_1 = app_13_convertToJSON(app_13_1);
	printf("app_13 :\n%s\n", cJSON_Print(jsonapp_13_1));
	app_13_t* app_13_2 = app_13_parseFromJSON(jsonapp_13_1);
	cJSON* jsonapp_13_2 = app_13_convertToJSON(app_13_2);
	printf("repeating app_13:\n%s\n", cJSON_Print(jsonapp_13_2));
}

int main() {
  test_app_13(1);
  test_app_13(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_13_MAIN
#endif // app_13_TEST
