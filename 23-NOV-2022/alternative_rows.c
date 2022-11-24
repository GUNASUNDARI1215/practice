/*** C program to print number pattern with 1, 0 at alternate rows *****
Input:  rows : 5
		columns: 5

Output: 11111
		00000
		11111
		00000
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
			if(i%2==0)
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}
	
	return 0;
}
