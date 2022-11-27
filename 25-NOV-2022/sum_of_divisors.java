import java.util.Scanner;

class sum_of_divisors
{
	static int divisors(int num)
	{
		int sum=0;
		
		System.out.print("The list of divisors for "+num +": ");
		for(int i=1;i<=num;i++)
		{
			if(num%i==0)
			{
				System.out.print(i+" ");
				sum=sum+i;
			}
		}
		return sum;
	}
	
	public static void main(String[] args)
	{
		int number;
		Scanner get=new Scanner(System.in);

		System.out.print("Enter a number: ");
		number=get.nextInt();

		/*** Using loop***/
		System.out.println("\nSum of divisors is "  +divisors(number));
	}
}