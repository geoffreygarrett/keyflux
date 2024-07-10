#ifndef blob_TEST
#define blob_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define blob_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/blob.h"
blob_t* instantiate_blob(int include_optional);



blob_t* instantiate_blob(int include_optional) {
  blob_t* blob = NULL;
  if (include_optional) {
    blob = blob_create(
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      "0"
    );
  } else {
    blob = blob_create(
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      "0"
    );
  }

  return blob;
}


#ifdef blob_MAIN

void test_blob(int include_optional) {
    blob_t* blob_1 = instantiate_blob(include_optional);

	cJSON* jsonblob_1 = blob_convertToJSON(blob_1);
	printf("blob :\n%s\n", cJSON_Print(jsonblob_1));
	blob_t* blob_2 = blob_parseFromJSON(jsonblob_1);
	cJSON* jsonblob_2 = blob_convertToJSON(blob_2);
	printf("repeating blob:\n%s\n", cJSON_Print(jsonblob_2));
}

int main() {
  test_blob(1);
  test_blob(0);

  printf("Hello world \n");
  return 0;
}

#endif // blob_MAIN
#endif // blob_TEST
