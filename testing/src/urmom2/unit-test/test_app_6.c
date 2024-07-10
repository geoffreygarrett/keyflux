#ifndef app_6_TEST
#define app_6_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_6_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_6.h"
app_6_t* instantiate_app_6(int include_optional);

#include "test_user.c"
#include "test_app_1_permissions.c"


app_6_t* instantiate_app_6(int include_optional) {
  app_6_t* app_6 = NULL;
  if (include_optional) {
    app_6 = app_6_create(
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
    app_6 = app_6_create(
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

  return app_6;
}


#ifdef app_6_MAIN

void test_app_6(int include_optional) {
    app_6_t* app_6_1 = instantiate_app_6(include_optional);

	cJSON* jsonapp_6_1 = app_6_convertToJSON(app_6_1);
	printf("app_6 :\n%s\n", cJSON_Print(jsonapp_6_1));
	app_6_t* app_6_2 = app_6_parseFromJSON(jsonapp_6_1);
	cJSON* jsonapp_6_2 = app_6_convertToJSON(app_6_2);
	printf("repeating app_6:\n%s\n", cJSON_Print(jsonapp_6_2));
}

int main() {
  test_app_6(1);
  test_app_6(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_6_MAIN
#endif // app_6_TEST
