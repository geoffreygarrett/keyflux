#ifndef activity_mark_notifications_as_read_request_TEST
#define activity_mark_notifications_as_read_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activity_mark_notifications_as_read_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activity_mark_notifications_as_read_request.h"
activity_mark_notifications_as_read_request_t* instantiate_activity_mark_notifications_as_read_request(int include_optional);



activity_mark_notifications_as_read_request_t* instantiate_activity_mark_notifications_as_read_request(int include_optional) {
  activity_mark_notifications_as_read_request_t* activity_mark_notifications_as_read_request = NULL;
  if (include_optional) {
    activity_mark_notifications_as_read_request = activity_mark_notifications_as_read_request_create(
      "2013-10-20T19:20:30+01:00",
      1
    );
  } else {
    activity_mark_notifications_as_read_request = activity_mark_notifications_as_read_request_create(
      "2013-10-20T19:20:30+01:00",
      1
    );
  }

  return activity_mark_notifications_as_read_request;
}


#ifdef activity_mark_notifications_as_read_request_MAIN

void test_activity_mark_notifications_as_read_request(int include_optional) {
    activity_mark_notifications_as_read_request_t* activity_mark_notifications_as_read_request_1 = instantiate_activity_mark_notifications_as_read_request(include_optional);

	cJSON* jsonactivity_mark_notifications_as_read_request_1 = activity_mark_notifications_as_read_request_convertToJSON(activity_mark_notifications_as_read_request_1);
	printf("activity_mark_notifications_as_read_request :\n%s\n", cJSON_Print(jsonactivity_mark_notifications_as_read_request_1));
	activity_mark_notifications_as_read_request_t* activity_mark_notifications_as_read_request_2 = activity_mark_notifications_as_read_request_parseFromJSON(jsonactivity_mark_notifications_as_read_request_1);
	cJSON* jsonactivity_mark_notifications_as_read_request_2 = activity_mark_notifications_as_read_request_convertToJSON(activity_mark_notifications_as_read_request_2);
	printf("repeating activity_mark_notifications_as_read_request:\n%s\n", cJSON_Print(jsonactivity_mark_notifications_as_read_request_2));
}

int main() {
  test_activity_mark_notifications_as_read_request(1);
  test_activity_mark_notifications_as_read_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // activity_mark_notifications_as_read_request_MAIN
#endif // activity_mark_notifications_as_read_request_TEST
