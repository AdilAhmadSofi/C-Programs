#include<stdio.h>
#include<conio.h>
int main()
{
	int n,num,rem,sum=0;
	printf("Enter any Number\n");
	scanf("%d",&n);
	num=n;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("Sum of digits in a Number %d is %d",n,sum);
	getch();
}
