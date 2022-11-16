// C Program to Capitalize the first character of each word in a sentence

#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100

capitalize(char str1[])
{
	int i;
	int length=strlen(str1);
	
	for(i=0;i<length;i++)
	{
		if(str1[0]>='a' && str1[0]<='z')
		{
			str1[0]=str1[0]-32;
		}
		
		if(str1[i]==' ' && str1[i+1]>='a' && str1[i+1]<='z')
		{
			str1[i+1]=str1[i+1]-32;
		}
	}
	
	printf("After capitalizing the first character of each word : \n %s",str1);
	
	return 0;
}

int main()
{
	char str[MAX_SIZE];
	printf("Enter the sentence: ");
	gets(str);
	
	capitalize(str);
	
	return 0;
}
