#ifndef branch_restriction_policy_users_inner_TEST
#define branch_restriction_policy_users_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branch_restriction_policy_users_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branch_restriction_policy_users_inner.h"
branch_restriction_policy_users_inner_t* instantiate_branch_restriction_policy_users_inner(int include_optional);



branch_restriction_policy_users_inner_t* instantiate_branch_restriction_policy_users_inner(int include_optional) {
  branch_restriction_policy_users_inner_t* branch_restriction_policy_users_inner = NULL;
  if (include_optional) {
    branch_restriction_policy_users_inner = branch_restriction_policy_users_inner_create(
      "0",
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    branch_restriction_policy_users_inner = branch_restriction_policy_users_inner_create(
      "0",
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return branch_restriction_policy_users_inner;
}


#ifdef branch_restriction_policy_users_inner_MAIN

void test_branch_restriction_policy_users_inner(int include_optional) {
    branch_restriction_policy_users_inner_t* branch_restriction_policy_users_inner_1 = instantiate_branch_restriction_policy_users_inner(include_optional);

	cJSON* jsonbranch_restriction_policy_users_inner_1 = branch_restriction_policy_users_inner_convertToJSON(branch_restriction_policy_users_inner_1);
	printf("branch_restriction_policy_users_inner :\n%s\n", cJSON_Print(jsonbranch_restriction_policy_users_inner_1));
	branch_restriction_policy_users_inner_t* branch_restriction_policy_users_inner_2 = branch_restriction_policy_users_inner_parseFromJSON(jsonbranch_restriction_policy_users_inner_1);
	cJSON* jsonbranch_restriction_policy_users_inner_2 = branch_restriction_policy_users_inner_convertToJSON(branch_restriction_policy_users_inner_2);
	printf("repeating branch_restriction_policy_users_inner:\n%s\n", cJSON_Print(jsonbranch_restriction_policy_users_inner_2));
}

int main() {
  test_branch_restriction_policy_users_inner(1);
  test_branch_restriction_policy_users_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // branch_restriction_policy_users_inner_MAIN
#endif // branch_restriction_policy_users_inner_TEST
