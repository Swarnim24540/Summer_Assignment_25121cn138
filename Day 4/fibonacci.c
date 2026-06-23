# include<stdio.h>
int main()
{
    int n,i,t1,t2,next;
    t1=0;
    t2=1;
    printf("enter the number of terms to be printed: ");
    scanf("%d",&n);
    printf("Fibonacci series: ");
    printf("%d %d ",t1,t2);
    for(i=2;i<n;i++)
    {
    next=t1+t2;
    t1=t2;
    t2=next;
    printf("%d ", next);
    }

    return 0;
}