#include<stdio.h>
#include<conio.h>
int main()
{
	int num,x,rev=0,i;
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
	printf("%d is Palindrome",x);
	else
	printf("%d is not Palindrome",x);
	getch();
}
