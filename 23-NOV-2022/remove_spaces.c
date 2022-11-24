/***C Program to Remove Spaces from a String****/
#include<stdio.h>
#include<string.h>
#define SIZE 100

remove_spaces(char str1[])
{
	int i;
	for(i=0;i<strlen(str1);i++)
	{
		if(str1[i]!=' ')
			printf("%c",str1[i]);
	}
	
	return 0;
}

int main()
{
//	int size;
//	printf("Enter the size of the string : ");
//	scanf("%d",&size);
	
	char str[SIZE];
	printf("Enter the string : ");
	gets(str);

	printf("After removing spaces,string is :  ");
	remove_spaces(str);
	
	return 0;
}
