#ifndef check_run_check_suite_TEST
#define check_run_check_suite_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define check_run_check_suite_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/check_run_check_suite.h"
check_run_check_suite_t* instantiate_check_run_check_suite(int include_optional);



check_run_check_suite_t* instantiate_check_run_check_suite(int include_optional) {
  check_run_check_suite_t* check_run_check_suite = NULL;
  if (include_optional) {
    check_run_check_suite = check_run_check_suite_create(
      56
    );
  } else {
    check_run_check_suite = check_run_check_suite_create(
      56
    );
  }

  return check_run_check_suite;
}


#ifdef check_run_check_suite_MAIN

void test_check_run_check_suite(int include_optional) {
    check_run_check_suite_t* check_run_check_suite_1 = instantiate_check_run_check_suite(include_optional);

	cJSON* jsoncheck_run_check_suite_1 = check_run_check_suite_convertToJSON(check_run_check_suite_1);
	printf("check_run_check_suite :\n%s\n", cJSON_Print(jsoncheck_run_check_suite_1));
	check_run_check_suite_t* check_run_check_suite_2 = check_run_check_suite_parseFromJSON(jsoncheck_run_check_suite_1);
	cJSON* jsoncheck_run_check_suite_2 = check_run_check_suite_convertToJSON(check_run_check_suite_2);
	printf("repeating check_run_check_suite:\n%s\n", cJSON_Print(jsoncheck_run_check_suite_2));
}

int main() {
  test_check_run_check_suite(1);
  test_check_run_check_suite(0);

  printf("Hello world \n");
  return 0;
}

#endif // check_run_check_suite_MAIN
#endif // check_run_check_suite_TEST
