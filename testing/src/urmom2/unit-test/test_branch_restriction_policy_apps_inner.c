#ifndef branch_restriction_policy_apps_inner_TEST
#define branch_restriction_policy_apps_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branch_restriction_policy_apps_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branch_restriction_policy_apps_inner.h"
branch_restriction_policy_apps_inner_t* instantiate_branch_restriction_policy_apps_inner(int include_optional);

#include "test_branch_restriction_policy_apps_inner_owner.c"
#include "test_branch_restriction_policy_apps_inner_permissions.c"


branch_restriction_policy_apps_inner_t* instantiate_branch_restriction_policy_apps_inner(int include_optional) {
  branch_restriction_policy_apps_inner_t* branch_restriction_policy_apps_inner = NULL;
  if (include_optional) {
    branch_restriction_policy_apps_inner = branch_restriction_policy_apps_inner_create(
      56,
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_branch_restriction_policy_apps_inner_owner(0),
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_branch_restriction_policy_apps_inner_permissions(0),
      list_createList()
    );
  } else {
    branch_restriction_policy_apps_inner = branch_restriction_policy_apps_inner_create(
      56,
      "0",
      "0",
      NULL,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      NULL,
      list_createList()
    );
  }

  return branch_restriction_policy_apps_inner;
}


#ifdef branch_restriction_policy_apps_inner_MAIN

void test_branch_restriction_policy_apps_inner(int include_optional) {
    branch_restriction_policy_apps_inner_t* branch_restriction_policy_apps_inner_1 = instantiate_branch_restriction_policy_apps_inner(include_optional);

	cJSON* jsonbranch_restriction_policy_apps_inner_1 = branch_restriction_policy_apps_inner_convertToJSON(branch_restriction_policy_apps_inner_1);
	printf("branch_restriction_policy_apps_inner :\n%s\n", cJSON_Print(jsonbranch_restriction_policy_apps_inner_1));
	branch_restriction_policy_apps_inner_t* branch_restriction_policy_apps_inner_2 = branch_restriction_policy_apps_inner_parseFromJSON(jsonbranch_restriction_policy_apps_inner_1);
	cJSON* jsonbranch_restriction_policy_apps_inner_2 = branch_restriction_policy_apps_inner_convertToJSON(branch_restriction_policy_apps_inner_2);
	printf("repeating branch_restriction_policy_apps_inner:\n%s\n", cJSON_Print(jsonbranch_restriction_policy_apps_inner_2));
}

int main() {
  test_branch_restriction_policy_apps_inner(1);
  test_branch_restriction_policy_apps_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // branch_restriction_policy_apps_inner_MAIN
#endif // branch_restriction_policy_apps_inner_TEST
