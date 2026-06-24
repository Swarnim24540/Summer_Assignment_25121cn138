# include<stdio.h>
int prime(int n)
{
    if(n<=1)
    return 0;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
        
        return 1;
}

int main()
{
    int x;
    printf("enter any numbers: ");
    scanf("%d",&x);
    
    if(prime(x))
    printf("number is prime");
    else
    printf("number is not prime");
    return 0;

}