//C program to convert binary number into its equivalent hexadecimal number

#include<Stdio.h>

int main()
{
	long int binary,hexadecimal=0;
	int i=1,remainder;
	
	printf("Enter the binary number: ");
    scanf("%ld", &binary);
    int binary1=binary;
    
    while(binary!=0)
    {
    	remainder=binary%10;
    	hexadecimal=hexadecimal+remainder*i;
        i=i*2;
        binary=binary/10;
	}

	printf("The hexadecimal value of %d is %LX",binary1,hexadecimal);
	
	return 0;
}
