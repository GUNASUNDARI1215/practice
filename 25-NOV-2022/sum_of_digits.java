import java.util.Scanner;

class sum_of_digits
{

	static int Sum(int num)
	{
		if(num==0)
			return 0;
		return (num%10)+Sum(num/10);
	}

	static int get_sum(int num)
	{
		int remainder,sum=0;
		while(num>0)
		{
			remainder=num%10;
			sum=sum+remainder;
			num/=10;
		}
		
		return sum;
	}

	public static void main(String[] args)
	{
		int number;
		System.out.print("Enter a number : ");
		Scanner get=new Scanner(System.in);
		number=get.nextInt();
		
		/*** Using loop ***
		System.out.println("The sum of digits: "+get_sum(number));
		*/

		/*** Using recursion***/
		System.out.println("The sum of digits: "+Sum(number));		
	}
}
		