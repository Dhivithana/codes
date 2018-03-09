#include<stdio.h>
#include<string.h>
int main()
{
char n[10];
int l,i,j,c=0;
printf("\n Enter here:");
scanf("%s",&n);
l=strlen(n);
for(i=0;i<l;i++)
{
for(j=i+1;j<l;j++)
{
if(n[i]!=n[j])
{
c++;
}
}
}
if(c==l)
{
printf("\n Yes");
}
else
{
printf("\n No");
}
return 0;
}
