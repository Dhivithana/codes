#include<stdio.h>
int main()
{
int x,y,i;
int lcm,gcd;
printf("enter the numbers: \n");
scanf("%d%d",&x,&y);
for(i=1;i<=x && i<=y;i++)
{
if(x%i==0 && y%i==0)
{
gcd=i;
}
}
lcm=(x*y)/gcd;
printf("lcm of %d and %d is: \n%d",x,y,lcm);
return 0;
}
