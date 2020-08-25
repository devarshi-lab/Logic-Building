/*
Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a
Input : 8
output : 
*/

#include<stdio.h>

void Display(char cValue)
{
	int i = 0;
	if(cValue >= 'A' && cValue <= 'Z')
	{
		for(i = cValue;i<=90;i++)
		{
			printf("%c",i);
		}
	}
	else if(cValue >= 'a' && cValue <= 'z')
	{
		for(i = cValue;i>=97;i--)
		{
			printf("%c",i);
		}
	}
	else
	{
		return;
	}
}
int main()
{
	char ch ='\0';

	printf("Enter a character : \t");
	scanf("%c",&ch);

	Display(ch);

	return 0;
}
