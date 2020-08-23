/*
Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.

Input : “MarvellouS”

Output : 6 (8-2)
*/

#include<stdio.h>

#define INVALID -1

int CountDiff(char *cArr)
{
	int i =0;
	int iCnt = 0;


	/*for(i = 0;cArr[i] != '\0';i++)
	{
		if(cArr[i] >= 97 && cArr[i] <= 122)
		{
			iCnt++;
		}
		else if(cArr[i] >= 65 && cArr[i] <= 90)
		{
			iCnt--;
		}
	}*/

	while(cArr[i] != '\0')
	{
		if(cArr[i] >= 97 && cArr[i] <= 122)
		{
			iCnt++;
		}
		else if(cArr[i] >= 65 && cArr[i] <= 90)
		{
			iCnt--;
		}

		i++;
	}

	if(iCnt<0)
	{
		return -iCnt;
	}
	return iCnt;
}
int main()
{
	char cArr[20];
	int iRet = 0;

	printf("Enter the string : \n");
	scanf("%[^'\n']s",cArr);

	iRet = CountDiff(cArr);

	printf("Diffrence between Capital and small letter present in string is : %d",iRet);
	

	return 0;
}