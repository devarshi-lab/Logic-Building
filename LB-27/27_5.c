/*
Write a program which accept string from user and display it inn
reverse order.

Input : “MarvellouS”

Output : “SuollevraM”
*/

#include<stdio.h>

void PrintReverse(char *cArr)
{
	int i = 0;
	int iLength = 0;
	char *barr = cArr;

	while(*barr != '\0')
	{
		iLength++;
		*barr++;
	}


	for(i = iLength-1;i>=0;i--)
	{
		printf("%c",cArr[i]);		
	}
}
int main()
{
	char cArr[20];

	printf("Enter the string : \t");
	scanf("%[^'\n']s",cArr);

	PrintReverse(cArr);

	return 0;
}