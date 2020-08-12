/*
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 5 iCol = 5
Output : 
 a b c d e
 1 2 3 4 5
 a b c d e
 1 2 3 4 5
 a b c d e 
*/


#include<stdio.h>

void pattern(int iRow,int iCol)
{
	int i = 0,j = 0;
	int num = 1;
	char ch = 'a';

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
				printf("%d\t",num++);
			}
			else
			{
				printf("%c\t",ch++);
			}
		}
		printf("\n");
		num = 1;
		ch = 'a';
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