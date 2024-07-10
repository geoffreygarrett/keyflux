#ifndef apps_create_from_manifest_201_response_all_of_TEST
#define apps_create_from_manifest_201_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apps_create_from_manifest_201_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apps_create_from_manifest_201_response_all_of.h"
apps_create_from_manifest_201_response_all_of_t* instantiate_apps_create_from_manifest_201_response_all_of(int include_optional);



apps_create_from_manifest_201_response_all_of_t* instantiate_apps_create_from_manifest_201_response_all_of(int include_optional) {
  apps_create_from_manifest_201_response_all_of_t* apps_create_from_manifest_201_response_all_of = NULL;
  if (include_optional) {
    apps_create_from_manifest_201_response_all_of = apps_create_from_manifest_201_response_all_of_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    apps_create_from_manifest_201_response_all_of = apps_create_from_manifest_201_response_all_of_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return apps_create_from_manifest_201_response_all_of;
}


#ifdef apps_create_from_manifest_201_response_all_of_MAIN

void test_apps_create_from_manifest_201_response_all_of(int include_optional) {
    apps_create_from_manifest_201_response_all_of_t* apps_create_from_manifest_201_response_all_of_1 = instantiate_apps_create_from_manifest_201_response_all_of(include_optional);

	cJSON* jsonapps_create_from_manifest_201_response_all_of_1 = apps_create_from_manifest_201_response_all_of_convertToJSON(apps_create_from_manifest_201_response_all_of_1);
	printf("apps_create_from_manifest_201_response_all_of :\n%s\n", cJSON_Print(jsonapps_create_from_manifest_201_response_all_of_1));
	apps_create_from_manifest_201_response_all_of_t* apps_create_from_manifest_201_response_all_of_2 = apps_create_from_manifest_201_response_all_of_parseFromJSON(jsonapps_create_from_manifest_201_response_all_of_1);
	cJSON* jsonapps_create_from_manifest_201_response_all_of_2 = apps_create_from_manifest_201_response_all_of_convertToJSON(apps_create_from_manifest_201_response_all_of_2);
	printf("repeating apps_create_from_manifest_201_response_all_of:\n%s\n", cJSON_Print(jsonapps_create_from_manifest_201_response_all_of_2));
}

int main() {
  test_apps_create_from_manifest_201_response_all_of(1);
  test_apps_create_from_manifest_201_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // apps_create_from_manifest_201_response_all_of_MAIN
#endif // apps_create_from_manifest_201_response_all_of_TEST
