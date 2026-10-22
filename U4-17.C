//WAP to find out prime numbers upto user series
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,j,x;
	clrscr();

	printf("Enter the limit:");
	scanf("%d",&n);

	printf("Prime numbers are: ");

	for(i=2;i<=n;i++)
	{
		x=0;

		for(j=2;j<i;j++)
		{
		    if(i%j==0)
		    {
		       x=1;
		       break;
		    }
		}

		if(x==0)
		{
			printf(" %d ",i);
		}
	}

	getch();

}