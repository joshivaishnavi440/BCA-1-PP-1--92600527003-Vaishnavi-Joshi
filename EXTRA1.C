//WAP to input any two digit no and calculate square of both the digit
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,n1,n2,s1,s2;
	clrscr();

	printf("\nEnter any 2 digit number:");
	scanf("%d",&x);

	n1=x/10;
	n2=x%10;

	s1=n1*n1;
	s2=n2*n2;

	printf("\n The square of the first digit is: %d",s1);
	printf("\n The square of the second digit is: %d",s2);

	getch();


}