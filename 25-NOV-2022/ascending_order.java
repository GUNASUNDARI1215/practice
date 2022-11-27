import java.util.Scanner;

class ascending_order
{
	static int partition(int A[],int start,int end)
	{
		int i;
		int partition_index=start;
		int pivot=A[end];
		int temp1,temp2;
	
		for(i=start;i<end;i++)
		{
			if(A[i]<=pivot)
			{
				temp1=A[i];
				A[i]=A[partition_index];
				A[partition_index]=temp1;
				partition_index++;
			}
		}
	
		temp2=A[partition_index];
		A[partition_index]=A[end];
		A[end]=temp2;
	
	return partition_index;
	}

	static void sort(int A[],int start,int end)
	{
		if(start<end)
		{
			int partition_index=partition(A,start,end);
			sort(A,start,partition_index-1);
			sort(A,partition_index+1,end);
		}
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
			System.out.print("Element["+ i + "] - ");
			arr[i]=get.nextInt();
		}

		sort(arr,0,size-1);

		System.out.print("sorted array: ");
		for(int i=0;i<size;i++)
			System.out.print(arr[i]+" ");
	}
}