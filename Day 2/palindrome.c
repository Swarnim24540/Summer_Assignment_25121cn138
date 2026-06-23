# include<stdio.h>

int main() {
    int n,d,temp,rev=0;
    printf("enter any no.");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(temp==rev)
    {
    printf("number is a palindrome number");
    }
    else
    {
    printf("number is not a palindrome number");
    }
    return 0;
}