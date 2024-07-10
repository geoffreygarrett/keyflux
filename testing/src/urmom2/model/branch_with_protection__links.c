#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branch_with_protection__links.h"



branch_with_protection__links_t *branch_with_protection__links_create(
    char *html,
    char *self
    ) {
    branch_with_protection__links_t *branch_with_protection__links_local_var = malloc(sizeof(branch_with_protection__links_t));
    if (!branch_with_protection__links_local_var) {
        return NULL;
    }
    branch_with_protection__links_local_var->html = html;
    branch_with_protection__links_local_var->self = self;

    return branch_with_protection__links_local_var;
}


void branch_with_protection__links_free(branch_with_protection__links_t *branch_with_protection__links) {
    if(NULL == branch_with_protection__links){
        return ;
    }
    listEntry_t *listEntry;
    if (branch_with_protection__links->html) {
        free(branch_with_protection__links->html);
        branch_with_protection__links->html = NULL;
    }
    if (branch_with_protection__links->self) {
        free(branch_with_protection__links->self);
        branch_with_protection__links->self = NULL;
    }
    free(branch_with_protection__links);
}

cJSON *branch_with_protection__links_convertToJSON(branch_with_protection__links_t *branch_with_protection__links) {
    cJSON *item = cJSON_CreateObject();

    // branch_with_protection__links->html
    if (!branch_with_protection__links->html) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "html", branch_with_protection__links->html) == NULL) {
    goto fail; //String
    }


    // branch_with_protection__links->self
    if (!branch_with_protection__links->self) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "self", branch_with_protection__links->self) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

branch_with_protection__links_t *branch_with_protection__links_parseFromJSON(cJSON *branch_with_protection__linksJSON){

    branch_with_protection__links_t *branch_with_protection__links_local_var = NULL;

    // branch_with_protection__links->html
    cJSON *html = cJSON_GetObjectItemCaseSensitive(branch_with_protection__linksJSON, "html");
    if (!html) {
        goto end;
    }

    
    if(!cJSON_IsString(html))
    {
    goto end; //String
    }

    // branch_with_protection__links->self
    cJSON *self = cJSON_GetObjectItemCaseSensitive(branch_with_protection__linksJSON, "self");
    if (!self) {
        goto end;
    }

    
    if(!cJSON_IsString(self))
    {
    goto end; //String
    }


    branch_with_protection__links_local_var = branch_with_protection__links_create (
        strdup(html->valuestring),
        strdup(self->valuestring)
        );

    return branch_with_protection__links_local_var;
end:
    return NULL;

}
