#include<stdio.h>
int main()
{
int l,b,h,area,vol;
printf("\n Enter the length & breadth & height");
scanf("%d\t%d\t%d\t",&l,&b,&h);
area=2*(l*b+l*h+h*b);
printf("\n The area of the cuboid is:%d",area);
vol=l*b*h;
printf("\n The volume of the cuboid is:%d",vol);
return 0;
}
