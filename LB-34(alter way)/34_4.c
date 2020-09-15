/*
Write a program which accept one number and position from user and
toggle that bit. Return modified number.
Input : 10 3
Output : 14 
*/

//1 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192 16384 32768 65536 131072 262144 524288 1048576
//2097152 4194304 8388608 16777216 33554432 67108864 134217728 268435456 536870912 1073741824 2147483648

#include<stdio.h>

#define ERROR -1

typedef unsigned int UINT;

UINT ChkBit(UINT iValue,int iPos)
{
	UINT iMask = 0X00000001;
	UINT iResult = 0;

	if((iPos<=0) || (iPos>32))
	{
		return ERROR;
	}

	iMask = iMask << (iPos-1);

	iValue = iValue ^ iMask;

	return iValue;
	
}
int main()
{
	UINT iNo = 0;
	int iPos = 0;
	UINT iRet = 0;

	printf("Enter the number : \t");
	scanf("%d",&iNo);

	printf("Enter the position : \t");
	scanf("%d",&iPos);

	iRet = ChkBit(iNo,iPos);

	if(iRet == ERROR)
	{
		printf("ERROR : INVALID NUMBER OR POSITION!!!\n");
	}
	else
	{
		printf("Number after modification is : %d ",iRet);
	}

	return 0;
}