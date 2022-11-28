import java.util.Scanner;
import java.util.Arrays;

class small_large
{
	static void second_smallest(int array[],int size)
	{
		int i;
		for(i=1;i<size;i++)
		{
			if(array[i]>array[0])
			{
				System.out.println("The second smallest element is "+array[i]);
				return;
			}
		}
		System.out.println("There is no second smallest element");
	}
	
	static void second_largest(int array[],int size)
	{
		int i;
		for(i=size-2;i>0;i--)
		{
			if(array[i]<array[size-1])
			{
				System.out.println("The second largest element is "+array[i]);
				return;
			}
		}
		System.out.println("There is no second largest element");
	}



	public static void main(String[] args)
	{
		int size,i;
		Scanner get=new Scanner(System.in);

		System.out.print("Enter the size of array: ");
		size=get.nextInt();
	
		int arr[]=new int[size];
		System.out.println("Enter the elements of array: ");
		for(i=0;i<size;i++)
		{
			System.out.print("Element[" +i +"]");
			arr[i]=get.nextInt();
		}

		Arrays.sort(arr);
		second_smallest(arr,size);
		second_largest(arr,size);
	}
}