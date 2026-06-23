# include<stdio.h>

int main() {
    int n,d, product=1;
    printf("enter any no.");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        product=product*d;
        n=n/10;
    }
    printf("product is : %d",product);
    return 0;
}