//WAP that print your name in pyramid
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i,j,len;
	char name[50];
	clrscr();

	printf("Enter your name:");
	scanf("%49s",name);

	len=strlen(name);

	for(i=1;i<=len;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" %c ",name[j]);
		}
		printf("\n");
	}

	getch();
}