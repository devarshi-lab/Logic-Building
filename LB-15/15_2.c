/*
  Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : 
 A B C D
 a b c d
 A B C D
 a b c d
*/


#include<stdio.h>

void pattern(int iRow,int iCol)
{
	int i = 0,j = 0;
	char ch1 = 'A';
	char ch2 = 'a';

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
				printf("%c\t",ch2++);
			}
			else
			{
				printf("%c\t",ch1++);
			}
		}
		printf("\n");
		ch1 = 'A';
		ch2 = 'a';
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