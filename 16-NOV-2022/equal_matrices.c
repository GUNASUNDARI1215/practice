//C program to compare if the two matrices are equal or not 

#include <stdio.h>

int main()
{
	int arows,acolumns,brows,bcolumns;
	int i,j;
	int flag=1;
	
	//MATRIX A
	printf("Enter the number of rows and columns of matrix A: ");
	scanf("%d %d",&arows,&acolumns);
	int a[arows][acolumns];
	
	printf("Enter the elements of matrix a :\n" );
	for(i=0;i<arows;i++)
	{
		for(j=0;j<acolumns;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	//MATRIX B
	printf("Enter the number of rows and columns of matrix B: ");
	scanf("%d %d",&brows,&bcolumns);
	int b[brows][bcolumns];
	
	printf("Enter the elements of matrix b :\n" );
	for(i=0;i<brows;i++)
	{
		for(j=0;j<bcolumns;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
   printf("RESULT: \n");
   /* Comparing two matrices for equality */
   if(arows == brows && acolumns == bcolumns)
   {
    	printf("Matrices can be compared ");
    	for(i=0; i<arows; i++)
		{
        	for(j=0; j<bcolumns; j++)
			{
        		if(a[i][j] != b[i][j])
				{
               		flag = 0;
              		 break;
            	}
        	}
      	}
   }
   
   else
   {
      printf(" Cannot be compared");
      exit(1);
   }
   
   if(flag == 1 )
    	printf("Two matrices are equal");
   else
		printf(" but two matrices are not equal");
   		
	return 0;
}


