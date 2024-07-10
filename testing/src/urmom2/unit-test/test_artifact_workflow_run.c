#ifndef artifact_workflow_run_TEST
#define artifact_workflow_run_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define artifact_workflow_run_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/artifact_workflow_run.h"
artifact_workflow_run_t* instantiate_artifact_workflow_run(int include_optional);



artifact_workflow_run_t* instantiate_artifact_workflow_run(int include_optional) {
  artifact_workflow_run_t* artifact_workflow_run = NULL;
  if (include_optional) {
    artifact_workflow_run = artifact_workflow_run_create(
      10,
      42,
      42,
      "main",
      "009b8a3a9ccbb128af87f9b1c0f4c62e8a304f6d"
    );
  } else {
    artifact_workflow_run = artifact_workflow_run_create(
      10,
      42,
      42,
      "main",
      "009b8a3a9ccbb128af87f9b1c0f4c62e8a304f6d"
    );
  }

  return artifact_workflow_run;
}


#ifdef artifact_workflow_run_MAIN

void test_artifact_workflow_run(int include_optional) {
    artifact_workflow_run_t* artifact_workflow_run_1 = instantiate_artifact_workflow_run(include_optional);

	cJSON* jsonartifact_workflow_run_1 = artifact_workflow_run_convertToJSON(artifact_workflow_run_1);
	printf("artifact_workflow_run :\n%s\n", cJSON_Print(jsonartifact_workflow_run_1));
	artifact_workflow_run_t* artifact_workflow_run_2 = artifact_workflow_run_parseFromJSON(jsonartifact_workflow_run_1);
	cJSON* jsonartifact_workflow_run_2 = artifact_workflow_run_convertToJSON(artifact_workflow_run_2);
	printf("repeating artifact_workflow_run:\n%s\n", cJSON_Print(jsonartifact_workflow_run_2));
}

int main() {
  test_artifact_workflow_run(1);
  test_artifact_workflow_run(0);

  printf("Hello world \n");
  return 0;
}

#endif // artifact_workflow_run_MAIN
#endif // artifact_workflow_run_TEST
