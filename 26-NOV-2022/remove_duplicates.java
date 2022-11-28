import java.util.Scanner;
import java.util.Arrays;

class remove_duplicates
{
	static void delete_duplicates(int arr[],int size)
	{
		int i;
		for(i=1;i<size;i++)
		{
			if(arr[i]!=arr[i-1])
			{
				System.out.print(arr[i-1] +" ");
			}
		}
		System.out.print(arr[i-1]);
	}
			
	public static void main(String[] args)
	{
		int size;
		Scanner get=new Scanner(System.in);
	
		System.out.print("Enter the size of array: ");
		size=get.nextInt();

		int arr[]=new int[size];
		System.out.println("Enter the elements of array: ");
		for(int i=0;i<size;i++)
		{
			System.out.print("Element[" +i +"]");
			arr[i]=get.nextInt();
		}
	
		Arrays.sort(arr);
		delete_duplicates(arr,size);
	}
}