#include <stdio.h>      
#include <math.h>
#include <stdlib.h> 
static int n;
void disparray(int []);
void freqarray(int []);
void sumarray(int []);
void bsortarray(int []);
void reversearray(int []);
void searcharrayelement(int []);
void binsearcharrayelement(int []);
void smallarrayelement(int []);
void largearrayelement(int []);
void insertarrayelement(int []);
void primearrayelement(int []);
void deletearrayelement(int []);
void insertNtharrayelement(int []);
int main()
{
	int arr[20],s,s1;
	printf("Enter Number of Elements in an Array(Less than 20)\n");
	scanf("%d",&n);
	printf("Enter %d Array Elements\n",n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	//Menu
	label1:
	printf("\n\n0 : Display Array Elements\n1 : Sum of Array Elements\n2 : Smallest Element In an Array\n3 : Largest Element In an Array\n4 : Frequency of Array Elements\n5 : Prime Numbers in an Array\n6 : Search an Array Elements(Linear)\n7 : Search an Array Elements(Binary)\n8 : Bubble Sort Array Elements\n9 : Reversing of Array Elements\n10 : Insert an Array Elements at the End\n11 : Delete an Array Element\n12 : Insert an Array Elements at Given Location\n");
	scanf("%d",&s);
	switch(s)
	{	
		case 0:
			disparray(arr);
			break;
		case 1:
			sumarray(arr);
			break;
		case 2:
			smallarrayelement(arr);
			break;
		case 3:
			largearrayelement(arr);
			break;
		case 4:
			freqarray(arr);
			break;
		case 5:
			primearrayelement(arr);
			break;
		case 6:
			searcharrayelement(arr);	
			break;
		case 7:
			binsearcharrayelement(arr);
			break;
		case 8:
			bsortarray(arr);
			break;
		case 9:
			reversearray(arr);
			break;
		case 10:
			insertarrayelement(arr);
			break;
		case 11:
			deletearrayelement(arr);
			break;
		case 12:				
			insertNtharrayelement(arr);
			break;	
		default:
			printf("**Invalid Selection**\n");
	}
	label2:
	printf("\n\nTo Continue Press\n1 : Retry\n2 : Start Again\n3 : Exit\n");
		scanf("%d",&s1);
		switch(s1)
		{
			case 1:
				goto label1;
				break;
			case 2:
				main();
				break;
			case 3:
				exit(0);
				break;	
			default:
				printf("**Invalid Selection**\n");
				goto label2;
		}
}
	//Display Array Elements
void disparray(int arr[])
{
	for(int i=0;i<n;i++)
		printf("%d\t",arr[i]);
}
	//Frequency Of Array Elements
void freqarray(int arr[])
{
	printf("Frequency of Array Elements are:\n");	
	for(int i=0;i<n;i++)
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
			for(int j=i+1;j<n;j++)
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
	//Smallest Element In Array
void smallarrayelement(int arr[])
{
	int small;
	small=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]<small)
			small=arr[i];
	}
	printf("%d is Smallest Element in an Array\n",small);
}
	//Largest Element In Array
void largearrayelement(int arr[])
{
	int large;
	large=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>large)
		large=arr[i];
	}
	printf("%d is Largest Element in an Array\n",large);
}
	//Sum of Array Elements
void sumarray(int arr[])
{
	int sum=0;
	for(int i=0;i<n;i++)
		sum+=arr[i];
	printf("Sum of %d Elements in an Array : %d\n",n,sum);
}
	//Bubble Sorting
void bsortarray(int arr[])
{
	printf("%d Elements in an Array Before Sorting Are:\n",n);
	for(int i=0;i<n;i++)
		printf("%d\t",arr[i]);
	for(int i=0;i<n-1;i++)			
	{
		int temp;
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\n\n%d Elements in an Array After Sorting Are:\n",n);
	for(int i=0;i<n;i++)
		printf("%d\t",arr[i]);
}
	// Reversing of elements using swapping
void reversearray(int arr[])	
{
	printf("%d Elements in an Array Before Reversing Are:\n",n);
	for(int i=0;i<n;i++)
		printf("%d\t",arr[i]);
	int temp;
	for(int i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}
	printf("\n\n%d Elements in an Array After Reversing Are:\n",n);
	for(int i=0;i<n;i++)
		printf("%d\t",arr[i]);
}	
	//Search An Element	
void searcharrayelement(int arr[])	
{	
	int el,flag=0,i;
	printf("Enter an Element to Check\n");   		
	scanf("%d",&el);
	for(i=0;i<n;i++)
	{
		if(el==arr[i])
		{
			flag++;
		}
	}
	if(flag>0)
		printf("Element %d Found %d times",el,flag);
	else
		printf("Element %d Not Found",el);	
}	
	//Binary Search 
void binsearcharrayelement(int arr[])
{
	int el,flag=0,st_ind,end_ind;
	st_ind=0;
	end_ind=n-1;
	printf("Enter an Element to Check\n");   		
	scanf("%d",&el);
	while(st_ind!=end_ind)
	{
		if(el<=end_ind/2)
		{
			if(el==end_ind/2)
			{
				flag=1;
			}
			end_ind=(n-1)/2;
		}
		else
			st_ind=(n-1)/2;		
	}
	if(flag>0)
		printf("Element %d Found %d times",el,flag);
	else
		printf("Element %d Not Found",el);	
}

	//Insert Array Element
void insertarrayelement(int arr[])
{
	int elt;
	printf("Enter an Element to Append\n");   		
	scanf("%d",&elt);
	arr[n]=elt;
	n+=1;
	printf("Updated Elements in an Array are:\n");   
	for(int i=0;i<n;i++)
		printf("%d\t",arr[i]);
}	
	//Check Prime number elements in Array
void primearrayelement(int arr[])
{
	printf("Prime Numbers in an Array are:\n");
	int flag=0;
	for(int i=0;i<n;i++)
	{	 
		int j;
		for(j=2;arr[i]%j!=0;j++);
		if(arr[i]==j)
		{
			flag=1;
			printf("%d is Prime\n",arr[i]);
		}
	}
	if(flag==0)
		printf("N0 Prime numbers f0und");
}
	//Delete Array Element
void deletearrayelement(int arr[])
{
	int elt,flag=0,i;
	printf("Enter an Element to Delete\n");   		
	scanf("%d",&elt);
	for(i=0;i<n;i++)
	{
		if(elt==arr[i])
		{
			flag++;
			for(int j=i;j<n;j++)
			{	
				arr[j]=arr[j+1];
			}
			n-=1;
			break;			
		}
	}
	if(flag>0)
		printf("Element %d Deleted",elt);
	else
		printf("Element %d Not Present in an Array",elt);	
}
	//Insert Array Element at Given Location
void insertNtharrayelement(int arr[])
{
	int elt,pos,i;
	printf("Enter an Element to Insert\n");   		
	scanf("%d",&elt);
	printf("Enter Position\n");   		
	scanf("%d",&pos);
	if(pos<=n+1)
	{
		for(i=n;i>=pos;i--)
		{
			arr[i]=arr[i-1];
		}
		arr[i]=elt;
		n+=1;
		printf("Updated Elements in an Array are:\n");   
		for(int i=0;i<n;i++)
			printf("%d\t",arr[i]);
	}
	else
		printf("Position %d Out of Bound",pos);
}	
