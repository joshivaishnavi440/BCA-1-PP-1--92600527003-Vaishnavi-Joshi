//WAP that input number and find out factorial of given number.
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i;
	long long fact=1;
	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}

	printf("Factorial= %lld ",fact);

	getch();

}