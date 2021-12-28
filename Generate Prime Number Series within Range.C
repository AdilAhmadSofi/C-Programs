#include<stdio.h>
#include<conio.h>
int main()
{
	int num,x,first,last;
	printf("Enter Initial Value\n");
	scanf("%d",&first);
	printf("Enter Final Value\n");
	scanf("%d",&last);
	for(num=first;num<=last;num++)
	{
		for(x=2;num%x!=0;x++);		
		if(num==x)
			printf("%d\t",num);
	}
	getch();
}
