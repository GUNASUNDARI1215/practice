import java.util.Scanner;

class leap_year
{
	static void check_leap(int year)
	{
		int is_leap=0;
		if(year%4==0)
		{
			is_leap=1;
			if(year%100==0)
			{
				if(year%400==0)
				{
					is_leap=2;
				}
			}
		}
	
		if(is_leap==1)
			System.out.println(year+" is leap year");

		else if(is_leap==2)
			System.out.println(year+" is century leap year");

		else
			System.out.println(year+" is not leap year");
	
	}
	public static void main(String[] args)
	{
		int year;
		Scanner get=new Scanner(System.in);

		System.out.print("Enter any year: ");
		year=get.nextInt();

		check_leap(year);
	}
}