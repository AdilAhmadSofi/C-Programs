#include<stdio.h>
#include<conio.h>
int main()
{
	int n,b,fact=1;
	printf("Enter Number to Calculate Factorial\n");
	scanf("%d",&n);
	for(b=1;b<=n;b++)
		fact=fact*b;
	printf("Factorial %d Is %d\n",n,fact);
	getch();
}
