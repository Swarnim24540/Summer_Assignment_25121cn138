# include<stdio.h>
int main()
{
    int base,pow,res =1;
    printf("enter base and power: ");
    scanf("%d %d",&base,&pow);
    for(int i =1;i<=pow;i++)
    {
    res = res*base;
    }
    printf("%d^%d = %d",base,pow,res);
    return 0;
}