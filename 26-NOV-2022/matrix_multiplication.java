import java.util.Scanner;

class matrix_multiplication
{
	public static void main(String[] args)
	{
	int row1,row2,column1,column2;
	int i,j,k;
	Scanner get=new Scanner(System.in);

	/***get MATRIX 1***/
	System.out.print("Enter the number of rows and columns of matrix 1: ");
	row1=get.nextInt();
	column1=get.nextInt();
	
	int matrix1[][]=new int[row1][column1];
	System.out.println("Enter the elements of matrix1: ");
	for(i=0;i<row1;i++)
	{
	  for(j=0;j<column1;j++)
	  {
		System.out.print("Element[" +i +"][" +j +"] ");
		matrix1[i][j]=get.nextInt();
	  }
	}

	/***get MATRIX 2***/
	System.out.print("Enter the number of rows and columns of matrix 2: ");
	row2=get.nextInt();
	column2=get.nextInt();

	if(column1!=row2)
	{
		System.out.println("matrix can't be multiplied");
		System.exit(0);
	}
	
	int matrix2[][]=new int[row2][column2];
	System.out.println("Enter the elements of matrix2: ");
	for(i=0;i<row2;i++)
	{
	  for(j=0;j<column2;j++)
	  {
		System.out.print("Element[" +i +"][" +j +"] ");
		matrix2[i][j]=get.nextInt();
	  }
	}
	
	/***print matrix1***/
	System.out.println("Matrix 1: ");
	for(i=0;i<row1;i++)
	{
	  for(j=0;j<column1;j++)
	  {
		System.out.print(matrix1[i][j]+" ");
	  }
	  System.out.print("\n");
	}

	/***print matrix2***/
	System.out.println("Matrix 2: ");
	for(i=0;i<row2;i++)
	{
	  for(j=0;j<column2;j++)
	  {
		System.out.print(matrix2[i][j]+" ");
	  }
	  System.out.print("\n");
	}

	/***calculate***/
	int sum=0;
	for(i=0;i<row1;i++)
	{
	  for(j=0;j<column2;j++)
	  {
	    for(k=0;k<row2;k++)
	     {
		sum+=matrix1[i][j]*matrix2[k][j];
	     }
		matrix1[i][j]=sum;
		sum=0;
	  }
	}

	/*** print the result ***/
	System.out.println("Result: ");
	for(i=0;i<row1;i++)
	{
	  for(j=0;j<column2;j++)
	   {
		System.out.print(matrix1[i][j]+" ");
	   }
	   System.out.print("\n");
	}	 			
	
	}
}
	