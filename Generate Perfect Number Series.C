#include<stdio.h>
#include<conio.h>
int main()
{
	int num,s,i,first,last;
	printf("Enter first\n");
	scanf("%d",&first);
	printf("Enter last\n");
	scanf("%d",&last);
	for(num=first;num<=last;num++)
	{
		s=0;
		for(i=1;i<num;i++)
		{
			if(num%i==0)
			s=s+i;
		}
		if(num==s)
		printf("%d\t",num);
	}
	getch();
}
