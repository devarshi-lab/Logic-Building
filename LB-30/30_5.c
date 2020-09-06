/*
Write a program which 2 strings from user and concat second string
after first string. (Implement strcat() function).

Input : “Marvellous Infosystems”
		“Logic Building”

Output : “Marvellous Infosystems Logic Building”
*/


#include<stdio.h>

void StrCatX(char *arr1,char *arr2)
{
	while(*arr1 != '\0')
	{
		arr1++;
	}
	*arr1 = ' ';
	arr1++;
	while(*arr2 != '\0')
	{
		*arr1 = *arr2;
		arr2++;
		arr1++;
	}
	
	*arr1 = '\0';
}
int main()
{
	char str1[60];
	char str2[30];

	printf("Enter 1st String : \t");
	scanf("%[^'\n']s",str1);

	printf("Enter 2nd String : \t");
	scanf(" %[^'\n']s",str2);

	StrCatX(str1,str2);

	printf("Concatineted String is : %s",str1);

	return 0;
}