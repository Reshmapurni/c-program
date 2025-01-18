#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i,j,a[10],x,y,b,c,m=999;
printf("enter size:");
scanf("%d",&n);
printf("enter elements:");
for(i=0;i<n; i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<(n-1);i++)
{
    for(j=(i+1);j<n;j++)
    {
        b=a[i]+a[j];
        c=abs(10-b);
        if(c<m)
        {
            m=c;
            x=a[i];
            y=a[j];
        }
        
    }
}
printf("%d %d",x,y);
}
