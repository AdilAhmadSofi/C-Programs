#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("Enter day number\n");
	scanf("%d",&n);
	if(n>0&&n<8)
	{
	switch(n)
	{
	case 1:
	printf("Mnday");
	break;

	case 2:

	printf("Tuesday");
	break;

	case 3:

	printf("wednesday");
	break;

	case 4:

	printf("thursday");
	break;

	case 5:

	printf("friday");
	break;

	case 6:

	printf("satday");
	break;

	case 7:

	printf("sunday");
	break;
	}
	}
	else
	printf("Enter within 1-7");
	getch();
}
