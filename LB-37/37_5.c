/*
 Write a program which accept string from user and replace each
occurrence of first character of each word into capital case.
Input : “marvellous infosystems by Piyush khairnar”
Output : “Marvellous Infosystems By Piyush Khairnar” 
*/

#include<stdio.h>

void StrFirstCap(char *arr)
{
	if(arr == NULL)
	{
		return;
	}

	if(*arr>= 'a' && *arr<='z')
	{
		*arr -= 32;
	}
	arr++;

	while(*arr != 0)
	{
		if((*(arr-1) == ' ') && (*arr != ' ') || (*(arr-1) == '\t'))
		{
			if(*arr>='a' && *arr<='z')
			{
				*arr -= 32;
			}
		}
		arr++;
	}

}
int main()
{
	char str[50] = {'\0'};

	printf("Enter the string : \t");
	scanf("%[^'\n']s",str);

	StrFirstCap(str);

	printf("Modified string is : %s",str);

	return 0;
}