#include <stdio.h>

int main() {
    int age;
    int isCitizen;
    int isRegistered;

    printf("========================================\n");
    printf("       VOTING ELIGIBILITY SYSTEM        \n");
    printf("========================================\n");

    printf("\nEnter your age: ");
    scanf("%d", &age);

    printf("Are you a citizen? (1 = Yes, 0 = No): ");
    scanf("%d", &isCitizen);

    printf("Are you a registered voter? (1 = Yes, 0 = No): ");
    scanf("%d", &isRegistered);

    printf("\n===== VOTING ELIGIBILITY RESULT =====\n");
    printf("Age         : %d\n", age);
    printf("Citizen     : %s\n", isCitizen ? "Yes" : "No");
    printf("Registered  : %s\n", isRegistered ? "Yes" : "No");
    printf("--------------------------------------\n");

    if (age < 18) {
        printf("Status : NOT ELIGIBLE\n");
        printf("Reason : Age must be 18 or above.\n");
    } else if (isCitizen == 0) {
        printf("Status : NOT ELIGIBLE\n");
        printf("Reason : Must be a citizen.\n");
    } else if (isRegistered == 0) {
        printf("Status : NOT ELIGIBLE\n");
        printf("Reason : Must be a registered voter.\n");
    } else {
        printf("Status : ELIGIBLE TO VOTE\n");
        printf("Congratulations! You are qualified to cast your vote!\n");
    }

    printf("======================================\n");

    return 0;
}