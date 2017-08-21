#include<stdio.h>
int main()
{
int i,num,e[20],result;
clrscr();
printf("enter the number of elements:");
scanf("%d",&num);
printf("enter the elements of array:");
for(i=0;i<num;i++)
scanf("%d",&e[i]);
result=e[0];
for(i=1;i<num;i++)
result^=e[i];

printf("unique element is :%d",result);
return 0;
}
