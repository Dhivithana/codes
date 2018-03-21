#include <stdio.h>

int main(void) {
	int k,n,a,i;
	printf("\n enter the first number:");
	scanf("%d",&n);
	printf("\n Enterthe second number:");
	scanf("%d",&k);
	a=n;
	for(i=0;i<k-1;i++)
	{
		a=a*n;
	}
	printf("\n K^N is:%d",a);
	return 0;
}
