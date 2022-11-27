import java.util.Scanner;

class Prime
{
	static void check_prime(int number)
	{
		int i,flag=0;
		for(i=2;i<(number/2);i++)
		{
			if((number%i)==0)
			{
				flag=1;
				System.out.println(number+" is not prime number");
				break;
			}
		}
		
		if(flag==0)
			System.out.println(number+" is prime number");
	}
		
	public static void main(String[] args)
	{
		int number;
		System.out.println("Enter a number : ");
		Scanner get=new Scanner(System.in);
		number=get.nextInt();
		
		check_prime(number);
	}
}
