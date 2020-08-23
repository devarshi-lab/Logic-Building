/*
Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE
*/

#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL ChkSymbol(char cValue)
{
	if(cValue >= 33 && cValue <=42)
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

	printf("Enter character : \t");
	scanf("%c",&ch);

	bRet = ChkSymbol(ch);

	if(bRet == YES)
	{
		printf("It is special symbol...\n");
	}
	else
	{
		printf("It is not special symbol...\n");
	}

	return 0;

}