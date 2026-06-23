# include<stdio.h>
int main()
{
    int i,j,d,p,temp,sum,count;
    int start,end;
    printf("enter start and end of series: ");
    scanf("%d %d",&start,&end);
    if (start>end)
    {
     temp=start;
     start=end;
     end=temp;
    }
    printf("Armstrong numbers between %d and %d are: \n",start,end);
    for(i=start;i<=end;i++)
    {
    temp =i;
    count=0;

    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }

    temp=i;
    sum=0;
    while(temp!=0)
    {
    d=temp%10;
    int p=1;
    for(int j =1; j<=count; j++)
    {
        p = p*d;
    }
    sum = sum+p;
    temp= temp/10;
    }
    if (sum==i)
    {
    printf("%d ", i);
    }
}
    return 0;    
}