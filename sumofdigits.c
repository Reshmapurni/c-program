#include <stdio.h>
void main()
{
    int sum=0,rem,n;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("sum of digits is%d",sum);
}
