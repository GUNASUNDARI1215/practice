/***** C program to print the given pattern 

input:
		rows=5
		columns=5
		
output:
		12345
		23451
		34521
		45321
		54321
*/

#include<stdio.h>

int main()
{
	int rows;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	
	int columns;
	printf("Enter the number of columns: ");
	scanf("%d",&columns);
	
	int i,j;
	for(i=1;i<=rows;i++)
	{
		for(j=i;j<=columns;j++)
		{
			printf("%d",j);
		}
		
		for(j=i-1;j>0;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	return 0;
}
