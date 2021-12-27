#include<stdio.h>
#include<conio.h>
void main()
{
	int n,num,rem,rev=0;
		clrscr();
	printf("Enter  Number\n");
	scanf("%d",&n);
	num=n;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("Rev of number %d is %d",n,rev);
	getch();
}
