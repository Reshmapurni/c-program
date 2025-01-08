#include <stdio.h>
void main()
{
int a[10],n,i;
printf("enter the size");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
}
