# include<stdio.h>
int factorial(int n)
{
  int fact =1;
  for(int i=1;i<=n;i++)
  {
    fact = fact*i;
  }
return fact;
}

int main()
{
    int x;
    printf("enter any numbers: ");
    scanf("%d",&x);
    
    printf("factorial = %d",factorial(x));
    return 0;

}