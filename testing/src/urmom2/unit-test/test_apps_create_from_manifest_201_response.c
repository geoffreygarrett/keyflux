#ifndef apps_create_from_manifest_201_response_TEST
#define apps_create_from_manifest_201_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apps_create_from_manifest_201_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apps_create_from_manifest_201_response.h"
apps_create_from_manifest_201_response_t* instantiate_apps_create_from_manifest_201_response(int include_optional);

#include "test_nullable_simple_user.c"


apps_create_from_manifest_201_response_t* instantiate_apps_create_from_manifest_201_response(int include_optional) {
  apps_create_from_manifest_201_response_t* apps_create_from_manifest_201_response = NULL;
  if (include_optional) {
    apps_create_from_manifest_201_response = apps_create_from_manifest_201_response_create(
      37,
      "probot-owners",
      "MDExOkludGVncmF0aW9uMQ==",
       // false, not to have infinite recursion
      instantiate_nullable_simple_user(0),
      "Probot Owners",
      "The description of the app.",
      "https://example.com",
      "https://github.com/apps/super-ci",
      "2017-07-08T16:18:44-04:00",
      "2017-07-08T16:18:44-04:00",
      {"issues":"read","deployments":"write"},
      ["label","deployment"],
      5,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    apps_create_from_manifest_201_response = apps_create_from_manifest_201_response_create(
      37,
      "probot-owners",
      "MDExOkludGVncmF0aW9uMQ==",
      NULL,
      "Probot Owners",
      "The description of the app.",
      "https://example.com",
      "https://github.com/apps/super-ci",
      "2017-07-08T16:18:44-04:00",
      "2017-07-08T16:18:44-04:00",
      {"issues":"read","deployments":"write"},
      ["label","deployment"],
      5,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return apps_create_from_manifest_201_response;
}


#ifdef apps_create_from_manifest_201_response_MAIN

void test_apps_create_from_manifest_201_response(int include_optional) {
    apps_create_from_manifest_201_response_t* apps_create_from_manifest_201_response_1 = instantiate_apps_create_from_manifest_201_response(include_optional);

	cJSON* jsonapps_create_from_manifest_201_response_1 = apps_create_from_manifest_201_response_convertToJSON(apps_create_from_manifest_201_response_1);
	printf("apps_create_from_manifest_201_response :\n%s\n", cJSON_Print(jsonapps_create_from_manifest_201_response_1));
	apps_create_from_manifest_201_response_t* apps_create_from_manifest_201_response_2 = apps_create_from_manifest_201_response_parseFromJSON(jsonapps_create_from_manifest_201_response_1);
	cJSON* jsonapps_create_from_manifest_201_response_2 = apps_create_from_manifest_201_response_convertToJSON(apps_create_from_manifest_201_response_2);
	printf("repeating apps_create_from_manifest_201_response:\n%s\n", cJSON_Print(jsonapps_create_from_manifest_201_response_2));
}

int main() {
  test_apps_create_from_manifest_201_response(1);
  test_apps_create_from_manifest_201_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // apps_create_from_manifest_201_response_MAIN
#endif // apps_create_from_manifest_201_response_TEST
