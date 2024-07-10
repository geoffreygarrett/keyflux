#ifndef app_3_TEST
#define app_3_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_3_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_3.h"
app_3_t* instantiate_app_3(int include_optional);

#include "test_user.c"
#include "test_app_2_permissions.c"


app_3_t* instantiate_app_3(int include_optional) {
  app_3_t* app_3 = NULL;
  if (include_optional) {
    app_3 = app_3_create(
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
    app_3 = app_3_create(
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

  return app_3;
}


#ifdef app_3_MAIN

void test_app_3(int include_optional) {
    app_3_t* app_3_1 = instantiate_app_3(include_optional);

	cJSON* jsonapp_3_1 = app_3_convertToJSON(app_3_1);
	printf("app_3 :\n%s\n", cJSON_Print(jsonapp_3_1));
	app_3_t* app_3_2 = app_3_parseFromJSON(jsonapp_3_1);
	cJSON* jsonapp_3_2 = app_3_convertToJSON(app_3_2);
	printf("repeating app_3:\n%s\n", cJSON_Print(jsonapp_3_2));
}

int main() {
  test_app_3(1);
  test_app_3(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_3_MAIN
#endif // app_3_TEST
