#include <stdio.h>
void main()
{
    int arm=0,rem,n,s;
    printf("enter a number:");
    scanf("%d",&n);
    s=n;
    while(n>0)
    {
        rem=n%10;
        arm=arm+(rem*rem*rem);
        n=n/10;
    }
    if(arm==s)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not a armstrong number");
    }
}
