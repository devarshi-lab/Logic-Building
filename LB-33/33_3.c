/*
 Write a program which accept one number from user and toggle 7th bit of
that number. Return modified number.
Input : 137
Output : 201 
*/
//0000 0000 0000 0000 0000 0000 0100 0000

//1 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192 16384 32768 65536 131072 262144 524288 1048576
//2097152 4194304 8388608 16777216 33554432 67108864 134217728 268435456 536870912 1073741824 2147483648
#include<stdio.h>

typedef unsigned int UINT;

int ToggleBit(UINT iValue)
{
	int iMask = 0X00000040;
	int iResult = 0;

	if(iValue<0)
	{
		iValue  = -iValue;
	}

	iResult = iMask ^ iValue;

	return iResult;
}
int main()
{
	UINT iNo = 0;
	int iRet = 0;

	printf("Enter the number : \t");
	scanf("%u",&iNo);

	iRet = ToggleBit(iNo);

	printf("Number after toggling 7th bit is :  %d ",iRet);

	return 0;
}