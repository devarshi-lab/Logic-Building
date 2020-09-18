/*
Write a program which accepts 2 strings from user and concat N
characters of second string after first string.Value of N should be
accepted from user. (Implement strncat() function).
Note : If third parameter is greater than the size of second string then
concat whole string after first string.
Input : “Marvellous Infosystems”
 		“Logic Building”
 		5
Output : “Marvellous Infosystems Logic” 
*/

#include<stdio.h>

void StrNCat(char *src,char *dest,int iLimit)
{
	if(src == NULL || dest == NULL)
	{
		return;
	}
	if(iLimit<0)
	{
		return;
	}
	while(*src != '\0')
	{
		src++;
	}
	*src = ' ';
	src++;
	while(iLimit > 0)
	{
		*src = *dest;
		src++;
		dest++;
		iLimit--;
	}

	*src = '\0';
}
int main()
{
	char str1[30] = {'\0'};
	char str2[30] = {'\0'};
	int iNumber = 0;

	printf("Enter first String : \t");
	scanf("%[^'\n']s",str1);

	printf("Enter second String : \t");
	scanf(" %[^'\n']s",str2);

	printf("Enter the number of chracters you want to concat : \t");
	scanf("%d",&iNumber);

	StrNCat(str1,str2,iNumber);

	printf("Modified String is : %s",str1);

	return 0;
}