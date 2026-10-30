//WAP to find out addition of two values using udf
#include<stdio.h>
#include<conio.h>

int add()
{
	int a,b;
	printf("Enter two values:");
	scanf("%d%d",&a,&b);

	printf("addition=%d",a+b);
}
void main()
{
	clrscr();
	add();
	getch();
}
