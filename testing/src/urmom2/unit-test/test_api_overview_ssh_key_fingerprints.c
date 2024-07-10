#ifndef api_overview_ssh_key_fingerprints_TEST
#define api_overview_ssh_key_fingerprints_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define api_overview_ssh_key_fingerprints_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/api_overview_ssh_key_fingerprints.h"
api_overview_ssh_key_fingerprints_t* instantiate_api_overview_ssh_key_fingerprints(int include_optional);



api_overview_ssh_key_fingerprints_t* instantiate_api_overview_ssh_key_fingerprints(int include_optional) {
  api_overview_ssh_key_fingerprints_t* api_overview_ssh_key_fingerprints = NULL;
  if (include_optional) {
    api_overview_ssh_key_fingerprints = api_overview_ssh_key_fingerprints_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    api_overview_ssh_key_fingerprints = api_overview_ssh_key_fingerprints_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return api_overview_ssh_key_fingerprints;
}


#ifdef api_overview_ssh_key_fingerprints_MAIN

void test_api_overview_ssh_key_fingerprints(int include_optional) {
    api_overview_ssh_key_fingerprints_t* api_overview_ssh_key_fingerprints_1 = instantiate_api_overview_ssh_key_fingerprints(include_optional);

	cJSON* jsonapi_overview_ssh_key_fingerprints_1 = api_overview_ssh_key_fingerprints_convertToJSON(api_overview_ssh_key_fingerprints_1);
	printf("api_overview_ssh_key_fingerprints :\n%s\n", cJSON_Print(jsonapi_overview_ssh_key_fingerprints_1));
	api_overview_ssh_key_fingerprints_t* api_overview_ssh_key_fingerprints_2 = api_overview_ssh_key_fingerprints_parseFromJSON(jsonapi_overview_ssh_key_fingerprints_1);
	cJSON* jsonapi_overview_ssh_key_fingerprints_2 = api_overview_ssh_key_fingerprints_convertToJSON(api_overview_ssh_key_fingerprints_2);
	printf("repeating api_overview_ssh_key_fingerprints:\n%s\n", cJSON_Print(jsonapi_overview_ssh_key_fingerprints_2));
}

int main() {
  test_api_overview_ssh_key_fingerprints(1);
  test_api_overview_ssh_key_fingerprints(0);

  printf("Hello world \n");
  return 0;
}

#endif // api_overview_ssh_key_fingerprints_MAIN
#endif // api_overview_ssh_key_fingerprints_TEST
