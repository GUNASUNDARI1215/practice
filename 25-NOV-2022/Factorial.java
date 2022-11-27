import java.util.Scanner;

class Factorial
{
	static int get_factorial(int num)
	{
		if(num==0)
			return 1;
		return (num * get_factorial(num-1));
	}

	static int factorial(int num)
	{
		int fact=1;
		for(int i=1;i<=num;i++)
			fact=fact*i;
		return fact;
	}

	public static void main(String[] args)
	{
		int number;
		Scanner get=new Scanner(System.in);

		System.out.print("Enter a number: ");
		number=get.nextInt();
		
		/*** Using recursion***/
		System.out.println("Factorial of given number: "+get_factorial(number));

		/*** Using loop***
		System.out.println("Factorial of given number: "+ factorial(number));
		*/
	}
}