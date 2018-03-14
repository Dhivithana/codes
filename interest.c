#include<stdio.h>
int main()
{
	int p,t,r,interest;
	printf("\n Enter the amount(p),time(t),rate(r):");
	scanf("%d%d%d",&p,&t,&r);
	interest=p*t*r/100;
	printf("\n The simple interest is: %d",interest);
	return 0;
}
	
