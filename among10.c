#include<stdio.h>
int main()
{
	int a[50],i,n=0,n1,max;
	for(i=0;i<9;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
			if(a[i]>n)
			{
			n=a[i];
			max=n;
			}
		
	}
	for(i=0;i<9;i++)
	{
		if(a[i]<max)
		{
			n1=a[i];
			max=n1;
		}
	}
	printf("%d",n1);
	return 0;
}
