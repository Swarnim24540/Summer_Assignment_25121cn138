# include<stdio.h>

int main() {
   long int n,i, fact=1;
    printf("enter any no.");
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of given no. is : %ld",fact);
    return 0;
}