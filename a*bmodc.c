#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("\n Enter the a b c values:");
	scanf("%d%d%d",&a,&b,&c);
	d=a*b;
	printf("\n a*b mod c is: %d",d%c);
	return 0;

}
