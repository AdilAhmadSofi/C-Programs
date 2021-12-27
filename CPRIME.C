#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i;
	clrscr();
	printf("Enter Number\n");
	scanf("%d",&num);
	for(i=2;num%i!=0;i++);
	if(num==i)
	printf("Prime");
	else
	printf("Not prime");
	getch();
}
