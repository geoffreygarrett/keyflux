#ifndef apps_create_installation_access_token_request_TEST
#define apps_create_installation_access_token_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apps_create_installation_access_token_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apps_create_installation_access_token_request.h"
apps_create_installation_access_token_request_t* instantiate_apps_create_installation_access_token_request(int include_optional);

#include "test_app_permissions.c"


apps_create_installation_access_token_request_t* instantiate_apps_create_installation_access_token_request(int include_optional) {
  apps_create_installation_access_token_request_t* apps_create_installation_access_token_request = NULL;
  if (include_optional) {
    apps_create_installation_access_token_request = apps_create_installation_access_token_request_create(
      list_createList(),
      [1],
      {"contents":"read","issues":"read","deployments":"write","single_file":"read"}
    );
  } else {
    apps_create_installation_access_token_request = apps_create_installation_access_token_request_create(
      list_createList(),
      [1],
      {"contents":"read","issues":"read","deployments":"write","single_file":"read"}
    );
  }

  return apps_create_installation_access_token_request;
}


#ifdef apps_create_installation_access_token_request_MAIN

void test_apps_create_installation_access_token_request(int include_optional) {
    apps_create_installation_access_token_request_t* apps_create_installation_access_token_request_1 = instantiate_apps_create_installation_access_token_request(include_optional);

	cJSON* jsonapps_create_installation_access_token_request_1 = apps_create_installation_access_token_request_convertToJSON(apps_create_installation_access_token_request_1);
	printf("apps_create_installation_access_token_request :\n%s\n", cJSON_Print(jsonapps_create_installation_access_token_request_1));
	apps_create_installation_access_token_request_t* apps_create_installation_access_token_request_2 = apps_create_installation_access_token_request_parseFromJSON(jsonapps_create_installation_access_token_request_1);
	cJSON* jsonapps_create_installation_access_token_request_2 = apps_create_installation_access_token_request_convertToJSON(apps_create_installation_access_token_request_2);
	printf("repeating apps_create_installation_access_token_request:\n%s\n", cJSON_Print(jsonapps_create_installation_access_token_request_2));
}

int main() {
  test_apps_create_installation_access_token_request(1);
  test_apps_create_installation_access_token_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // apps_create_installation_access_token_request_MAIN
#endif // apps_create_installation_access_token_request_TEST
