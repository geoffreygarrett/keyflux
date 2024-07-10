#ifndef alert_instance_location_TEST
#define alert_instance_location_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define alert_instance_location_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/alert_instance_location.h"
alert_instance_location_t* instantiate_alert_instance_location(int include_optional);



alert_instance_location_t* instantiate_alert_instance_location(int include_optional) {
  alert_instance_location_t* alert_instance_location = NULL;
  if (include_optional) {
    alert_instance_location = alert_instance_location_create(
      56,
      56,
      "0",
      56,
      56
    );
  } else {
    alert_instance_location = alert_instance_location_create(
      56,
      56,
      "0",
      56,
      56
    );
  }

  return alert_instance_location;
}


#ifdef alert_instance_location_MAIN

void test_alert_instance_location(int include_optional) {
    alert_instance_location_t* alert_instance_location_1 = instantiate_alert_instance_location(include_optional);

	cJSON* jsonalert_instance_location_1 = alert_instance_location_convertToJSON(alert_instance_location_1);
	printf("alert_instance_location :\n%s\n", cJSON_Print(jsonalert_instance_location_1));
	alert_instance_location_t* alert_instance_location_2 = alert_instance_location_parseFromJSON(jsonalert_instance_location_1);
	cJSON* jsonalert_instance_location_2 = alert_instance_location_convertToJSON(alert_instance_location_2);
	printf("repeating alert_instance_location:\n%s\n", cJSON_Print(jsonalert_instance_location_2));
}

int main() {
  test_alert_instance_location(1);
  test_alert_instance_location(0);

  printf("Hello world \n");
  return 0;
}

#endif // alert_instance_location_MAIN
#endif // alert_instance_location_TEST
