/*
Write a program which accept string from user and count number of
small characters.

Input : “Marvellous”

Output : 9
*/

#include<stdio.h>

#define INVALID -1

int CountSmall(char *cArr)
{
	int i =0;
	int iCnt = 0;


	/*for(i = 0;cArr[i] != '\0';i++)
	{
		if(cArr[i] >= 97 && cArr[i] <= 122)
		{
			iCnt++;
		}
	}*/

	while(cArr[i] != '\0')
	{
		if(cArr[i] >= 97 && cArr[i] <= 122)
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

	iRet = CountSmall(cArr);

	printf("Capital letter present in string are : %d",iRet);
	

	return 0;
}