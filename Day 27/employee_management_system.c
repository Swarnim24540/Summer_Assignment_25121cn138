#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    printf("Enter employee details:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n----- Employee Records -----\n");

    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID   : %d\n", emp[i].id);
        printf("Employee Name : %s\n", emp[i].name);
        printf("Salary        : %.2f\n", emp[i].salary);
    }

    return 0;
}
