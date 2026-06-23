# include<stdio.h>

int main() {
    int n,i, sum=0;
    printf("enter any no.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum  is : %d",sum);
    return 0;
}