# include<stdio.h>
int main(){
int num,n,i;
int max_prime =1;
printf("enter any number : ");
scanf("%d",&num);
if (num < 2)
{
    printf("numbers less than 2 do not have a prime factor.\n");
    return 0;
}
n = num;
while(n%2==0)
{
  max_prime =2;
  n=n/2;  
}
for(i=3;i*i<=n;i+=2)
{
    while(n%i ==0)
    {
        max_prime =i;
        n=n/i;
    }
}
if(n>2)
{
    max_prime=n;
}
printf("the largest prime factor of %d is: %d\n",num,max_prime);
return 0;
}