/*
Accept Character from user and check whether it is capital or not
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE 
*/


#include<stdio.h>

#define YES 1
#define NO 0
#define NOTCHAR -1
typedef int BOOL;

BOOL ChkAlphaCapital(char cValue)
{
	if((cValue >= 65 && cValue <=90))
	{
		return YES;
	}
	else if((cValue >= 97 && cValue <= 122))
	{
		return NO;
	}
	else
	{
		return NOTCHAR;
	}
}
int main()
{
	char ch = '\0';
	BOOL bRet = NO;

	printf("Enter the character : \t");
	scanf("%c",&ch);

	bRet = ChkAlphaCapital(ch);

	if(bRet == YES)
	{
		printf("It is capital letter!!!\n");
	}
	else if(bRet == NO)
	{
		printf("It is not capital letter!!!\n");
	}
	else
	{
		printf("ERROR : Enter valid character !!!\n");
	}

	return 0;
}