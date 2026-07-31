//WAP to input your percentage and display your result pas or fail
#include<stdio.h>
#include<conio.h>

void main()
{
	float x;
	clrscr();
	printf("\n Enter your percentage:");
	scanf("%f",&x);

	if(x<35)
	{
		printf("\n Fail");
	}
	else
	{
		printf("\n Pass");
	}
	getch();

}