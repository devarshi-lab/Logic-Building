/*
Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.
Input : A
Output : 
Decimal 65
Octal 0101
Hexadecimal 0X41
*/

#include<stdio.h>

void Display(char cValue)
{
	printf("Decimal :\t%d\nOctal :\t\t%o\nHexaDecimal:\t0X%x\n",cValue,cValue,cValue);
}
int main()
{
	char ch = '\0';

	printf("Enter the character : \t");
	scanf("%c",&ch);

	Display(ch);

	return 0;
}