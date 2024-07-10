#ifndef authentication_token_TEST
#define authentication_token_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authentication_token_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authentication_token.h"
authentication_token_t* instantiate_authentication_token(int include_optional);



authentication_token_t* instantiate_authentication_token(int include_optional) {
  authentication_token_t* authentication_token = NULL;
  if (include_optional) {
    authentication_token = authentication_token_create(
      "v1.1f699f1069f60xxx",
      "2016-07-11T22:14:10Z",
      {"issues":"read","deployments":"write"},
      list_createList(),
      "config.yaml",
      github_v3_rest_api_authentication_token_REPOSITORYSELECTION_all
    );
  } else {
    authentication_token = authentication_token_create(
      "v1.1f699f1069f60xxx",
      "2016-07-11T22:14:10Z",
      {"issues":"read","deployments":"write"},
      list_createList(),
      "config.yaml",
      github_v3_rest_api_authentication_token_REPOSITORYSELECTION_all
    );
  }

  return authentication_token;
}


#ifdef authentication_token_MAIN

void test_authentication_token(int include_optional) {
    authentication_token_t* authentication_token_1 = instantiate_authentication_token(include_optional);

	cJSON* jsonauthentication_token_1 = authentication_token_convertToJSON(authentication_token_1);
	printf("authentication_token :\n%s\n", cJSON_Print(jsonauthentication_token_1));
	authentication_token_t* authentication_token_2 = authentication_token_parseFromJSON(jsonauthentication_token_1);
	cJSON* jsonauthentication_token_2 = authentication_token_convertToJSON(authentication_token_2);
	printf("repeating authentication_token:\n%s\n", cJSON_Print(jsonauthentication_token_2));
}

int main() {
  test_authentication_token(1);
  test_authentication_token(0);

  printf("Hello world \n");
  return 0;
}

#endif // authentication_token_MAIN
#endif // authentication_token_TEST
