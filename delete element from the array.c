#include <stdio.h>
void main()
{
int n,i,p,a[10],f;
printf("enter size:");
scanf("%d",&n);
printf("enter elements:");
for(i=0;i<n; i++)
{
scanf("%d",&a[i]);
}
printf("enter the deleted position:");
scanf("%d",&p);
if(p<n)
{
for(i=(p+1);i<n;i++)
{
    a[i-1]=a[i];
}
n--;
for(i=0;i<n; i++)
    {
        printf("  %d",a[i]);
    }
}
else
{
    printf("array consist %d elements they are", n);
    for(i=0;i<n; i++)
    {
        printf("  %d",a[i]);
        
    }
}
}
