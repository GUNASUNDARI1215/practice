/***** C program to print 0 or 1  number pattern ****

Input:  rows: 5
		columns: 5
		
Output: 11111
		11111
		11111
		11111
		11111
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
			printf("1");
		}
		printf("\n");
	}
	
	return 0;
}
