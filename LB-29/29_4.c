/*
Write a program which accept string from user and accept one
character. Return index of last occurrence of that character.
Input : “Marvellous Multi OS”
 M
Output : 11
Input : “Marvellous Multi OS”
 W
Output : -1
Input : “Marvellous Multi OS”
 e
Output : 4 
*/

#include<stdio.h>

int LastOcc(char *arr,char cValue)
{
	int i=0,iPosition=0;
	int iLength = 0;

	/*while(arr[i] != '\0')
	{
		iLength++;
		i++;
	}*/

	//i = iLength;
	while(arr[i] != '\0')
	{
		if(arr[i] == cValue)
		{
			iPosition = i;
		}

		i++;
	}

	return iPosition;
}
int main()
{
	char str[20];
	char ch = '\0';
	int iRet = 0;

	printf("Enter the string : \t");
	scanf("%[^'\n']s",str);

	printf("Enter the character to check last occurence : \t");
	scanf(" %c",&ch);

	iRet = LastOcc(str,ch);

	if(iRet == -1)
	{
		printf("Character is not present in string...");
	}
	else
	{
		printf("last occuence  of %c is at  %d position\t",ch,iRet);
	}

	return 0;

}