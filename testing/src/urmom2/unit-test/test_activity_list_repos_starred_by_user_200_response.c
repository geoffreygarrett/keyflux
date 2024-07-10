#ifndef activity_list_repos_starred_by_user_200_response_TEST
#define activity_list_repos_starred_by_user_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activity_list_repos_starred_by_user_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activity_list_repos_starred_by_user_200_response.h"
activity_list_repos_starred_by_user_200_response_t* instantiate_activity_list_repos_starred_by_user_200_response(int include_optional);



activity_list_repos_starred_by_user_200_response_t* instantiate_activity_list_repos_starred_by_user_200_response(int include_optional) {
  activity_list_repos_starred_by_user_200_response_t* activity_list_repos_starred_by_user_200_response = NULL;
  if (include_optional) {
    activity_list_repos_starred_by_user_200_response = activity_list_repos_starred_by_user_200_response_create(
    );
  } else {
    activity_list_repos_starred_by_user_200_response = activity_list_repos_starred_by_user_200_response_create(
    );
  }

  return activity_list_repos_starred_by_user_200_response;
}


#ifdef activity_list_repos_starred_by_user_200_response_MAIN

void test_activity_list_repos_starred_by_user_200_response(int include_optional) {
    activity_list_repos_starred_by_user_200_response_t* activity_list_repos_starred_by_user_200_response_1 = instantiate_activity_list_repos_starred_by_user_200_response(include_optional);

	cJSON* jsonactivity_list_repos_starred_by_user_200_response_1 = activity_list_repos_starred_by_user_200_response_convertToJSON(activity_list_repos_starred_by_user_200_response_1);
	printf("activity_list_repos_starred_by_user_200_response :\n%s\n", cJSON_Print(jsonactivity_list_repos_starred_by_user_200_response_1));
	activity_list_repos_starred_by_user_200_response_t* activity_list_repos_starred_by_user_200_response_2 = activity_list_repos_starred_by_user_200_response_parseFromJSON(jsonactivity_list_repos_starred_by_user_200_response_1);
	cJSON* jsonactivity_list_repos_starred_by_user_200_response_2 = activity_list_repos_starred_by_user_200_response_convertToJSON(activity_list_repos_starred_by_user_200_response_2);
	printf("repeating activity_list_repos_starred_by_user_200_response:\n%s\n", cJSON_Print(jsonactivity_list_repos_starred_by_user_200_response_2));
}

int main() {
  test_activity_list_repos_starred_by_user_200_response(1);
  test_activity_list_repos_starred_by_user_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // activity_list_repos_starred_by_user_200_response_MAIN
#endif // activity_list_repos_starred_by_user_200_response_TEST
