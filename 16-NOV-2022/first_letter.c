// C program to print first letter of each word in a sentence

#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100

first_letter(char str1[])
{
	int i;
	int length=strlen(str1);
	
	char first_letters[50];
	first_letters[0]=str1[0];
	int i1=1;
	
	for(i=0;i<length;i++)
	{
		first_letters[0]=str1[0];
		
		if(str1[i]==' ')
		{
			first_letters[i1]=str1[i+1];
			i1++;
		}
	}
	
	printf("First letters of each word in the given sentence : \n %s",first_letters);
	
	return 0;
}

int main()
{
	char str[MAX_SIZE];
	printf("Enter the sentence: ");
	gets(str);
	
	first_letter(str);
	
	return 0;
}
