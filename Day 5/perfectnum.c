# include<stdio.h>
int main()
{
    int i,n,temp,sum=0;
    printf("enter any number: ");
    scanf("%d",&n);
    temp=n;
    for(i=1; i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum = sum+i;
        }
    }
    if(sum==temp)
    printf("%d is a perfect number",temp);
    else
    printf("%d is not a perfect number", temp);
    return 0;
}