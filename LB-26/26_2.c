/*
Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.
Input : Q
Output : q
Input : m
Output : M
Input : 4
Output : 4
Input : %
Output : %
*/

#include<stdio.h>

char ChangeCase(char cValue)
{
	if(cValue >= 'A' && cValue <='Z')
	{
		return (cValue+32);
	}
	else if(cValue >='a' && cValue <= 'z')
	{
		return (cValue -32);
	}
	else
	{
		return cValue;
	}

}
int main()
{
	char ch = '\0';
	char cRet = '\0';

	printf("Enter the character : \t");
	scanf("%c",&ch);

	cRet = ChangeCase(ch);

	printf("%c\n",cRet);

	return 0;
}
