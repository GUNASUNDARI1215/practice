/*
C program to arrange even numbers and odd numbers

Question : You are playing an online game. In the game, a list of N numbers is given. The player has
to arrange the numbers so that all the odd numbers of the list come after the even numbers. Write an
algorithm to arrange the given list such that all the odd numbers of the list come after the even numbers.

Input

The first line of the input consists of an integer numbers, representing the size of the list(N).
The second line of the input consists of N space-separated integers representing the values of the list
Output

Print N space-separated integers such that all the odd numbers of the list come after the even numbers

Example

Sample Input

8

10 98 3 33 12 22 21 11

Sample Output

10 98 12 22 3 33 21 11

*/

#include<stdio.h>

int Arrange(int arr1[],int size)
{
	int l=0,r=size-1,temp,i;;
	
	while(l<r)
	{
		while(arr1[l]%2==0 && l<r)
			l++;
			
		while(arr1[r]%2!=0 && l<r)
			r--;
			
		if(l<r)
		{
			temp=arr1[l];
			arr1[l]=arr1[r];
			arr1[r]=temp;
			
			l++;
			r--;
		}
	}
	
	for(i=0;i<size;i++)
	{
		printf("%d ",arr1[i]);
	}
	
	return 0;
}

int main()
{
	int size,i;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	
	int arr[size];
	for(i=0;i<size;i++)
	{
		printf("Element[%d]- ",i);
		scanf("%d",&arr[i]);
	}
	
	Arrange(arr,size);
}

