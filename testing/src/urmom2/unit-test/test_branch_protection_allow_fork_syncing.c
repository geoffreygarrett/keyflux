#ifndef branch_protection_allow_fork_syncing_TEST
#define branch_protection_allow_fork_syncing_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branch_protection_allow_fork_syncing_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branch_protection_allow_fork_syncing.h"
branch_protection_allow_fork_syncing_t* instantiate_branch_protection_allow_fork_syncing(int include_optional);



branch_protection_allow_fork_syncing_t* instantiate_branch_protection_allow_fork_syncing(int include_optional) {
  branch_protection_allow_fork_syncing_t* branch_protection_allow_fork_syncing = NULL;
  if (include_optional) {
    branch_protection_allow_fork_syncing = branch_protection_allow_fork_syncing_create(
      1
    );
  } else {
    branch_protection_allow_fork_syncing = branch_protection_allow_fork_syncing_create(
      1
    );
  }

  return branch_protection_allow_fork_syncing;
}


#ifdef branch_protection_allow_fork_syncing_MAIN

void test_branch_protection_allow_fork_syncing(int include_optional) {
    branch_protection_allow_fork_syncing_t* branch_protection_allow_fork_syncing_1 = instantiate_branch_protection_allow_fork_syncing(include_optional);

	cJSON* jsonbranch_protection_allow_fork_syncing_1 = branch_protection_allow_fork_syncing_convertToJSON(branch_protection_allow_fork_syncing_1);
	printf("branch_protection_allow_fork_syncing :\n%s\n", cJSON_Print(jsonbranch_protection_allow_fork_syncing_1));
	branch_protection_allow_fork_syncing_t* branch_protection_allow_fork_syncing_2 = branch_protection_allow_fork_syncing_parseFromJSON(jsonbranch_protection_allow_fork_syncing_1);
	cJSON* jsonbranch_protection_allow_fork_syncing_2 = branch_protection_allow_fork_syncing_convertToJSON(branch_protection_allow_fork_syncing_2);
	printf("repeating branch_protection_allow_fork_syncing:\n%s\n", cJSON_Print(jsonbranch_protection_allow_fork_syncing_2));
}

int main() {
  test_branch_protection_allow_fork_syncing(1);
  test_branch_protection_allow_fork_syncing(0);

  printf("Hello world \n");
  return 0;
}

#endif // branch_protection_allow_fork_syncing_MAIN
#endif // branch_protection_allow_fork_syncing_TEST
