/*
Write a program which accept string from user and convert it into
lower case.
Input : Marvellous Multi OS
Output : marvellous multi os 
*/

#include<stdio.h>

void tolower(char *carr)
{
	int i = 0;
	while(carr[i] != '\0')
	{
		if(carr[i] >= 65 && carr[i] <= 90)
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

	tolower(cArr);

	return 0;
}