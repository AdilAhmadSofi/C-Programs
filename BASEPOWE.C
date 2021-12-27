#include<stdio.h>
#include<conio.h>
int main()
{
	int base,power,res=1,i;
	printf("Enter base\n");
	scanf("%d",&base);
	printf("Enter power\n");
	scanf("%d",&power);
	for(i=1;i<=power;i++)
	{
	      res=res*base;
	}
	printf("%d^%d is %d",base,power,res);
	getch();
}
 