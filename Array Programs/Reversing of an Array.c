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
	printf("%d Elements in an Array before Reversing Are:\n",s);
	for(int i=0;i<s;i++)
		printf("arr[%d] = %d\n",i,arr[i]);		
	// Reversing of elements using swapping
	int temp;
	for(int i=0;i<s/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[s-1-i];
		arr[s-1-i]=temp;
	}
		printf("%d Elements in an Array After Reversing Are:\n",s);
	for(int i=0;i<s;i++)
		printf("arr[%d] = %d\n",i,arr[i]);
}