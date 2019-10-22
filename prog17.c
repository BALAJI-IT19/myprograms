#include<stdio.h>
int main()
{int sum=0,num[10];
printf("num[10]=");
for(int i=0;i<10;i++)
scanf("%d",&num[i]);
for(int j=0;j<10;j++)
sum=sum+num[j];
printf("%d",sum);
}
