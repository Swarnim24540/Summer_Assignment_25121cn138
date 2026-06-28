#include <stdio.h>

int findMissing(int arr[], int n)
{
    int i, sum = 0, total;

    for(i = 0; i < n - 1; i++)
    {
        sum = sum + arr[i];
    }

    total = n * (n + 1) / 2;
    return total - sum;
}

int main()
{
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements:\n", n - 1);

    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Missing number = %d", findMissing(arr, n));

    return 0;
}