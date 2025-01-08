#include <stdio.h>
void main()
{
int a[10],n,i,j,count=0;
printf("enter the size");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
    if(a[i]==a[j])
    {
        count++;
        break;
    }
    }
}
printf("no.of duplicate elements are %d",count);
}
