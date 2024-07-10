#ifndef check_automated_security_fixes_TEST
#define check_automated_security_fixes_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define check_automated_security_fixes_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/check_automated_security_fixes.h"
check_automated_security_fixes_t* instantiate_check_automated_security_fixes(int include_optional);



check_automated_security_fixes_t* instantiate_check_automated_security_fixes(int include_optional) {
  check_automated_security_fixes_t* check_automated_security_fixes = NULL;
  if (include_optional) {
    check_automated_security_fixes = check_automated_security_fixes_create(
      true,
      false
    );
  } else {
    check_automated_security_fixes = check_automated_security_fixes_create(
      true,
      false
    );
  }

  return check_automated_security_fixes;
}


#ifdef check_automated_security_fixes_MAIN

void test_check_automated_security_fixes(int include_optional) {
    check_automated_security_fixes_t* check_automated_security_fixes_1 = instantiate_check_automated_security_fixes(include_optional);

	cJSON* jsoncheck_automated_security_fixes_1 = check_automated_security_fixes_convertToJSON(check_automated_security_fixes_1);
	printf("check_automated_security_fixes :\n%s\n", cJSON_Print(jsoncheck_automated_security_fixes_1));
	check_automated_security_fixes_t* check_automated_security_fixes_2 = check_automated_security_fixes_parseFromJSON(jsoncheck_automated_security_fixes_1);
	cJSON* jsoncheck_automated_security_fixes_2 = check_automated_security_fixes_convertToJSON(check_automated_security_fixes_2);
	printf("repeating check_automated_security_fixes:\n%s\n", cJSON_Print(jsoncheck_automated_security_fixes_2));
}

int main() {
  test_check_automated_security_fixes(1);
  test_check_automated_security_fixes(0);

  printf("Hello world \n");
  return 0;
}

#endif // check_automated_security_fixes_MAIN
#endif // check_automated_security_fixes_TEST
