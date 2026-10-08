//WAP that number is odd or even
#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	clrscr();

	printf("Enter a number: ");
	scanf("%d",&num);

	if(num % 2 == 0)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is odd");
	}
	getch();

}