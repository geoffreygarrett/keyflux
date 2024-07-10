#ifndef actions_re_run_job_for_workflow_run_request_TEST
#define actions_re_run_job_for_workflow_run_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_re_run_job_for_workflow_run_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_re_run_job_for_workflow_run_request.h"
actions_re_run_job_for_workflow_run_request_t* instantiate_actions_re_run_job_for_workflow_run_request(int include_optional);



actions_re_run_job_for_workflow_run_request_t* instantiate_actions_re_run_job_for_workflow_run_request(int include_optional) {
  actions_re_run_job_for_workflow_run_request_t* actions_re_run_job_for_workflow_run_request = NULL;
  if (include_optional) {
    actions_re_run_job_for_workflow_run_request = actions_re_run_job_for_workflow_run_request_create(
      1
    );
  } else {
    actions_re_run_job_for_workflow_run_request = actions_re_run_job_for_workflow_run_request_create(
      1
    );
  }

  return actions_re_run_job_for_workflow_run_request;
}


#ifdef actions_re_run_job_for_workflow_run_request_MAIN

void test_actions_re_run_job_for_workflow_run_request(int include_optional) {
    actions_re_run_job_for_workflow_run_request_t* actions_re_run_job_for_workflow_run_request_1 = instantiate_actions_re_run_job_for_workflow_run_request(include_optional);

	cJSON* jsonactions_re_run_job_for_workflow_run_request_1 = actions_re_run_job_for_workflow_run_request_convertToJSON(actions_re_run_job_for_workflow_run_request_1);
	printf("actions_re_run_job_for_workflow_run_request :\n%s\n", cJSON_Print(jsonactions_re_run_job_for_workflow_run_request_1));
	actions_re_run_job_for_workflow_run_request_t* actions_re_run_job_for_workflow_run_request_2 = actions_re_run_job_for_workflow_run_request_parseFromJSON(jsonactions_re_run_job_for_workflow_run_request_1);
	cJSON* jsonactions_re_run_job_for_workflow_run_request_2 = actions_re_run_job_for_workflow_run_request_convertToJSON(actions_re_run_job_for_workflow_run_request_2);
	printf("repeating actions_re_run_job_for_workflow_run_request:\n%s\n", cJSON_Print(jsonactions_re_run_job_for_workflow_run_request_2));
}

int main() {
  test_actions_re_run_job_for_workflow_run_request(1);
  test_actions_re_run_job_for_workflow_run_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_re_run_job_for_workflow_run_request_MAIN
#endif // actions_re_run_job_for_workflow_run_request_TEST
