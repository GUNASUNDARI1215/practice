/***  C program for Right Triangle Number Pattern Printing*******

input: rows=4
ouput:  1
		23
		456
		78910
*/

#include<stdio.h>

int main()
{
	int rows;
	printf("Enter the number of rows : ");
	scanf("%d",&rows);
	
	int i,j,num;
	
	for(i=0;i<=rows;i++)
	{
		for(j=0;j<i;j++)
		{
			num++;
			printf("%d",num);
		}
		printf("\n");
	}
	return 0;
}
