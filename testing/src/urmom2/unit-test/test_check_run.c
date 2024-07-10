#ifndef check_run_TEST
#define check_run_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define check_run_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/check_run.h"
check_run_t* instantiate_check_run(int include_optional);

#include "test_check_run_output.c"
#include "test_check_run_check_suite.c"
#include "test_nullable_integration.c"
#include "test_deployment_simple.c"


check_run_t* instantiate_check_run(int include_optional) {
  check_run_t* check_run = NULL;
  if (include_optional) {
    check_run = check_run_create(
      21,
      "009b8a3a9ccbb128af87f9b1c0f4c62e8a304f6d",
      "MDg6Q2hlY2tSdW40",
      "42",
      "https://api.github.com/repos/github/hello-world/check-runs/4",
      "https://github.com/github/hello-world/runs/4",
      "https://example.com",
      github_v3_rest_api_check_run_STATUS_"queued",
      github_v3_rest_api_check_run_CONCLUSION_"neutral",
      "2018-05-04T01:14:52Z",
      "2018-05-04T01:14:52Z",
       // false, not to have infinite recursion
      instantiate_check_run_output(0),
      "test-coverage",
       // false, not to have infinite recursion
      instantiate_check_run_check_suite(0),
       // false, not to have infinite recursion
      instantiate_nullable_integration(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_deployment_simple(0)
    );
  } else {
    check_run = check_run_create(
      21,
      "009b8a3a9ccbb128af87f9b1c0f4c62e8a304f6d",
      "MDg6Q2hlY2tSdW40",
      "42",
      "https://api.github.com/repos/github/hello-world/check-runs/4",
      "https://github.com/github/hello-world/runs/4",
      "https://example.com",
      github_v3_rest_api_check_run_STATUS_"queued",
      github_v3_rest_api_check_run_CONCLUSION_"neutral",
      "2018-05-04T01:14:52Z",
      "2018-05-04T01:14:52Z",
      NULL,
      "test-coverage",
      NULL,
      NULL,
      list_createList(),
      NULL
    );
  }

  return check_run;
}


#ifdef check_run_MAIN

void test_check_run(int include_optional) {
    check_run_t* check_run_1 = instantiate_check_run(include_optional);

	cJSON* jsoncheck_run_1 = check_run_convertToJSON(check_run_1);
	printf("check_run :\n%s\n", cJSON_Print(jsoncheck_run_1));
	check_run_t* check_run_2 = check_run_parseFromJSON(jsoncheck_run_1);
	cJSON* jsoncheck_run_2 = check_run_convertToJSON(check_run_2);
	printf("repeating check_run:\n%s\n", cJSON_Print(jsoncheck_run_2));
}

int main() {
  test_check_run(1);
  test_check_run(0);

  printf("Hello world \n");
  return 0;
}

#endif // check_run_MAIN
#endif // check_run_TEST
