#include<stdio.h>
#include<conio.h>
void main()
{
	int num,s=0,i;
	clrscr();
	printf("Enter Number\n");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
	if(num%i==0)
	s=s+i;
	}
	if(s==num)
		printf("perfect");
	else
	printf("Not perfect");
	getch();
}
