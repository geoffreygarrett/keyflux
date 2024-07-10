#ifndef alert_instance_TEST
#define alert_instance_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define alert_instance_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/alert_instance.h"
alert_instance_t* instantiate_alert_instance(int include_optional);

#include "test_alert_instance_location.c"
#include "test_code_scanning_alert_instance_message.c"


alert_instance_t* instantiate_alert_instance(int include_optional) {
  alert_instance_t* alert_instance = NULL;
  if (include_optional) {
    alert_instance = alert_instance_create(
      "0",
      "0",
      list_createList(),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_alert_instance_location(0),
       // false, not to have infinite recursion
      instantiate_code_scanning_alert_instance_message(0),
      "0",
      github_v3_rest_api_alert_instance_STATE_open
    );
  } else {
    alert_instance = alert_instance_create(
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      NULL,
      NULL,
      "0",
      github_v3_rest_api_alert_instance_STATE_open
    );
  }

  return alert_instance;
}


#ifdef alert_instance_MAIN

void test_alert_instance(int include_optional) {
    alert_instance_t* alert_instance_1 = instantiate_alert_instance(include_optional);

	cJSON* jsonalert_instance_1 = alert_instance_convertToJSON(alert_instance_1);
	printf("alert_instance :\n%s\n", cJSON_Print(jsonalert_instance_1));
	alert_instance_t* alert_instance_2 = alert_instance_parseFromJSON(jsonalert_instance_1);
	cJSON* jsonalert_instance_2 = alert_instance_convertToJSON(alert_instance_2);
	printf("repeating alert_instance:\n%s\n", cJSON_Print(jsonalert_instance_2));
}

int main() {
  test_alert_instance(1);
  test_alert_instance(0);

  printf("Hello world \n");
  return 0;
}

#endif // alert_instance_MAIN
#endif // alert_instance_TEST
