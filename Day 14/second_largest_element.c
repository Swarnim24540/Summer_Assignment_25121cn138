#include <stdio.h>

int main()
{
    int arr[100], n, i, key;
    int largest,secondlargest;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = secondlargest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
         secondlargest = largest;
         largest = arr[i];
        }
        else if(arr[i] > secondlargest && arr[i] != largest)
        {
            secondlargest = arr[i];
        }
    }

   printf("Second Largest Element= %d",secondlargest);

    return 0;
}