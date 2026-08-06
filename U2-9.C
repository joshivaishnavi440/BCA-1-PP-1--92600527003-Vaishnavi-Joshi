//WAP to interchange two number without using 3rd variable
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter two number:");
	scanf("%d%d", &a,&b);

	printf("Before swapping:a=%d, b=%d \n", a,b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("after swapping:a=%d, b=%d\n", a,b);
	getch();



}