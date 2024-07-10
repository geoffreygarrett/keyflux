/*
 * base_gist.h
 *
 * Base Gist
 */

#ifndef _base_gist_H_
#define _base_gist_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct base_gist_t base_gist_t;

#include "any_type.h"
#include "base_gist_files_value.h"
#include "nullable_simple_user.h"
#include "simple_user.h"



typedef struct base_gist_t {
    char *url; // string
    char *forks_url; // string
    char *commits_url; // string
    char *id; // string
    char *node_id; // string
    char *git_pull_url; // string
    char *git_push_url; // string
    char *html_url; // string
    list_t* files; //map
    int _public; //boolean
    char *created_at; //date time
    char *updated_at; //date time
    char *description; // string
    int comments; //numeric
    struct nullable_simple_user_t *user; //model
    char *comments_url; // string
    struct simple_user_t *owner; //model
    int truncated; //boolean
    list_t *forks; //nonprimitive container
    list_t *history; //nonprimitive container

} base_gist_t;

base_gist_t *base_gist_create(
    char *url,
    char *forks_url,
    char *commits_url,
    char *id,
    char *node_id,
    char *git_pull_url,
    char *git_push_url,
    char *html_url,
    list_t* files,
    int _public,
    char *created_at,
    char *updated_at,
    char *description,
    int comments,
    nullable_simple_user_t *user,
    char *comments_url,
    simple_user_t *owner,
    int truncated,
    list_t *forks,
    list_t *history
);

void base_gist_free(base_gist_t *base_gist);

base_gist_t *base_gist_parseFromJSON(cJSON *base_gistJSON);

cJSON *base_gist_convertToJSON(base_gist_t *base_gist);

#endif /* _base_gist_H_ */

