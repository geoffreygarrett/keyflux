#ifndef check_run_pull_request_TEST
#define check_run_pull_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define check_run_pull_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/check_run_pull_request.h"
check_run_pull_request_t* instantiate_check_run_pull_request(int include_optional);

#include "test_check_run_pull_request_base.c"
#include "test_check_run_pull_request_base.c"


check_run_pull_request_t* instantiate_check_run_pull_request(int include_optional) {
  check_run_pull_request_t* check_run_pull_request = NULL;
  if (include_optional) {
    check_run_pull_request = check_run_pull_request_create(
       // false, not to have infinite recursion
      instantiate_check_run_pull_request_base(0),
       // false, not to have infinite recursion
      instantiate_check_run_pull_request_base(0),
      56,
      56,
      "0"
    );
  } else {
    check_run_pull_request = check_run_pull_request_create(
      NULL,
      NULL,
      56,
      56,
      "0"
    );
  }

  return check_run_pull_request;
}


#ifdef check_run_pull_request_MAIN

void test_check_run_pull_request(int include_optional) {
    check_run_pull_request_t* check_run_pull_request_1 = instantiate_check_run_pull_request(include_optional);

	cJSON* jsoncheck_run_pull_request_1 = check_run_pull_request_convertToJSON(check_run_pull_request_1);
	printf("check_run_pull_request :\n%s\n", cJSON_Print(jsoncheck_run_pull_request_1));
	check_run_pull_request_t* check_run_pull_request_2 = check_run_pull_request_parseFromJSON(jsoncheck_run_pull_request_1);
	cJSON* jsoncheck_run_pull_request_2 = check_run_pull_request_convertToJSON(check_run_pull_request_2);
	printf("repeating check_run_pull_request:\n%s\n", cJSON_Print(jsoncheck_run_pull_request_2));
}

int main() {
  test_check_run_pull_request(1);
  test_check_run_pull_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // check_run_pull_request_MAIN
#endif // check_run_pull_request_TEST
