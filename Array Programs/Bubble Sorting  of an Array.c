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
	printf("%d Elements in an Array before Sorting Are:\n",s);
	for(int i=0;i<s;i++)
		printf("arr[%d] = %d\n",i,arr[i]);
	for(int i=0;i<s-1;i++)				//Bubble Sorting
	{
		int temp;
		for(int j=0;j<s-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("%d Elements in an Array After Sorting Are:\n",s);
	for(int i=0;i<s;i++)
		printf("arr[%d] = %d\n",i,arr[i]);
}