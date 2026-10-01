//WAP that print 2,4,6,8...N
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,N;
	clrscr();

	printf("\n Enter value of N : ");
	scanf("%d",&N);

	for(i=2;i<=N;i=i+2)
	{
		printf(" %d ",i);
	}
	getch();

}
