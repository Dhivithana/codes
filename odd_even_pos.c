#include<stdio.h>
#include<string.h>
int main()
{
char a[50];
int n,i;

scanf("%s",&a);
n=strlen(a);
for(i=0;i<n;i=i+2)
{
printf("The odd positions are:  %c\n",a[i]);
}
for(i=1;i<n;i=i+2)
{
printf("The even positions are:  %c\n",a[i]);
}
return 0;
}
