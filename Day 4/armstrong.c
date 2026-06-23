# include<stdio.h>
int main()
{
    int n,d,temp,sum=0;
    printf("enter any number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
    d=n%10;
    sum = sum + d*d*d;
    n = n/10;
    }
    if (sum==temp)
    printf("Number is armstrong number");
    else
    printf("number is not armstrong number");
    return 0;
    

}