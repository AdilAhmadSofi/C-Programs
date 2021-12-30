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
	int sum=0;
	for(int i=0;i<s;i++)
		sum+=arr[i];
	printf("Sum of %d Elements in an Array is: %d",s,sum);
}