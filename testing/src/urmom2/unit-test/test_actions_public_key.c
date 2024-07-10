#ifndef actions_public_key_TEST
#define actions_public_key_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_public_key_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_public_key.h"
actions_public_key_t* instantiate_actions_public_key(int include_optional);



actions_public_key_t* instantiate_actions_public_key(int include_optional) {
  actions_public_key_t* actions_public_key = NULL;
  if (include_optional) {
    actions_public_key = actions_public_key_create(
      "1234567",
      "hBT5WZEj8ZoOv6TYJsfWq7MxTEQopZO5/IT3ZCVQPzs=",
      2,
      "https://api.github.com/user/keys/2",
      "ssh-rsa AAAAB3NzaC1yc2EAAA",
      "2011-01-26T19:01:12Z"
    );
  } else {
    actions_public_key = actions_public_key_create(
      "1234567",
      "hBT5WZEj8ZoOv6TYJsfWq7MxTEQopZO5/IT3ZCVQPzs=",
      2,
      "https://api.github.com/user/keys/2",
      "ssh-rsa AAAAB3NzaC1yc2EAAA",
      "2011-01-26T19:01:12Z"
    );
  }

  return actions_public_key;
}


#ifdef actions_public_key_MAIN

void test_actions_public_key(int include_optional) {
    actions_public_key_t* actions_public_key_1 = instantiate_actions_public_key(include_optional);

	cJSON* jsonactions_public_key_1 = actions_public_key_convertToJSON(actions_public_key_1);
	printf("actions_public_key :\n%s\n", cJSON_Print(jsonactions_public_key_1));
	actions_public_key_t* actions_public_key_2 = actions_public_key_parseFromJSON(jsonactions_public_key_1);
	cJSON* jsonactions_public_key_2 = actions_public_key_convertToJSON(actions_public_key_2);
	printf("repeating actions_public_key:\n%s\n", cJSON_Print(jsonactions_public_key_2));
}

int main() {
  test_actions_public_key(1);
  test_actions_public_key(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_public_key_MAIN
#endif // actions_public_key_TEST
