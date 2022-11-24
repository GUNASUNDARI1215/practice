/****** C program Internal Varsity Number Square Printing*********

Input: rows:4
Output: 333
		313
		323
		333
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
		if(i==0 || i==rows-1)
		{
			for(j=0;j<3;j++)
			{
				printf("3");	
			}
		}
					
		else
		{
			for(j=0;j<3;j++)
			{
				if(j==0 || j==2)
					printf("3");
					
				else
					printf("%d",i);
			}
		}
		printf("\n");
	}
	return 0;
}
