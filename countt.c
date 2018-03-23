#include<stdio.h>
int main()
{
	int a,s=0;
	printf("\n enter the number:");
	scanf("%d",&a);
	while(a!=0)
	{
		a=a/10;
		s++;
		
	}
	printf("\n the count is:%d",s);
}
