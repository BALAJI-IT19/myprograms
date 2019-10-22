#include<stdio.h>
int main()
{int tunits,units;
printf("units=");
scanf("%d",&units);
if (units<=100)
printf("eb=0");
else
{tunits=units-100;
printf("eb=%d",tunits*6);
}
}
