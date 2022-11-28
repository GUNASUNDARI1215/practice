import java.util.Scanner;

/*
prime   numbers: 153, 370, 371, 407
perfect numbers: 6, 28, 496, 8128
*/

class Armstrong_perfect
{
	static void check_Armstrong(int number)
	{
		int given_number=number;
		int remainder,sum=0;

		while(number>0)
		{
			remainder=number%10;
			sum+=remainder*remainder*remainder;
			number=number/10;
		}
		if(sum==given_number)
			System.out.println("The given number is Armstrong number");
		else
			System.out.println("The given number is not Armstrong number");
	}

	static void check_Perfect(int number)
	{
		int given_number=number;
		int i,sum=0;
		for(i=1;i<number;i++)
		{
			if(number%i==0)
				sum+=i;
		}

		if(sum==given_number)
			System.out.println("The given number is Perfect number");
		else
			System.out.println("The given number is not Perfect number");		
	}

	public static void main(String[] args)
	{
		int num;
		Scanner get=new Scanner(System.in);

		System.out.print("Enter a number: ");
		num=get.nextInt();

		check_Armstrong(num);
		check_Perfect(num);
	}
}