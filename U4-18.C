//WAP to find out armstrong number upto user series
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,num,rem,sum;
	clrscr();

	printf("Enter the limit: ");
	scanf("%d",&n);

	printf("Armstrong numbers are: \n");

	for(i=1;i<=n;i++)
	{
		num=i;
		sum=0;

		while(num>0)
		{
		   rem=num%10;
		   sum=sum+(rem*rem*rem);
		   num=num/10;
		}

		if(sum==i)
		{
			printf(" %d ",i);
		}
	}
	getch();
}