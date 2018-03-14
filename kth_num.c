#include<stdio.h>
int main()
{
	int k,n,i,a[50];
	printf("\n Enter the two number:");
	scanf("%d%d",&n,&k);
	printf("\n Enter the N numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	printf("\n The k th number is: %d",a[k-1]);

	return 0;
}
	
