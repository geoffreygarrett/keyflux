#ifndef branch_restriction_policy_TEST
#define branch_restriction_policy_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branch_restriction_policy_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branch_restriction_policy.h"
branch_restriction_policy_t* instantiate_branch_restriction_policy(int include_optional);



branch_restriction_policy_t* instantiate_branch_restriction_policy(int include_optional) {
  branch_restriction_policy_t* branch_restriction_policy = NULL;
  if (include_optional) {
    branch_restriction_policy = branch_restriction_policy_create(
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    branch_restriction_policy = branch_restriction_policy_create(
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return branch_restriction_policy;
}


#ifdef branch_restriction_policy_MAIN

void test_branch_restriction_policy(int include_optional) {
    branch_restriction_policy_t* branch_restriction_policy_1 = instantiate_branch_restriction_policy(include_optional);

	cJSON* jsonbranch_restriction_policy_1 = branch_restriction_policy_convertToJSON(branch_restriction_policy_1);
	printf("branch_restriction_policy :\n%s\n", cJSON_Print(jsonbranch_restriction_policy_1));
	branch_restriction_policy_t* branch_restriction_policy_2 = branch_restriction_policy_parseFromJSON(jsonbranch_restriction_policy_1);
	cJSON* jsonbranch_restriction_policy_2 = branch_restriction_policy_convertToJSON(branch_restriction_policy_2);
	printf("repeating branch_restriction_policy:\n%s\n", cJSON_Print(jsonbranch_restriction_policy_2));
}

int main() {
  test_branch_restriction_policy(1);
  test_branch_restriction_policy(0);

  printf("Hello world \n");
  return 0;
}

#endif // branch_restriction_policy_MAIN
#endif // branch_restriction_policy_TEST
