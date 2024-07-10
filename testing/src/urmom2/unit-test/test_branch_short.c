#ifndef branch_short_TEST
#define branch_short_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branch_short_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branch_short.h"
branch_short_t* instantiate_branch_short(int include_optional);

#include "test_branch_short_commit.c"


branch_short_t* instantiate_branch_short(int include_optional) {
  branch_short_t* branch_short = NULL;
  if (include_optional) {
    branch_short = branch_short_create(
      "0",
       // false, not to have infinite recursion
      instantiate_branch_short_commit(0),
      1
    );
  } else {
    branch_short = branch_short_create(
      "0",
      NULL,
      1
    );
  }

  return branch_short;
}


#ifdef branch_short_MAIN

void test_branch_short(int include_optional) {
    branch_short_t* branch_short_1 = instantiate_branch_short(include_optional);

	cJSON* jsonbranch_short_1 = branch_short_convertToJSON(branch_short_1);
	printf("branch_short :\n%s\n", cJSON_Print(jsonbranch_short_1));
	branch_short_t* branch_short_2 = branch_short_parseFromJSON(jsonbranch_short_1);
	cJSON* jsonbranch_short_2 = branch_short_convertToJSON(branch_short_2);
	printf("repeating branch_short:\n%s\n", cJSON_Print(jsonbranch_short_2));
}

int main() {
  test_branch_short(1);
  test_branch_short(0);

  printf("Hello world \n");
  return 0;
}

#endif // branch_short_MAIN
#endif // branch_short_TEST
