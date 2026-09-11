//character is vowel or not
#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("\n enter any character ");
	scanf("%c", &ch);
	if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||
	 ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
	{
		printf("input char is vowel");

	}
	else
	{
		printf("input char is not a vowel");

	}
	getch();

}

