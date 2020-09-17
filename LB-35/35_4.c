/*
Write a program which accept one number , two positions from user and
check whether bit at first or bit at second position is ON or OFF.
Input : 10 3 7
Output : TRUE 
*/

#include<stdio.h>				// 1 0 1 1	 0 1 1 0
								// 0 1 0 0	 0 1 0 0
#define TRUE 1
#define FALSE 0
#define ERROR -1

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iValue,int iPos1,int iPos2)
{
	int iMask1 = 0X00000001;
	int iMask2 = 0X00000001;
	int iResult = 0;
	if((iPos1<0 || iPos1>32) || (iPos2<0 || iPos2>32))
	{
		return ERROR;
	}
	iMask1 = iMask1 << (iPos1-1);
	iMask2 = iMask2 << (iPos2-1);

	if((((iValue & iMask1) == iMask1)) || ((iValue & iMask2) == iMask2))
	{
		return TRUE;
	}

	return FALSE;
}

int main()
{
	UINT iNo = 0;
	int iPos1 = 0,iPos2 = 0;
	BOOL bRet = FALSE;

	printf("Enter the number : \t");
	scanf("%d",&iNo);

	printf("Enter first position : \t");
	scanf("%d",&iPos1);

	printf("Enter second position : \t");
	scanf("%d",&iPos2);

	bRet = ChkBit(iNo,iPos1,iPos2);

	if(bRet == TRUE)
	{
		printf("one of the or both bits are On...");
	}
	else if(bRet == ERROR)
	{
		printf("ERROR : INVALID POSITION!!!");
	}
	else
	{
		printf("Both bits are Off...");
	}

	return 0;

}	