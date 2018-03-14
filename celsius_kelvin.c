#include<stdio.h>
int main()
{
	int temp;
	int kel;
	printf("\n Enter the temprature in celsius:");
	scanf("%d",&temp);
	kel=temp+273.15;
	printf("\n The kelvin for corresponding elsius is: %d",kel);
	return 0;
}
