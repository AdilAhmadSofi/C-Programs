#include<stdio.h>
#include<conio.h>
void main()
{
	int ln,i,j;
	clrscr();
	printf("Enter Line Number\n");
	scanf("%d",&ln);
	for(i=0;i<ln;i++)
	{
		for(j=0;j<i+1;j++)
			printf("*");
		printf("\n");
	}
	getch();
}
