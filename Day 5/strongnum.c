# include<stdio.h>
int main()
{
    int n, i,temp,d,fact=1;
    int sum =0;
    printf("enter any numer n : ");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
    d = n%10;
    fact =1;

    for(i=1;i<=d;i++)
    {
        fact = fact*i;
    }
    sum = sum + fact;
    n = n/10;
    }
   if(temp==sum)
   printf("number is strong number");
   else
   printf("number is not strong number");

   return 0;
}
