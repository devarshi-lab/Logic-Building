/*
Write a program which checks whether 15th bit is On or OFF
*/
//0000 0000 0000 0000 0100 0000 0000 0000
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iValue)
{
	int iMask = 0X00004000;
	int iResult = 0;

	if(iValue<0)
	{
		iValue  = -iValue;
	}

	iResult = iMask & iValue;

	if(iMask == iResult)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	UINT iNo = 0;
	BOOL bRet = FALSE;

	printf("Enter the number : \t");
	scanf("%u",&iNo);

	bRet = ChkBit(iNo);

	if(bRet == TRUE)
	{
		printf("15th bit is on...");
	}
	else
	{
		printf("15th bit is off...");
	}

	return 0;
}