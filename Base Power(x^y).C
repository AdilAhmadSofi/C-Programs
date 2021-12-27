#include<stdio.h>
#include<conio.h>
int main()
{
	int base,power,res=1,i;
	printf("Enter Base\n");
	scanf("%d",&base);
	printf("Enter Power\n");
	scanf("%d",&power);
	for(i=1;i<=power;i++)
	{
	      res=res*base;
	}
	printf("%d^%d is %d",base,power,res);
	getch();
}
 