/*
 Write a program which accept string from user and copy that
characters of that string into another string by removing all white
spaces.
Input : “Marvel lous Pyth on”

Output : “MarvellousPython” 
*/

#include<stdio.h>

void StrCpyRemoveSpaces(char *src,char *dest)
{
	if(src == NULL || dest == NULL)
	{
		return;
	}

	while(*src != '\0')
	{
		if(*src == ' ')
		{
			src++;
		}
		*dest = *src;
		src++;
		dest++;
	}
}

int main()
{
	char arr[30] = {'\0'};
	char brr[30] = {'\0'};

	printf("Enter the string :\t");
	scanf("%[^'\n']s",arr);

	StrCpyRemoveSpaces(arr,brr);

	printf("Copied string  by removing white spaces is :  %s",brr);

	return 0;
}