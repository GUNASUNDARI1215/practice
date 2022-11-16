/*** C program to insert the given number in the correct position of the given sorted array ***/

#include<stdio.h>

int insert(int arr1[],int size1)
{
	int Inserting_element,i,position;
	printf("Enter the element to be inserted : ");
	scanf("%d",&Inserting_element);
	
	for(i=0;i<size1;i++)
	{
		if(Inserting_element<arr1[i])
		{
			position=i;
			break;
		}
	}
	
	//move data to right and insert
	for(i=size1;i>position;i--)
	{
		arr1[i]=arr1[i-1];
	}
	
	//inserting element	
	arr1[position]=Inserting_element;
	
	printf("After inserting the element, resultant array : ");
	for(i=0;i<size1+1;i++)
	{
		printf("%d ",arr1[i]);
	}
	
	return 0;	
}

int main()
{
	int arr[100];
	int size,i;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	
	printf("Enter the elements of array in sorted order: \n");
	for(i=0;i<size;i++)
	{
		printf("Element[%d]- ",i);
		scanf("%d",&arr[i]);
	}
	
	insert(arr,size);
	
	return 0;
}
