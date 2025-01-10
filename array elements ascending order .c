#include <stdio.h>
void main()
{
int n,i,j,a[10],f;
printf("enter size:");
scanf("%d",&n);
printf("enter elements:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=(i+1);j<n;j++)
    {
        if(a[i]>a[j])
        {
            f=a[i];
            a[i]=a[j];
            a[j]=f;
        }
    }
    printf(" %d",a[i]);
}
}
