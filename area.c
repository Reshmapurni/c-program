#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float S,area;
    printf("enter a,b,c values:");
    scanf("%d%d%d",&a,&b,&c);
    S=(a+b+c)/2;
    area=sqrt(S*(S-a)*(S-b)*(S-c));
    printf("the area is %f",area);
}
