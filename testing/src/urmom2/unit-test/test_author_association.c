#ifndef author_association_TEST
#define author_association_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define author_association_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/author_association.h"
author_association_t* instantiate_author_association(int include_optional);



author_association_t* instantiate_author_association(int include_optional) {
  author_association_t* author_association = NULL;
  if (include_optional) {
    author_association = author_association_create(
    );
  } else {
    author_association = author_association_create(
    );
  }

  return author_association;
}


#ifdef author_association_MAIN

void test_author_association(int include_optional) {
    author_association_t* author_association_1 = instantiate_author_association(include_optional);

	cJSON* jsonauthor_association_1 = author_association_convertToJSON(author_association_1);
	printf("author_association :\n%s\n", cJSON_Print(jsonauthor_association_1));
	author_association_t* author_association_2 = author_association_parseFromJSON(jsonauthor_association_1);
	cJSON* jsonauthor_association_2 = author_association_convertToJSON(author_association_2);
	printf("repeating author_association:\n%s\n", cJSON_Print(jsonauthor_association_2));
}

int main() {
  test_author_association(1);
  test_author_association(0);

  printf("Hello world \n");
  return 0;
}

#endif // author_association_MAIN
#endif // author_association_TEST
