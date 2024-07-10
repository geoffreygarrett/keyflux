#ifndef activity_TEST
#define activity_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activity_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activity.h"
activity_t* instantiate_activity(int include_optional);

#include "test_nullable_simple_user.c"


activity_t* instantiate_activity(int include_optional) {
  activity_t* activity = NULL;
  if (include_optional) {
    activity = activity_create(
      1296269,
      "MDEwOlJlcG9zaXRvcnkxMjk2MjY5",
      "6dcb09b5b57875f334f61aebed695e2e4193db5e",
      "827efc6d56897b048c772eb4087f854f46256132",
      "refs/heads/main",
      "2011-01-26T19:06:43Z",
      github_v3_rest_api_activity_ACTIVITYTYPE_"force_push",
       // false, not to have infinite recursion
      instantiate_nullable_simple_user(0)
    );
  } else {
    activity = activity_create(
      1296269,
      "MDEwOlJlcG9zaXRvcnkxMjk2MjY5",
      "6dcb09b5b57875f334f61aebed695e2e4193db5e",
      "827efc6d56897b048c772eb4087f854f46256132",
      "refs/heads/main",
      "2011-01-26T19:06:43Z",
      github_v3_rest_api_activity_ACTIVITYTYPE_"force_push",
      NULL
    );
  }

  return activity;
}


#ifdef activity_MAIN

void test_activity(int include_optional) {
    activity_t* activity_1 = instantiate_activity(include_optional);

	cJSON* jsonactivity_1 = activity_convertToJSON(activity_1);
	printf("activity :\n%s\n", cJSON_Print(jsonactivity_1));
	activity_t* activity_2 = activity_parseFromJSON(jsonactivity_1);
	cJSON* jsonactivity_2 = activity_convertToJSON(activity_2);
	printf("repeating activity:\n%s\n", cJSON_Print(jsonactivity_2));
}

int main() {
  test_activity(1);
  test_activity(0);

  printf("Hello world \n");
  return 0;
}

#endif // activity_MAIN
#endif // activity_TEST
