/*
 Write a program which accept one number from user and range of
positions from user. Toggle all bits from that range.
Input : 897 9 13
Toggle all bits from position 9 to 13 of input number ie 897.
*/
#include <stdio.h>

#define ERROR -1

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iValue,int iBeg,int iEnd)
{
	int iMask = 0X00000001;
	int iResult =0;
	if((iBeg>=iEnd) || (iEnd == 0) || (iBeg == 0))
	{
		return ERROR;
	}

	iMask = iMask << iBeg-1;
	iResult = iValue;
	while(iBeg < iEnd+1)
	{
		iResult = iResult ^ iMask;
		printf("%d\n",iResult);
		printf("%d\t",iMask);
		iMask = iMask << 1;
		printf("%d\t",iMask);
		iBeg++;
	}

	return iResult;
}

int main()
{
	UINT iNo = 0;
	int iRet =0;
	int iStart = 0,iEnd  = 0;

	printf("Enter the number  : \t");
	scanf("%d",&iNo);

	printf("Enter the starting of range : \t");
	scanf("%d",&iStart);

	printf("Enter the Ending of range : \t");
	scanf("%d",&iEnd);

	iRet = ToggleBitRange(iNo,iStart,iEnd);

	printf("After the toggling bits from %d and %d answer is : %d",iStart,iEnd,iRet);

	return 0;

}