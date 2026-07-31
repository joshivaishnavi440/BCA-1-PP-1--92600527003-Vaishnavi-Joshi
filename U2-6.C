//WAP which calculate average
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z,avg,total;
	clrscr();
	printf("\n Enter value of x,y,z:");
	scanf("%d%d%d", &x,&y,&z);

	total= x + y + z;
	avg=total /3;
	printf("\n Average %d",avg);
	getch();
}