# include<stdio.h>

int main() {
    int n,r, sum=0;
    printf("enter any no.");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum of given no. is : %d",sum);
    return 0;
}
