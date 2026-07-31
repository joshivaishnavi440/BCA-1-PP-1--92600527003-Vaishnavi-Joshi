//WAP which find out no is odd or even
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,r;
	clrscr();
	printf("\n Enter any number:");
	scanf("%d",&x);
	r= x %2;

	if(r==0)
	{
		printf("\n Even number");
	}
	else
	{
		printf("\n odd number");
	}
	printf("\n Value of r: %d",r);

	getch();
}