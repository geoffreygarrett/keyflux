#ifndef authorization_TEST
#define authorization_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authorization_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authorization.h"
authorization_t* instantiate_authorization(int include_optional);

#include "test_authorization_app.c"
#include "test_nullable_simple_user.c"
#include "test_nullable_scoped_installation.c"


authorization_t* instantiate_authorization(int include_optional) {
  authorization_t* authorization = NULL;
  if (include_optional) {
    authorization = authorization_create(
      56,
      "0",
      list_createList(),
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_authorization_app(0),
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_nullable_simple_user(0),
       // false, not to have infinite recursion
      instantiate_nullable_scoped_installation(0),
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    authorization = authorization_create(
      56,
      "0",
      list_createList(),
      "0",
      "0",
      "0",
      NULL,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL,
      NULL,
      "2013-10-20T19:20:30+01:00"
    );
  }

  return authorization;
}


#ifdef authorization_MAIN

void test_authorization(int include_optional) {
    authorization_t* authorization_1 = instantiate_authorization(include_optional);

	cJSON* jsonauthorization_1 = authorization_convertToJSON(authorization_1);
	printf("authorization :\n%s\n", cJSON_Print(jsonauthorization_1));
	authorization_t* authorization_2 = authorization_parseFromJSON(jsonauthorization_1);
	cJSON* jsonauthorization_2 = authorization_convertToJSON(authorization_2);
	printf("repeating authorization:\n%s\n", cJSON_Print(jsonauthorization_2));
}

int main() {
  test_authorization(1);
  test_authorization(0);

  printf("Hello world \n");
  return 0;
}

#endif // authorization_MAIN
#endif // authorization_TEST
