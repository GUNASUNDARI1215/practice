/*** C program to print the given number pattern ***

input : 
		rows =5
pattern1:
		1
		12
		123
		1234
		12345
		
pattern2:
		    1
		   12
		  123
		 1234
		12345
*/

#include<Stdio.h>

int pattern1(int rows)
{
	int i,j;
	printf("\npattern1\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",j+1);
		}
		printf("\n");
	}
}

int pattern2(int rows)
{
	int i,j;
	printf("\npattern2\n");
	for(i=0;i<rows;i++)
	{
		for(j=i;j<rows;j++)
		{
			printf(" ");
		}
		
		for(j=0;j<=i;j++)
		{
			printf("%d",j+1);
		}
		printf("\n");
	}
}

int main()
{
	int rows;
	printf("Enter the number of rows : ");
	scanf("%d",&rows);
	
	pattern1(rows);
	pattern2(rows);
	
	return 0;
}
