//WAP that input number and find out sum of digits using UDf
#include<stdio.h>
#include<conio.h>

int add(int n);

void main()
{
	int N,sum;
	clrscr();

	printf("Enter a number: ");
	scanf("%d",&N);
	sum = add(N);

	printf("sum of digits =%d",sum);
	getch();
}
int add(int n)
{
	int sum1 = 0;

	while(n>0)
	{
		sum1=sum1+(n % 10);
		n=n/10;
	}
	return(sum1);

}