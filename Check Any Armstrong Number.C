#include<stdio.h>
#include<conio.h>
int main()
{
	int num,x,cd=0,i,k,rem,sum=0;
	printf("Enter Number\n");
	scanf("%d",&num);
	x=num;
	while(num>0)
	{
		num=num/10;
		cd++;
	}
	num=x;
	while(num>0)
	{
		rem=num%10;
		k=1;
		for(i=cd;i>0;i--)
			k=k*rem;
		sum=sum+k;
		num=num/10;
	}
	if(sum==x)
		printf("%d is Armstrong Number",x);
	else
		printf("%d is Not Armstrong Number",x);
	getch();
}
