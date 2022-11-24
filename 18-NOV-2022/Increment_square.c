/******* C program for Increment Numbered Square Printing *******

Input: rows=4
ouput: 1111
	   2222
	   3333
	   4444
*/

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
			printf("%d",i+1);
		}
		printf("\n");	
	}
	
	return 0;
}
