# include<stdio.h>
# include<math.h>
int armstrong(int n)
{
    int temp,rem,sum,digits;
    digits=0, sum=0;
    temp=n;
    while(temp>0)
    {
        digits++;
        temp=temp/10;
    }

    temp=n;

    while(temp>0)
    {
      rem=temp%10;
      sum=sum + round(pow(rem,digits));
      temp=temp/10;
    }
     printf("sum=%d\n",sum);
     if(sum==n)
     return 1;
     else
     return 0;
}
int main()
{
    int x;
    printf("enter any number x: ");
    scanf("%d",&x);

    if(armstrong(x))
       printf("%d is an armstrong number",x);
    else 
       printf("%d is not an armstrong number",x);
       
       return 0;
}