#ifndef app_1_TEST
#define app_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_1.h"
app_1_t* instantiate_app_1(int include_optional);

#include "test_user.c"
#include "test_app_1_permissions.c"


app_1_t* instantiate_app_1(int include_optional) {
  app_1_t* app_1 = NULL;
  if (include_optional) {
    app_1 = app_1_create(
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
    app_1 = app_1_create(
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

  return app_1;
}


#ifdef app_1_MAIN

void test_app_1(int include_optional) {
    app_1_t* app_1_1 = instantiate_app_1(include_optional);

	cJSON* jsonapp_1_1 = app_1_convertToJSON(app_1_1);
	printf("app_1 :\n%s\n", cJSON_Print(jsonapp_1_1));
	app_1_t* app_1_2 = app_1_parseFromJSON(jsonapp_1_1);
	cJSON* jsonapp_1_2 = app_1_convertToJSON(app_1_2);
	printf("repeating app_1:\n%s\n", cJSON_Print(jsonapp_1_2));
}

int main() {
  test_app_1(1);
  test_app_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_1_MAIN
#endif // app_1_TEST