#include<stdio.h>
#include<conio.h>
int main()
{
	int n,num,rem,rev=0;
	printf("Enter Number to Reverse\n");
	scanf("%d",&n);
	num=n;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("Reverse of number %d is %d",n,rev);
	getch();
}
