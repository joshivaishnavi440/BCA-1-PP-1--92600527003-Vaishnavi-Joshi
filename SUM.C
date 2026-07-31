//WAP which display sum of two numbers
#include<stdio.h>
#include<conio.h>
 void main()
 {
	int x,y,z; //variable declaration
	clrscr();
	printf("\n Enter value of X : ");
	scanf("%d",&x);

	printf("\n Enter value of y :");
	scanf("%d",&y);

	z=x+y;
	printf("\n %d is the answer",z);
	getch();
}