/*
Accept Character from user and check whether it is small case or
not (a-z). 
*/

#include<stdio.h>

#define YES 1
#define NO 0
#define NOTCHAR -1
typedef int BOOL;

BOOL ChkAlphaSmall(char cValue)
{
	if((cValue >= 'a' && cValue <='z'))
	{
		return YES;
	}
	else if((cValue >= 'A' && cValue <='Z'))
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

	bRet = ChkAlphaSmall(ch);

	if(bRet == YES)
	{
		printf("It is small case character!!!\n");
	}
	else if(bRet == NO)
	{
		printf("It is not small case character!!!\n");
	}
	else
	{
		printf("ERROR : Enter valid character !!!\n");
	}

	return 0;
}
