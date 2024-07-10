#ifndef branch_with_protection__links_TEST
#define branch_with_protection__links_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branch_with_protection__links_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branch_with_protection__links.h"
branch_with_protection__links_t* instantiate_branch_with_protection__links(int include_optional);



branch_with_protection__links_t* instantiate_branch_with_protection__links(int include_optional) {
  branch_with_protection__links_t* branch_with_protection__links = NULL;
  if (include_optional) {
    branch_with_protection__links = branch_with_protection__links_create(
      "0",
      "0"
    );
  } else {
    branch_with_protection__links = branch_with_protection__links_create(
      "0",
      "0"
    );
  }

  return branch_with_protection__links;
}


#ifdef branch_with_protection__links_MAIN

void test_branch_with_protection__links(int include_optional) {
    branch_with_protection__links_t* branch_with_protection__links_1 = instantiate_branch_with_protection__links(include_optional);

	cJSON* jsonbranch_with_protection__links_1 = branch_with_protection__links_convertToJSON(branch_with_protection__links_1);
	printf("branch_with_protection__links :\n%s\n", cJSON_Print(jsonbranch_with_protection__links_1));
	branch_with_protection__links_t* branch_with_protection__links_2 = branch_with_protection__links_parseFromJSON(jsonbranch_with_protection__links_1);
	cJSON* jsonbranch_with_protection__links_2 = branch_with_protection__links_convertToJSON(branch_with_protection__links_2);
	printf("repeating branch_with_protection__links:\n%s\n", cJSON_Print(jsonbranch_with_protection__links_2));
}

int main() {
  test_branch_with_protection__links(1);
  test_branch_with_protection__links(0);

  printf("Hello world \n");
  return 0;
}

#endif // branch_with_protection__links_MAIN
#endif // branch_with_protection__links_TEST
