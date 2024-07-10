#ifndef branch_short_commit_TEST
#define branch_short_commit_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branch_short_commit_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branch_short_commit.h"
branch_short_commit_t* instantiate_branch_short_commit(int include_optional);



branch_short_commit_t* instantiate_branch_short_commit(int include_optional) {
  branch_short_commit_t* branch_short_commit = NULL;
  if (include_optional) {
    branch_short_commit = branch_short_commit_create(
      "0",
      "0"
    );
  } else {
    branch_short_commit = branch_short_commit_create(
      "0",
      "0"
    );
  }

  return branch_short_commit;
}


#ifdef branch_short_commit_MAIN

void test_branch_short_commit(int include_optional) {
    branch_short_commit_t* branch_short_commit_1 = instantiate_branch_short_commit(include_optional);

	cJSON* jsonbranch_short_commit_1 = branch_short_commit_convertToJSON(branch_short_commit_1);
	printf("branch_short_commit :\n%s\n", cJSON_Print(jsonbranch_short_commit_1));
	branch_short_commit_t* branch_short_commit_2 = branch_short_commit_parseFromJSON(jsonbranch_short_commit_1);
	cJSON* jsonbranch_short_commit_2 = branch_short_commit_convertToJSON(branch_short_commit_2);
	printf("repeating branch_short_commit:\n%s\n", cJSON_Print(jsonbranch_short_commit_2));
}

int main() {
  test_branch_short_commit(1);
  test_branch_short_commit(0);

  printf("Hello world \n");
  return 0;
}

#endif // branch_short_commit_MAIN
#endif // branch_short_commit_TEST
