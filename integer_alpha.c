#include<stdio.h>
int main()
{
	char n,n1;
	printf("\n Enter the Number:");
	scanf("%d",&n);
	n1=n+64;
	if(n1==n+64)
	{
	printf("\n The Integer Character is %c",(n+64));
	}
	else
	{
		printf("\n out of range");
		
	}
	return 0;
}
