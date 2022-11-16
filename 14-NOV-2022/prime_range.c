//***C program to fine the prime numbers between the given range*//

#include<stdio.h>

int main()
{
	int higher_limit,lower_limit,i,j,flag;
	
	printf("Enter the lower limit : ");
	scanf("%d",&lower_limit);
	
	printf("Enter the higher limit : ");
	scanf("%d",&higher_limit);
	
	printf("The prime numbers between %d and %d : ",lower_limit,higher_limit);
	
	while(lower_limit<higher_limit)
	{
		flag=0;
		
		if(lower_limit<=1)
		{
			lower_limit++;
			continue;
		}
		
		for(i=2;i<=lower_limit/2;i++)
		{
			if(lower_limit%i==0)
			{
				flag=1;
				break;
			}
		}
		
		if(flag==0)
		{
			printf("%d ",lower_limit);
		}
		
		lower_limit++;
				
	}
		
	return 0;
}
