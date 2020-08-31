/*
Write a program which accept string from user and accept one
character. Return frequency of that character.
Input : “Marvellous Multi OS”
 M
Output : 2
Input : “Marvellous Multi OS”
 W
Output : 0 
*/

#include<stdio.h>

int CountFreq(char *arr,char cValue)
{
	int iCnt = 0;
	while(*arr != '\0')
	{
		if(*arr == cValue)
		{
			iCnt++;
		}

		*arr++;
	}

	return iCnt;
}
int main()
{
	char str[20];
	char ch = '\0';
	int iRet = 0;

	printf("Enter the string : \t");
	scanf("%[^'\n']s",str);

	printf("Enter the character to count frequency : \t");
	scanf(" %c",&ch);

	iRet = CountFreq(str,ch);

	printf("Frequency of %c is : %d\t",ch,iRet);

	return 0;

}