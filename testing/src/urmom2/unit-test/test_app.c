#ifndef app_TEST
#define app_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app.h"
app_t* instantiate_app(int include_optional);

#include "test_user.c"
#include "test_app_permissions.c"


app_t* instantiate_app(int include_optional) {
  app_t* app = NULL;
  if (include_optional) {
    app = app_create(
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
    app = app_create(
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

  return app;
}


#ifdef app_MAIN

void test_app(int include_optional) {
    app_t* app_1 = instantiate_app(include_optional);

	cJSON* jsonapp_1 = app_convertToJSON(app_1);
	printf("app :\n%s\n", cJSON_Print(jsonapp_1));
	app_t* app_2 = app_parseFromJSON(jsonapp_1);
	cJSON* jsonapp_2 = app_convertToJSON(app_2);
	printf("repeating app:\n%s\n", cJSON_Print(jsonapp_2));
}

int main() {
  test_app(1);
  test_app(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_MAIN
#endif // app_TEST
