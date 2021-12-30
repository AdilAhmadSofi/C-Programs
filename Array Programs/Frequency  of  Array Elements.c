#include <stdio.h>      
#include <math.h> 
int main()
{
	int arr[20],s;
	printf("Enter Number of Elements in an Array(Less than 20)\n");
	scanf("%d",&s);
	printf("Enter Array Elements\n");
	for(int i=0;i<s;i++)
		scanf("%d",&arr[i]);
	printf("%d Elements in an Array Are:\n",s);
	for(int i=0;i<s;i++)
		printf("%d\t",arr[i]);
	printf("\nFrequency of Array Elements are:\n");			//Frequency Of Array Elements
	for(int i=0;i<s;i++)
	{
		int flag=0;
		for(int k=0;k<i;k++)
		{ 
			if(arr[i]==arr[k])
			{
				flag=1;
				break;
			}	
		}
		int count=1;
		if(flag!=1)
		{
			for(int j=i+1;j<s;j++)
			{
				if(arr[i]==arr[j])
				{	
					count++;
				}
			}
			printf("%d is Present %d Times\n",arr[i],count);
		}
	}
}