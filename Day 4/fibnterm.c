# include<stdio.h>
int main()
{
    int n,i,t1,t2,next;
    t1=0;
    t2=1;
    printf("enter the value of n: ");
    scanf("%d",&n);
    if(n==1)
    printf("Nth fibonacci term is = 0");
    else if (n==2)
    printf("Nth fibonacci term is = 1");
    else
    {
    for(i=3;i<=n;i++)
    {
    next=t1+t2;
    t1=t2;
    t2=next;
    }
     printf("Nth fibonacci term is = %d\n",t2);
   }
    return 0;
}