#include<stdio.h>
#include<conio.h>
int main()
{
	int lt,f=0,s=1,t=0;
	printf("Enter Limit\n");
	scanf("%d",&lt);
	while(t<=lt)
	{
		
		f=s;
		s=t;
		t=f+s;
		printf("%d\t",s);
	}
	getch();
}
