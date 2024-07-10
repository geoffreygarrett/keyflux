#ifndef branch_protection_TEST
#define branch_protection_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branch_protection_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branch_protection.h"
branch_protection_t* instantiate_branch_protection(int include_optional);

#include "test_protected_branch_required_status_check.c"
#include "test_protected_branch_admin_enforced.c"
#include "test_protected_branch_pull_request_review.c"
#include "test_branch_restriction_policy.c"
#include "test_branch_protection_required_linear_history.c"
#include "test_branch_protection_required_linear_history.c"
#include "test_branch_protection_required_linear_history.c"
#include "test_branch_protection_required_linear_history.c"
#include "test_branch_protection_required_linear_history.c"
#include "test_branch_protection_required_signatures.c"
#include "test_branch_protection_lock_branch.c"
#include "test_branch_protection_allow_fork_syncing.c"


branch_protection_t* instantiate_branch_protection(int include_optional) {
  branch_protection_t* branch_protection = NULL;
  if (include_optional) {
    branch_protection = branch_protection_create(
      "0",
      1,
       // false, not to have infinite recursion
      instantiate_protected_branch_required_status_check(0),
       // false, not to have infinite recursion
      instantiate_protected_branch_admin_enforced(0),
       // false, not to have infinite recursion
      instantiate_protected_branch_pull_request_review(0),
       // false, not to have infinite recursion
      instantiate_branch_restriction_policy(0),
       // false, not to have infinite recursion
      instantiate_branch_protection_required_linear_history(0),
       // false, not to have infinite recursion
      instantiate_branch_protection_required_linear_history(0),
       // false, not to have infinite recursion
      instantiate_branch_protection_required_linear_history(0),
       // false, not to have infinite recursion
      instantiate_branch_protection_required_linear_history(0),
       // false, not to have infinite recursion
      instantiate_branch_protection_required_linear_history(0),
      ""branch/with/protection"",
      ""https://api.github.com/repos/owner-79e94e2d36b3fd06a32bb213/AAA_Public_Repo/branches/branch/with/protection/protection"",
       // false, not to have infinite recursion
      instantiate_branch_protection_required_signatures(0),
       // false, not to have infinite recursion
      instantiate_branch_protection_lock_branch(0),
       // false, not to have infinite recursion
      instantiate_branch_protection_allow_fork_syncing(0)
    );
  } else {
    branch_protection = branch_protection_create(
      "0",
      1,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      ""branch/with/protection"",
      ""https://api.github.com/repos/owner-79e94e2d36b3fd06a32bb213/AAA_Public_Repo/branches/branch/with/protection/protection"",
      NULL,
      NULL,
      NULL
    );
  }

  return branch_protection;
}


#ifdef branch_protection_MAIN

void test_branch_protection(int include_optional) {
    branch_protection_t* branch_protection_1 = instantiate_branch_protection(include_optional);

	cJSON* jsonbranch_protection_1 = branch_protection_convertToJSON(branch_protection_1);
	printf("branch_protection :\n%s\n", cJSON_Print(jsonbranch_protection_1));
	branch_protection_t* branch_protection_2 = branch_protection_parseFromJSON(jsonbranch_protection_1);
	cJSON* jsonbranch_protection_2 = branch_protection_convertToJSON(branch_protection_2);
	printf("repeating branch_protection:\n%s\n", cJSON_Print(jsonbranch_protection_2));
}

int main() {
  test_branch_protection(1);
  test_branch_protection(0);

  printf("Hello world \n");
  return 0;
}

#endif // branch_protection_MAIN
#endif // branch_protection_TEST
