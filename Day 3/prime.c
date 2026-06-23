# include<stdio.h>

int main() {
    int n,i;
    printf("enter any no.");
    scanf("%d",&n);
    if(n==1 || n==0)
    printf("entered number is not prime");
    else
    {
        for(i=2;i<=n/2;i++)
        {
        if(n%i==0)
        {
        printf("number is not prime");
        return 0;
        }
    }
    printf("number is prime");

    }

    return 0;
}