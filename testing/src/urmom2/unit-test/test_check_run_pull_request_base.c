#ifndef check_run_pull_request_base_TEST
#define check_run_pull_request_base_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define check_run_pull_request_base_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/check_run_pull_request_base.h"
check_run_pull_request_base_t* instantiate_check_run_pull_request_base(int include_optional);

#include "test_repo_ref.c"


check_run_pull_request_base_t* instantiate_check_run_pull_request_base(int include_optional) {
  check_run_pull_request_base_t* check_run_pull_request_base = NULL;
  if (include_optional) {
    check_run_pull_request_base = check_run_pull_request_base_create(
      "0",
       // false, not to have infinite recursion
      instantiate_repo_ref(0),
      "0"
    );
  } else {
    check_run_pull_request_base = check_run_pull_request_base_create(
      "0",
      NULL,
      "0"
    );
  }

  return check_run_pull_request_base;
}


#ifdef check_run_pull_request_base_MAIN

void test_check_run_pull_request_base(int include_optional) {
    check_run_pull_request_base_t* check_run_pull_request_base_1 = instantiate_check_run_pull_request_base(include_optional);

	cJSON* jsoncheck_run_pull_request_base_1 = check_run_pull_request_base_convertToJSON(check_run_pull_request_base_1);
	printf("check_run_pull_request_base :\n%s\n", cJSON_Print(jsoncheck_run_pull_request_base_1));
	check_run_pull_request_base_t* check_run_pull_request_base_2 = check_run_pull_request_base_parseFromJSON(jsoncheck_run_pull_request_base_1);
	cJSON* jsoncheck_run_pull_request_base_2 = check_run_pull_request_base_convertToJSON(check_run_pull_request_base_2);
	printf("repeating check_run_pull_request_base:\n%s\n", cJSON_Print(jsoncheck_run_pull_request_base_2));
}

int main() {
  test_check_run_pull_request_base(1);
  test_check_run_pull_request_base(0);

  printf("Hello world \n");
  return 0;
}

#endif // check_run_pull_request_base_MAIN
#endif // check_run_pull_request_base_TEST
