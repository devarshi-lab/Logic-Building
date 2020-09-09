/*
 Write a program which accept one number from user and off 7th and 10th
bit of that number. Return modified number.
Input : 577
Output : 1 
*/
//0000 0000 0000 0000 0000 0010 0100 0000

//1 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192 16384 32768 65536 131072 262144 524288 1048576
//2097152 4194304 8388608 16777216 33554432 67108864 134217728 268435456 536870912 1073741824 2147483648
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL OffBit(UINT iValue)
{
	int iMask = 0X00000240;
	int iResult = 0;

	if(iValue<0)
	{
		iValue  = -iValue;
	}

	iResult = iMask & iValue;

	if(iMask == iResult)
	{
		iResult = iValue ^ iMask;
		return iResult;
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

	bRet = OffBit(iNo);

	if(bRet == FALSE)
	{
		printf("7th and 10th bit is already off...");
	}
	else
	{
		printf("Number after we off 7th and 10th bit  : %d ",bRet);
	}

	return 0;
}