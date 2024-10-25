#include <stdio.h>
#include<math.h>
int main() 
{
    int a,b,c;
    float d,r1,r2;
    printf("enter a,b,c values:");
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        printf("real and distnict");
        r1=-b+sqrt(d)/(2*a);
        r1=-b-sqrt(d)/(2*a);
        printf("the roots are %d %d",r1,r2);
    }
    else if(d<0)
    {
        printf("imaginary");
    }
    else
    {
        printf("real and equal");
        r1=r2=-b/(2*a);
        printf("roots are %d %d",r1,r2);
    }
    return 0;
}
