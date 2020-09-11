/*
Write a program which accept one number and position from user and off
that bit. Return modified number.
Input : 10 2
Output : 8  
*/

//1 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192 16384 32768 65536 131072 262144 524288 1048576
//2097152 4194304 8388608 16777216 33554432 67108864 134217728 268435456 536870912 1073741824 2147483648

#include<stdio.h>

int ChkBit(int iValue,int iPos)
{
	int iCnt = 0,arr[31] = {0};
	int i =0,j=0;

	if(iValue<0)
	{
		iValue  = -iValue;
	}

	while(iValue != 0)
	{
		arr[iCnt] = iValue%2;
		iValue = iValue/2;
		iCnt++;
	}

	if(arr[iPos-1] == 1)
	{
		arr[iPos-1] = 0;
	}

	for(i=0,j=1;i<iCnt;i++)
	{
		iValue += arr[i]*j;
		j *= 2;

	}

	return iValue;
	
}
int main()
{
	int iNo = 0;
	int iPos = 0;
	int iRet = 0;

	printf("Enter the number : \t");
	scanf("%u",&iNo);

	printf("Enter the position : \t");
	scanf("%d",&iPos);

	iRet = ChkBit(iNo,iPos);

	printf("%d",iRet);
	

	return 0;
}