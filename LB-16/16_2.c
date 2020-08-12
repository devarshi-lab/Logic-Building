/*
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 5
Output : 
 2 4 6 8 10
 1 3 5 7 9
 2 4 6 8 10
 1 3 5 7 9
*/


#include<stdio.h>

void pattern(int iRow,int iCol)
{
	int i = 0,j = 0;
	int num1 = 0,num2 = -1;

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
			if(i % 2 == 0)
			{
				printf("%d\t",(num2=num2+2));
			}
			else
			{
				printf("%d\t",(num1=num1+2));
			}
		}
		printf("\n");
		num1 = 0;
		num2 = -1;
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