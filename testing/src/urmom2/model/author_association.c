#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "author_association.h"


char* author_association_author_association_ToString(github_v3_rest_api_author_association__e author_association) {
    char *author_associationArray[] =  { "NULL", "COLLABORATOR", "CONTRIBUTOR", "FIRST_TIMER", "FIRST_TIME_CONTRIBUTOR", "MANNEQUIN", "MEMBER", "NONE", "OWNER" };
    return author_associationArray[author_association];
}

github_v3_rest_api_author_association__e author_association_author_association_FromString(char* author_association) {
    int stringToReturn = 0;
    char *author_associationArray[] =  { "NULL", "COLLABORATOR", "CONTRIBUTOR", "FIRST_TIMER", "FIRST_TIME_CONTRIBUTOR", "MANNEQUIN", "MEMBER", "NONE", "OWNER" };
    size_t sizeofArray = sizeof(author_associationArray) / sizeof(author_associationArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(author_association, author_associationArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *author_association_author_association_convertToJSON(github_v3_rest_api_author_association__e author_association) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "author_association", author_association_author_association_ToString(author_association)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

github_v3_rest_api_author_association__e author_association_author_association_parseFromJSON(cJSON *author_associationJSON) {
    github_v3_rest_api_author_association__e *author_association = NULL;
    github_v3_rest_api_author_association__e author_associationVariable;
    cJSON *author_associationVar = cJSON_GetObjectItemCaseSensitive(author_associationJSON, "author_association");
    if(!cJSON_IsString(author_associationVar) || (author_associationVar->valuestring == NULL)){
        goto end;
    }
    author_associationVariable = author_association_author_association_FromString(author_associationVar->valuestring);
    return author_associationVariable;
end:
    return 0;
}
