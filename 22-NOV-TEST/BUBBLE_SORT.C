/***** c PROGRAM FOR BUBBLE SORT******/

#include<stdio.h>

Bubble_sort(int array[],int arr_size)
{
	int i,j,temp;
	
	for(i=1;i<arr_size-1;i++)
	{
		for(j=0;j<arr_size-1;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<arr_size;i++)
	{
		printf("%d ",array[i]);
	}
	
	return 0;
}

int main()
{
	int arr_size,i;
	printf("Enter the size of array : ");
	scanf("%d",&arr_size);
	
	int array[arr_size];
	printf("Enter the elements of the array :  \n");
	for(i=0;i<arr_size;i++)
	{
		printf("Element[%d] : ",i);
		scanf("%d",&array[i]);
	}
	Bubble_sort(array,arr_size);
	
	return 0;
}
