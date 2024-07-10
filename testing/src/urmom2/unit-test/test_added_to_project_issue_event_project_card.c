#ifndef added_to_project_issue_event_project_card_TEST
#define added_to_project_issue_event_project_card_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define added_to_project_issue_event_project_card_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/added_to_project_issue_event_project_card.h"
added_to_project_issue_event_project_card_t* instantiate_added_to_project_issue_event_project_card(int include_optional);



added_to_project_issue_event_project_card_t* instantiate_added_to_project_issue_event_project_card(int include_optional) {
  added_to_project_issue_event_project_card_t* added_to_project_issue_event_project_card = NULL;
  if (include_optional) {
    added_to_project_issue_event_project_card = added_to_project_issue_event_project_card_create(
      56,
      "0",
      56,
      "0",
      "0",
      "0"
    );
  } else {
    added_to_project_issue_event_project_card = added_to_project_issue_event_project_card_create(
      56,
      "0",
      56,
      "0",
      "0",
      "0"
    );
  }

  return added_to_project_issue_event_project_card;
}


#ifdef added_to_project_issue_event_project_card_MAIN

void test_added_to_project_issue_event_project_card(int include_optional) {
    added_to_project_issue_event_project_card_t* added_to_project_issue_event_project_card_1 = instantiate_added_to_project_issue_event_project_card(include_optional);

	cJSON* jsonadded_to_project_issue_event_project_card_1 = added_to_project_issue_event_project_card_convertToJSON(added_to_project_issue_event_project_card_1);
	printf("added_to_project_issue_event_project_card :\n%s\n", cJSON_Print(jsonadded_to_project_issue_event_project_card_1));
	added_to_project_issue_event_project_card_t* added_to_project_issue_event_project_card_2 = added_to_project_issue_event_project_card_parseFromJSON(jsonadded_to_project_issue_event_project_card_1);
	cJSON* jsonadded_to_project_issue_event_project_card_2 = added_to_project_issue_event_project_card_convertToJSON(added_to_project_issue_event_project_card_2);
	printf("repeating added_to_project_issue_event_project_card:\n%s\n", cJSON_Print(jsonadded_to_project_issue_event_project_card_2));
}

int main() {
  test_added_to_project_issue_event_project_card(1);
  test_added_to_project_issue_event_project_card(0);

  printf("Hello world \n");
  return 0;
}

#endif // added_to_project_issue_event_project_card_MAIN
#endif // added_to_project_issue_event_project_card_TEST
