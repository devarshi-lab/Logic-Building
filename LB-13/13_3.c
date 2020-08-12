 /*
Accept number from user and display below pattern.
Input : 5
Output : 1 * 2 * 3 * 4 * 5 *
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
		printf("%d\t*\t",iCnt);
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