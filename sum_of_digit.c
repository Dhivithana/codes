#include <stdio.h>
#include<string.h>
int main(void) {
	int mod,b=1,n;
	printf("\n Enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		mod=n%10;
		b=b*mod;
		n=n/10;
		
	}
	printf("%d",b);
	return 0;
}
