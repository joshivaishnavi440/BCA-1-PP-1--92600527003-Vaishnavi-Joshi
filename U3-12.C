//find out character is in uppercase or lowercase
#include<stdio.h>
#include<conio.h>
#define pf printf

void main()

{
	char ch;
	clrscr();
	pf("\n enter any character");
	scanf("%c", &ch);

	if(ch>=65 && ch<=90 )
	{
		pf("\n %c is uppercase", ch);

	}
	else
	{
		if(ch>=97 && ch<=122 )
		{
			pf("\n %c is lowercase",ch);

		}
		else
		{
		       //	pf("\n this is not valid character", ch);

			if(ch>='0' && ch<='9')
			{
				pf("\n this is digit", ch);

			}
			else
			{
				pf("\n this is a special character", ch);
			}


		}

	}


	getch();
}