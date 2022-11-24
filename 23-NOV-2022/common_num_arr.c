/*** C program to print the same numbers in same index of two arrays *

Input: array1: {1,2,3,4}
	   array2: {1,5,3,5}
	   
Output: 1,3	

*/

#include<stdio.h>

check_Arr(int array1[],int array2[],int size1,int size2)
{
	int i,flag=0;
	
	//printf("\nThe same elements in same index of two arrays : ");
	for(i=0;i<size1;i++)
	{
		if(array1[i]==array2[i])
		{
			printf("%d ",array1[i]);
			flag=1;
		}			
	}
	
	if(flag==1)
		printf("- common elements");
	
	else
		printf("\nThere is no common elements in two array");
	
	return 0;
}

int main()
{
	int size1,i;
	printf("Enter the size of array1: ");
	scanf("%d",&size1);
	
	int array1[size1];
	printf("Enter the elements of the array1 : \n");
	for(i=0;i<size1;i++)
	{
		printf("Element[%d] - ",i);
		scanf("%d",&array1[i]);
	}
	
	int size2;
	printf("\nEnter the size of array2: ");
	scanf("%d",&size2);
	
	int array2[size2];
	printf("Enter the elements of the array2 : \n");
	for(i=0;i<size2;i++)
	{
		printf("Element[%d] - ",i);
		scanf("%d",&array2[i]);
	}	
	
	printf("\nThe elements of array 1 and array 2 : \n");
	for(i=0;i<size1;i++)
	{
		printf("%d ",array1[i]);
	}
	printf("\n");
	
	for(i=0;i<size2;i++)
	{
		printf("%d ",array2[i]);
	}
	
	printf("\n\nResult : ");	
	check_Arr(array1,array2,size1,size2);
	return 0;
}
