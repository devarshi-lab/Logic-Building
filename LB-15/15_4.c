/*
   Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 5
Output : 
 4 4 4 4 4
 3 3 3 3 3
 2 2 2 2 2
 1 1 1 1 1 
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
		for(j = 1;j <= iCol; j++)
		{	
			printf("%d\t",i);
		}
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