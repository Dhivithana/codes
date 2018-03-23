#include<stdio.h>
int main()
{
	int n,k,a[50],i,c;
	printf("\n Enter N:");
	scanf("%d",&n);
	printf("\n Enter K:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==k)
		{
			c++;
		}
	}
	if(c>0)
	{
		printf("\n Yes");
		}
		else
		{
			printf("\n No");
		}
	
	return 0;
}
