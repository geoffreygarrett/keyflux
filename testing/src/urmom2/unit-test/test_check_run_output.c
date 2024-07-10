#ifndef check_run_output_TEST
#define check_run_output_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define check_run_output_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/check_run_output.h"
check_run_output_t* instantiate_check_run_output(int include_optional);



check_run_output_t* instantiate_check_run_output(int include_optional) {
  check_run_output_t* check_run_output = NULL;
  if (include_optional) {
    check_run_output = check_run_output_create(
      "0",
      "0",
      "0",
      56,
      "0"
    );
  } else {
    check_run_output = check_run_output_create(
      "0",
      "0",
      "0",
      56,
      "0"
    );
  }

  return check_run_output;
}


#ifdef check_run_output_MAIN

void test_check_run_output(int include_optional) {
    check_run_output_t* check_run_output_1 = instantiate_check_run_output(include_optional);

	cJSON* jsoncheck_run_output_1 = check_run_output_convertToJSON(check_run_output_1);
	printf("check_run_output :\n%s\n", cJSON_Print(jsoncheck_run_output_1));
	check_run_output_t* check_run_output_2 = check_run_output_parseFromJSON(jsoncheck_run_output_1);
	cJSON* jsoncheck_run_output_2 = check_run_output_convertToJSON(check_run_output_2);
	printf("repeating check_run_output:\n%s\n", cJSON_Print(jsoncheck_run_output_2));
}

int main() {
  test_check_run_output(1);
  test_check_run_output(0);

  printf("Hello world \n");
  return 0;
}

#endif // check_run_output_MAIN
#endif // check_run_output_TEST
