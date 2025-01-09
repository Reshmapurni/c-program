#include <stdio.h>
void main()
{
int a[10],n,i,j=0,k=0,b[10],c[10];
printf("enter the size");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
    b[j]=a[i];
    j++;
}
else
{
    c[k]=a[i];
    k++;
}
}
printf("even array is:");
for(i=0;i<j;i++)
{
    printf(" %d",b[i]);
}
printf("odd array is:");
for(i=0;i<k;i++)
{
    printf(" %d",c[i]);
}
}
