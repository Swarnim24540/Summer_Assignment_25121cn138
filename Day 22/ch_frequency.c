#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        count = 1;

        if(str[i] == ' ' || str[i] == '\n')
            continue;

        for(j = 0; j < i; j++)
        {
            if(str[i] == str[j])
                break;
        }

        if(j == i)
        {
            for(j = i + 1; str[j] != '\0'; j++)
            {
                if(str[i] == str[j])
                    count++;
            }

            printf("%c = %d\n", str[i], count);
        }
    }

    return 0;
}