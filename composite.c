#include <stdio.h>

int main(void) {
	int n,i,c=0;
	printf("\n Enter the number:");
	scanf("%d",&n);
	for(i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
		c=1;
		}
	}
	if(c)
	{
	printf("\n Yes");
	}
	else
	{
		printf("\n No");
	}
	return 0;
}
