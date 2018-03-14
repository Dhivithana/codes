#include<stdio.h>
int main()
{
	int n,rev=0,n1;
	printf("\n Enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
	n1=n%10;
	rev=rev*10+n1;
	n=n/10;
	}
	printf("\n the reverse of a given number is: %d",rev);
	return 0;
}
