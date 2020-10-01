/*
 Write a program which 2 strings from user and check whether first
N contents of two strings are equal or not. (Implement strcmp()
function).

Input : “Marvellous Infosystems”
 		“Marvellous Logic Building”
 		10
Output : TRUE 
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define ERROR -1

typedef int BOOL;

BOOL StrNCpy(char *src,char *dest,int iLimit)
{
	if((src == NULL) || (dest == NULL))
	{
		return ERROR;
	}
	if(iLimit < 0)
	{
		return ERROR;
	}

	while(iLimit != 0)
	{
		if(*src != *dest)
		{
			break;
		}
		src++;
		dest++;
		iLimit--;
	}

	if(iLimit == 0)
	{
		return TRUE;
	}

	return FALSE;

}

int main()
{
	char str1[30] = {'\0'};
	char str2[30] = {'\0'};
	int iNumber = 0;
	BOOL bRet = FALSE;

	printf("Enter first String : \t");
	scanf("%[^'\n']s",str1);

	printf("Enter second String : \t");
	scanf(" %[^'\n']s",str2);

	printf("Enter the number of chracters you want to check : \t");
	scanf("%d",&iNumber);

	bRet = StrNCpy(str1,str2,iNumber);

	if(bRet == TRUE)
	{
		printf("First %d contents are same...\n",iNumber);
	}
	else if(bRet == FALSE)
	{
		printf("First %d contents are not same...\n",iNumber);
	}
	else
	{
		printf("ERROR : INVALID MEMORY OR NUMBER");	
	}

	return 0;
}