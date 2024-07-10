#ifndef branch_restriction_policy_apps_inner_owner_TEST
#define branch_restriction_policy_apps_inner_owner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branch_restriction_policy_apps_inner_owner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branch_restriction_policy_apps_inner_owner.h"
branch_restriction_policy_apps_inner_owner_t* instantiate_branch_restriction_policy_apps_inner_owner(int include_optional);



branch_restriction_policy_apps_inner_owner_t* instantiate_branch_restriction_policy_apps_inner_owner(int include_optional) {
  branch_restriction_policy_apps_inner_owner_t* branch_restriction_policy_apps_inner_owner = NULL;
  if (include_optional) {
    branch_restriction_policy_apps_inner_owner = branch_restriction_policy_apps_inner_owner_create(
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
      """",
      ""https://github.com/testorg-ea8ec76d71c3af4b"",
      ""https://api.github.com/users/testorg-ea8ec76d71c3af4b/followers"",
      ""https://api.github.com/users/testorg-ea8ec76d71c3af4b/following{/other_user}"",
      ""https://api.github.com/users/testorg-ea8ec76d71c3af4b/gists{/gist_id}"",
      ""https://api.github.com/users/testorg-ea8ec76d71c3af4b/starred{/owner}{/repo}"",
      ""https://api.github.com/users/testorg-ea8ec76d71c3af4b/subscriptions"",
      ""https://api.github.com/users/testorg-ea8ec76d71c3af4b/orgs"",
      ""https://api.github.com/users/testorg-ea8ec76d71c3af4b/received_events"",
      ""Organization"",
      false
    );
  } else {
    branch_restriction_policy_apps_inner_owner = branch_restriction_policy_apps_inner_owner_create(
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
      """",
      ""https://github.com/testorg-ea8ec76d71c3af4b"",
      ""https://api.github.com/users/testorg-ea8ec76d71c3af4b/followers"",
      ""https://api.github.com/users/testorg-ea8ec76d71c3af4b/following{/other_user}"",
      ""https://api.github.com/users/testorg-ea8ec76d71c3af4b/gists{/gist_id}"",
      ""https://api.github.com/users/testorg-ea8ec76d71c3af4b/starred{/owner}{/repo}"",
      ""https://api.github.com/users/testorg-ea8ec76d71c3af4b/subscriptions"",
      ""https://api.github.com/users/testorg-ea8ec76d71c3af4b/orgs"",
      ""https://api.github.com/users/testorg-ea8ec76d71c3af4b/received_events"",
      ""Organization"",
      false
    );
  }

  return branch_restriction_policy_apps_inner_owner;
}


#ifdef branch_restriction_policy_apps_inner_owner_MAIN

void test_branch_restriction_policy_apps_inner_owner(int include_optional) {
    branch_restriction_policy_apps_inner_owner_t* branch_restriction_policy_apps_inner_owner_1 = instantiate_branch_restriction_policy_apps_inner_owner(include_optional);

	cJSON* jsonbranch_restriction_policy_apps_inner_owner_1 = branch_restriction_policy_apps_inner_owner_convertToJSON(branch_restriction_policy_apps_inner_owner_1);
	printf("branch_restriction_policy_apps_inner_owner :\n%s\n", cJSON_Print(jsonbranch_restriction_policy_apps_inner_owner_1));
	branch_restriction_policy_apps_inner_owner_t* branch_restriction_policy_apps_inner_owner_2 = branch_restriction_policy_apps_inner_owner_parseFromJSON(jsonbranch_restriction_policy_apps_inner_owner_1);
	cJSON* jsonbranch_restriction_policy_apps_inner_owner_2 = branch_restriction_policy_apps_inner_owner_convertToJSON(branch_restriction_policy_apps_inner_owner_2);
	printf("repeating branch_restriction_policy_apps_inner_owner:\n%s\n", cJSON_Print(jsonbranch_restriction_policy_apps_inner_owner_2));
}

int main() {
  test_branch_restriction_policy_apps_inner_owner(1);
  test_branch_restriction_policy_apps_inner_owner(0);

  printf("Hello world \n");
  return 0;
}

#endif // branch_restriction_policy_apps_inner_owner_MAIN
#endif // branch_restriction_policy_apps_inner_owner_TEST
