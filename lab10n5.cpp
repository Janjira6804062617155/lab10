#include <stdio.h>
#include <string.h>

typedef struct {
    char loginname[64];
    char password[64];
} account;

typedef struct {
    char stdID[20];
    char nameSurname[25];
    account stdACC;
} hoststd;

int main() {
    hoststd cs[5] = {
        {"66-040626-2686-9", "MR.A", {"user1", "passwd1"}},
        {"66-040626-2687-7", "MR.B", {"user2", "passwd2"}},
        {"66-040626-2688-5", "MR.C", {"user3", "passwd3"}},
        {"66-040626-2689-3", "MR.D", {"user4", "passwd4"}},
        {"66-040626-2690-1", "MR.E", {"user5", "passwd5"}}
    };

    char inputLogin[64], inputPass[64];
    int i; int found = 0;

    printf("Enter loginname: ");
    scanf("%63s", inputLogin);  

    printf("Enter password: ");
    scanf("%63s", inputPass);

    for(i = 0; i < 5; i++) {
        if(strcmp(cs[i].stdACC.loginname, inputLogin) == 0 &&
           strcmp(cs[i].stdACC.password, inputPass) == 0) {
            found = 1;
            printf("Welcome %s (%s)\n", cs[i].nameSurname, cs[i].stdID);
            break;
        }
    }

    if(!found) {
        printf("Incorrect login or password\n");
    }

    return 0;
}
