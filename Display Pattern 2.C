#include<stdio.h>
#include<conio.h>
int main()
{
	int ln,i,j,k;
	printf("Enter Line Number\n");
	scanf("%d",&ln);
	for(i=0;i<ln;i++)
	{
		for(j=0;j<ln-(i+1);j++)		//     *
			printf(" ");			//    **
		for(k=0;k<i+1;k++)			//   ***
			printf("*");			//  ****
		printf("\n");				// *****
	}
	getch();
}
