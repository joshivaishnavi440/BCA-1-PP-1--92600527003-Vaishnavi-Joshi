//WAP that takes 3 value for principle amount, rate of intrest and number of years
#include<stdio.h>
#include<conio.h>

void main()
{
	float pa,r,y,si;
	clrscr();
	printf("\nEnter the principle amount:");
	scanf("%f",&pa);

	printf("\nEnter the rate of intrest:");
	scanf("%f",&r);

	printf("\nEnter the number of years:");
	scanf("%f",&y);

	si=(pa*r*y) /100;

	printf("\n*****************************");

	printf("\n Principal amount: %.2f",pa);

	printf("\n rate of intrest: %.2f",r);

	printf("\n number of years: %.2f",y);

	printf("\n*****************************");

	printf("\n simple intrest is %f",si);
	getch();
}



