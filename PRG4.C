// WAP of calculate total marks and percentage based on 5 subject marks
#include<stdio.h>
#include<conio.h>
void main()
{
	float m1, m2, m3, m4, m5, total;
	clrscr();
	printf("\n enter marks 1 out of 100:");
	scanf("%f",&m1);
	printf("\n enter marks 2 out of 100:");
	scanf("%f",&m2);
	printf("\n enter marks 3 out of 100:");
	scanf("%f",&m3);
	printf("\n enter marks 4 out of 100:");
	scanf("%f",&m4);
	printf("\n enter marks 5 out of 100:");
	scanf("%f",&m5);
	total=m1+m2+m3+m4+m5;
	printf("\n total marks:%f",total);
	printf("\n percentage :%f", (total/500)*100);
	getch();

}