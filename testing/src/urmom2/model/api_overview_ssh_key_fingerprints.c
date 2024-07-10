#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "api_overview_ssh_key_fingerprints.h"



api_overview_ssh_key_fingerprints_t *api_overview_ssh_key_fingerprints_create(
    char *sha256_rsa,
    char *sha256_dsa,
    char *sha256_ecdsa,
    char *sha256_ed25519
    ) {
    api_overview_ssh_key_fingerprints_t *api_overview_ssh_key_fingerprints_local_var = malloc(sizeof(api_overview_ssh_key_fingerprints_t));
    if (!api_overview_ssh_key_fingerprints_local_var) {
        return NULL;
    }
    api_overview_ssh_key_fingerprints_local_var->sha256_rsa = sha256_rsa;
    api_overview_ssh_key_fingerprints_local_var->sha256_dsa = sha256_dsa;
    api_overview_ssh_key_fingerprints_local_var->sha256_ecdsa = sha256_ecdsa;
    api_overview_ssh_key_fingerprints_local_var->sha256_ed25519 = sha256_ed25519;

    return api_overview_ssh_key_fingerprints_local_var;
}


void api_overview_ssh_key_fingerprints_free(api_overview_ssh_key_fingerprints_t *api_overview_ssh_key_fingerprints) {
    if(NULL == api_overview_ssh_key_fingerprints){
        return ;
    }
    listEntry_t *listEntry;
    if (api_overview_ssh_key_fingerprints->sha256_rsa) {
        free(api_overview_ssh_key_fingerprints->sha256_rsa);
        api_overview_ssh_key_fingerprints->sha256_rsa = NULL;
    }
    if (api_overview_ssh_key_fingerprints->sha256_dsa) {
        free(api_overview_ssh_key_fingerprints->sha256_dsa);
        api_overview_ssh_key_fingerprints->sha256_dsa = NULL;
    }
    if (api_overview_ssh_key_fingerprints->sha256_ecdsa) {
        free(api_overview_ssh_key_fingerprints->sha256_ecdsa);
        api_overview_ssh_key_fingerprints->sha256_ecdsa = NULL;
    }
    if (api_overview_ssh_key_fingerprints->sha256_ed25519) {
        free(api_overview_ssh_key_fingerprints->sha256_ed25519);
        api_overview_ssh_key_fingerprints->sha256_ed25519 = NULL;
    }
    free(api_overview_ssh_key_fingerprints);
}

cJSON *api_overview_ssh_key_fingerprints_convertToJSON(api_overview_ssh_key_fingerprints_t *api_overview_ssh_key_fingerprints) {
    cJSON *item = cJSON_CreateObject();

    // api_overview_ssh_key_fingerprints->sha256_rsa
    if(api_overview_ssh_key_fingerprints->sha256_rsa) {
    if(cJSON_AddStringToObject(item, "SHA256_RSA", api_overview_ssh_key_fingerprints->sha256_rsa) == NULL) {
    goto fail; //String
    }
    }


    // api_overview_ssh_key_fingerprints->sha256_dsa
    if(api_overview_ssh_key_fingerprints->sha256_dsa) {
    if(cJSON_AddStringToObject(item, "SHA256_DSA", api_overview_ssh_key_fingerprints->sha256_dsa) == NULL) {
    goto fail; //String
    }
    }


    // api_overview_ssh_key_fingerprints->sha256_ecdsa
    if(api_overview_ssh_key_fingerprints->sha256_ecdsa) {
    if(cJSON_AddStringToObject(item, "SHA256_ECDSA", api_overview_ssh_key_fingerprints->sha256_ecdsa) == NULL) {
    goto fail; //String
    }
    }


    // api_overview_ssh_key_fingerprints->sha256_ed25519
    if(api_overview_ssh_key_fingerprints->sha256_ed25519) {
    if(cJSON_AddStringToObject(item, "SHA256_ED25519", api_overview_ssh_key_fingerprints->sha256_ed25519) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

api_overview_ssh_key_fingerprints_t *api_overview_ssh_key_fingerprints_parseFromJSON(cJSON *api_overview_ssh_key_fingerprintsJSON){

    api_overview_ssh_key_fingerprints_t *api_overview_ssh_key_fingerprints_local_var = NULL;

    // api_overview_ssh_key_fingerprints->sha256_rsa
    cJSON *sha256_rsa = cJSON_GetObjectItemCaseSensitive(api_overview_ssh_key_fingerprintsJSON, "SHA256_RSA");
    if (sha256_rsa) { 
    if(!cJSON_IsString(sha256_rsa))
    {
    goto end; //String
    }
    }

    // api_overview_ssh_key_fingerprints->sha256_dsa
    cJSON *sha256_dsa = cJSON_GetObjectItemCaseSensitive(api_overview_ssh_key_fingerprintsJSON, "SHA256_DSA");
    if (sha256_dsa) { 
    if(!cJSON_IsString(sha256_dsa))
    {
    goto end; //String
    }
    }

    // api_overview_ssh_key_fingerprints->sha256_ecdsa
    cJSON *sha256_ecdsa = cJSON_GetObjectItemCaseSensitive(api_overview_ssh_key_fingerprintsJSON, "SHA256_ECDSA");
    if (sha256_ecdsa) { 
    if(!cJSON_IsString(sha256_ecdsa))
    {
    goto end; //String
    }
    }

    // api_overview_ssh_key_fingerprints->sha256_ed25519
    cJSON *sha256_ed25519 = cJSON_GetObjectItemCaseSensitive(api_overview_ssh_key_fingerprintsJSON, "SHA256_ED25519");
    if (sha256_ed25519) { 
    if(!cJSON_IsString(sha256_ed25519))
    {
    goto end; //String
    }
    }


    api_overview_ssh_key_fingerprints_local_var = api_overview_ssh_key_fingerprints_create (
        sha256_rsa ? strdup(sha256_rsa->valuestring) : NULL,
        sha256_dsa ? strdup(sha256_dsa->valuestring) : NULL,
        sha256_ecdsa ? strdup(sha256_ecdsa->valuestring) : NULL,
        sha256_ed25519 ? strdup(sha256_ed25519->valuestring) : NULL
        );

    return api_overview_ssh_key_fingerprints_local_var;
end:
    return NULL;

}
