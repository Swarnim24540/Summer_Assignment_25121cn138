#include <stdio.h>
#include <string.h>

int main()
{
    int id[100], n, i, choice, search, found = 0;
    char title[100][50];
    char author[100][50];

    printf("Enter number of books: ");
    scanf("%d", &n);

    do
    {
        printf("\n----- Mini Library System -----");
        printf("\n1. Add Books");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                for(i = 0; i < n; i++)
                {
                    printf("\nBook %d\n", i + 1);

                    printf("Enter Book ID: ");
                    scanf("%d", &id[i]);

                    printf("Enter Book Title: ");
                    scanf("%s", title[i]);

                    printf("Enter Author Name: ");
                    scanf("%s", author[i]);
                }
                break;

            case 2:
                printf("\nBook Records\n");
                printf("ID\tTitle\tAuthor\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%s\n", id[i], title[i], author[i]);
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &search);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(id[i] == search)
                    {
                        printf("\nBook Found\n");
                        printf("Book ID : %d\n", id[i]);
                        printf("Title   : %s\n", title[i]);
                        printf("Author  : %s\n", author[i]);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book Not Found\n");
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