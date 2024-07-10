#ifndef app_4_TEST
#define app_4_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_4_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_4.h"
app_4_t* instantiate_app_4(int include_optional);

#include "test_user.c"
#include "test_app_2_permissions.c"


app_4_t* instantiate_app_4(int include_optional) {
  app_4_t* app_4 = NULL;
  if (include_optional) {
    app_4 = app_4_create(
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
    app_4 = app_4_create(
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

  return app_4;
}


#ifdef app_4_MAIN

void test_app_4(int include_optional) {
    app_4_t* app_4_1 = instantiate_app_4(include_optional);

	cJSON* jsonapp_4_1 = app_4_convertToJSON(app_4_1);
	printf("app_4 :\n%s\n", cJSON_Print(jsonapp_4_1));
	app_4_t* app_4_2 = app_4_parseFromJSON(jsonapp_4_1);
	cJSON* jsonapp_4_2 = app_4_convertToJSON(app_4_2);
	printf("repeating app_4:\n%s\n", cJSON_Print(jsonapp_4_2));
}

int main() {
  test_app_4(1);
  test_app_4(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_4_MAIN
#endif // app_4_TEST
