#include<stdio.h>
#include<string.h>
int main()
{
char temp,a[50];
int i,j,n;
printf("\n Enter:");
gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("\n The lexicographical order is:\n %s",a);
return 0;
}
