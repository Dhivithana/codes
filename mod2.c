#include<stdio.h>
int main()
{
	int n,n1,i;
	printf("\n enter the number:");
	scanf("%d",&n);
	for(i=0;;i++)
	{
		if(n%2!=0)
		{
			printf("%d",n);
			break;
		}
		n1=n/2;
	if(n1%2!=0)
	{
		printf("%d",n1);
		break;
	}
	}
	return 0;
	
}
