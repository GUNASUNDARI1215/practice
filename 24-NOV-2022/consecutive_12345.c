/**** C program to print the given number pattern ***

input:
		rows=5
		
pattern1
		12345
		1234
		123
		12
		1

pattern2
		12345
		 1234
		  123
		   12
		    1

*/

#include<Stdio.h>

int pattern1(int rows)
{
	int i,j;
	printf("\npattern1\n");
	for(i=rows;i>0;i--)
	{
		for(j=1;j<=i;j++)
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
	for(i=rows;i>0;i--)
	{
		for(j=i;j<rows;j++)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
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
