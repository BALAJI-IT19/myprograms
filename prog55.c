#include<stdio.h>
int main()
{int mark;
printf("marks=");
scanf("%d",&mark);
if(mark>=90&&mark<=100)
printf("grade is A");
else if(mark>=80&&mark<=100)
printf("grade is B");
else if(mark>=70&&mark<=100)
printf("grade is C");
else 
printf("try to get more marks");
}
