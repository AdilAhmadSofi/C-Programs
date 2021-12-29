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
	int el,flag=0,i;
	printf("Enter an Element to Check\n");
	scanf("%d",&el);
	for(i=0;i<s;i++)
	{
		if(el==arr[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("Element %d Found at %d Position",el,i+1);
	else
		printf("Element %d Not Found at %d Position",el,i+1);
}