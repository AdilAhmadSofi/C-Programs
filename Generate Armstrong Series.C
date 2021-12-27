#include<stdio.h>
#include<conio.h>
int main()
{
	int num,f,l,cd,i,k,rem,sum=0;
	printf("Enter First\n");
	scanf("%d",&f);
	printf("Enter Last\n");
	scanf("%d",&l);
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
			for(i=1;i<=cd;i++)
				k=k*rem;
			sum=sum+k;
			num=num/10;
		}
		if(sum==f)
			printf("%d\t",sum);
	}
	getch();
}
