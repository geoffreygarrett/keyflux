#ifndef branch_with_protection_TEST
#define branch_with_protection_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branch_with_protection_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branch_with_protection.h"
branch_with_protection_t* instantiate_branch_with_protection(int include_optional);

#include "test_commit.c"
#include "test_branch_with_protection__links.c"
#include "test_branch_protection.c"


branch_with_protection_t* instantiate_branch_with_protection(int include_optional) {
  branch_with_protection_t* branch_with_protection = NULL;
  if (include_optional) {
    branch_with_protection = branch_with_protection_create(
      "0",
       // false, not to have infinite recursion
      instantiate_commit(0),
       // false, not to have infinite recursion
      instantiate_branch_with_protection__links(0),
      1,
       // false, not to have infinite recursion
      instantiate_branch_protection(0),
      "0",
      ""mas*"",
      1
    );
  } else {
    branch_with_protection = branch_with_protection_create(
      "0",
      NULL,
      NULL,
      1,
      NULL,
      "0",
      ""mas*"",
      1
    );
  }

  return branch_with_protection;
}


#ifdef branch_with_protection_MAIN

void test_branch_with_protection(int include_optional) {
    branch_with_protection_t* branch_with_protection_1 = instantiate_branch_with_protection(include_optional);

	cJSON* jsonbranch_with_protection_1 = branch_with_protection_convertToJSON(branch_with_protection_1);
	printf("branch_with_protection :\n%s\n", cJSON_Print(jsonbranch_with_protection_1));
	branch_with_protection_t* branch_with_protection_2 = branch_with_protection_parseFromJSON(jsonbranch_with_protection_1);
	cJSON* jsonbranch_with_protection_2 = branch_with_protection_convertToJSON(branch_with_protection_2);
	printf("repeating branch_with_protection:\n%s\n", cJSON_Print(jsonbranch_with_protection_2));
}

int main() {
  test_branch_with_protection(1);
  test_branch_with_protection(0);

  printf("Hello world \n");
  return 0;
}

#endif // branch_with_protection_MAIN
#endif // branch_with_protection_TEST
