/* C program to print the elements of the matrix by traversing in spiral form***

Question :
Given an integer matrix of size N x N. Traverse it in a spiral form.

Format:
Input:
The first line contains N, which represents the number of rows and columns of a matrix.
The next N lines contain N values, each representing the values of the matrix.

Output:
A single line containing integers with space, representing the desired traversal.

Constraints: 0 < N < 500
Example 1:
Input:
3
1 2 3
4 5 6
7 8 9

Output:
1 2 3 6 9 8 7 4 5

Example 2:
Input
3
1 2 3
4 5 6
7 8 9

Output:
1 2 3 6 9 8 7 4 5

*/

#include<stdio.h>

int main()
{
	int n;
	printf("Enter a number of rows(rows=columns) : ");
	scanf("%d",&n);
	
	int a[n][n],rows=n,columns=n;
	int i,j;
	
	printf("\nEnter the elements of the square matrix : \n");	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Element[%d][%d] - ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Given matrix \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	int k=0,l=0;
	
	printf("\nAfter spiral traversing : \n");
	
	while(k<rows && l<columns)
	{
		for(i=l;i<columns;i++)
			printf("%d ",a[k][i]);
		k++;
				
		for(i=k;i<rows;i++)
			printf("%d ",a[i][n-1]);
		columns--;
		
		if(k<rows)
		{
			for(i=columns-1;i>=l;i--)
				printf("%d ",a[n-1][i]);
			rows--;
		}
		
		if(l<columns)
		{
			for(i=rows-1;i>=k;--i)
				printf("%d ",a[i][l]);
			l++;
		}
	}
	return 0;
}




































