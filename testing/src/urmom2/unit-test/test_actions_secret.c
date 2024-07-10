#ifndef actions_secret_TEST
#define actions_secret_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_secret_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_secret.h"
actions_secret_t* instantiate_actions_secret(int include_optional);



actions_secret_t* instantiate_actions_secret(int include_optional) {
  actions_secret_t* actions_secret = NULL;
  if (include_optional) {
    actions_secret = actions_secret_create(
      "SECRET_TOKEN",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    actions_secret = actions_secret_create(
      "SECRET_TOKEN",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return actions_secret;
}


#ifdef actions_secret_MAIN

void test_actions_secret(int include_optional) {
    actions_secret_t* actions_secret_1 = instantiate_actions_secret(include_optional);

	cJSON* jsonactions_secret_1 = actions_secret_convertToJSON(actions_secret_1);
	printf("actions_secret :\n%s\n", cJSON_Print(jsonactions_secret_1));
	actions_secret_t* actions_secret_2 = actions_secret_parseFromJSON(jsonactions_secret_1);
	cJSON* jsonactions_secret_2 = actions_secret_convertToJSON(actions_secret_2);
	printf("repeating actions_secret:\n%s\n", cJSON_Print(jsonactions_secret_2));
}

int main() {
  test_actions_secret(1);
  test_actions_secret(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_secret_MAIN
#endif // actions_secret_TEST
