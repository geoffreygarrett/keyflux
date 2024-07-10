#ifndef app_9_TEST
#define app_9_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_9_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_9.h"
app_9_t* instantiate_app_9(int include_optional);

#include "test_user.c"
#include "test_app_permissions.c"


app_9_t* instantiate_app_9(int include_optional) {
  app_9_t* app_9 = NULL;
  if (include_optional) {
    app_9 = app_9_create(
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
    app_9 = app_9_create(
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

  return app_9;
}


#ifdef app_9_MAIN

void test_app_9(int include_optional) {
    app_9_t* app_9_1 = instantiate_app_9(include_optional);

	cJSON* jsonapp_9_1 = app_9_convertToJSON(app_9_1);
	printf("app_9 :\n%s\n", cJSON_Print(jsonapp_9_1));
	app_9_t* app_9_2 = app_9_parseFromJSON(jsonapp_9_1);
	cJSON* jsonapp_9_2 = app_9_convertToJSON(app_9_2);
	printf("repeating app_9:\n%s\n", cJSON_Print(jsonapp_9_2));
}

int main() {
  test_app_9(1);
  test_app_9(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_9_MAIN
#endif // app_9_TEST
