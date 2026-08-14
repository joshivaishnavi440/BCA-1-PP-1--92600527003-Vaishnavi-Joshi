//WAP which takes input of one character and display its ASCII code
#include<stdio.h>
#include<conio.h>

void main()
{
	char x;
	clrscr();
	printf("\n Enter any character : ");
	scanf("%c", &x);

	printf("\n Input character is : %c",x+32);
	printf("\n ASCII code is : %d",x+32);
	getch();
}
