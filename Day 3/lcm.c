# include<stdio.h>
int main()
{
    int a,b,i,lcm;
    int gcd =1;
    printf ("enter any two numbers: ");
    scanf("%d%d",&a,&b);
    for(i=2;i<=a && i<=b; i++)
    if (a%i==0 && b%i==0)
    {
        gcd=i;
    }
    lcm = (a*b)/gcd;
    printf("LCM = %d",lcm);

    return 0;
}