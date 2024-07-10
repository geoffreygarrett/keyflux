#ifndef app_5_TEST
#define app_5_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_5_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_5.h"
app_5_t* instantiate_app_5(int include_optional);

#include "test_user.c"
#include "test_app_1_permissions.c"


app_5_t* instantiate_app_5(int include_optional) {
  app_5_t* app_5 = NULL;
  if (include_optional) {
    app_5 = app_5_create(
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
    app_5 = app_5_create(
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

  return app_5;
}


#ifdef app_5_MAIN

void test_app_5(int include_optional) {
    app_5_t* app_5_1 = instantiate_app_5(include_optional);

	cJSON* jsonapp_5_1 = app_5_convertToJSON(app_5_1);
	printf("app_5 :\n%s\n", cJSON_Print(jsonapp_5_1));
	app_5_t* app_5_2 = app_5_parseFromJSON(jsonapp_5_1);
	cJSON* jsonapp_5_2 = app_5_convertToJSON(app_5_2);
	printf("repeating app_5:\n%s\n", cJSON_Print(jsonapp_5_2));
}

int main() {
  test_app_5(1);
  test_app_5(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_5_MAIN
#endif // app_5_TEST
