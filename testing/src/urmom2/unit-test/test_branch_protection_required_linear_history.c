#ifndef branch_protection_required_linear_history_TEST
#define branch_protection_required_linear_history_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branch_protection_required_linear_history_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branch_protection_required_linear_history.h"
branch_protection_required_linear_history_t* instantiate_branch_protection_required_linear_history(int include_optional);



branch_protection_required_linear_history_t* instantiate_branch_protection_required_linear_history(int include_optional) {
  branch_protection_required_linear_history_t* branch_protection_required_linear_history = NULL;
  if (include_optional) {
    branch_protection_required_linear_history = branch_protection_required_linear_history_create(
      1
    );
  } else {
    branch_protection_required_linear_history = branch_protection_required_linear_history_create(
      1
    );
  }

  return branch_protection_required_linear_history;
}


#ifdef branch_protection_required_linear_history_MAIN

void test_branch_protection_required_linear_history(int include_optional) {
    branch_protection_required_linear_history_t* branch_protection_required_linear_history_1 = instantiate_branch_protection_required_linear_history(include_optional);

	cJSON* jsonbranch_protection_required_linear_history_1 = branch_protection_required_linear_history_convertToJSON(branch_protection_required_linear_history_1);
	printf("branch_protection_required_linear_history :\n%s\n", cJSON_Print(jsonbranch_protection_required_linear_history_1));
	branch_protection_required_linear_history_t* branch_protection_required_linear_history_2 = branch_protection_required_linear_history_parseFromJSON(jsonbranch_protection_required_linear_history_1);
	cJSON* jsonbranch_protection_required_linear_history_2 = branch_protection_required_linear_history_convertToJSON(branch_protection_required_linear_history_2);
	printf("repeating branch_protection_required_linear_history:\n%s\n", cJSON_Print(jsonbranch_protection_required_linear_history_2));
}

int main() {
  test_branch_protection_required_linear_history(1);
  test_branch_protection_required_linear_history(0);

  printf("Hello world \n");
  return 0;
}

#endif // branch_protection_required_linear_history_MAIN
#endif // branch_protection_required_linear_history_TEST
