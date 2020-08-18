/*
  Accept number of rows and number of columns from user and display below
pattern.

Input : iRow = 6 iCol = 6
Output : 
 * * * * * *
 *       * *
 *     *   *
 *   *     *
 * *       *
 * * * * * * 

*/


#include<stdio.h>

void pattern(int iRow,int iCol)
{
	int i = 0,j = 0;

	if(iRow < 0)
	{
		iRow= -iRow;
	}
	
	if(iCol < 0)
	{
		iCol= -iCol;
	}

	for(i = iRow;i > 0; i--)
	{
		printf("\n");
		for(j = 1;j <= iCol ; j++)
		{
			if((i==j) || (i==1) || (i==iRow) || (j==1) || (j==iCol))
			{
				printf("*\t");
			}
			else
			{
				printf("\t");
			}
			
		}
		
		printf("\n");
		printf("\n");
	}
}

int main()
{
	int iRows = 0,iCols = 0;
	
	printf("Enter a number of rows : \t");
	scanf("%d",&iRows);

	printf("Enter a number of columns: \t");
	scanf("%d",&iCols);

	pattern(iRows,iCols);

	return 0;
}