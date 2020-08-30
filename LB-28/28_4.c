/*
Write a program which accept string from user and display only
digits from that string.
Input : “marve89llous121”
Output : 89121
Input : “Demo”
Output : 
*/
#include<stdio.h>

void DisplayNumber(char *str)
{
	int i = 0;
	while(str[i] != 0)
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			printf("%c",str[i]);
		}
		i++;
	}
}
int main()
{
	char cArr[20];

	printf("Enter the string : \t");
	scanf("%[^'\n']s",cArr);

	DisplayNumber(cArr);

	return 0;
}