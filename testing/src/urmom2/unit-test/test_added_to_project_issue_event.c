#ifndef added_to_project_issue_event_TEST
#define added_to_project_issue_event_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define added_to_project_issue_event_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/added_to_project_issue_event.h"
added_to_project_issue_event_t* instantiate_added_to_project_issue_event(int include_optional);

#include "test_simple_user.c"
#include "test_nullable_integration.c"
#include "test_added_to_project_issue_event_project_card.c"


added_to_project_issue_event_t* instantiate_added_to_project_issue_event(int include_optional) {
  added_to_project_issue_event_t* added_to_project_issue_event = NULL;
  if (include_optional) {
    added_to_project_issue_event = added_to_project_issue_event_create(
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
      instantiate_nullable_integration(0),
       // false, not to have infinite recursion
      instantiate_added_to_project_issue_event_project_card(0)
    );
  } else {
    added_to_project_issue_event = added_to_project_issue_event_create(
      56,
      "0",
      "0",
      NULL,
      "0",
      "0",
      "0",
      "0",
      NULL,
      NULL
    );
  }

  return added_to_project_issue_event;
}


#ifdef added_to_project_issue_event_MAIN

void test_added_to_project_issue_event(int include_optional) {
    added_to_project_issue_event_t* added_to_project_issue_event_1 = instantiate_added_to_project_issue_event(include_optional);

	cJSON* jsonadded_to_project_issue_event_1 = added_to_project_issue_event_convertToJSON(added_to_project_issue_event_1);
	printf("added_to_project_issue_event :\n%s\n", cJSON_Print(jsonadded_to_project_issue_event_1));
	added_to_project_issue_event_t* added_to_project_issue_event_2 = added_to_project_issue_event_parseFromJSON(jsonadded_to_project_issue_event_1);
	cJSON* jsonadded_to_project_issue_event_2 = added_to_project_issue_event_convertToJSON(added_to_project_issue_event_2);
	printf("repeating added_to_project_issue_event:\n%s\n", cJSON_Print(jsonadded_to_project_issue_event_2));
}

int main() {
  test_added_to_project_issue_event(1);
  test_added_to_project_issue_event(0);

  printf("Hello world \n");
  return 0;
}

#endif // added_to_project_issue_event_MAIN
#endif // added_to_project_issue_event_TEST
