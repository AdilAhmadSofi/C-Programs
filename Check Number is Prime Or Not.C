#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i;
	printf("Enter Number\n");
	scanf("%d",&num);
	for(i=2;num%i!=0;i++);
	if(num==i)
	printf("%d is Prime",num);
	else
	printf("%d is Not Prime",num);
	getch();
}
