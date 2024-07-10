#ifndef app_16_TEST
#define app_16_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_16_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_16.h"
app_16_t* instantiate_app_16(int include_optional);

#include "test_user.c"
#include "test_app_2_permissions.c"


app_16_t* instantiate_app_16(int include_optional) {
  app_16_t* app_16 = NULL;
  if (include_optional) {
    app_16 = app_16_create(
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
    app_16 = app_16_create(
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

  return app_16;
}


#ifdef app_16_MAIN

void test_app_16(int include_optional) {
    app_16_t* app_16_1 = instantiate_app_16(include_optional);

	cJSON* jsonapp_16_1 = app_16_convertToJSON(app_16_1);
	printf("app_16 :\n%s\n", cJSON_Print(jsonapp_16_1));
	app_16_t* app_16_2 = app_16_parseFromJSON(jsonapp_16_1);
	cJSON* jsonapp_16_2 = app_16_convertToJSON(app_16_2);
	printf("repeating app_16:\n%s\n", cJSON_Print(jsonapp_16_2));
}

int main() {
  test_app_16(1);
  test_app_16(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_16_MAIN
#endif // app_16_TEST
