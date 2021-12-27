#include<stdio.h>
#include<conio.h>
void main()
{
	int num,x,cd=0,i,k,rem,sum=0;
	clrscr();
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
	printf("%d\n",cd);
		rem=num%10;
		k=1;
		for(i=cd;i>0;i--)
			k=k*rem;
		sum=sum+k;
		num=num/10;
	}
	if(sum==x)
		printf("Armstrong Number");
	else
		printf("Not Armstrong Number");
	getch();
}
