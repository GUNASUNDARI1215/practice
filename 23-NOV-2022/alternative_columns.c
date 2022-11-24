/*** C program to print number pattern with 1, 0 at alternate columns ***

input:  rows: 5
		columns: 5
		
output: 01010
		01010
		01010
		01010
		01010
*/

#include<Stdio.h>

int main()
{
	int rows;
	printf("Enter the number of rows : ");
	scanf("%d",&rows);
	
	int columns;
	printf("Enter the number of columns : ");
	scanf("%d",&columns);
	
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			if(j%2==0)
				printf("0");
			else
				printf("1");
		}
		printf("\n");
	}
	
	return 0;
}
