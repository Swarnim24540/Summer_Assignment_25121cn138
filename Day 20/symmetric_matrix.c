#include <stdio.h>

int main()
{
    int n, i, j, flag = 1;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    int A[n][n];

    printf("Enter the matrix elements:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (A[i][j] != A[j][i])
            {
                flag = 0;
                break;
            }
        }

        if (flag == 0)
        {
            break;
        }
    }

    if (flag == 1)
    {
        printf("The matrix is symmetric.");
    }
    else
    {
        printf("The matrix is not symmetric.");
    }

    return 0;
}