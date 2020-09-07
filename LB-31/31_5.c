/*
 Write a program which accept string from user and copy that
characters of that string into another string by toggling the case.
Input : “Marvellous Python 2”
Output : “mARVELLOUS pYTHON 2” 
*/

#include<stdio.h>

void StrCpyToggle(char *src,char *dest)
{
	if(src == NULL || dest == NULL)
	{
		return;
	}

	while(*src != '\0')
	{
		if(*src >='A' && *src <='Z')
		{
			*src = *src+32;
		}
		else if(*src >='a' && *src <='z')
		{
			*src = *src-32;
		}
		
		*dest = *src;

		dest++;
		src++;
	}
}

int main()
{
	char arr[30] = {'\0'};
	char brr[30] = {'\0'};

	printf("Enter the string :\t");
	scanf("%[^'\n']s",arr);

	StrCpyToggle(arr,brr);

	printf("Copied string  after toggling :  %s",brr);

	return 0;
}