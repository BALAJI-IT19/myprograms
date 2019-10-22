#include<stdio.h>
int main()
{int n;
printf("n=");
scanf("%d",&n);
for(int i=1;i<=16;i++)
printf("%d*%d=%d\n",i,n,i*n);
}
