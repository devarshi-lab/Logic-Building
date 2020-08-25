/*
 Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE 
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char cValue)
{
	if((cValue >= 'A' && cValue <='Z') || (cValue >= 'a' && cValue <= 'z'))   //OR in ASCII (cValue >= 65 && cValue <=90) || (cValue >= 97 && cValue <= 122)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	char ch = '\0';
	BOOL bRet = FALSE;

	printf("Enter the character : \t");
	scanf("%c",&ch);

	bRet = ChkAlpha(ch);

	if(bRet == TRUE)
	{
		printf("It is character!!!\n");
	}
	else
	{
		printf("It is not character!!!\n");
	}

	return 0;
}
