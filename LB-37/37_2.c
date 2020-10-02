/*
Write a program which accept string from user and return length of
largest word.
Input : “Marvellous Multi OS Infosystems”
Output : 11 
*/

#include <stdio.h>

int MaxLength(char *arr)
{
	int iMax = 0,i=0;
	if(arr == NULL)
	{
		return -1;
	}

	while(*arr != '\0')
	{
		i=0;
		while((*arr != ' ')&&(*arr != '\0') && (*arr != '\t'))
		{
			i++;
			arr++;
		}
		if(i>iMax)
		{
			iMax = i;
		}
		arr++;
	}

	return iMax;
}
int main()
{
	char str[50] = {'\0'};
	int iRet = 0;

	printf("Enter the string : \t");
	scanf("%[^'\n']s",str);

	iRet = MaxLength(str);

	if(iRet == -1)
	{
		printf("ERROR : INVALID MEMORY!!!");
		return -1;
	}

	printf("length of maximum word present in string is : %d\n",iRet);
}