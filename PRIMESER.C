#include<stdio.h>
#include<conio.h>
void main()
{
	int num,x,first,last;
	clrscr();
	printf("Enter first\n");
	scanf("%d",&first);
	printf("Enter last\n");
	scanf("%d",&last);
	for(num=first;num<=last;num++)
	{
		for(x=2;num%x!=0;x++);
		if(num==x)
		printf("%d\t",num);
	}
	getch();
}
