#ifndef app_11_TEST
#define app_11_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_11_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_11.h"
app_11_t* instantiate_app_11(int include_optional);

#include "test_user.c"
#include "test_app_permissions.c"


app_11_t* instantiate_app_11(int include_optional) {
  app_11_t* app_11 = NULL;
  if (include_optional) {
    app_11 = app_11_create(
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
    app_11 = app_11_create(
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

  return app_11;
}


#ifdef app_11_MAIN

void test_app_11(int include_optional) {
    app_11_t* app_11_1 = instantiate_app_11(include_optional);

	cJSON* jsonapp_11_1 = app_11_convertToJSON(app_11_1);
	printf("app_11 :\n%s\n", cJSON_Print(jsonapp_11_1));
	app_11_t* app_11_2 = app_11_parseFromJSON(jsonapp_11_1);
	cJSON* jsonapp_11_2 = app_11_convertToJSON(app_11_2);
	printf("repeating app_11:\n%s\n", cJSON_Print(jsonapp_11_2));
}

int main() {
  test_app_11(1);
  test_app_11(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_11_MAIN
#endif // app_11_TEST
