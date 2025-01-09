#include <stdio.h>
void main()
{
int A1,A2,n,d,n_th_term;
printf("enter the first roll number:");
scanf("%d",&A1);
printf("enter the second roll number:");
scanf("%d",&A2);
d=A2-A1;
printf("enter your position:");
scanf("%d",&n);
n_th_term=A1+(n-1)*d;
printf("your roll number is %d",n_th_term);
}
