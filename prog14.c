#include<stdio.h>
int main()
{int a,b,c;
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
printf("c=");
scanf("%d",&c);
if(a>b&&a>c)
printf("greatest=%d",a);
else if (b>c)
printf("greatest=%d",b);
else
printf("greatest=%d",c);
}
