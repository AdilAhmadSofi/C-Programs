#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter Day Number\n");
	scanf("%d",&n);
	if(n>0&&n<8)
		{
		switch(n)
			{
				case 1:
				printf("Ist Day is Monday");
				break;
				case 2:		
				printf("IInd Day is Tuesday");
				break;			
				case 3:			
				printf("IIIrd Day is Wednesday");
				break;			
				case 4:			
				printf("IVth Day is Thursday");
				break;			
				case 5:			
				printf("Vth Day is Friday");
				break;			
				case 6:			
				printf("VIth Day is Saturday");
				break;			
				case 7:			
				printf("VIIth Day is Sunday");
				break;
			}
		}
		else
			printf("Enter within 1-7");
		getch();
}
