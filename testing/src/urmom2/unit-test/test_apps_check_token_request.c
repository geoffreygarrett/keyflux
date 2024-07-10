#ifndef apps_check_token_request_TEST
#define apps_check_token_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apps_check_token_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apps_check_token_request.h"
apps_check_token_request_t* instantiate_apps_check_token_request(int include_optional);



apps_check_token_request_t* instantiate_apps_check_token_request(int include_optional) {
  apps_check_token_request_t* apps_check_token_request = NULL;
  if (include_optional) {
    apps_check_token_request = apps_check_token_request_create(
      "0"
    );
  } else {
    apps_check_token_request = apps_check_token_request_create(
      "0"
    );
  }

  return apps_check_token_request;
}


#ifdef apps_check_token_request_MAIN

void test_apps_check_token_request(int include_optional) {
    apps_check_token_request_t* apps_check_token_request_1 = instantiate_apps_check_token_request(include_optional);

	cJSON* jsonapps_check_token_request_1 = apps_check_token_request_convertToJSON(apps_check_token_request_1);
	printf("apps_check_token_request :\n%s\n", cJSON_Print(jsonapps_check_token_request_1));
	apps_check_token_request_t* apps_check_token_request_2 = apps_check_token_request_parseFromJSON(jsonapps_check_token_request_1);
	cJSON* jsonapps_check_token_request_2 = apps_check_token_request_convertToJSON(apps_check_token_request_2);
	printf("repeating apps_check_token_request:\n%s\n", cJSON_Print(jsonapps_check_token_request_2));
}

int main() {
  test_apps_check_token_request(1);
  test_apps_check_token_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // apps_check_token_request_MAIN
#endif // apps_check_token_request_TEST
