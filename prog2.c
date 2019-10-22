#include<stdio.h>
int main()
{int n,fact;
printf("n=");
scanf("%d",&n);
fact=1;
for (int i=n;i>=1;i--)
{fact=fact*i;}
printf("factorial of %d=%d",n,fact);
}
