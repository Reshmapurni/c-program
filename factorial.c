#include<stdio.h>
void main()
{
    int n,i;
    long int fact;
    fact=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is%ld",n,fact);
}
