#include<stdio.h>
#include<conio.h>
void main()
{
	int num,f,l,cd,i,k,rem,sum=0;
	clrscr();
	printf("Enter first\n");
	scanf("%d",&f);
	printf("Enter last\n");
	scanf("%d",&l);
	for(;f<=l;f++)
	{
		num=f;
		cd=0;
		while(num>0)
		{
			num=num/10;
			cd++;
		}
		num=f;
		while(num>0)
		{
			rem=num%10;
			k=1;
			for(i=cd;i>0;i--)
				k=k*rem;
			sum=sum+k;
			num=num/10;
		}
		if(sum==f)
			printf("%d\t",sum);
	}
	getch();
}
