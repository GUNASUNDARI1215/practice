/****** c program for Numbered Square Printing***********/

#include<stdio.h>

int main()
{
	int rows;
	printf("Enter the number of rows : ");
	scanf("%d",&rows);
	
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<rows;j++)
		{
			printf("1");
		}
		printf("\n");	
	}
	
	return 0;
}
