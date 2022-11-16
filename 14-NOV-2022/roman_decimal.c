//** C program to convert roman to decimal**//

#include<stdio.h>

int decimal_value(char r1)
{
	if(r1 == 'I')
		return 1;
	if(r1 == 'V')
		return 5;
	if(r1 == 'X')
		return 10;
	if(r1 == 'L')
		return 50;
	if(r1 == 'C')
		return 100;
	if(r1 == 'D')
		return 500;
	if(r1 == 'M')
		return 1000;
		
	return 0;
		
}

int romanToDecimal(char roman[],int size)
{
	int result=0,i;
		
	for(i=0;i<size;i++)
	{
		int char1=decimal_value(roman[i]);
		
		if(i+1 < size)
		{
			int char2=decimal_value(roman[i+1]);
			
			if(char1>=char2)
			{
				result=result+char1;
			}
			
			else
			{
				result=result+char2-char1;
				i++;
			}
		}
		
		else
		{
			result=result+char1;
		}
	}
	
	return result;
}

int main()
{
	int size;
	printf("Enter the size of roman : ");
	scanf("%d",&size);
	
	char roman[size];
	printf("Enter the roman : ");	
	scanf("%s",&roman);
	
	printf("Decimal number of the %s is %d ",roman,romanToDecimal(roman,size));
	
	return 0;	
}
