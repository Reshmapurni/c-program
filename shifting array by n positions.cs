#include <stdio.h>
void main()
{
int a[10],b[10],n,i,p,c;;
printf("enter size:");
scanf("%d",&n);
printf("enter elements:");
for(i=0;i<n; i++)
{
scanf("%d",&a[i]);
}
printf("enter no.of positions to shift:");
scanf("%d",&p);
for(i=0;i<n;i++)
{
    c=(i+p)%n;
    b[c]=a[i];
}
printf("the new array is:");
for(i=0;i<n;i++)
{
    printf("%d",b[i]);
}
}
