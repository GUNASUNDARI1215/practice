//C Program to count the frequency of each character

#include<stdio.h>

frequency_count(char str1[],int size)
{
	// initialize a empty array to count and store frequency 
	int frequency[26] = {0}; 
	int i;
	
	for(i=0;i<size;i++)
	{
		if(str1[i]>='a' && str1[i]<='z')
		{
			frequency[str1[i] - 97]++; //ASCII value of 'a'=97
		}
		
		else if(str1[i]>='A' && str1[i]<='Z')
		{
			frequency[str1[i] - 65]++; //ASCII value of 'A'=65
		}
	}
	
	for(i=0;i<26;i++)
	{
		if(frequency[i]>0)
		{
			printf("Frequency of %c is %d \n",i+97,frequency[i]);
		}
	}
	
	return 0;
}


int main()
{
	int size;
	printf("Enter the size of string: ");
	scanf("%d",&size);
	
	char str[size];
	printf("Enter the string: ");
	scanf("%s",&str);
	
	frequency_count(str,size);
	
	return 0;
}
