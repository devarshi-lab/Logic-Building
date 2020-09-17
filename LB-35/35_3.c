/*
 Write a program which accept one number from user and check whether
9th or 12th bit is on or off.
Input : 257
Output : TRUE 
*/

#include<stdio.h>				// 1 0 1 1	 0 1 1 0
								// 0 1 0 0	 0 1 0 0
#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iValue)
{
	int iMask1 = 0X00000100;
	int iMask2 = 0X00000800;
	int iResult = 0;

	if((((iValue & iMask1) == iMask1)) || ((iValue & iMask2) == iMask2))
	{
		return TRUE;
	}

	return FALSE;
}

int main()
{
	UINT iNo = 0;
	BOOL bRet = FALSE;

	printf("Enter the number : \t");
	scanf("%d",&iNo);

	bRet = ChkBit(iNo);

	if(bRet == TRUE)
	{
		printf("9th or 12th bit is On...");
	}
	else
	{
		printf("9th or 12th bit is Off...");
	}

	return 0;

}