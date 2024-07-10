#ifndef check_annotation_TEST
#define check_annotation_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define check_annotation_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/check_annotation.h"
check_annotation_t* instantiate_check_annotation(int include_optional);



check_annotation_t* instantiate_check_annotation(int include_optional) {
  check_annotation_t* check_annotation = NULL;
  if (include_optional) {
    check_annotation = check_annotation_create(
      "README.md",
      2,
      2,
      5,
      10,
      "warning",
      "Spell Checker",
      "Check your spelling for 'banaas'.",
      "Do you mean 'bananas' or 'banana'?",
      "0"
    );
  } else {
    check_annotation = check_annotation_create(
      "README.md",
      2,
      2,
      5,
      10,
      "warning",
      "Spell Checker",
      "Check your spelling for 'banaas'.",
      "Do you mean 'bananas' or 'banana'?",
      "0"
    );
  }

  return check_annotation;
}


#ifdef check_annotation_MAIN

void test_check_annotation(int include_optional) {
    check_annotation_t* check_annotation_1 = instantiate_check_annotation(include_optional);

	cJSON* jsoncheck_annotation_1 = check_annotation_convertToJSON(check_annotation_1);
	printf("check_annotation :\n%s\n", cJSON_Print(jsoncheck_annotation_1));
	check_annotation_t* check_annotation_2 = check_annotation_parseFromJSON(jsoncheck_annotation_1);
	cJSON* jsoncheck_annotation_2 = check_annotation_convertToJSON(check_annotation_2);
	printf("repeating check_annotation:\n%s\n", cJSON_Print(jsoncheck_annotation_2));
}

int main() {
  test_check_annotation(1);
  test_check_annotation(0);

  printf("Hello world \n");
  return 0;
}

#endif // check_annotation_MAIN
#endif // check_annotation_TEST
