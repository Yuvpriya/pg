#include<stdio.h>
void tower(int a,char b,char c,char d)
{
if(a==1)
{
printf("\n Move disk1 from %c to %c",b,c);
return;
}
tower(a-1,b,c,d);
printf("\n move disk%d from %c to %c",a,b,c);
tower(a-1,d,c,b);
}
int main()
{
int a=3;//
tower(a,'A','C','B');//
return 0;
}
