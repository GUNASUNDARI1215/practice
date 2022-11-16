/** C program to find the non duplicate elements of array**///


#include<stdio.h>

partition(int *A,int start,int end)
{
	int pivot=A[end];
	int partition_index=start;
	int i,temp,t;
	
	for(i=start;i<end;i++)
	{
		if(A[i]<=pivot)
		{
			temp=A[i];
			A[i]=A[partition_index];
			A[partition_index]=temp;
			partition_index++;
		}
	}
	
	t=A[partition_index];
	A[partition_index]=A[end];
	A[end]=t;
	
	return partition_index;
}

Quicksort(int *A,int start,int end)
{
	if(start<end)
	{
	int partition_index=partition(A,start,end);
	Quicksort(A,start,partition_index-1);
	Quicksort(A,partition_index+1,end);
	}
}

unique_element(int *arr,int arr_size)
{
	int i;
	for(i=0;i<arr_size;i++)
	{
		if(arr[i]!=arr[i+1])
		{
			printf("%d ",arr[i]);
		}
	
		else
			i++;
	}
}

int main()
{
	int arr_size;
	printf("Enter the size of Array : ");
	scanf("%d",&arr_size);
	
	int arr[arr_size];
	int i;
	printf("Enter the Elements of array : \n");
	for(i=0;i<arr_size;i++)
	{
		printf("Element[%d] - ",i);
		scanf("%d",&arr[i]);
	}
	
	Quicksort(arr,0,arr_size-1);
	

	printf("The non_duplicate element of the array is : ");
	unique_element(arr,arr_size);
	
	return 0;
}
