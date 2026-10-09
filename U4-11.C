//input x and y calculate its power value
#include<stdio.h>
#include<math.h>

void main()
{
	int x,y,result;
	clrscr();

	printf("Enter the value of x: ");
	scanf("%d",&x);

	printf("Enter the value of y: ");
	scanf("%d",&y);

	result = pow(x,y);

	printf("Power =%d",result);
	getch();

}
