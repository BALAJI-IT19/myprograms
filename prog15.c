#include<stdio.h>
int main()
{int a[10];
printf("a[10]=");
for(int i=0;i<10;i++)
scanf("%d",&a[i]);
for(int j=0;j<10;j++)
if(a[j]==23)
printf("23 is in a[%d]",j);
}
