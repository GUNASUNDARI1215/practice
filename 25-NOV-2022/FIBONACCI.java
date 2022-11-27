import java.util.Scanner;

class FIBONACCI
{
	static int num1=1,num2=2,num3=0;

	static void print_fibonacci(int n)
	{
		if(n>0)
		{
			num3=num1+num2;
			num1=num2;
			num2=num3;
			System.out.print(num3+" ");
			print_fibonacci(n-1);
		}
	}

	public static void main(String[] args)
	{
		int limit;
		int n1=1,n2=2;
		
		Scanner get=new Scanner(System.in);
		System.out.println("Enter a number: ");
		limit=get.nextInt();

		//print first two elements
		System.out.print(n1+" "+n2);
		
		print_fibonacci(limit-2);
	}
}
		
