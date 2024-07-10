#ifndef apps_delete_authorization_request_TEST
#define apps_delete_authorization_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apps_delete_authorization_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apps_delete_authorization_request.h"
apps_delete_authorization_request_t* instantiate_apps_delete_authorization_request(int include_optional);



apps_delete_authorization_request_t* instantiate_apps_delete_authorization_request(int include_optional) {
  apps_delete_authorization_request_t* apps_delete_authorization_request = NULL;
  if (include_optional) {
    apps_delete_authorization_request = apps_delete_authorization_request_create(
      "0"
    );
  } else {
    apps_delete_authorization_request = apps_delete_authorization_request_create(
      "0"
    );
  }

  return apps_delete_authorization_request;
}


#ifdef apps_delete_authorization_request_MAIN

void test_apps_delete_authorization_request(int include_optional) {
    apps_delete_authorization_request_t* apps_delete_authorization_request_1 = instantiate_apps_delete_authorization_request(include_optional);

	cJSON* jsonapps_delete_authorization_request_1 = apps_delete_authorization_request_convertToJSON(apps_delete_authorization_request_1);
	printf("apps_delete_authorization_request :\n%s\n", cJSON_Print(jsonapps_delete_authorization_request_1));
	apps_delete_authorization_request_t* apps_delete_authorization_request_2 = apps_delete_authorization_request_parseFromJSON(jsonapps_delete_authorization_request_1);
	cJSON* jsonapps_delete_authorization_request_2 = apps_delete_authorization_request_convertToJSON(apps_delete_authorization_request_2);
	printf("repeating apps_delete_authorization_request:\n%s\n", cJSON_Print(jsonapps_delete_authorization_request_2));
}

int main() {
  test_apps_delete_authorization_request(1);
  test_apps_delete_authorization_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // apps_delete_authorization_request_MAIN
#endif // apps_delete_authorization_request_TEST
