#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum=0;
	clrscr();
	printf("Enter n\n");
	scanf("%d",&a);
	b=1;
	while(b<=a)
	{
	sum=sum+b;
	b++;
	}
	printf("Sum of %d numberz Is %d\n",a,sum);
	getch();
}
