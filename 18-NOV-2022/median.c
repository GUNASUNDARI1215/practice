//  C program to find the median of the given array

#include<stdio.h>


int partition(float *A,int start,int end)
{
	int pivot=A[end],i;
	int partitionIndex=start;
	float t,temp;
	
	for(i=start;i<end;i++)
	{
		if(A[i]<=pivot)
		{
			temp=A[i];
			A[i]=A[partitionIndex];
			A[partitionIndex]=temp;
			partitionIndex++;			
		}
	}
		t=A[partitionIndex];
		A[partitionIndex]=A[end];
		A[end]=t;
		
		return partitionIndex;
}

void Quicksort(float *A,int start,int end)
{
	if(start < end)
	{
		int partitionIndex=partition(A,start,end);
		Quicksort(A,start,partitionIndex-1);
		Quicksort(A,partitionIndex+1,end);
	}
}

int findMedian(float arr1[],int size)
{
	float median;
	
	if(size%2==0)
		median= (arr1[size/2]+arr1[size/2-1]) / 2.0;

	else
		median=arr1[size/2];
	
	printf("The median of the given array is %f",median);
	
	return 0;
}

int main()
{
	int size,i;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	
	float arr[size];
	for(i=0;i<size;i++)
	{
		printf("Element[%d]- ",i);
		scanf("%f",&arr[i]);
	}
	
	//sort the array using quick sort
	Quicksort(arr,0,size-1);
	
	findMedian(arr,size);
	
	return 0;
}
