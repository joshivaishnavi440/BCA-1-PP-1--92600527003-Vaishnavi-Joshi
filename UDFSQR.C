//DEMO of UDF which will calculate sum of two numbers
#include<stdio.h>
#include<conio.h>

int square(int a);

void main()
{
	int x,y;
	clrscr();
	printf("\n Enter any number:");
	scanf("%d",&x);

	y=square(x);
	printf("\n Square is %d",y);

	y=cube(x);
	printf("\nCube is %d",y);

	getch();
}

int cube(int a)
{
	int b;
	b=a*a*a;
	return(b);
}

int square(int a)
{
	int b;
	b=a*a;
	return(b);
}