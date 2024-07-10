#ifndef app_2_TEST
#define app_2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_2.h"
app_2_t* instantiate_app_2(int include_optional);

#include "test_user.c"
#include "test_app_2_permissions.c"


app_2_t* instantiate_app_2(int include_optional) {
  app_2_t* app_2 = NULL;
  if (include_optional) {
    app_2 = app_2_create(
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
    app_2 = app_2_create(
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

  return app_2;
}


#ifdef app_2_MAIN

void test_app_2(int include_optional) {
    app_2_t* app_2_1 = instantiate_app_2(include_optional);

	cJSON* jsonapp_2_1 = app_2_convertToJSON(app_2_1);
	printf("app_2 :\n%s\n", cJSON_Print(jsonapp_2_1));
	app_2_t* app_2_2 = app_2_parseFromJSON(jsonapp_2_1);
	cJSON* jsonapp_2_2 = app_2_convertToJSON(app_2_2);
	printf("repeating app_2:\n%s\n", cJSON_Print(jsonapp_2_2));
}

int main() {
  test_app_2(1);
  test_app_2(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_2_MAIN
#endif // app_2_TEST
