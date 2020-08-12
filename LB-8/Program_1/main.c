// TODO : Write a program which accept number from user and if number is less than 50 then print small , if it is greater than 50 and less than 100 then print medium, if it is greater than 100 then print large.

/* 
	Algorithm
		START
			Accpet one number from user as no.
			Check the number
			If numbers is less that 50
				display small
			If number is greater than 100
				display large
			Otherwise
				display medium
		STOP
*/

#include<stdio.h>

typedef int BOOL;

#define SMALL 0
#define LARGE 1
#define MEDIUM 2

BOOL ChkNumber(int iValue)
{
	if(iValue <= 50)
	{
		return SMALL;
	}
	else if(iValue >= 100)
	{
		return LARGE;
	}
	else
	{
		return MEDIUM;
	}
}
int main()
{
	int iNo = 0;
	BOOL bRet = SMALL;

	printf("Enter a number :\t");
	scanf("%d",&iNo);

	bRet = ChkNumber(iNo);

	if(bRet == SMALL)
	{
		printf("Small\n");
	}
	else if(bRet == LARGE)
	{
		printf("Large\n");
	}
	else
	{
		printf("Medium\n");
	}

	return 0;
}


