/*
Write a program which 2 strings from user and check whether
contents of two strings are equal or not. (Implement strcmp()
function).
Input : “Marvellous Infosystems”
 		“Marvellous Infosystems”
Output : TRUE 
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0
#define ERROR -1

typedef int BOOL;

BOOL StrCpy(char *src,char *dest)
{
	if((src == NULL) || (dest == NULL))
	{
		return ERROR;
	}

	while(*src != '\0')
	{
		if(*src != *dest)
		{
			break;
		}
		src++;
		dest++;
	}

	if((*src == '\0') && (*dest == '\0'))
	{
		return TRUE;
	}

	return FALSE;
}
int main()
{
	char str1[30] = {'\0'};
	char str2[30] = {'\0'};
	BOOL bRet = FALSE;

	printf("Enter first String : \t");
	scanf("%[^'\n']s",str1);

	printf("Enter second String : \t");
	scanf(" %[^'\n']s",str2);


	bRet = StrCpy(str1,str2);

	if(bRet == TRUE)
	{
		printf("Both Strings are same...\n");
	}
	else if(bRet == FALSE)
	{
		printf("Strings are not same...\n");
	}
	else
	{
		printf("ERROR : INVALID MEMORY\n");
	}

	return 0;
}