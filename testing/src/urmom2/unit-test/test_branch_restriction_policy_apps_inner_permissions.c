#ifndef branch_restriction_policy_apps_inner_permissions_TEST
#define branch_restriction_policy_apps_inner_permissions_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branch_restriction_policy_apps_inner_permissions_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branch_restriction_policy_apps_inner_permissions.h"
branch_restriction_policy_apps_inner_permissions_t* instantiate_branch_restriction_policy_apps_inner_permissions(int include_optional);



branch_restriction_policy_apps_inner_permissions_t* instantiate_branch_restriction_policy_apps_inner_permissions(int include_optional) {
  branch_restriction_policy_apps_inner_permissions_t* branch_restriction_policy_apps_inner_permissions = NULL;
  if (include_optional) {
    branch_restriction_policy_apps_inner_permissions = branch_restriction_policy_apps_inner_permissions_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    branch_restriction_policy_apps_inner_permissions = branch_restriction_policy_apps_inner_permissions_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return branch_restriction_policy_apps_inner_permissions;
}


#ifdef branch_restriction_policy_apps_inner_permissions_MAIN

void test_branch_restriction_policy_apps_inner_permissions(int include_optional) {
    branch_restriction_policy_apps_inner_permissions_t* branch_restriction_policy_apps_inner_permissions_1 = instantiate_branch_restriction_policy_apps_inner_permissions(include_optional);

	cJSON* jsonbranch_restriction_policy_apps_inner_permissions_1 = branch_restriction_policy_apps_inner_permissions_convertToJSON(branch_restriction_policy_apps_inner_permissions_1);
	printf("branch_restriction_policy_apps_inner_permissions :\n%s\n", cJSON_Print(jsonbranch_restriction_policy_apps_inner_permissions_1));
	branch_restriction_policy_apps_inner_permissions_t* branch_restriction_policy_apps_inner_permissions_2 = branch_restriction_policy_apps_inner_permissions_parseFromJSON(jsonbranch_restriction_policy_apps_inner_permissions_1);
	cJSON* jsonbranch_restriction_policy_apps_inner_permissions_2 = branch_restriction_policy_apps_inner_permissions_convertToJSON(branch_restriction_policy_apps_inner_permissions_2);
	printf("repeating branch_restriction_policy_apps_inner_permissions:\n%s\n", cJSON_Print(jsonbranch_restriction_policy_apps_inner_permissions_2));
}

int main() {
  test_branch_restriction_policy_apps_inner_permissions(1);
  test_branch_restriction_policy_apps_inner_permissions(0);

  printf("Hello world \n");
  return 0;
}

#endif // branch_restriction_policy_apps_inner_permissions_MAIN
#endif // branch_restriction_policy_apps_inner_permissions_TEST
