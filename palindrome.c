#include <stdio.h>
void main()
{
    int rev=0,rem,n,s;
    printf("enter a number:");
    scanf("%d",&n);
    s=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==s)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
}
