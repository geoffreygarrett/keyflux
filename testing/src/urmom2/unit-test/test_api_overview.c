#ifndef api_overview_TEST
#define api_overview_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define api_overview_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/api_overview.h"
api_overview_t* instantiate_api_overview(int include_optional);

#include "test_api_overview_ssh_key_fingerprints.c"
#include "test_api_overview_domains.c"


api_overview_t* instantiate_api_overview(int include_optional) {
  api_overview_t* api_overview = NULL;
  if (include_optional) {
    api_overview = api_overview_create(
      true,
       // false, not to have infinite recursion
      instantiate_api_overview_ssh_key_fingerprints(0),
      ["ssh-ed25519 ABCDEFGHIJKLMNOPQRSTUVWXYZ"],
      ["192.0.2.1"],
      ["192.0.2.1"],
      ["192.0.2.1"],
      ["192.0.2.1"],
      ["192.0.2.1"],
      ["192.0.2.1"],
      ["192.0.2.1"],
      ["192.0.2.1"],
      ["192.0.2.1"],
      ["192.0.2.1"],
      ["192.0.2.1"],
       // false, not to have infinite recursion
      instantiate_api_overview_domains(0)
    );
  } else {
    api_overview = api_overview_create(
      true,
      NULL,
      ["ssh-ed25519 ABCDEFGHIJKLMNOPQRSTUVWXYZ"],
      ["192.0.2.1"],
      ["192.0.2.1"],
      ["192.0.2.1"],
      ["192.0.2.1"],
      ["192.0.2.1"],
      ["192.0.2.1"],
      ["192.0.2.1"],
      ["192.0.2.1"],
      ["192.0.2.1"],
      ["192.0.2.1"],
      ["192.0.2.1"],
      NULL
    );
  }

  return api_overview;
}


#ifdef api_overview_MAIN

void test_api_overview(int include_optional) {
    api_overview_t* api_overview_1 = instantiate_api_overview(include_optional);

	cJSON* jsonapi_overview_1 = api_overview_convertToJSON(api_overview_1);
	printf("api_overview :\n%s\n", cJSON_Print(jsonapi_overview_1));
	api_overview_t* api_overview_2 = api_overview_parseFromJSON(jsonapi_overview_1);
	cJSON* jsonapi_overview_2 = api_overview_convertToJSON(api_overview_2);
	printf("repeating api_overview:\n%s\n", cJSON_Print(jsonapi_overview_2));
}

int main() {
  test_api_overview(1);
  test_api_overview(0);

  printf("Hello world \n");
  return 0;
}

#endif // api_overview_MAIN
#endif // api_overview_TEST
