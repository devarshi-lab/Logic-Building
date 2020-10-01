/*
Accept string from user and check whether the string is palindrome
or not without considering its case.

Input : “1abccBA1”
Output : TRUE 
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0
#define ERROR -1

typedef int BOOL;

BOOL ChkPalindrome(char *arr)
{
	char *first,*last;
	if(arr == NULL)
	{
		return ERROR;
	}
	first = arr;
	last = arr;

	while(*last != '\0')
	{
		last++;
	}
	last--;

	while(first<=last)
	{
		if((*first>='A') && (*first<='Z'))
		{
			*first += 32;
		}
		if((*last>='A') && (*last<='Z'))
		{
			*last += 32;
		}
		
		if(*first != *last)
		{
			break;
		}
		first++;
		last--;
	}

	if(first<=last)
	{
		return FALSE;
	}

	return TRUE;
}
int main()
{
	char str[30] = {'\0'};
	BOOL bRet = FALSE;

	printf("Enter the string : \t");
	scanf("%[^'\n']s",str);

	bRet = ChkPalindrome(str);

	if(bRet == TRUE)
	{
		printf("String are palindrome...");
	}
	else if(bRet == FALSE)
	{
		printf("Strings are not palindrome...");
	}
	else
	{
		printf("ERROR : INVALID MEMORY");	
	}

	return 0;
}