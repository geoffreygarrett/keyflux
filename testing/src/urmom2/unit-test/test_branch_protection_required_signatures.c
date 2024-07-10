#ifndef branch_protection_required_signatures_TEST
#define branch_protection_required_signatures_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branch_protection_required_signatures_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branch_protection_required_signatures.h"
branch_protection_required_signatures_t* instantiate_branch_protection_required_signatures(int include_optional);



branch_protection_required_signatures_t* instantiate_branch_protection_required_signatures(int include_optional) {
  branch_protection_required_signatures_t* branch_protection_required_signatures = NULL;
  if (include_optional) {
    branch_protection_required_signatures = branch_protection_required_signatures_create(
      "https://api.github.com/repos/octocat/Hello-World/branches/master/protection/required_signatures",
      true
    );
  } else {
    branch_protection_required_signatures = branch_protection_required_signatures_create(
      "https://api.github.com/repos/octocat/Hello-World/branches/master/protection/required_signatures",
      true
    );
  }

  return branch_protection_required_signatures;
}


#ifdef branch_protection_required_signatures_MAIN

void test_branch_protection_required_signatures(int include_optional) {
    branch_protection_required_signatures_t* branch_protection_required_signatures_1 = instantiate_branch_protection_required_signatures(include_optional);

	cJSON* jsonbranch_protection_required_signatures_1 = branch_protection_required_signatures_convertToJSON(branch_protection_required_signatures_1);
	printf("branch_protection_required_signatures :\n%s\n", cJSON_Print(jsonbranch_protection_required_signatures_1));
	branch_protection_required_signatures_t* branch_protection_required_signatures_2 = branch_protection_required_signatures_parseFromJSON(jsonbranch_protection_required_signatures_1);
	cJSON* jsonbranch_protection_required_signatures_2 = branch_protection_required_signatures_convertToJSON(branch_protection_required_signatures_2);
	printf("repeating branch_protection_required_signatures:\n%s\n", cJSON_Print(jsonbranch_protection_required_signatures_2));
}

int main() {
  test_branch_protection_required_signatures(1);
  test_branch_protection_required_signatures(0);

  printf("Hello world \n");
  return 0;
}

#endif // branch_protection_required_signatures_MAIN
#endif // branch_protection_required_signatures_TEST
