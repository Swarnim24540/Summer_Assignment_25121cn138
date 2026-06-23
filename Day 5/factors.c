# include<stdio.h>
int main()
{
    int n,i;
    printf("enter any number n : ");
    scanf("%d",&n);
    printf("the factors are %d are : ",n);
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
         printf("%d ",i);
        if(i!=n/i)
            {
                printf("%d ",n/i);
            }
         }
    }
    return 0;   
}