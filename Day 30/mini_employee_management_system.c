#include <stdio.h>
#include <string.h>

int main()
{
    int id[100], n, i, choice, search, found = 0;
    char name[100][50];
    float salary[100];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    do
    {
        printf("\n----- Employee Management System -----");
        printf("\n1. Add Employee");
        printf("\n2. Display Employees");
        printf("\n3. Search Employee");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                for(i = 0; i < n; i++)
                {
                    printf("\nEmployee %d\n", i + 1);

                    printf("Enter Employee ID: ");
                    scanf("%d", &id[i]);

                    printf("Enter Employee Name: ");
                    scanf("%s", name[i]);

                    printf("Enter Salary: ");
                    scanf("%f", &salary[i]);
                }
                break;

            case 2:
                printf("\nEmployee Records\n");
                printf("ID\tName\tSalary\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%.2f\n", id[i], name[i], salary[i]);
                }
                break;

            case 3:
                printf("Enter Employee ID to Search: ");
                scanf("%d", &search);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(id[i] == search)
                    {
                        printf("\nEmployee Found\n");
                        printf("Employee ID : %d\n", id[i]);
                        printf("Name        : %s\n", name[i]);
                        printf("Salary      : %.2f\n", salary[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee Not Found\n");
                }
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