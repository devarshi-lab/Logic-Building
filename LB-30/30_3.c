/*
Write a program which accept string from user and copy capital
characters of that string into another string.

Input : “Marvellous Multi OS”

Output : “MMOS”
*/

#include<stdio.h>

void StrCpyCapital(char *arr1,char *arr2)
{
	if(arr1 == NULL)
	{
		return;
	}

	while(*arr1 != '\0')
	{
		if(*arr1 >= 'A' && *arr1 <= 'Z')
		{
			*arr2 = *arr1;
			arr2++;
		}
		arr1++;
	}

	*arr2 = '\0';
}
int main()
{
	char str1[30];
	char str2[30];

	printf("Enter the string : ");
	scanf("%[^'\n']s",str1);

	StrCpyCapital(str1,str2);

	if(*str2 == '\0')
	{
		printf("There is no capital letters in string");
	}
	else
	{
		printf("Capital letter string is %s",str2);
	}

	return 0;
}