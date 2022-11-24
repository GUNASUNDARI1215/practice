/****** C program to reverse the digits of the given number and find addition of original and reversed number ***/

#include<Stdio.h>

int main()
{
	int number;
	printf("Enter the number:  ");
	scanf("%d",&number);
	
	int original_number=number;
	int remainder,sum=0;
	
	while(number!=0)
	{
		remainder=number%10;
		sum=sum*10+remainder;
		number=number/10;
	}
	
	int reversed_num=sum;
	
	printf("Addition of %d and %d gives :%d ",original_number,reversed_num,original_number+reversed_num);
	
	return 0;
}
