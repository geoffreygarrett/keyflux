#ifndef branch_protection_lock_branch_TEST
#define branch_protection_lock_branch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branch_protection_lock_branch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branch_protection_lock_branch.h"
branch_protection_lock_branch_t* instantiate_branch_protection_lock_branch(int include_optional);



branch_protection_lock_branch_t* instantiate_branch_protection_lock_branch(int include_optional) {
  branch_protection_lock_branch_t* branch_protection_lock_branch = NULL;
  if (include_optional) {
    branch_protection_lock_branch = branch_protection_lock_branch_create(
      1
    );
  } else {
    branch_protection_lock_branch = branch_protection_lock_branch_create(
      1
    );
  }

  return branch_protection_lock_branch;
}


#ifdef branch_protection_lock_branch_MAIN

void test_branch_protection_lock_branch(int include_optional) {
    branch_protection_lock_branch_t* branch_protection_lock_branch_1 = instantiate_branch_protection_lock_branch(include_optional);

	cJSON* jsonbranch_protection_lock_branch_1 = branch_protection_lock_branch_convertToJSON(branch_protection_lock_branch_1);
	printf("branch_protection_lock_branch :\n%s\n", cJSON_Print(jsonbranch_protection_lock_branch_1));
	branch_protection_lock_branch_t* branch_protection_lock_branch_2 = branch_protection_lock_branch_parseFromJSON(jsonbranch_protection_lock_branch_1);
	cJSON* jsonbranch_protection_lock_branch_2 = branch_protection_lock_branch_convertToJSON(branch_protection_lock_branch_2);
	printf("repeating branch_protection_lock_branch:\n%s\n", cJSON_Print(jsonbranch_protection_lock_branch_2));
}

int main() {
  test_branch_protection_lock_branch(1);
  test_branch_protection_lock_branch(0);

  printf("Hello world \n");
  return 0;
}

#endif // branch_protection_lock_branch_MAIN
#endif // branch_protection_lock_branch_TEST
