/*
Write a program which accept string from user and count number of
capital characters.

Input : “Marvellous Multi OS”

Output : 4
*/

#include<stdio.h>

#define INVALID -1

int CountCapital(char *cArr)
{
	int i =0;
	int iCnt = 0;

	if(*cArr == '\0')
	{
		return INVALID;
	}

	/*for(i = 0;cArr[i] != '\0';i++)
	{
		if(cArr[i] >= 65 && cArr[i] <= 90)
		{
			iCnt++;
		}
	}*/

	while(cArr[i] != '\0')
	{
		if(cArr[i] >= 65 && cArr[i] <= 90)
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

	printf("Enter the string : \n");
	scanf("%[^'\n']s",cArr);

	iRet = CountCapital(cArr);

	if(iRet == INVALID)
	{
		printf("ERROR : PLEASE ENTER CHARACTER!!!");
		return -1;
	}
	else
	{
		printf("Capital letter present in string are : %d",iRet);
	}

	return 0;
}