#include<stdio.h>
int main()
{
	int n,rev=0,rem,y;
	scanf("%d",&n);
	y=n;
	while(n>0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	if(y==rev)
	{
		printf("\nPalindrome");
		}
		else
			printf("\nNot a palindrome");
	return 0;
}
