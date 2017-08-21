#include<stdio.h>
void  main()
{
int  a,b,i,c[50];
clrscr();
printf("Enter the number");
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&c[i]);
scanf("%d",&b);
printf("%d",c[b]);
}
}
