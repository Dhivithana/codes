#include <stdio.h>
#include<string.h>
int main(void)
{
	char s[50],n,n1,i;
	printf("\n Enter the string:");
	gets(s);
	n1=strlen(s);
	printf("\n Enter the number:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%c",s[n1-1]);
		n1--;
	}
	return 0;
}
