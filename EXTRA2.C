//WAP to input one number and check wheather it is positive or negative number
#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	clrscr();
	printf("\n Enter any number:");
	scanf("%d",&x);

	if(x>0)
	{
		printf("\n Number is positive");
	}
	else
	{
		printf("\n Number is negative");
	}
	getch();

}