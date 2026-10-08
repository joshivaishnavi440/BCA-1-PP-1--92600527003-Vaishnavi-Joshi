//WAP that print 1 10 2 9 3 8 etc
#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();

	for(i=1;i<=10;i++)
	{
		printf(" %d %d ",i,11-i);
	}
	getch();

}