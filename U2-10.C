//WAP that input quantity, price, discount and display final amount
#include<stdio.h>
#include<conio.h>

void main()
{
	float q,p,d,t,fa,drs;
	clrscr();

	printf("\n****************************");

	printf("\n Enter value of q,p,d:");
	scanf("%f%f%f",&q,&p,&d);

	t=q*p;
	drs=t*d/100;
	fa=t-drs;

	printf("\n answer is: %.2f",fa);
	getch();

}