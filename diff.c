#include<stdio.h>
int main()
{
int n,o,cond,res;
printf("\n enter the members of ninjas and their opponents:");
scanf("%d%d",&n,&o);
cond=2^32;
if(n<cond && o<cond && n<o)
{
res=o-n;
printf("\n %d",res);
}
if(n>cond && o>cond)
{
	printf("\n The numbers exceed the condition(2^32)");
}
if(n>o)
{
	printf("\n the ninjas team should not have more no of members than opponent");
}
return 0;
}
