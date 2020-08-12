/*
   Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 3 iCol = 5
Output : 
 A A A A A
 B B B B B
 C C C C C 
*/


#include<stdio.h>

void pattern(int iRow,int iCol)
{
	int i = 0,j = 0;
	char ch = 'A';

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
			printf("%c\t",ch);
		}
		printf("\n");
		ch++;
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