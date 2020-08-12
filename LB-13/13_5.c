 /*
Accept number from user and display below pattern.
Input : 8
Output : 2 4 6 8 10 12 14 16
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
		printf("%d\t",(2*iCnt));
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