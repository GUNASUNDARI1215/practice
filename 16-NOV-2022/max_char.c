//C program to find maximum occurring character in a string 

#include<Stdio.h>

max_char(char str1[],int size)
{
	// create empty array to count and store the frequency of each character
	int frequency[255]={0};
	int i,integer_value;
	
	// find the frequency of each character
	for(i=0;i<size;i++)
	{
    	integer_value=(int)str1[i];
        frequency[integer_value]++;
	}
	
	//  find the maximum occuring character 
	int maximum=0;
	for(i=0;i<255;i++)
	{
		if(frequency[i]>frequency[maximum])
        maximum = i;
	}
	
	if(maximum==0)
		printf("No repeating character appeared");
	else
		printf("Maximum occured character is %c for %d times",maximum,frequency[maximum]);
	
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

	max_char(str,size);
	
	return 0;
}
