/*
.Write a program which accept string from user and convert it into
upper case.
Input : Marvellous Multi OS
Output : MARVELLOUS MULTI OS 
*/

#include<stdio.h>

void toupper(char *carr)
{
	int i = 0;
	while(carr[i] != '\0')
	{
		if(carr[i] >= 97 && carr[i] <= 122)
		{
			printf("%c",(carr[i]-32));
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

	toupper(cArr);

	return 0;
}