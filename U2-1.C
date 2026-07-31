//WAP to calculate area of rectangle
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();
	printf("\n enter length:");
	scanf("%d",&x);

	printf("\n enter breadth:");
	scanf("%d",&y);

	z=x*y;
	printf("\n area of rectangle is %d",z);
	getch();

}