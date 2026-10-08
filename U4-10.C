//Accept 10 no from the user one by one and display its total value on screen
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,num,sum=0;
	clrscr();

	for(i=1;i<=10;i++)
	{
		printf(" Enter number %d: ",i);
		scanf("%d",&num);

		sum=sum+num;
	}

		printf("Total=%d",sum);
	getch();

}