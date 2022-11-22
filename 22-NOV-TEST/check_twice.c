/****** C program to check whether the given array have 10 or 20 twice****/

#include<stdio.h>

twice(int arr[],int size)
{
	int ten=0,twenty=0,i;
	
	for(i=0;i<size;i++)
	{
		if(arr[i]==10)
			ten++;
			
		if(arr[i]==20)
			twenty++;
			
	}
	
	if(ten>=2 || twenty>=2)
	{
		if(ten>=2) 
			printf("The given array have ten %d times",ten);
			
		if(twenty>=2) 
			printf("\nThe given array have twenty %d times",twenty);
	}
	
	else
		printf("\nThe given array doesn't have 10 or 20 twice");
	
	
	return 0;
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
	
	twice(arr,size);
	
	return 0;
}
