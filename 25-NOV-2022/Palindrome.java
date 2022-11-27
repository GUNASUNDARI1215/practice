import java.util.Scanner;

class Palindrome
{
	static void check_palindrome(int num)
	{
		int original_num=num;
		int remainder,reversed_num=0;
		while(num>0)
		{
			remainder=num%10;
			reversed_num=(reversed_num*10)+remainder;
			num/=10;
		}
		
		if(reversed_num==original_num)
			System.out.println(original_num+" is palindrome number");
		else
			System.out.println(original_num+" is not palindrome number");
	}

	public static void main(String[] args)
	{
		int number;
		System.out.print("Enter a number : ");
		Scanner get=new Scanner(System.in);
		number=get.nextInt();
		
		check_palindrome(number);
	}
}
		