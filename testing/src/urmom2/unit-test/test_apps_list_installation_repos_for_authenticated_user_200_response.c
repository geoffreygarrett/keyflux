#ifndef apps_list_installation_repos_for_authenticated_user_200_response_TEST
#define apps_list_installation_repos_for_authenticated_user_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apps_list_installation_repos_for_authenticated_user_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apps_list_installation_repos_for_authenticated_user_200_response.h"
apps_list_installation_repos_for_authenticated_user_200_response_t* instantiate_apps_list_installation_repos_for_authenticated_user_200_response(int include_optional);



apps_list_installation_repos_for_authenticated_user_200_response_t* instantiate_apps_list_installation_repos_for_authenticated_user_200_response(int include_optional) {
  apps_list_installation_repos_for_authenticated_user_200_response_t* apps_list_installation_repos_for_authenticated_user_200_response = NULL;
  if (include_optional) {
    apps_list_installation_repos_for_authenticated_user_200_response = apps_list_installation_repos_for_authenticated_user_200_response_create(
      56,
      "0",
      list_createList()
    );
  } else {
    apps_list_installation_repos_for_authenticated_user_200_response = apps_list_installation_repos_for_authenticated_user_200_response_create(
      56,
      "0",
      list_createList()
    );
  }

  return apps_list_installation_repos_for_authenticated_user_200_response;
}


#ifdef apps_list_installation_repos_for_authenticated_user_200_response_MAIN

void test_apps_list_installation_repos_for_authenticated_user_200_response(int include_optional) {
    apps_list_installation_repos_for_authenticated_user_200_response_t* apps_list_installation_repos_for_authenticated_user_200_response_1 = instantiate_apps_list_installation_repos_for_authenticated_user_200_response(include_optional);

	cJSON* jsonapps_list_installation_repos_for_authenticated_user_200_response_1 = apps_list_installation_repos_for_authenticated_user_200_response_convertToJSON(apps_list_installation_repos_for_authenticated_user_200_response_1);
	printf("apps_list_installation_repos_for_authenticated_user_200_response :\n%s\n", cJSON_Print(jsonapps_list_installation_repos_for_authenticated_user_200_response_1));
	apps_list_installation_repos_for_authenticated_user_200_response_t* apps_list_installation_repos_for_authenticated_user_200_response_2 = apps_list_installation_repos_for_authenticated_user_200_response_parseFromJSON(jsonapps_list_installation_repos_for_authenticated_user_200_response_1);
	cJSON* jsonapps_list_installation_repos_for_authenticated_user_200_response_2 = apps_list_installation_repos_for_authenticated_user_200_response_convertToJSON(apps_list_installation_repos_for_authenticated_user_200_response_2);
	printf("repeating apps_list_installation_repos_for_authenticated_user_200_response:\n%s\n", cJSON_Print(jsonapps_list_installation_repos_for_authenticated_user_200_response_2));
}

int main() {
  test_apps_list_installation_repos_for_authenticated_user_200_response(1);
  test_apps_list_installation_repos_for_authenticated_user_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // apps_list_installation_repos_for_authenticated_user_200_response_MAIN
#endif // apps_list_installation_repos_for_authenticated_user_200_response_TEST
