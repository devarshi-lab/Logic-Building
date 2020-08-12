/*
   Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 4
Output : 
 1 2 3 4
 5 6 7 8
 9 1 2 3
 4 5 6 7 
*/


#include<stdio.h>

void pattern(int iRow,int iCol)
{
	int i = 0,j = 0;
	int num = 0;

	if(iRow < 0)
	{
		iRow= -iRow;
	}
	
	if(iCol < 0)
	{
		iCol= -iCol;
	}

	for(i = 1;i <= iRow; i++)
	{
		for(j = 1;j <= iCol; j++)
		{	
			printf("%d\t",++num);
			if(num == 9)
			{
				num = 0;
			}
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