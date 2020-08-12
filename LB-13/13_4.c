 /*
Accept number from user and display below pattern.
Input : 4
Output : # 1 * # 2 * # 3 * # 4 *
*/


#include<stdio.h>

void pattern(int iValue)
{
	int iCnt = 0;

	if(iValue < 0)
	{
		iValue = -iValue;
	}

	for(iCnt = 1;iCnt <= iValue;iCnt++)
	{
		printf("#\t%d\t*\t",iCnt);
	}
}

int main()
{
	int iNo = 0;
	
	printf("Enter a number : \t");
	scanf("%d",&iNo);

	pattern(iNo);

	return 0;
}