#include<stdio.h>
#include<conio.h>
void main()
{
	int n,num,rem,sum=0;
	clrscr();
	printf("Enter  Number\n");
	scanf("%d",&n);
	num=n;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("Sum of digits of number %d is %d",n,sum);
	getch();
}
