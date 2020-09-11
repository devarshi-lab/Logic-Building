/*
Write a program which accept one number and position from user and
check whether bit at that position is on or off. If bit is one return TURE
otherwise return FALSE.
Input : 10 2
Output : TRUE  
*/

//1 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192 16384 32768 65536 131072 262144 524288 1048576
//2097152 4194304 8388608 16777216 33554432 67108864 134217728 268435456 536870912 1073741824 2147483648

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iValue,int iPos)
{
	int iCnt = 0,iRem = 0;

	if(iValue<0)
	{
		iValue  = -iValue;
	}

	while(iValue != 0)
	{
		iRem = iValue%2;
		iCnt++;
		if(iCnt == iPos)
		{
			break;
		}
		iValue = iValue/2;
	}

	if((iCnt == iPos) && (iRem == 1))
	{
		return TRUE;
	}

	return FALSE;
	
}
int main()
{
	UINT iNo = 0;
	int iPos = 0;
	BOOL bRet = FALSE;

	printf("Enter the number : \t");
	scanf("%u",&iNo);

	printf("Enter the position : \t");
	scanf("%d",&iPos);

	bRet = ChkBit(iNo,iPos);

	if(bRet == TRUE)
	{
		printf("%d bit is On ",iPos);
	}
	else
	{
		printf("%d bit is off",iPos);
	}

	return 0;
}