#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "app_1_permissions.h"


char* actionsapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_ACTIONS_e actions) {
    char* actionsArray[] =  { "NULL", "read", "write" };
	return actionsArray[actions];
}

github_v3_rest_api_app_1_permissions_ACTIONS_e actionsapp_1_permissions_FromString(char* actions){
    int stringToReturn = 0;
    char *actionsArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(actionsArray) / sizeof(actionsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(actions, actionsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* administrationapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_ADMINISTRATION_e administration) {
    char* administrationArray[] =  { "NULL", "read", "write" };
	return administrationArray[administration];
}

github_v3_rest_api_app_1_permissions_ADMINISTRATION_e administrationapp_1_permissions_FromString(char* administration){
    int stringToReturn = 0;
    char *administrationArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(administrationArray) / sizeof(administrationArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(administration, administrationArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* checksapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_CHECKS_e checks) {
    char* checksArray[] =  { "NULL", "read", "write" };
	return checksArray[checks];
}

github_v3_rest_api_app_1_permissions_CHECKS_e checksapp_1_permissions_FromString(char* checks){
    int stringToReturn = 0;
    char *checksArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(checksArray) / sizeof(checksArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(checks, checksArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* content_referencesapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_CONTENTREFERENCES_e content_references) {
    char* content_referencesArray[] =  { "NULL", "read", "write" };
	return content_referencesArray[content_references];
}

github_v3_rest_api_app_1_permissions_CONTENTREFERENCES_e content_referencesapp_1_permissions_FromString(char* content_references){
    int stringToReturn = 0;
    char *content_referencesArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(content_referencesArray) / sizeof(content_referencesArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(content_references, content_referencesArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* contentsapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_CONTENTS_e contents) {
    char* contentsArray[] =  { "NULL", "read", "write" };
	return contentsArray[contents];
}

github_v3_rest_api_app_1_permissions_CONTENTS_e contentsapp_1_permissions_FromString(char* contents){
    int stringToReturn = 0;
    char *contentsArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(contentsArray) / sizeof(contentsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(contents, contentsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* deploymentsapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_DEPLOYMENTS_e deployments) {
    char* deploymentsArray[] =  { "NULL", "read", "write" };
	return deploymentsArray[deployments];
}

github_v3_rest_api_app_1_permissions_DEPLOYMENTS_e deploymentsapp_1_permissions_FromString(char* deployments){
    int stringToReturn = 0;
    char *deploymentsArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(deploymentsArray) / sizeof(deploymentsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(deployments, deploymentsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* discussionsapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_DISCUSSIONS_e discussions) {
    char* discussionsArray[] =  { "NULL", "read", "write" };
	return discussionsArray[discussions];
}

github_v3_rest_api_app_1_permissions_DISCUSSIONS_e discussionsapp_1_permissions_FromString(char* discussions){
    int stringToReturn = 0;
    char *discussionsArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(discussionsArray) / sizeof(discussionsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(discussions, discussionsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* emailsapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_EMAILS_e emails) {
    char* emailsArray[] =  { "NULL", "read", "write" };
	return emailsArray[emails];
}

github_v3_rest_api_app_1_permissions_EMAILS_e emailsapp_1_permissions_FromString(char* emails){
    int stringToReturn = 0;
    char *emailsArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(emailsArray) / sizeof(emailsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(emails, emailsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* environmentsapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_ENVIRONMENTS_e environments) {
    char* environmentsArray[] =  { "NULL", "read", "write" };
	return environmentsArray[environments];
}

github_v3_rest_api_app_1_permissions_ENVIRONMENTS_e environmentsapp_1_permissions_FromString(char* environments){
    int stringToReturn = 0;
    char *environmentsArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(environmentsArray) / sizeof(environmentsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(environments, environmentsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* issuesapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_ISSUES_e issues) {
    char* issuesArray[] =  { "NULL", "read", "write" };
	return issuesArray[issues];
}

github_v3_rest_api_app_1_permissions_ISSUES_e issuesapp_1_permissions_FromString(char* issues){
    int stringToReturn = 0;
    char *issuesArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(issuesArray) / sizeof(issuesArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(issues, issuesArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* keysapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_KEYS_e keys) {
    char* keysArray[] =  { "NULL", "read", "write" };
	return keysArray[keys];
}

github_v3_rest_api_app_1_permissions_KEYS_e keysapp_1_permissions_FromString(char* keys){
    int stringToReturn = 0;
    char *keysArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(keysArray) / sizeof(keysArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(keys, keysArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* membersapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_MEMBERS_e members) {
    char* membersArray[] =  { "NULL", "read", "write" };
	return membersArray[members];
}

github_v3_rest_api_app_1_permissions_MEMBERS_e membersapp_1_permissions_FromString(char* members){
    int stringToReturn = 0;
    char *membersArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(membersArray) / sizeof(membersArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(members, membersArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* metadataapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_METADATA_e metadata) {
    char* metadataArray[] =  { "NULL", "read", "write" };
	return metadataArray[metadata];
}

github_v3_rest_api_app_1_permissions_METADATA_e metadataapp_1_permissions_FromString(char* metadata){
    int stringToReturn = 0;
    char *metadataArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(metadataArray) / sizeof(metadataArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(metadata, metadataArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* organization_administrationapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_ORGANIZATIONADMINISTRATION_e organization_administration) {
    char* organization_administrationArray[] =  { "NULL", "read", "write" };
	return organization_administrationArray[organization_administration];
}

github_v3_rest_api_app_1_permissions_ORGANIZATIONADMINISTRATION_e organization_administrationapp_1_permissions_FromString(char* organization_administration){
    int stringToReturn = 0;
    char *organization_administrationArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(organization_administrationArray) / sizeof(organization_administrationArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(organization_administration, organization_administrationArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* organization_hooksapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_ORGANIZATIONHOOKS_e organization_hooks) {
    char* organization_hooksArray[] =  { "NULL", "read", "write" };
	return organization_hooksArray[organization_hooks];
}

github_v3_rest_api_app_1_permissions_ORGANIZATIONHOOKS_e organization_hooksapp_1_permissions_FromString(char* organization_hooks){
    int stringToReturn = 0;
    char *organization_hooksArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(organization_hooksArray) / sizeof(organization_hooksArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(organization_hooks, organization_hooksArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* organization_packagesapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_ORGANIZATIONPACKAGES_e organization_packages) {
    char* organization_packagesArray[] =  { "NULL", "read", "write" };
	return organization_packagesArray[organization_packages];
}

github_v3_rest_api_app_1_permissions_ORGANIZATIONPACKAGES_e organization_packagesapp_1_permissions_FromString(char* organization_packages){
    int stringToReturn = 0;
    char *organization_packagesArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(organization_packagesArray) / sizeof(organization_packagesArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(organization_packages, organization_packagesArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* organization_planapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_ORGANIZATIONPLAN_e organization_plan) {
    char* organization_planArray[] =  { "NULL", "read", "write" };
	return organization_planArray[organization_plan];
}

github_v3_rest_api_app_1_permissions_ORGANIZATIONPLAN_e organization_planapp_1_permissions_FromString(char* organization_plan){
    int stringToReturn = 0;
    char *organization_planArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(organization_planArray) / sizeof(organization_planArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(organization_plan, organization_planArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* organization_projectsapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_ORGANIZATIONPROJECTS_e organization_projects) {
    char* organization_projectsArray[] =  { "NULL", "read", "write" };
	return organization_projectsArray[organization_projects];
}

github_v3_rest_api_app_1_permissions_ORGANIZATIONPROJECTS_e organization_projectsapp_1_permissions_FromString(char* organization_projects){
    int stringToReturn = 0;
    char *organization_projectsArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(organization_projectsArray) / sizeof(organization_projectsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(organization_projects, organization_projectsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* organization_secretsapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_ORGANIZATIONSECRETS_e organization_secrets) {
    char* organization_secretsArray[] =  { "NULL", "read", "write" };
	return organization_secretsArray[organization_secrets];
}

github_v3_rest_api_app_1_permissions_ORGANIZATIONSECRETS_e organization_secretsapp_1_permissions_FromString(char* organization_secrets){
    int stringToReturn = 0;
    char *organization_secretsArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(organization_secretsArray) / sizeof(organization_secretsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(organization_secrets, organization_secretsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* organization_self_hosted_runnersapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_ORGANIZATIONSELFHOSTEDRUNNERS_e organization_self_hosted_runners) {
    char* organization_self_hosted_runnersArray[] =  { "NULL", "read", "write" };
	return organization_self_hosted_runnersArray[organization_self_hosted_runners];
}

github_v3_rest_api_app_1_permissions_ORGANIZATIONSELFHOSTEDRUNNERS_e organization_self_hosted_runnersapp_1_permissions_FromString(char* organization_self_hosted_runners){
    int stringToReturn = 0;
    char *organization_self_hosted_runnersArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(organization_self_hosted_runnersArray) / sizeof(organization_self_hosted_runnersArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(organization_self_hosted_runners, organization_self_hosted_runnersArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* organization_user_blockingapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_ORGANIZATIONUSERBLOCKING_e organization_user_blocking) {
    char* organization_user_blockingArray[] =  { "NULL", "read", "write" };
	return organization_user_blockingArray[organization_user_blocking];
}

github_v3_rest_api_app_1_permissions_ORGANIZATIONUSERBLOCKING_e organization_user_blockingapp_1_permissions_FromString(char* organization_user_blocking){
    int stringToReturn = 0;
    char *organization_user_blockingArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(organization_user_blockingArray) / sizeof(organization_user_blockingArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(organization_user_blocking, organization_user_blockingArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* packagesapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_PACKAGES_e packages) {
    char* packagesArray[] =  { "NULL", "read", "write" };
	return packagesArray[packages];
}

github_v3_rest_api_app_1_permissions_PACKAGES_e packagesapp_1_permissions_FromString(char* packages){
    int stringToReturn = 0;
    char *packagesArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(packagesArray) / sizeof(packagesArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(packages, packagesArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* pagesapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_PAGES_e pages) {
    char* pagesArray[] =  { "NULL", "read", "write" };
	return pagesArray[pages];
}

github_v3_rest_api_app_1_permissions_PAGES_e pagesapp_1_permissions_FromString(char* pages){
    int stringToReturn = 0;
    char *pagesArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(pagesArray) / sizeof(pagesArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(pages, pagesArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* pull_requestsapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_PULLREQUESTS_e pull_requests) {
    char* pull_requestsArray[] =  { "NULL", "read", "write" };
	return pull_requestsArray[pull_requests];
}

github_v3_rest_api_app_1_permissions_PULLREQUESTS_e pull_requestsapp_1_permissions_FromString(char* pull_requests){
    int stringToReturn = 0;
    char *pull_requestsArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(pull_requestsArray) / sizeof(pull_requestsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(pull_requests, pull_requestsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* repository_hooksapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_REPOSITORYHOOKS_e repository_hooks) {
    char* repository_hooksArray[] =  { "NULL", "read", "write" };
	return repository_hooksArray[repository_hooks];
}

github_v3_rest_api_app_1_permissions_REPOSITORYHOOKS_e repository_hooksapp_1_permissions_FromString(char* repository_hooks){
    int stringToReturn = 0;
    char *repository_hooksArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(repository_hooksArray) / sizeof(repository_hooksArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(repository_hooks, repository_hooksArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* repository_projectsapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_REPOSITORYPROJECTS_e repository_projects) {
    char* repository_projectsArray[] =  { "NULL", "read", "write" };
	return repository_projectsArray[repository_projects];
}

github_v3_rest_api_app_1_permissions_REPOSITORYPROJECTS_e repository_projectsapp_1_permissions_FromString(char* repository_projects){
    int stringToReturn = 0;
    char *repository_projectsArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(repository_projectsArray) / sizeof(repository_projectsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(repository_projects, repository_projectsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* secret_scanning_alertsapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_SECRETSCANNINGALERTS_e secret_scanning_alerts) {
    char* secret_scanning_alertsArray[] =  { "NULL", "read", "write" };
	return secret_scanning_alertsArray[secret_scanning_alerts];
}

github_v3_rest_api_app_1_permissions_SECRETSCANNINGALERTS_e secret_scanning_alertsapp_1_permissions_FromString(char* secret_scanning_alerts){
    int stringToReturn = 0;
    char *secret_scanning_alertsArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(secret_scanning_alertsArray) / sizeof(secret_scanning_alertsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(secret_scanning_alerts, secret_scanning_alertsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* secretsapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_SECRETS_e secrets) {
    char* secretsArray[] =  { "NULL", "read", "write" };
	return secretsArray[secrets];
}

github_v3_rest_api_app_1_permissions_SECRETS_e secretsapp_1_permissions_FromString(char* secrets){
    int stringToReturn = 0;
    char *secretsArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(secretsArray) / sizeof(secretsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(secrets, secretsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* security_eventsapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_SECURITYEVENTS_e security_events) {
    char* security_eventsArray[] =  { "NULL", "read", "write" };
	return security_eventsArray[security_events];
}

github_v3_rest_api_app_1_permissions_SECURITYEVENTS_e security_eventsapp_1_permissions_FromString(char* security_events){
    int stringToReturn = 0;
    char *security_eventsArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(security_eventsArray) / sizeof(security_eventsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(security_events, security_eventsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* security_scanning_alertapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_SECURITYSCANNINGALERT_e security_scanning_alert) {
    char* security_scanning_alertArray[] =  { "NULL", "read", "write" };
	return security_scanning_alertArray[security_scanning_alert];
}

github_v3_rest_api_app_1_permissions_SECURITYSCANNINGALERT_e security_scanning_alertapp_1_permissions_FromString(char* security_scanning_alert){
    int stringToReturn = 0;
    char *security_scanning_alertArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(security_scanning_alertArray) / sizeof(security_scanning_alertArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(security_scanning_alert, security_scanning_alertArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* single_fileapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_SINGLEFILE_e single_file) {
    char* single_fileArray[] =  { "NULL", "read", "write" };
	return single_fileArray[single_file];
}

github_v3_rest_api_app_1_permissions_SINGLEFILE_e single_fileapp_1_permissions_FromString(char* single_file){
    int stringToReturn = 0;
    char *single_fileArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(single_fileArray) / sizeof(single_fileArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(single_file, single_fileArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* statusesapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_STATUSES_e statuses) {
    char* statusesArray[] =  { "NULL", "read", "write" };
	return statusesArray[statuses];
}

github_v3_rest_api_app_1_permissions_STATUSES_e statusesapp_1_permissions_FromString(char* statuses){
    int stringToReturn = 0;
    char *statusesArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(statusesArray) / sizeof(statusesArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(statuses, statusesArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* team_discussionsapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_TEAMDISCUSSIONS_e team_discussions) {
    char* team_discussionsArray[] =  { "NULL", "read", "write" };
	return team_discussionsArray[team_discussions];
}

github_v3_rest_api_app_1_permissions_TEAMDISCUSSIONS_e team_discussionsapp_1_permissions_FromString(char* team_discussions){
    int stringToReturn = 0;
    char *team_discussionsArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(team_discussionsArray) / sizeof(team_discussionsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(team_discussions, team_discussionsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* vulnerability_alertsapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_VULNERABILITYALERTS_e vulnerability_alerts) {
    char* vulnerability_alertsArray[] =  { "NULL", "read", "write" };
	return vulnerability_alertsArray[vulnerability_alerts];
}

github_v3_rest_api_app_1_permissions_VULNERABILITYALERTS_e vulnerability_alertsapp_1_permissions_FromString(char* vulnerability_alerts){
    int stringToReturn = 0;
    char *vulnerability_alertsArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(vulnerability_alertsArray) / sizeof(vulnerability_alertsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(vulnerability_alerts, vulnerability_alertsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* workflowsapp_1_permissions_ToString(github_v3_rest_api_app_1_permissions_WORKFLOWS_e workflows) {
    char* workflowsArray[] =  { "NULL", "read", "write" };
	return workflowsArray[workflows];
}

github_v3_rest_api_app_1_permissions_WORKFLOWS_e workflowsapp_1_permissions_FromString(char* workflows){
    int stringToReturn = 0;
    char *workflowsArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(workflowsArray) / sizeof(workflowsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(workflows, workflowsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

app_1_permissions_t *app_1_permissions_create(
    github_v3_rest_api_app_1_permissions_ACTIONS_e actions,
    github_v3_rest_api_app_1_permissions_ADMINISTRATION_e administration,
    github_v3_rest_api_app_1_permissions_CHECKS_e checks,
    github_v3_rest_api_app_1_permissions_CONTENTREFERENCES_e content_references,
    github_v3_rest_api_app_1_permissions_CONTENTS_e contents,
    github_v3_rest_api_app_1_permissions_DEPLOYMENTS_e deployments,
    github_v3_rest_api_app_1_permissions_DISCUSSIONS_e discussions,
    github_v3_rest_api_app_1_permissions_EMAILS_e emails,
    github_v3_rest_api_app_1_permissions_ENVIRONMENTS_e environments,
    github_v3_rest_api_app_1_permissions_ISSUES_e issues,
    github_v3_rest_api_app_1_permissions_KEYS_e keys,
    github_v3_rest_api_app_1_permissions_MEMBERS_e members,
    github_v3_rest_api_app_1_permissions_METADATA_e metadata,
    github_v3_rest_api_app_1_permissions_ORGANIZATIONADMINISTRATION_e organization_administration,
    github_v3_rest_api_app_1_permissions_ORGANIZATIONHOOKS_e organization_hooks,
    github_v3_rest_api_app_1_permissions_ORGANIZATIONPACKAGES_e organization_packages,
    github_v3_rest_api_app_1_permissions_ORGANIZATIONPLAN_e organization_plan,
    github_v3_rest_api_app_1_permissions_ORGANIZATIONPROJECTS_e organization_projects,
    github_v3_rest_api_app_1_permissions_ORGANIZATIONSECRETS_e organization_secrets,
    github_v3_rest_api_app_1_permissions_ORGANIZATIONSELFHOSTEDRUNNERS_e organization_self_hosted_runners,
    github_v3_rest_api_app_1_permissions_ORGANIZATIONUSERBLOCKING_e organization_user_blocking,
    github_v3_rest_api_app_1_permissions_PACKAGES_e packages,
    github_v3_rest_api_app_1_permissions_PAGES_e pages,
    github_v3_rest_api_app_1_permissions_PULLREQUESTS_e pull_requests,
    github_v3_rest_api_app_1_permissions_REPOSITORYHOOKS_e repository_hooks,
    github_v3_rest_api_app_1_permissions_REPOSITORYPROJECTS_e repository_projects,
    github_v3_rest_api_app_1_permissions_SECRETSCANNINGALERTS_e secret_scanning_alerts,
    github_v3_rest_api_app_1_permissions_SECRETS_e secrets,
    github_v3_rest_api_app_1_permissions_SECURITYEVENTS_e security_events,
    github_v3_rest_api_app_1_permissions_SECURITYSCANNINGALERT_e security_scanning_alert,
    github_v3_rest_api_app_1_permissions_SINGLEFILE_e single_file,
    github_v3_rest_api_app_1_permissions_STATUSES_e statuses,
    github_v3_rest_api_app_1_permissions_TEAMDISCUSSIONS_e team_discussions,
    github_v3_rest_api_app_1_permissions_VULNERABILITYALERTS_e vulnerability_alerts,
    github_v3_rest_api_app_1_permissions_WORKFLOWS_e workflows
    ) {
    app_1_permissions_t *app_1_permissions_local_var = malloc(sizeof(app_1_permissions_t));
    if (!app_1_permissions_local_var) {
        return NULL;
    }
    app_1_permissions_local_var->actions = actions;
    app_1_permissions_local_var->administration = administration;
    app_1_permissions_local_var->checks = checks;
    app_1_permissions_local_var->content_references = content_references;
    app_1_permissions_local_var->contents = contents;
    app_1_permissions_local_var->deployments = deployments;
    app_1_permissions_local_var->discussions = discussions;
    app_1_permissions_local_var->emails = emails;
    app_1_permissions_local_var->environments = environments;
    app_1_permissions_local_var->issues = issues;
    app_1_permissions_local_var->keys = keys;
    app_1_permissions_local_var->members = members;
    app_1_permissions_local_var->metadata = metadata;
    app_1_permissions_local_var->organization_administration = organization_administration;
    app_1_permissions_local_var->organization_hooks = organization_hooks;
    app_1_permissions_local_var->organization_packages = organization_packages;
    app_1_permissions_local_var->organization_plan = organization_plan;
    app_1_permissions_local_var->organization_projects = organization_projects;
    app_1_permissions_local_var->organization_secrets = organization_secrets;
    app_1_permissions_local_var->organization_self_hosted_runners = organization_self_hosted_runners;
    app_1_permissions_local_var->organization_user_blocking = organization_user_blocking;
    app_1_permissions_local_var->packages = packages;
    app_1_permissions_local_var->pages = pages;
    app_1_permissions_local_var->pull_requests = pull_requests;
    app_1_permissions_local_var->repository_hooks = repository_hooks;
    app_1_permissions_local_var->repository_projects = repository_projects;
    app_1_permissions_local_var->secret_scanning_alerts = secret_scanning_alerts;
    app_1_permissions_local_var->secrets = secrets;
    app_1_permissions_local_var->security_events = security_events;
    app_1_permissions_local_var->security_scanning_alert = security_scanning_alert;
    app_1_permissions_local_var->single_file = single_file;
    app_1_permissions_local_var->statuses = statuses;
    app_1_permissions_local_var->team_discussions = team_discussions;
    app_1_permissions_local_var->vulnerability_alerts = vulnerability_alerts;
    app_1_permissions_local_var->workflows = workflows;

    return app_1_permissions_local_var;
}


void app_1_permissions_free(app_1_permissions_t *app_1_permissions) {
    if(NULL == app_1_permissions){
        return ;
    }
    listEntry_t *listEntry;
    free(app_1_permissions);
}

cJSON *app_1_permissions_convertToJSON(app_1_permissions_t *app_1_permissions) {
    cJSON *item = cJSON_CreateObject();

    // app_1_permissions->actions
    if(app_1_permissions->actions != github_v3_rest_api_app_1_permissions_ACTIONS_NULL) {
    if(cJSON_AddStringToObject(item, "actions", actionsapp_1_permissions_ToString(app_1_permissions->actions)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->administration
    if(app_1_permissions->administration != github_v3_rest_api_app_1_permissions_ADMINISTRATION_NULL) {
    if(cJSON_AddStringToObject(item, "administration", administrationapp_1_permissions_ToString(app_1_permissions->administration)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->checks
    if(app_1_permissions->checks != github_v3_rest_api_app_1_permissions_CHECKS_NULL) {
    if(cJSON_AddStringToObject(item, "checks", checksapp_1_permissions_ToString(app_1_permissions->checks)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->content_references
    if(app_1_permissions->content_references != github_v3_rest_api_app_1_permissions_CONTENTREFERENCES_NULL) {
    if(cJSON_AddStringToObject(item, "content_references", content_referencesapp_1_permissions_ToString(app_1_permissions->content_references)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->contents
    if(app_1_permissions->contents != github_v3_rest_api_app_1_permissions_CONTENTS_NULL) {
    if(cJSON_AddStringToObject(item, "contents", contentsapp_1_permissions_ToString(app_1_permissions->contents)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->deployments
    if(app_1_permissions->deployments != github_v3_rest_api_app_1_permissions_DEPLOYMENTS_NULL) {
    if(cJSON_AddStringToObject(item, "deployments", deploymentsapp_1_permissions_ToString(app_1_permissions->deployments)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->discussions
    if(app_1_permissions->discussions != github_v3_rest_api_app_1_permissions_DISCUSSIONS_NULL) {
    if(cJSON_AddStringToObject(item, "discussions", discussionsapp_1_permissions_ToString(app_1_permissions->discussions)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->emails
    if(app_1_permissions->emails != github_v3_rest_api_app_1_permissions_EMAILS_NULL) {
    if(cJSON_AddStringToObject(item, "emails", emailsapp_1_permissions_ToString(app_1_permissions->emails)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->environments
    if(app_1_permissions->environments != github_v3_rest_api_app_1_permissions_ENVIRONMENTS_NULL) {
    if(cJSON_AddStringToObject(item, "environments", environmentsapp_1_permissions_ToString(app_1_permissions->environments)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->issues
    if(app_1_permissions->issues != github_v3_rest_api_app_1_permissions_ISSUES_NULL) {
    if(cJSON_AddStringToObject(item, "issues", issuesapp_1_permissions_ToString(app_1_permissions->issues)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->keys
    if(app_1_permissions->keys != github_v3_rest_api_app_1_permissions_KEYS_NULL) {
    if(cJSON_AddStringToObject(item, "keys", keysapp_1_permissions_ToString(app_1_permissions->keys)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->members
    if(app_1_permissions->members != github_v3_rest_api_app_1_permissions_MEMBERS_NULL) {
    if(cJSON_AddStringToObject(item, "members", membersapp_1_permissions_ToString(app_1_permissions->members)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->metadata
    if(app_1_permissions->metadata != github_v3_rest_api_app_1_permissions_METADATA_NULL) {
    if(cJSON_AddStringToObject(item, "metadata", metadataapp_1_permissions_ToString(app_1_permissions->metadata)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->organization_administration
    if(app_1_permissions->organization_administration != github_v3_rest_api_app_1_permissions_ORGANIZATIONADMINISTRATION_NULL) {
    if(cJSON_AddStringToObject(item, "organization_administration", organization_administrationapp_1_permissions_ToString(app_1_permissions->organization_administration)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->organization_hooks
    if(app_1_permissions->organization_hooks != github_v3_rest_api_app_1_permissions_ORGANIZATIONHOOKS_NULL) {
    if(cJSON_AddStringToObject(item, "organization_hooks", organization_hooksapp_1_permissions_ToString(app_1_permissions->organization_hooks)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->organization_packages
    if(app_1_permissions->organization_packages != github_v3_rest_api_app_1_permissions_ORGANIZATIONPACKAGES_NULL) {
    if(cJSON_AddStringToObject(item, "organization_packages", organization_packagesapp_1_permissions_ToString(app_1_permissions->organization_packages)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->organization_plan
    if(app_1_permissions->organization_plan != github_v3_rest_api_app_1_permissions_ORGANIZATIONPLAN_NULL) {
    if(cJSON_AddStringToObject(item, "organization_plan", organization_planapp_1_permissions_ToString(app_1_permissions->organization_plan)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->organization_projects
    if(app_1_permissions->organization_projects != github_v3_rest_api_app_1_permissions_ORGANIZATIONPROJECTS_NULL) {
    if(cJSON_AddStringToObject(item, "organization_projects", organization_projectsapp_1_permissions_ToString(app_1_permissions->organization_projects)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->organization_secrets
    if(app_1_permissions->organization_secrets != github_v3_rest_api_app_1_permissions_ORGANIZATIONSECRETS_NULL) {
    if(cJSON_AddStringToObject(item, "organization_secrets", organization_secretsapp_1_permissions_ToString(app_1_permissions->organization_secrets)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->organization_self_hosted_runners
    if(app_1_permissions->organization_self_hosted_runners != github_v3_rest_api_app_1_permissions_ORGANIZATIONSELFHOSTEDRUNNERS_NULL) {
    if(cJSON_AddStringToObject(item, "organization_self_hosted_runners", organization_self_hosted_runnersapp_1_permissions_ToString(app_1_permissions->organization_self_hosted_runners)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->organization_user_blocking
    if(app_1_permissions->organization_user_blocking != github_v3_rest_api_app_1_permissions_ORGANIZATIONUSERBLOCKING_NULL) {
    if(cJSON_AddStringToObject(item, "organization_user_blocking", organization_user_blockingapp_1_permissions_ToString(app_1_permissions->organization_user_blocking)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->packages
    if(app_1_permissions->packages != github_v3_rest_api_app_1_permissions_PACKAGES_NULL) {
    if(cJSON_AddStringToObject(item, "packages", packagesapp_1_permissions_ToString(app_1_permissions->packages)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->pages
    if(app_1_permissions->pages != github_v3_rest_api_app_1_permissions_PAGES_NULL) {
    if(cJSON_AddStringToObject(item, "pages", pagesapp_1_permissions_ToString(app_1_permissions->pages)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->pull_requests
    if(app_1_permissions->pull_requests != github_v3_rest_api_app_1_permissions_PULLREQUESTS_NULL) {
    if(cJSON_AddStringToObject(item, "pull_requests", pull_requestsapp_1_permissions_ToString(app_1_permissions->pull_requests)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->repository_hooks
    if(app_1_permissions->repository_hooks != github_v3_rest_api_app_1_permissions_REPOSITORYHOOKS_NULL) {
    if(cJSON_AddStringToObject(item, "repository_hooks", repository_hooksapp_1_permissions_ToString(app_1_permissions->repository_hooks)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->repository_projects
    if(app_1_permissions->repository_projects != github_v3_rest_api_app_1_permissions_REPOSITORYPROJECTS_NULL) {
    if(cJSON_AddStringToObject(item, "repository_projects", repository_projectsapp_1_permissions_ToString(app_1_permissions->repository_projects)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->secret_scanning_alerts
    if(app_1_permissions->secret_scanning_alerts != github_v3_rest_api_app_1_permissions_SECRETSCANNINGALERTS_NULL) {
    if(cJSON_AddStringToObject(item, "secret_scanning_alerts", secret_scanning_alertsapp_1_permissions_ToString(app_1_permissions->secret_scanning_alerts)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->secrets
    if(app_1_permissions->secrets != github_v3_rest_api_app_1_permissions_SECRETS_NULL) {
    if(cJSON_AddStringToObject(item, "secrets", secretsapp_1_permissions_ToString(app_1_permissions->secrets)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->security_events
    if(app_1_permissions->security_events != github_v3_rest_api_app_1_permissions_SECURITYEVENTS_NULL) {
    if(cJSON_AddStringToObject(item, "security_events", security_eventsapp_1_permissions_ToString(app_1_permissions->security_events)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->security_scanning_alert
    if(app_1_permissions->security_scanning_alert != github_v3_rest_api_app_1_permissions_SECURITYSCANNINGALERT_NULL) {
    if(cJSON_AddStringToObject(item, "security_scanning_alert", security_scanning_alertapp_1_permissions_ToString(app_1_permissions->security_scanning_alert)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->single_file
    if(app_1_permissions->single_file != github_v3_rest_api_app_1_permissions_SINGLEFILE_NULL) {
    if(cJSON_AddStringToObject(item, "single_file", single_fileapp_1_permissions_ToString(app_1_permissions->single_file)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->statuses
    if(app_1_permissions->statuses != github_v3_rest_api_app_1_permissions_STATUSES_NULL) {
    if(cJSON_AddStringToObject(item, "statuses", statusesapp_1_permissions_ToString(app_1_permissions->statuses)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->team_discussions
    if(app_1_permissions->team_discussions != github_v3_rest_api_app_1_permissions_TEAMDISCUSSIONS_NULL) {
    if(cJSON_AddStringToObject(item, "team_discussions", team_discussionsapp_1_permissions_ToString(app_1_permissions->team_discussions)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->vulnerability_alerts
    if(app_1_permissions->vulnerability_alerts != github_v3_rest_api_app_1_permissions_VULNERABILITYALERTS_NULL) {
    if(cJSON_AddStringToObject(item, "vulnerability_alerts", vulnerability_alertsapp_1_permissions_ToString(app_1_permissions->vulnerability_alerts)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // app_1_permissions->workflows
    if(app_1_permissions->workflows != github_v3_rest_api_app_1_permissions_WORKFLOWS_NULL) {
    if(cJSON_AddStringToObject(item, "workflows", workflowsapp_1_permissions_ToString(app_1_permissions->workflows)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

app_1_permissions_t *app_1_permissions_parseFromJSON(cJSON *app_1_permissionsJSON){

    app_1_permissions_t *app_1_permissions_local_var = NULL;

    // app_1_permissions->actions
    cJSON *actions = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "actions");
    github_v3_rest_api_app_1_permissions_ACTIONS_e actionsVariable;
    if (actions) { 
    if(!cJSON_IsString(actions))
    {
    goto end; //Enum
    }
    actionsVariable = actionsapp_1_permissions_FromString(actions->valuestring);
    }

    // app_1_permissions->administration
    cJSON *administration = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "administration");
    github_v3_rest_api_app_1_permissions_ADMINISTRATION_e administrationVariable;
    if (administration) { 
    if(!cJSON_IsString(administration))
    {
    goto end; //Enum
    }
    administrationVariable = administrationapp_1_permissions_FromString(administration->valuestring);
    }

    // app_1_permissions->checks
    cJSON *checks = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "checks");
    github_v3_rest_api_app_1_permissions_CHECKS_e checksVariable;
    if (checks) { 
    if(!cJSON_IsString(checks))
    {
    goto end; //Enum
    }
    checksVariable = checksapp_1_permissions_FromString(checks->valuestring);
    }

    // app_1_permissions->content_references
    cJSON *content_references = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "content_references");
    github_v3_rest_api_app_1_permissions_CONTENTREFERENCES_e content_referencesVariable;
    if (content_references) { 
    if(!cJSON_IsString(content_references))
    {
    goto end; //Enum
    }
    content_referencesVariable = content_referencesapp_1_permissions_FromString(content_references->valuestring);
    }

    // app_1_permissions->contents
    cJSON *contents = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "contents");
    github_v3_rest_api_app_1_permissions_CONTENTS_e contentsVariable;
    if (contents) { 
    if(!cJSON_IsString(contents))
    {
    goto end; //Enum
    }
    contentsVariable = contentsapp_1_permissions_FromString(contents->valuestring);
    }

    // app_1_permissions->deployments
    cJSON *deployments = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "deployments");
    github_v3_rest_api_app_1_permissions_DEPLOYMENTS_e deploymentsVariable;
    if (deployments) { 
    if(!cJSON_IsString(deployments))
    {
    goto end; //Enum
    }
    deploymentsVariable = deploymentsapp_1_permissions_FromString(deployments->valuestring);
    }

    // app_1_permissions->discussions
    cJSON *discussions = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "discussions");
    github_v3_rest_api_app_1_permissions_DISCUSSIONS_e discussionsVariable;
    if (discussions) { 
    if(!cJSON_IsString(discussions))
    {
    goto end; //Enum
    }
    discussionsVariable = discussionsapp_1_permissions_FromString(discussions->valuestring);
    }

    // app_1_permissions->emails
    cJSON *emails = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "emails");
    github_v3_rest_api_app_1_permissions_EMAILS_e emailsVariable;
    if (emails) { 
    if(!cJSON_IsString(emails))
    {
    goto end; //Enum
    }
    emailsVariable = emailsapp_1_permissions_FromString(emails->valuestring);
    }

    // app_1_permissions->environments
    cJSON *environments = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "environments");
    github_v3_rest_api_app_1_permissions_ENVIRONMENTS_e environmentsVariable;
    if (environments) { 
    if(!cJSON_IsString(environments))
    {
    goto end; //Enum
    }
    environmentsVariable = environmentsapp_1_permissions_FromString(environments->valuestring);
    }

    // app_1_permissions->issues
    cJSON *issues = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "issues");
    github_v3_rest_api_app_1_permissions_ISSUES_e issuesVariable;
    if (issues) { 
    if(!cJSON_IsString(issues))
    {
    goto end; //Enum
    }
    issuesVariable = issuesapp_1_permissions_FromString(issues->valuestring);
    }

    // app_1_permissions->keys
    cJSON *keys = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "keys");
    github_v3_rest_api_app_1_permissions_KEYS_e keysVariable;
    if (keys) { 
    if(!cJSON_IsString(keys))
    {
    goto end; //Enum
    }
    keysVariable = keysapp_1_permissions_FromString(keys->valuestring);
    }

    // app_1_permissions->members
    cJSON *members = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "members");
    github_v3_rest_api_app_1_permissions_MEMBERS_e membersVariable;
    if (members) { 
    if(!cJSON_IsString(members))
    {
    goto end; //Enum
    }
    membersVariable = membersapp_1_permissions_FromString(members->valuestring);
    }

    // app_1_permissions->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "metadata");
    github_v3_rest_api_app_1_permissions_METADATA_e metadataVariable;
    if (metadata) { 
    if(!cJSON_IsString(metadata))
    {
    goto end; //Enum
    }
    metadataVariable = metadataapp_1_permissions_FromString(metadata->valuestring);
    }

    // app_1_permissions->organization_administration
    cJSON *organization_administration = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "organization_administration");
    github_v3_rest_api_app_1_permissions_ORGANIZATIONADMINISTRATION_e organization_administrationVariable;
    if (organization_administration) { 
    if(!cJSON_IsString(organization_administration))
    {
    goto end; //Enum
    }
    organization_administrationVariable = organization_administrationapp_1_permissions_FromString(organization_administration->valuestring);
    }

    // app_1_permissions->organization_hooks
    cJSON *organization_hooks = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "organization_hooks");
    github_v3_rest_api_app_1_permissions_ORGANIZATIONHOOKS_e organization_hooksVariable;
    if (organization_hooks) { 
    if(!cJSON_IsString(organization_hooks))
    {
    goto end; //Enum
    }
    organization_hooksVariable = organization_hooksapp_1_permissions_FromString(organization_hooks->valuestring);
    }

    // app_1_permissions->organization_packages
    cJSON *organization_packages = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "organization_packages");
    github_v3_rest_api_app_1_permissions_ORGANIZATIONPACKAGES_e organization_packagesVariable;
    if (organization_packages) { 
    if(!cJSON_IsString(organization_packages))
    {
    goto end; //Enum
    }
    organization_packagesVariable = organization_packagesapp_1_permissions_FromString(organization_packages->valuestring);
    }

    // app_1_permissions->organization_plan
    cJSON *organization_plan = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "organization_plan");
    github_v3_rest_api_app_1_permissions_ORGANIZATIONPLAN_e organization_planVariable;
    if (organization_plan) { 
    if(!cJSON_IsString(organization_plan))
    {
    goto end; //Enum
    }
    organization_planVariable = organization_planapp_1_permissions_FromString(organization_plan->valuestring);
    }

    // app_1_permissions->organization_projects
    cJSON *organization_projects = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "organization_projects");
    github_v3_rest_api_app_1_permissions_ORGANIZATIONPROJECTS_e organization_projectsVariable;
    if (organization_projects) { 
    if(!cJSON_IsString(organization_projects))
    {
    goto end; //Enum
    }
    organization_projectsVariable = organization_projectsapp_1_permissions_FromString(organization_projects->valuestring);
    }

    // app_1_permissions->organization_secrets
    cJSON *organization_secrets = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "organization_secrets");
    github_v3_rest_api_app_1_permissions_ORGANIZATIONSECRETS_e organization_secretsVariable;
    if (organization_secrets) { 
    if(!cJSON_IsString(organization_secrets))
    {
    goto end; //Enum
    }
    organization_secretsVariable = organization_secretsapp_1_permissions_FromString(organization_secrets->valuestring);
    }

    // app_1_permissions->organization_self_hosted_runners
    cJSON *organization_self_hosted_runners = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "organization_self_hosted_runners");
    github_v3_rest_api_app_1_permissions_ORGANIZATIONSELFHOSTEDRUNNERS_e organization_self_hosted_runnersVariable;
    if (organization_self_hosted_runners) { 
    if(!cJSON_IsString(organization_self_hosted_runners))
    {
    goto end; //Enum
    }
    organization_self_hosted_runnersVariable = organization_self_hosted_runnersapp_1_permissions_FromString(organization_self_hosted_runners->valuestring);
    }

    // app_1_permissions->organization_user_blocking
    cJSON *organization_user_blocking = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "organization_user_blocking");
    github_v3_rest_api_app_1_permissions_ORGANIZATIONUSERBLOCKING_e organization_user_blockingVariable;
    if (organization_user_blocking) { 
    if(!cJSON_IsString(organization_user_blocking))
    {
    goto end; //Enum
    }
    organization_user_blockingVariable = organization_user_blockingapp_1_permissions_FromString(organization_user_blocking->valuestring);
    }

    // app_1_permissions->packages
    cJSON *packages = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "packages");
    github_v3_rest_api_app_1_permissions_PACKAGES_e packagesVariable;
    if (packages) { 
    if(!cJSON_IsString(packages))
    {
    goto end; //Enum
    }
    packagesVariable = packagesapp_1_permissions_FromString(packages->valuestring);
    }

    // app_1_permissions->pages
    cJSON *pages = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "pages");
    github_v3_rest_api_app_1_permissions_PAGES_e pagesVariable;
    if (pages) { 
    if(!cJSON_IsString(pages))
    {
    goto end; //Enum
    }
    pagesVariable = pagesapp_1_permissions_FromString(pages->valuestring);
    }

    // app_1_permissions->pull_requests
    cJSON *pull_requests = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "pull_requests");
    github_v3_rest_api_app_1_permissions_PULLREQUESTS_e pull_requestsVariable;
    if (pull_requests) { 
    if(!cJSON_IsString(pull_requests))
    {
    goto end; //Enum
    }
    pull_requestsVariable = pull_requestsapp_1_permissions_FromString(pull_requests->valuestring);
    }

    // app_1_permissions->repository_hooks
    cJSON *repository_hooks = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "repository_hooks");
    github_v3_rest_api_app_1_permissions_REPOSITORYHOOKS_e repository_hooksVariable;
    if (repository_hooks) { 
    if(!cJSON_IsString(repository_hooks))
    {
    goto end; //Enum
    }
    repository_hooksVariable = repository_hooksapp_1_permissions_FromString(repository_hooks->valuestring);
    }

    // app_1_permissions->repository_projects
    cJSON *repository_projects = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "repository_projects");
    github_v3_rest_api_app_1_permissions_REPOSITORYPROJECTS_e repository_projectsVariable;
    if (repository_projects) { 
    if(!cJSON_IsString(repository_projects))
    {
    goto end; //Enum
    }
    repository_projectsVariable = repository_projectsapp_1_permissions_FromString(repository_projects->valuestring);
    }

    // app_1_permissions->secret_scanning_alerts
    cJSON *secret_scanning_alerts = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "secret_scanning_alerts");
    github_v3_rest_api_app_1_permissions_SECRETSCANNINGALERTS_e secret_scanning_alertsVariable;
    if (secret_scanning_alerts) { 
    if(!cJSON_IsString(secret_scanning_alerts))
    {
    goto end; //Enum
    }
    secret_scanning_alertsVariable = secret_scanning_alertsapp_1_permissions_FromString(secret_scanning_alerts->valuestring);
    }

    // app_1_permissions->secrets
    cJSON *secrets = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "secrets");
    github_v3_rest_api_app_1_permissions_SECRETS_e secretsVariable;
    if (secrets) { 
    if(!cJSON_IsString(secrets))
    {
    goto end; //Enum
    }
    secretsVariable = secretsapp_1_permissions_FromString(secrets->valuestring);
    }

    // app_1_permissions->security_events
    cJSON *security_events = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "security_events");
    github_v3_rest_api_app_1_permissions_SECURITYEVENTS_e security_eventsVariable;
    if (security_events) { 
    if(!cJSON_IsString(security_events))
    {
    goto end; //Enum
    }
    security_eventsVariable = security_eventsapp_1_permissions_FromString(security_events->valuestring);
    }

    // app_1_permissions->security_scanning_alert
    cJSON *security_scanning_alert = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "security_scanning_alert");
    github_v3_rest_api_app_1_permissions_SECURITYSCANNINGALERT_e security_scanning_alertVariable;
    if (security_scanning_alert) { 
    if(!cJSON_IsString(security_scanning_alert))
    {
    goto end; //Enum
    }
    security_scanning_alertVariable = security_scanning_alertapp_1_permissions_FromString(security_scanning_alert->valuestring);
    }

    // app_1_permissions->single_file
    cJSON *single_file = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "single_file");
    github_v3_rest_api_app_1_permissions_SINGLEFILE_e single_fileVariable;
    if (single_file) { 
    if(!cJSON_IsString(single_file))
    {
    goto end; //Enum
    }
    single_fileVariable = single_fileapp_1_permissions_FromString(single_file->valuestring);
    }

    // app_1_permissions->statuses
    cJSON *statuses = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "statuses");
    github_v3_rest_api_app_1_permissions_STATUSES_e statusesVariable;
    if (statuses) { 
    if(!cJSON_IsString(statuses))
    {
    goto end; //Enum
    }
    statusesVariable = statusesapp_1_permissions_FromString(statuses->valuestring);
    }

    // app_1_permissions->team_discussions
    cJSON *team_discussions = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "team_discussions");
    github_v3_rest_api_app_1_permissions_TEAMDISCUSSIONS_e team_discussionsVariable;
    if (team_discussions) { 
    if(!cJSON_IsString(team_discussions))
    {
    goto end; //Enum
    }
    team_discussionsVariable = team_discussionsapp_1_permissions_FromString(team_discussions->valuestring);
    }

    // app_1_permissions->vulnerability_alerts
    cJSON *vulnerability_alerts = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "vulnerability_alerts");
    github_v3_rest_api_app_1_permissions_VULNERABILITYALERTS_e vulnerability_alertsVariable;
    if (vulnerability_alerts) { 
    if(!cJSON_IsString(vulnerability_alerts))
    {
    goto end; //Enum
    }
    vulnerability_alertsVariable = vulnerability_alertsapp_1_permissions_FromString(vulnerability_alerts->valuestring);
    }

    // app_1_permissions->workflows
    cJSON *workflows = cJSON_GetObjectItemCaseSensitive(app_1_permissionsJSON, "workflows");
    github_v3_rest_api_app_1_permissions_WORKFLOWS_e workflowsVariable;
    if (workflows) { 
    if(!cJSON_IsString(workflows))
    {
    goto end; //Enum
    }
    workflowsVariable = workflowsapp_1_permissions_FromString(workflows->valuestring);
    }


    app_1_permissions_local_var = app_1_permissions_create (
        actions ? actionsVariable : -1,
        administration ? administrationVariable : -1,
        checks ? checksVariable : -1,
        content_references ? content_referencesVariable : -1,
        contents ? contentsVariable : -1,
        deployments ? deploymentsVariable : -1,
        discussions ? discussionsVariable : -1,
        emails ? emailsVariable : -1,
        environments ? environmentsVariable : -1,
        issues ? issuesVariable : -1,
        keys ? keysVariable : -1,
        members ? membersVariable : -1,
        metadata ? metadataVariable : -1,
        organization_administration ? organization_administrationVariable : -1,
        organization_hooks ? organization_hooksVariable : -1,
        organization_packages ? organization_packagesVariable : -1,
        organization_plan ? organization_planVariable : -1,
        organization_projects ? organization_projectsVariable : -1,
        organization_secrets ? organization_secretsVariable : -1,
        organization_self_hosted_runners ? organization_self_hosted_runnersVariable : -1,
        organization_user_blocking ? organization_user_blockingVariable : -1,
        packages ? packagesVariable : -1,
        pages ? pagesVariable : -1,
        pull_requests ? pull_requestsVariable : -1,
        repository_hooks ? repository_hooksVariable : -1,
        repository_projects ? repository_projectsVariable : -1,
        secret_scanning_alerts ? secret_scanning_alertsVariable : -1,
        secrets ? secretsVariable : -1,
        security_events ? security_eventsVariable : -1,
        security_scanning_alert ? security_scanning_alertVariable : -1,
        single_file ? single_fileVariable : -1,
        statuses ? statusesVariable : -1,
        team_discussions ? team_discussionsVariable : -1,
        vulnerability_alerts ? vulnerability_alertsVariable : -1,
        workflows ? workflowsVariable : -1
        );

    return app_1_permissions_local_var;
end:
    return NULL;

}
