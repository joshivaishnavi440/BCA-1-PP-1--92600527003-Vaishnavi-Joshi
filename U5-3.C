//WAP to find out reverse of number using UDF
#include<stdio.h>
#include<conio.h>

void reverse(int n);
void main()
{
	int n;
	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	reverse(n);

	getch();

}
void reverse(int n)
{
	int rem,rev=0;

	while(n>0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n/10;
	}
	printf("reverse =%d",rev);
}
