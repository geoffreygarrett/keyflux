#ifndef apps_update_webhook_config_for_app_request_TEST
#define apps_update_webhook_config_for_app_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apps_update_webhook_config_for_app_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apps_update_webhook_config_for_app_request.h"
apps_update_webhook_config_for_app_request_t* instantiate_apps_update_webhook_config_for_app_request(int include_optional);

#include "test_webhook_config_insecure_ssl.c"


apps_update_webhook_config_for_app_request_t* instantiate_apps_update_webhook_config_for_app_request(int include_optional) {
  apps_update_webhook_config_for_app_request_t* apps_update_webhook_config_for_app_request = NULL;
  if (include_optional) {
    apps_update_webhook_config_for_app_request = apps_update_webhook_config_for_app_request_create(
      "https://example.com/webhook",
      ""json"",
      ""********"",
      null
    );
  } else {
    apps_update_webhook_config_for_app_request = apps_update_webhook_config_for_app_request_create(
      "https://example.com/webhook",
      ""json"",
      ""********"",
      null
    );
  }

  return apps_update_webhook_config_for_app_request;
}


#ifdef apps_update_webhook_config_for_app_request_MAIN

void test_apps_update_webhook_config_for_app_request(int include_optional) {
    apps_update_webhook_config_for_app_request_t* apps_update_webhook_config_for_app_request_1 = instantiate_apps_update_webhook_config_for_app_request(include_optional);

	cJSON* jsonapps_update_webhook_config_for_app_request_1 = apps_update_webhook_config_for_app_request_convertToJSON(apps_update_webhook_config_for_app_request_1);
	printf("apps_update_webhook_config_for_app_request :\n%s\n", cJSON_Print(jsonapps_update_webhook_config_for_app_request_1));
	apps_update_webhook_config_for_app_request_t* apps_update_webhook_config_for_app_request_2 = apps_update_webhook_config_for_app_request_parseFromJSON(jsonapps_update_webhook_config_for_app_request_1);
	cJSON* jsonapps_update_webhook_config_for_app_request_2 = apps_update_webhook_config_for_app_request_convertToJSON(apps_update_webhook_config_for_app_request_2);
	printf("repeating apps_update_webhook_config_for_app_request:\n%s\n", cJSON_Print(jsonapps_update_webhook_config_for_app_request_2));
}

int main() {
  test_apps_update_webhook_config_for_app_request(1);
  test_apps_update_webhook_config_for_app_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // apps_update_webhook_config_for_app_request_MAIN
#endif // apps_update_webhook_config_for_app_request_TEST
