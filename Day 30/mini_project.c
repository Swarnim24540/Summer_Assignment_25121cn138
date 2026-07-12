#include <stdio.h>
#include <string.h>

int n;
char name[100][50];
char phone[100][15];

void addContact()
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("\nContact %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Phone Number: ");
        scanf("%s", phone[i]);
    }
}

void displayContact()
{
    int i;

    printf("\nName\t\tPhone Number\n");

    for(i = 0; i < n; i++)
    {
        printf("%s\t\t%s\n", name[i], phone[i]);
    }
}

void searchContact()
{
    int i, found = 0;
    char search[50];

    printf("Enter Name to Search: ");
    scanf("%s", search);

    for(i = 0; i < n; i++)
    {
        if(strcmp(name[i], search) == 0)
        {
            printf("\nContact Found\n");
            printf("Name : %s\n", name[i]);
            printf("Phone: %s\n", phone[i]);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Contact Not Found\n");
    }
}

int main()
{
    int choice;

    printf("Enter Number of Contacts: ");
    scanf("%d", &n);

    do
    {
        printf("\n----- Contact Management System -----");
        printf("\n1. Add Contacts");
        printf("\n2. Display Contacts");
        printf("\n3. Search Contact");
        printf("\n4. Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addContact();
                break;

            case 2:
                displayContact();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}