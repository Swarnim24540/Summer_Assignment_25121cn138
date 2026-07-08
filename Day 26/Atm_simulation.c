#include <stdio.h>
#include <stdlib.h>

#define CORRECT_PIN 1234

float balance = 5000.0;

void checkBalance() 
{
    printf("\nYour current balance is: %.2f\n", balance);
}

void deposit() 
{
    float amount;
    printf("\nEnter amount to deposit: ");
    scanf("%f", &amount);

    if (amount <= 0) 
    {
        printf("Invalid amount!\n");
        return;
    }

    balance += amount;
    printf("Deposit successful! New balance: %.2f\n", balance);
}

void withdraw() 
{
    float amount;
    printf("\nEnter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0) 
    {
        printf("Invalid amount!\n");
    }
     else if (amount > balance) 
    {
        printf("Insufficient balance!\n");
    } 
    else 
    {
        balance -= amount;
        printf("Withdrawal successful! New balance: %.2f\n", balance);
    }
}

int authenticate() 
{
    int pin, attempts = 3;

    while (attempts > 0) 
    {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &pin);

        if (pin == CORRECT_PIN) 
        {
            return 1;
        }
         else 
        {
            attempts--;
            printf("Incorrect PIN! Attempts remaining: %d\n", attempts);
        }
    }
    return 0;
}

int main() 
{
    int choice;

    printf("===== Welcome to the ATM =====\n");

    if (!authenticate()) 
    {
        printf("\nToo many incorrect attempts. Card blocked.\n");
        return 0;
    }

    printf("\nAuthentication successful!\n");

    do {
        printf("\n========= ATM MENU =========\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("=============================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("\nThank you for using our ATM. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    }
     while (choice != 4);

    return 0;
}