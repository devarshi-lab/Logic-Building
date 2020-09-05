/*
Write a program which accept string from user and copy small
characters of that string into another string.

Input : “Marvellous multi OS”

Output : “arvellous multi”
*/

#include<stdio.h>

void StrCpySmall(char *arr1,char *arr2)
{
	if(arr1 == NULL)
	{
		return;
	}

	while(*arr1 != '\0')
	{
		if(*arr1 >= 'a' && *arr1 <= 'z')
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

	StrCpySmall(str1,str2);

	if(*str2 == '\0')
	{
		printf("There is no small letters in string");
	}
	else
	{
		printf("small letter string is %s",str2);
	}

	return 0;
}