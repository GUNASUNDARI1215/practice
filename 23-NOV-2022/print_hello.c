/******** C program to print the given string in right angle triangle ********

Input: Hello

Output: H
		He
		Hel
		Hell
		Hello
*/

#include<stdio.h>

print(char str1[],int size)
{
	int i,j;
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<=i;j++)
			printf("%c",str1[j]);
			printf("\n");
	}
	
	return 0;
}

int main()
{
	int size;
	printf("Enter the size of the string : ");
	scanf("%d",&size);
	
	char str[size];
	printf("Enter the string : ");
	scanf("%s",&str);
	
	print(str,size);
	
	return 0;
}
