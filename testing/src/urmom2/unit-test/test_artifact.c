#ifndef artifact_TEST
#define artifact_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define artifact_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/artifact.h"
artifact_t* instantiate_artifact(int include_optional);

#include "test_artifact_workflow_run.c"


artifact_t* instantiate_artifact(int include_optional) {
  artifact_t* artifact = NULL;
  if (include_optional) {
    artifact = artifact_create(
      5,
      "MDEwOkNoZWNrU3VpdGU1",
      "AdventureWorks.Framework",
      12345,
      "https://api.github.com/repos/github/hello-world/actions/artifacts/5",
      "https://api.github.com/repos/github/hello-world/actions/artifacts/5/zip",
      1,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_artifact_workflow_run(0)
    );
  } else {
    artifact = artifact_create(
      5,
      "MDEwOkNoZWNrU3VpdGU1",
      "AdventureWorks.Framework",
      12345,
      "https://api.github.com/repos/github/hello-world/actions/artifacts/5",
      "https://api.github.com/repos/github/hello-world/actions/artifacts/5/zip",
      1,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      NULL
    );
  }

  return artifact;
}


#ifdef artifact_MAIN

void test_artifact(int include_optional) {
    artifact_t* artifact_1 = instantiate_artifact(include_optional);

	cJSON* jsonartifact_1 = artifact_convertToJSON(artifact_1);
	printf("artifact :\n%s\n", cJSON_Print(jsonartifact_1));
	artifact_t* artifact_2 = artifact_parseFromJSON(jsonartifact_1);
	cJSON* jsonartifact_2 = artifact_convertToJSON(artifact_2);
	printf("repeating artifact:\n%s\n", cJSON_Print(jsonartifact_2));
}

int main() {
  test_artifact(1);
  test_artifact(0);

  printf("Hello world \n");
  return 0;
}

#endif // artifact_MAIN
#endif // artifact_TEST
