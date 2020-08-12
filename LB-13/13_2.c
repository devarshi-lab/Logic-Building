/*
Accept number from user and display below pattern.
Input : 5
Output : 5 # 4 # 3 # 2 # 1 # 
*/

#include<stdio.h>

void pattern(int iValue)
{
	int iCnt = 0;

	if(iValue < 0)
	{
		iValue = -iValue;
	}

	for(iCnt = iValue;iCnt > 0;iCnt--)
	{
		printf("%d\t#\t",iCnt);
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