#include<stdio.h>
int main()
{
	int a[10],i,sum=0,n;
	printf("\n enter the size(N):");
	scanf("%d",&n);
	printf("\n Enter the N numbers:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];

	}
		printf("\n The sum of N numbers are: %d",sum);
	return 0;
}
