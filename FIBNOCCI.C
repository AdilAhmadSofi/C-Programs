#include<stdio.h>
#include<conio.h>
void main()
{
	int num,x,s=0,i;
	clrscr();
	printf("Enter lt\n");
	scanf("%d",&num);
	x=0;
	i=1;
	while(s<=num)
	{
		printf("%d\t",s);
		x=i;
		i=s;
		s=x+i;
	}
	getch();
}
