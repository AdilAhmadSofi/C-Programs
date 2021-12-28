#include<stdio.h>
#include<conio.h>
 main()
{
	int ln,i,j,k;
	printf("Enter Line Number\n");
	scanf("%d",&ln);
	for(i=0;i<ln;i++)
	{ 									//			*
		for(j=0;j<ln-(i+1);j++)			//		   ***
			printf(" ");				//		  *****
			printf("*");				//       *******
		printf("\n");					//	 	*********
	}
	getch();
}
