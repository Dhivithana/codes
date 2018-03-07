#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int i,l;
scanf("%s",&s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]=='0' || s[i]=='1' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9')
{
printf("%c",s[i]);
}
}
return 0;
}
