/*
Write a program which accept one number from user and toggle contents
of first and last nibble of the number. Return modified number. (Nibble is a
group of four bits)
*/

//1 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192 16384 32768 65536 131072 262144 524288 1048576
//2097152 4194304 8388608 16777216 33554432 67108864 134217728 268435456 536870912 1073741824 2147483648

#include<stdio.h>

int ChkBit(int iValue)
{
	int iResult=0;

	if(iValue<0)
	{
		iValue  = -iValue;
	}

	iResult = iMask ^ iValue;

	return iResult;
	
}
int main()
{
	int iNo = 0;
	int iPos = 0;
	int iRet = 0;

	printf("Enter the number : \t");
	scanf("%u",&iNo);

	iRet = ChkBit(iNo);

	printf("%d",iRet);
	

	return 0;
}