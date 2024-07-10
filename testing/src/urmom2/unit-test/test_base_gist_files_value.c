#ifndef base_gist_files_value_TEST
#define base_gist_files_value_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define base_gist_files_value_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/base_gist_files_value.h"
base_gist_files_value_t* instantiate_base_gist_files_value(int include_optional);



base_gist_files_value_t* instantiate_base_gist_files_value(int include_optional) {
  base_gist_files_value_t* base_gist_files_value = NULL;
  if (include_optional) {
    base_gist_files_value = base_gist_files_value_create(
      "0",
      "0",
      "0",
      "0",
      56
    );
  } else {
    base_gist_files_value = base_gist_files_value_create(
      "0",
      "0",
      "0",
      "0",
      56
    );
  }

  return base_gist_files_value;
}


#ifdef base_gist_files_value_MAIN

void test_base_gist_files_value(int include_optional) {
    base_gist_files_value_t* base_gist_files_value_1 = instantiate_base_gist_files_value(include_optional);

	cJSON* jsonbase_gist_files_value_1 = base_gist_files_value_convertToJSON(base_gist_files_value_1);
	printf("base_gist_files_value :\n%s\n", cJSON_Print(jsonbase_gist_files_value_1));
	base_gist_files_value_t* base_gist_files_value_2 = base_gist_files_value_parseFromJSON(jsonbase_gist_files_value_1);
	cJSON* jsonbase_gist_files_value_2 = base_gist_files_value_convertToJSON(base_gist_files_value_2);
	printf("repeating base_gist_files_value:\n%s\n", cJSON_Print(jsonbase_gist_files_value_2));
}

int main() {
  test_base_gist_files_value(1);
  test_base_gist_files_value(0);

  printf("Hello world \n");
  return 0;
}

#endif // base_gist_files_value_MAIN
#endif // base_gist_files_value_TEST
