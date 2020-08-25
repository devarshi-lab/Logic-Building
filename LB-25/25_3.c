/*
 Accept Character from user and check whether it is digit or not
(0-9).
Input : 7
Output : TRUE
Input : d
Output : FALSE 
*/


#include<stdio.h>

#define YES 1
#define NO 0
typedef int BOOL;

BOOL ChkDigit(char cValue)
{
	if((cValue >= '1' && cValue <= '9'))
	{
		return YES;
	}
	else
	{
		return NO;
	}
}
int main()
{
	char ch = '\0';
	BOOL bRet = NO;

	printf("Enter the character : \t");
	scanf("%c",&ch);

	bRet = ChkDigit(ch);

	if(bRet == YES)
	{
		printf("It is Digit!!!\n");
	}
	else
	{
		printf("It is not digit !!!\n");
	}

	return 0;
}
