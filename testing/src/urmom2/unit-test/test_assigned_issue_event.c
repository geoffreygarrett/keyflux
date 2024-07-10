#ifndef assigned_issue_event_TEST
#define assigned_issue_event_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define assigned_issue_event_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/assigned_issue_event.h"
assigned_issue_event_t* instantiate_assigned_issue_event(int include_optional);

#include "test_simple_user.c"
#include "test_integration.c"
#include "test_simple_user.c"
#include "test_simple_user.c"


assigned_issue_event_t* instantiate_assigned_issue_event(int include_optional) {
  assigned_issue_event_t* assigned_issue_event = NULL;
  if (include_optional) {
    assigned_issue_event = assigned_issue_event_create(
      56,
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_simple_user(0),
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_integration(0),
       // false, not to have infinite recursion
      instantiate_simple_user(0),
       // false, not to have infinite recursion
      instantiate_simple_user(0)
    );
  } else {
    assigned_issue_event = assigned_issue_event_create(
      56,
      "0",
      "0",
      NULL,
      "0",
      "0",
      "0",
      "0",
      NULL,
      NULL,
      NULL
    );
  }

  return assigned_issue_event;
}


#ifdef assigned_issue_event_MAIN

void test_assigned_issue_event(int include_optional) {
    assigned_issue_event_t* assigned_issue_event_1 = instantiate_assigned_issue_event(include_optional);

	cJSON* jsonassigned_issue_event_1 = assigned_issue_event_convertToJSON(assigned_issue_event_1);
	printf("assigned_issue_event :\n%s\n", cJSON_Print(jsonassigned_issue_event_1));
	assigned_issue_event_t* assigned_issue_event_2 = assigned_issue_event_parseFromJSON(jsonassigned_issue_event_1);
	cJSON* jsonassigned_issue_event_2 = assigned_issue_event_convertToJSON(assigned_issue_event_2);
	printf("repeating assigned_issue_event:\n%s\n", cJSON_Print(jsonassigned_issue_event_2));
}

int main() {
  test_assigned_issue_event(1);
  test_assigned_issue_event(0);

  printf("Hello world \n");
  return 0;
}

#endif // assigned_issue_event_MAIN
#endif // assigned_issue_event_TEST
