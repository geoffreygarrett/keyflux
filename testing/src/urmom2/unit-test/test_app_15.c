#ifndef app_15_TEST
#define app_15_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_15_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_15.h"
app_15_t* instantiate_app_15(int include_optional);

#include "test_user.c"
#include "test_app_permissions.c"


app_15_t* instantiate_app_15(int include_optional) {
  app_15_t* app_15 = NULL;
  if (include_optional) {
    app_15 = app_15_create(
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
    app_15 = app_15_create(
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

  return app_15;
}


#ifdef app_15_MAIN

void test_app_15(int include_optional) {
    app_15_t* app_15_1 = instantiate_app_15(include_optional);

	cJSON* jsonapp_15_1 = app_15_convertToJSON(app_15_1);
	printf("app_15 :\n%s\n", cJSON_Print(jsonapp_15_1));
	app_15_t* app_15_2 = app_15_parseFromJSON(jsonapp_15_1);
	cJSON* jsonapp_15_2 = app_15_convertToJSON(app_15_2);
	printf("repeating app_15:\n%s\n", cJSON_Print(jsonapp_15_2));
}

int main() {
  test_app_15(1);
  test_app_15(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_15_MAIN
#endif // app_15_TEST
