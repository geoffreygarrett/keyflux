#ifndef basic_error_TEST
#define basic_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define basic_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/basic_error.h"
basic_error_t* instantiate_basic_error(int include_optional);



basic_error_t* instantiate_basic_error(int include_optional) {
  basic_error_t* basic_error = NULL;
  if (include_optional) {
    basic_error = basic_error_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    basic_error = basic_error_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return basic_error;
}


#ifdef basic_error_MAIN

void test_basic_error(int include_optional) {
    basic_error_t* basic_error_1 = instantiate_basic_error(include_optional);

	cJSON* jsonbasic_error_1 = basic_error_convertToJSON(basic_error_1);
	printf("basic_error :\n%s\n", cJSON_Print(jsonbasic_error_1));
	basic_error_t* basic_error_2 = basic_error_parseFromJSON(jsonbasic_error_1);
	cJSON* jsonbasic_error_2 = basic_error_convertToJSON(basic_error_2);
	printf("repeating basic_error:\n%s\n", cJSON_Print(jsonbasic_error_2));
}

int main() {
  test_basic_error(1);
  test_basic_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // basic_error_MAIN
#endif // basic_error_TEST
