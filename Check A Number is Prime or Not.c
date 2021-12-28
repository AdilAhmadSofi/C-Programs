#include<stdio.h>
#include<conio.h>
int main()
{
	int num,x;
	printf("Enter Number to Check\n");
	scanf("%d",&num);
	for(x=2;num%x!=0;x++);
	if(num==x)
		printf("%d is Prime",num);
	else
		printf("%d is Not Prime",num);
	getch();
}
