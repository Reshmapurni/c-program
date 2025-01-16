#include <stdio.h>
void main()
{
int n,i,p,a[10],f,g,new;
printf("enter size:");
scanf("%d",&n);
printf("enter elements:");
for(i=0;i<n; i++)
{
scanf("%d",&a[i]);
}
printf("enter the insertion position:");
scanf("%d",&p);
if(p<n)
{
    printf("enter new element");
    scanf("%d",&new);
    f=a[p];
    a[p]=new;
    g=a[p+1];
    a[p+1]=f;
    for(i=(p+2);i<(n-1);i++)
    {
        f=a[i];
        a[i]=g;
        g=a[i+1];
        a[i+1]=f;
    }
    a[n]=g;
    for(i=0;i<=n; i++)
    {
        printf("  %d",a[i]);
        
    }
}
else
{
    printf("array consist %d elements enter the %d element", n-1,n);
    scanf("%d",&a[n]);
    for(i=0;i<=n; i++)
    {
        printf("  %d",a[i]);
        
    }
}
}
