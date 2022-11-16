//**C program to reverse the given sentence using recursion*///

#include<stdio.h>

void reverse()
{
	char sentence;
	scanf("%c",&sentence);
	
	
	if(sentence!='\n')
	{
		reverse();
		printf("%c",sentence);
	}
}

int main()
{
	printf("Enter the sentence need to be reversed: ");
	reverse();
	
	return 0;
}
