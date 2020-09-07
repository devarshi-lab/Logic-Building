/*
Write a program which checks whether 5th & 18th bit is On or OFF. 
*/
//0000 0000 0000 0010 0000 0000 0001 0000

//1 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192 16384 32768 65536 131072 262144 524288 1048576
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iValue)
{
	int iMask = 0X00020010;
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
		printf("18th and 5th bit is on...");
	}
	else
	{
		printf("18th and 5th bit is off...");
	}

	return 0;
}