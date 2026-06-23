# include<stdio.h>
# include<math.h>
int main()
{
    int r,binary;
    int i=0,decimal=0;
    printf("enter a binary number: ");
    scanf("%d",&binary);

   while(binary!=0)
    {
        r = binary%10;
        decimal = decimal + r*pow(2,i);
        binary = binary/10;
        i++;
    }
   printf("Decimal = %d",decimal);
   
    return 0;
}