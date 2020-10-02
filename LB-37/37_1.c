/*
Write a program which accept string from user count number of
words from string
Input : “Marvellous Multi OS”
Output : 3
Input : “ Marvellous Multi OS Pune”
Output : 4
*/

#include<stdio.h>

int WordCount(char *str)
{
	int Count = 0;
	if(str == NULL)
	{
		return -1;
	} 

	while(*str != 0)
	{
		if(*str == ' ')
		{
			Count++;
		}
		str++;
	}

	return ++Count;
}
int main()
{
	char str[30] = {'\0'};
	int iRet = 0;

	printf("Enter the string : \t");
	scanf("%[^'\n']s",str);

	iRet = WordCount(str);

	if(iRet == -1)
	{
		printf("ERROR : INVALID MEMORY!!!");
		return -1;
	}

	printf("No of words present in string are : %d\n",iRet);

	return 0;
}