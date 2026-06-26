# include<stdio.h>
void fibonacci(int n)
{
    int n1,n2,next,i;
    n1=0,n2=1;
    for(i=1;i<=n;i++)
   {
    printf("%d ",n1);
    next=n1+n2;
    n1=n2;
    n2=next;
   }
}
int main()
{
    int n;
    printf("enter the number of terms: ");
    scanf("%d",&n);

    fibonacci(n);
       return 0;
}