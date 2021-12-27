#include<stdio.h>
#include<conio.h>
int main()
{
	int ln,i,j,k;
	printf("Enter Line Number\n");
	scanf("%d",&ln);
	for(i=ln;i>0;i--)				//*****
	{								// ****
		for(j=0;j<ln-i;j++)			//  ***
			printf(" ");			//   **								
		for(k=i;k>0;k--)			//    *
			printf("*");
		printf("\n");
	}
	getch();
}
