#include <stdio.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank b;
    int choice;
    float amount;

    printf("===== BANK ACCOUNT SYSTEM =====\n");

    printf("Enter Account Number: ");
    scanf("%d", &b.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", b.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &b.balance);

    while (1)
    {
        printf("\n===== MENU =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Amount to Deposit: ");
                scanf("%f", &amount);

                b.balance = b.balance + amount;

                printf("Amount Deposited Successfully!\n");
                printf("Current Balance = %.2f\n", b.balance);
                break;

            case 2:
                printf("Enter Amount to Withdraw: ");
                scanf("%f", &amount);

                if (amount <= b.balance)
                {
                    b.balance = b.balance - amount;
                    printf("Amount Withdrawn Successfully!\n");
                    printf("Current Balance = %.2f\n", b.balance);
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 3:
                printf("\nAccount Number : %d\n", b.accNo);
                printf("Account Holder : %s\n", b.name);
                printf("Current Balance : %.2f\n", b.balance);
                break;

            case 4:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}