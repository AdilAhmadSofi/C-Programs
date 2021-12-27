#include<stdio.h>
#include<conio.h>
void main()
{
	int num,x,rev=0,i;
	clrscr();
	printf("Enter number\n");
	scanf("%d",&num);
	x=num;
	while(num>0)
	{
		i=num%10;
		rev=(rev*10)+i;
		num=num/10;
	}
	if(rev==x)
	printf("Number %d is Palindrome",x);
	else
	printf("Number %d is not Palindrome",x);
	getch();
}
