#ifndef activity_set_repo_subscription_request_TEST
#define activity_set_repo_subscription_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activity_set_repo_subscription_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activity_set_repo_subscription_request.h"
activity_set_repo_subscription_request_t* instantiate_activity_set_repo_subscription_request(int include_optional);



activity_set_repo_subscription_request_t* instantiate_activity_set_repo_subscription_request(int include_optional) {
  activity_set_repo_subscription_request_t* activity_set_repo_subscription_request = NULL;
  if (include_optional) {
    activity_set_repo_subscription_request = activity_set_repo_subscription_request_create(
      1,
      1
    );
  } else {
    activity_set_repo_subscription_request = activity_set_repo_subscription_request_create(
      1,
      1
    );
  }

  return activity_set_repo_subscription_request;
}


#ifdef activity_set_repo_subscription_request_MAIN

void test_activity_set_repo_subscription_request(int include_optional) {
    activity_set_repo_subscription_request_t* activity_set_repo_subscription_request_1 = instantiate_activity_set_repo_subscription_request(include_optional);

	cJSON* jsonactivity_set_repo_subscription_request_1 = activity_set_repo_subscription_request_convertToJSON(activity_set_repo_subscription_request_1);
	printf("activity_set_repo_subscription_request :\n%s\n", cJSON_Print(jsonactivity_set_repo_subscription_request_1));
	activity_set_repo_subscription_request_t* activity_set_repo_subscription_request_2 = activity_set_repo_subscription_request_parseFromJSON(jsonactivity_set_repo_subscription_request_1);
	cJSON* jsonactivity_set_repo_subscription_request_2 = activity_set_repo_subscription_request_convertToJSON(activity_set_repo_subscription_request_2);
	printf("repeating activity_set_repo_subscription_request:\n%s\n", cJSON_Print(jsonactivity_set_repo_subscription_request_2));
}

int main() {
  test_activity_set_repo_subscription_request(1);
  test_activity_set_repo_subscription_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // activity_set_repo_subscription_request_MAIN
#endif // activity_set_repo_subscription_request_TEST
