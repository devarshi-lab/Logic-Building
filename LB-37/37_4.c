/*
Write a program which accept string from user and copy the
contents into another string by removing extra white spaces.
Input : “Marvel lous multi OS”
Output : “Marvellous multi OS” 
*/

#include<stdio.h>

void StrCpyRemoveSpaces(char *src,char *dest)
{
	if((src == NULL)||(dest == NULL))
	{
		return;
	}

	while(*src != '\0')
	{
		if((*src == ' '))
		{
			src++;
			if(*src == ' ')
			{
				continue;
			}
			src--;
		}
	
		*dest = *src;
		src++;
		dest++;
	}
}
int main()
{
	char str1[50] = {'\0'},str2[50] = {'\0'};

	printf("Enter the String : \t");
	scanf("%[^'\n']s",str1);

	StrCpyRemoveSpaces(str1,str2);

	printf("String after modification : %s",str2);

	return 0;
}