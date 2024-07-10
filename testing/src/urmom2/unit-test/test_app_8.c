#ifndef app_8_TEST
#define app_8_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_8_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_8.h"
app_8_t* instantiate_app_8(int include_optional);

#include "test_user.c"
#include "test_app_2_permissions.c"


app_8_t* instantiate_app_8(int include_optional) {
  app_8_t* app_8 = NULL;
  if (include_optional) {
    app_8 = app_8_create(
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
      instantiate_app_2_permissions(0),
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    app_8 = app_8_create(
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

  return app_8;
}


#ifdef app_8_MAIN

void test_app_8(int include_optional) {
    app_8_t* app_8_1 = instantiate_app_8(include_optional);

	cJSON* jsonapp_8_1 = app_8_convertToJSON(app_8_1);
	printf("app_8 :\n%s\n", cJSON_Print(jsonapp_8_1));
	app_8_t* app_8_2 = app_8_parseFromJSON(jsonapp_8_1);
	cJSON* jsonapp_8_2 = app_8_convertToJSON(app_8_2);
	printf("repeating app_8:\n%s\n", cJSON_Print(jsonapp_8_2));
}

int main() {
  test_app_8(1);
  test_app_8(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_8_MAIN
#endif // app_8_TEST
