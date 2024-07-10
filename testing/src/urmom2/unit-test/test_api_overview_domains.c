#ifndef api_overview_domains_TEST
#define api_overview_domains_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define api_overview_domains_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/api_overview_domains.h"
api_overview_domains_t* instantiate_api_overview_domains(int include_optional);



api_overview_domains_t* instantiate_api_overview_domains(int include_optional) {
  api_overview_domains_t* api_overview_domains = NULL;
  if (include_optional) {
    api_overview_domains = api_overview_domains_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    api_overview_domains = api_overview_domains_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return api_overview_domains;
}


#ifdef api_overview_domains_MAIN

void test_api_overview_domains(int include_optional) {
    api_overview_domains_t* api_overview_domains_1 = instantiate_api_overview_domains(include_optional);

	cJSON* jsonapi_overview_domains_1 = api_overview_domains_convertToJSON(api_overview_domains_1);
	printf("api_overview_domains :\n%s\n", cJSON_Print(jsonapi_overview_domains_1));
	api_overview_domains_t* api_overview_domains_2 = api_overview_domains_parseFromJSON(jsonapi_overview_domains_1);
	cJSON* jsonapi_overview_domains_2 = api_overview_domains_convertToJSON(api_overview_domains_2);
	printf("repeating api_overview_domains:\n%s\n", cJSON_Print(jsonapi_overview_domains_2));
}

int main() {
  test_api_overview_domains(1);
  test_api_overview_domains(0);

  printf("Hello world \n");
  return 0;
}

#endif // api_overview_domains_MAIN
#endif // api_overview_domains_TEST
