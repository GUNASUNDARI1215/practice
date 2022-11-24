/*** C program to print the given number pattern ***

input : 
		rows = 5
		
pattern1
		1
		21
		321
		4321
		54321

pattern2
		    1
		   21
		  321
		 4321
		54321
*/

#include<Stdio.h>

int pattern1(int rows)
{
	int i,j;
	printf("\npattern1\n");
	for(i=1;i<=rows;i++)
	{
		for(j=i;j>0;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

int pattern2(int rows)
{
	int i,j;
	printf("\npattern2\n");
	for(i=1;i<=rows;i++)
	{
		for(j=i;j<rows;j++)
		{
			printf(" ");
		}
		
		for(j=i;j>0;j--)
		{
			printf("%d",j);
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
