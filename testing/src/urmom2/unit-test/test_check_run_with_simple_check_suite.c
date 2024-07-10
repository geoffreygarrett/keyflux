#ifndef check_run_with_simple_check_suite_TEST
#define check_run_with_simple_check_suite_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define check_run_with_simple_check_suite_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/check_run_with_simple_check_suite.h"
check_run_with_simple_check_suite_t* instantiate_check_run_with_simple_check_suite(int include_optional);

#include "test_nullable_integration.c"
#include "test_simple_check_suite.c"
#include "test_deployment_simple.c"
#include "test_check_run_with_simple_check_suite_output.c"


check_run_with_simple_check_suite_t* instantiate_check_run_with_simple_check_suite(int include_optional) {
  check_run_with_simple_check_suite_t* check_run_with_simple_check_suite = NULL;
  if (include_optional) {
    check_run_with_simple_check_suite = check_run_with_simple_check_suite_create(
       // false, not to have infinite recursion
      instantiate_nullable_integration(0),
       // false, not to have infinite recursion
      instantiate_simple_check_suite(0),
      "2018-05-04T01:14:52Z",
      github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_"neutral",
       // false, not to have infinite recursion
      instantiate_deployment_simple(0),
      "https://example.com",
      "42",
      "009b8a3a9ccbb128af87f9b1c0f4c62e8a304f6d",
      "https://github.com/github/hello-world/runs/4",
      21,
      "test-coverage",
      "MDg6Q2hlY2tSdW40",
       // false, not to have infinite recursion
      instantiate_check_run_with_simple_check_suite_output(0),
      list_createList(),
      "2018-05-04T01:14:52Z",
      github_v3_rest_api_check_run_with_simple_check_suite_STATUS_"queued",
      "https://api.github.com/repos/github/hello-world/check-runs/4"
    );
  } else {
    check_run_with_simple_check_suite = check_run_with_simple_check_suite_create(
      NULL,
      NULL,
      "2018-05-04T01:14:52Z",
      github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_"neutral",
      NULL,
      "https://example.com",
      "42",
      "009b8a3a9ccbb128af87f9b1c0f4c62e8a304f6d",
      "https://github.com/github/hello-world/runs/4",
      21,
      "test-coverage",
      "MDg6Q2hlY2tSdW40",
      NULL,
      list_createList(),
      "2018-05-04T01:14:52Z",
      github_v3_rest_api_check_run_with_simple_check_suite_STATUS_"queued",
      "https://api.github.com/repos/github/hello-world/check-runs/4"
    );
  }

  return check_run_with_simple_check_suite;
}


#ifdef check_run_with_simple_check_suite_MAIN

void test_check_run_with_simple_check_suite(int include_optional) {
    check_run_with_simple_check_suite_t* check_run_with_simple_check_suite_1 = instantiate_check_run_with_simple_check_suite(include_optional);

	cJSON* jsoncheck_run_with_simple_check_suite_1 = check_run_with_simple_check_suite_convertToJSON(check_run_with_simple_check_suite_1);
	printf("check_run_with_simple_check_suite :\n%s\n", cJSON_Print(jsoncheck_run_with_simple_check_suite_1));
	check_run_with_simple_check_suite_t* check_run_with_simple_check_suite_2 = check_run_with_simple_check_suite_parseFromJSON(jsoncheck_run_with_simple_check_suite_1);
	cJSON* jsoncheck_run_with_simple_check_suite_2 = check_run_with_simple_check_suite_convertToJSON(check_run_with_simple_check_suite_2);
	printf("repeating check_run_with_simple_check_suite:\n%s\n", cJSON_Print(jsoncheck_run_with_simple_check_suite_2));
}

int main() {
  test_check_run_with_simple_check_suite(1);
  test_check_run_with_simple_check_suite(0);

  printf("Hello world \n");
  return 0;
}

#endif // check_run_with_simple_check_suite_MAIN
#endif // check_run_with_simple_check_suite_TEST
