/*
Write a program which accept string from user and accept one
character. Check whether that character is present in string or not.
Input : “Marvellous Multi OS”
 e
Output : TRUE
Input : “Marvellous Multi OS”
 W
Output : FALSE 
*/
#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL ChkCharacter(char *cArr,char cValue)
{
	
	while(*cArr != '\0')
	{
		if(*cArr == cValue)
		{
			break;
		}
		cArr++;
	}

	if(*cArr == cValue)
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
	char str[30];
	char ch = '\0';
	BOOL bRet = NO;

	printf("Enter the String : \t");
	scanf("%[^'\n']s",str);

	printf("Enter the character to check : \t");
	scanf(" %c",&ch);

	bRet = ChkCharacter(str,ch);
	if(bRet == YES)
	{
		printf("Character is present...\n");
	}
	else
	{
		printf("Character is not present...\n");
	}

	return 0;
}