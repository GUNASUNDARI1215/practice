//*** C program to find the frequency of each digit in a string****///

#include<stdio.h>

frequency_count(char str1[],int size)
{
	int i;
	
	// initialize a empty array to count and store frequency 
	int frequency[10] = {0}; 
	
	for(i=0;i<size;i++)
	{
		if(str1[i]>='0'&&str1[i]<='9')
		{
			frequency[str1[i]-'0']++ ;
		}
	}
	
	for(i=0;i<10;i++)
	{
		if(frequency[i]>0)
			printf("Frequency of %d is %d \n",i,frequency[i]);
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
