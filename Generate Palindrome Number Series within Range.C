#include<stdio.h>
#include<conio.h>
int main()
{
	int num,x,rev=0,rem,f,l;
	printf("Enter Initial Value\n");
	scanf("%d",&f);
	printf("Enter Final Value\n");
	scanf("%d",&l);
	for(;f<=l;f++)
	{
		num=f;
		while(num>0)
		{
			rem=num%10;
			rev=(rev*10)+rem;
			num=num/10;
		}
		if(rev==f)
			printf("%d\t",f);
	}
	getch();
}
