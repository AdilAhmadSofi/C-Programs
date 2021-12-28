#include<stdio.h>
#include<conio.h>
int main()
{
	int num,s=0,i;
	printf("Enter Number to Check\n");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		s=s+i;
	}
	if(s==num)
		printf("%d is Perfect Number",num);
	else
		printf("%d is Not Perfect Number",num);
	getch();
}
