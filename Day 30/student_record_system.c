#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, choice, roll, found = 0;

    int rno[100];
    char name[100][50];
    float marks[100];

    printf("Enter number of students: ");
    scanf("%d", &n);

    do
    {
        printf("\n----- Student Record System -----");
        printf("\n1. Add Records");
        printf("\n2. Display Records");
        printf("\n3. Search Record");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                for(i = 0; i < n; i++)
                {
                    printf("\nStudent %d\n", i + 1);

                    printf("Enter Roll Number: ");
                    scanf("%d", &rno[i]);

                    printf("Enter Name: ");
                    scanf("%s", name[i]);

                    printf("Enter Marks: ");
                    scanf("%f", &marks[i]);
                }
                break;

            case 2:
                printf("\nStudent Records\n");
                printf("Roll\tName\tMarks\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%.2f\n", rno[i], name[i], marks[i]);
                }
                break;

            case 3:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(rno[i] == roll)
                    {
                        printf("\nRecord Found");
                        printf("\nRoll Number : %d", rno[i]);
                        printf("\nName        : %s", name[i]);
                        printf("\nMarks       : %.2f\n", marks[i]);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Record Not Found\n");
                }
                break;

            case 4:
                printf("Exiting...");
                break;

            default:
                printf("Invalid Choice");
        }

    } while(choice != 4);

    return 0;
}