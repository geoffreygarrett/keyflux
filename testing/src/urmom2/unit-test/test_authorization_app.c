#ifndef authorization_app_TEST
#define authorization_app_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authorization_app_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authorization_app.h"
authorization_app_t* instantiate_authorization_app(int include_optional);



authorization_app_t* instantiate_authorization_app(int include_optional) {
  authorization_app_t* authorization_app = NULL;
  if (include_optional) {
    authorization_app = authorization_app_create(
      "0",
      "0",
      "0"
    );
  } else {
    authorization_app = authorization_app_create(
      "0",
      "0",
      "0"
    );
  }

  return authorization_app;
}


#ifdef authorization_app_MAIN

void test_authorization_app(int include_optional) {
    authorization_app_t* authorization_app_1 = instantiate_authorization_app(include_optional);

	cJSON* jsonauthorization_app_1 = authorization_app_convertToJSON(authorization_app_1);
	printf("authorization_app :\n%s\n", cJSON_Print(jsonauthorization_app_1));
	authorization_app_t* authorization_app_2 = authorization_app_parseFromJSON(jsonauthorization_app_1);
	cJSON* jsonauthorization_app_2 = authorization_app_convertToJSON(authorization_app_2);
	printf("repeating authorization_app:\n%s\n", cJSON_Print(jsonauthorization_app_2));
}

int main() {
  test_authorization_app(1);
  test_authorization_app(0);

  printf("Hello world \n");
  return 0;
}

#endif // authorization_app_MAIN
#endif // authorization_app_TEST
