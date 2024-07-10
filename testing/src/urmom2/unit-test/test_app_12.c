#ifndef app_12_TEST
#define app_12_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_12_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_12.h"
app_12_t* instantiate_app_12(int include_optional);

#include "test_user.c"
#include "test_app_permissions.c"


app_12_t* instantiate_app_12(int include_optional) {
  app_12_t* app_12 = NULL;
  if (include_optional) {
    app_12 = app_12_create(
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
    app_12 = app_12_create(
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

  return app_12;
}


#ifdef app_12_MAIN

void test_app_12(int include_optional) {
    app_12_t* app_12_1 = instantiate_app_12(include_optional);

	cJSON* jsonapp_12_1 = app_12_convertToJSON(app_12_1);
	printf("app_12 :\n%s\n", cJSON_Print(jsonapp_12_1));
	app_12_t* app_12_2 = app_12_parseFromJSON(jsonapp_12_1);
	cJSON* jsonapp_12_2 = app_12_convertToJSON(app_12_2);
	printf("repeating app_12:\n%s\n", cJSON_Print(jsonapp_12_2));
}

int main() {
  test_app_12(1);
  test_app_12(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_12_MAIN
#endif // app_12_TEST
