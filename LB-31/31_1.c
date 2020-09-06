/*
 Write a program which accept string from user and copy that
characters of that string into another string in reverse order.
Input : “Marvellous Python”
Output : “nohtyP suollevraM” 
*/

#include<stdio.h>

void StrCpyRev(char *src,char *dest)
{
	int i = 0;

	if(src == NULL || dest == NULL)
	{
		return;
	}

	while(*src != '\0')
	{
		src++;
		i++;
	}
	src--;
	while(i > 0)
	{
		*dest = *src;
		dest++;
		i--;
		src--;
	}

	*dest = '\0';
}

int main()
{
	char arr[30] = {'\0'};
	char brr[30] = {'\0'};

	printf("Enter the string :\t");
	scanf("%[^'\n']s",arr);

	StrCpyRev(arr,brr);

	printf("Reversed copied string is :  %s",brr);

	return 0;
}