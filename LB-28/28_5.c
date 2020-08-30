/*
 Write a program which accept string from user and count number of
white spaces
Input : “MarvellouS”
Output : 0
Input : “MarvellouS Infosystems”
Output : 1
Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
Output : 5 
*/
#include<stdio.h>

int DisplaySpaces(char *str)
{
	int i=0;
	int iCnt = 0;

	while(str[i] != '\0')
	{
		if(str[i] == ' ')
		{
			iCnt++;
		}
		i++;
	}

	return iCnt;
}
int main()
{
	char cArr[20];
	int iRet = 0;

	printf("Enter the string : \t");
	scanf("%[^'\n']s",cArr);

	iRet = DisplaySpaces(cArr);

	printf("Number of white spaces are : %d\n",iRet);

	return 0;
}