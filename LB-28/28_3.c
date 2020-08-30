/*
Write a program which accept string from user and toggle the case.
Input : Marvellous Multi OS
Output : mARVELLOUS mULTI os 
*/

#include<stdio.h>

void totoggle(char *carr)
{
	int i = 0;
	while(carr[i] != '\0')
	{
		if(carr[i] >= 97 && carr[i] <= 122)
		{
			printf("%c",(carr[i]-32));
		}
		else if(carr[i] >= 65 && carr[i] <= 90)
		{
			printf("%c",(carr[i]+32));
		}
		else
		{
			printf("%c",carr[i]);
		}
		i++;

	}
}
int main()
{
	char cArr[20];

	printf("Enter the string : \t");
	scanf("%[^'\n']s",cArr);

	totoggle(cArr);

	return 0;
}