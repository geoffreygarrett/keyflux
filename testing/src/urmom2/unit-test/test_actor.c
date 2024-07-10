#ifndef actor_TEST
#define actor_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actor_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actor.h"
actor_t* instantiate_actor(int include_optional);



actor_t* instantiate_actor(int include_optional) {
  actor_t* actor = NULL;
  if (include_optional) {
    actor = actor_create(
      56,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    actor = actor_create(
      56,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return actor;
}


#ifdef actor_MAIN

void test_actor(int include_optional) {
    actor_t* actor_1 = instantiate_actor(include_optional);

	cJSON* jsonactor_1 = actor_convertToJSON(actor_1);
	printf("actor :\n%s\n", cJSON_Print(jsonactor_1));
	actor_t* actor_2 = actor_parseFromJSON(jsonactor_1);
	cJSON* jsonactor_2 = actor_convertToJSON(actor_2);
	printf("repeating actor:\n%s\n", cJSON_Print(jsonactor_2));
}

int main() {
  test_actor(1);
  test_actor(0);

  printf("Hello world \n");
  return 0;
}

#endif // actor_MAIN
#endif // actor_TEST
