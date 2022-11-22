/****** C program to find the second largest element in the array***/

#include<stdio.h>

Second_largest(int arr1[],int size)
{
	int i;
	for(i=size-2;i>0;i--)
	{
		if(arr1[i]==arr1[size-1])
		{
			printf("There is no second largest element");
			return 0;
		}
	}
	printf("\nThe second largest element is %d",arr1[size-2]);
	return 0;	
}

partition(int A[],int start,int end)
{
	int i,temp1,temp2;
	int partition_index=start;
	int pivot=A[end];
	
	for(i=start;i<end;i++)
	{
		if(A[i]<=pivot)
		{
			temp1=A[i];
			A[i]=A[partition_index];
			A[partition_index]=temp1;
			partition_index++;
		}
	}
	
	temp2=A[partition_index];
	A[partition_index]=A[end];
	A[end]=temp2;
	
	return partition_index;
}

sort(int *A,int start,int end)
{
	if(start<end)
	{
		int partition_index=partition(A,start,end);
		sort(A,start,partition_index-1);
		sort(A,partition_index+1,end);
	}
		
}

int main()
{
	int size,i;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter the elements of the array :  \n");
	for(i=0;i<size;i++)
	{
		printf("Element[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	sort(arr,0,size-1);

	Second_largest(arr,size);
	
	return 0;
}
