#include<stdio.h>
#include<conio.h>
void main()
{
	int num,x,rev=0,i,f,l;
	clrscr();
	printf("Enter first\n");
	scanf("%d",&f);
	printf("Enter last\n");
	scanf("%d",&l);
	for(;f<=l;f++)
	{
		num=f;
		while(num>0)
		{
			i=num%10;
			rev=(rev*10)+i;
			num=num/10;
		}
		if(rev==f)
		printf("%d\t",f);
	}
	getch();
}
