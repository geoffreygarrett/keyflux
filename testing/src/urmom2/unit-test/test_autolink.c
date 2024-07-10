#ifndef autolink_TEST
#define autolink_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define autolink_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/autolink.h"
autolink_t* instantiate_autolink(int include_optional);



autolink_t* instantiate_autolink(int include_optional) {
  autolink_t* autolink = NULL;
  if (include_optional) {
    autolink = autolink_create(
      3,
      "TICKET-",
      "https://example.com/TICKET?query=<num>",
      true
    );
  } else {
    autolink = autolink_create(
      3,
      "TICKET-",
      "https://example.com/TICKET?query=<num>",
      true
    );
  }

  return autolink;
}


#ifdef autolink_MAIN

void test_autolink(int include_optional) {
    autolink_t* autolink_1 = instantiate_autolink(include_optional);

	cJSON* jsonautolink_1 = autolink_convertToJSON(autolink_1);
	printf("autolink :\n%s\n", cJSON_Print(jsonautolink_1));
	autolink_t* autolink_2 = autolink_parseFromJSON(jsonautolink_1);
	cJSON* jsonautolink_2 = autolink_convertToJSON(autolink_2);
	printf("repeating autolink:\n%s\n", cJSON_Print(jsonautolink_2));
}

int main() {
  test_autolink(1);
  test_autolink(0);

  printf("Hello world \n");
  return 0;
}

#endif // autolink_MAIN
#endif // autolink_TEST
