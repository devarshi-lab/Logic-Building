/*
Write a program which accept string from user and check whether
it contains vowels in it or not.

Input : “marvellous”

Output : TRUE

Input : “Demo”

Output : TRUE

Input : “xyz”

Output : FALSE

*/
#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL ChkVowel(char *cArr)
{
	int i = 0;
	int iFound = 0;
	while(cArr[i] != '\0')
	{
		switch(cArr[i])
		{
			case 'a' : case 'A' : case 'e' : case 'E' : case 'i' : case 'I' :
			case 'o' : case 'O' : case 'u' : case 'U' : iFound = 1; 
			break;
		}
		i++;
	}

	if(iFound == 1)
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
	char cArr[20];
	BOOL bRet = NO;

	printf("Enter the string : \t");
	scanf("%[^'\n']s",cArr);

	bRet = ChkVowel(cArr);

	if(bRet == YES)
	{
		printf("It contains vowel...\n");
	}
	else
	{
		printf("It doesn't contain vowel...\n");
	}

	return 0;
}