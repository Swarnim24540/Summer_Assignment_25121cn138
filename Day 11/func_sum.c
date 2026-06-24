# include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int x,y,s;
    printf("enter any two numbers: ");
    scanf("%d%d",&x,&y);
    s = sum(x,y);
    printf("sum = %d",s);

    return 0;

}