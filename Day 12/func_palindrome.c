# include<stdio.h>
int palindrome(int n)
{
    int temp,d,rev=0;
    temp=n;
    while(n>0)
    {
    d = n%10;
    rev = rev*10 + d;
    n = n/10;
    }

    if(temp==rev)
       return 1;
    else
       return 0;
}
int main()
{
    int x;
    printf("enter any number x: ");
    scanf("%d",&x);

    if(palindrome(x))
       printf("no. is palindrome");
    else 
       printf("no. is not palindrome");
       
       return 0;
}