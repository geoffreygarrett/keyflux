#ifndef activity_mark_repo_notifications_as_read_202_response_TEST
#define activity_mark_repo_notifications_as_read_202_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activity_mark_repo_notifications_as_read_202_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activity_mark_repo_notifications_as_read_202_response.h"
activity_mark_repo_notifications_as_read_202_response_t* instantiate_activity_mark_repo_notifications_as_read_202_response(int include_optional);



activity_mark_repo_notifications_as_read_202_response_t* instantiate_activity_mark_repo_notifications_as_read_202_response(int include_optional) {
  activity_mark_repo_notifications_as_read_202_response_t* activity_mark_repo_notifications_as_read_202_response = NULL;
  if (include_optional) {
    activity_mark_repo_notifications_as_read_202_response = activity_mark_repo_notifications_as_read_202_response_create(
      "0",
      "0"
    );
  } else {
    activity_mark_repo_notifications_as_read_202_response = activity_mark_repo_notifications_as_read_202_response_create(
      "0",
      "0"
    );
  }

  return activity_mark_repo_notifications_as_read_202_response;
}


#ifdef activity_mark_repo_notifications_as_read_202_response_MAIN

void test_activity_mark_repo_notifications_as_read_202_response(int include_optional) {
    activity_mark_repo_notifications_as_read_202_response_t* activity_mark_repo_notifications_as_read_202_response_1 = instantiate_activity_mark_repo_notifications_as_read_202_response(include_optional);

	cJSON* jsonactivity_mark_repo_notifications_as_read_202_response_1 = activity_mark_repo_notifications_as_read_202_response_convertToJSON(activity_mark_repo_notifications_as_read_202_response_1);
	printf("activity_mark_repo_notifications_as_read_202_response :\n%s\n", cJSON_Print(jsonactivity_mark_repo_notifications_as_read_202_response_1));
	activity_mark_repo_notifications_as_read_202_response_t* activity_mark_repo_notifications_as_read_202_response_2 = activity_mark_repo_notifications_as_read_202_response_parseFromJSON(jsonactivity_mark_repo_notifications_as_read_202_response_1);
	cJSON* jsonactivity_mark_repo_notifications_as_read_202_response_2 = activity_mark_repo_notifications_as_read_202_response_convertToJSON(activity_mark_repo_notifications_as_read_202_response_2);
	printf("repeating activity_mark_repo_notifications_as_read_202_response:\n%s\n", cJSON_Print(jsonactivity_mark_repo_notifications_as_read_202_response_2));
}

int main() {
  test_activity_mark_repo_notifications_as_read_202_response(1);
  test_activity_mark_repo_notifications_as_read_202_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // activity_mark_repo_notifications_as_read_202_response_MAIN
#endif // activity_mark_repo_notifications_as_read_202_response_TEST
