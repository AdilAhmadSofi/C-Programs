#include<stdio.h>
#include<conio.h>
main()
{
	int ln,i,j,k;
	printf("Enter Line Number\n");
	scanf("%d",&ln);
	for(i=0;i<ln;i++)
	{
		for(j=0;j<ln-(i+1);j++)			//		*
			printf(" ");				//	   ***
		for(k=0;k<2*i+1;k++)			//    *****
			printf("*");				//	 *******
		printf("\n");					//	  *****
	}									//	   ***
	for(i=ln-1;i>0;i--)					//      *
	{
		for(j=0;j<ln-i;j++)
			printf(" ");
		for(k=(i*2)-1;k>0;k--)
			printf("*");
		printf("\n");
	}
	getch();
}  
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
