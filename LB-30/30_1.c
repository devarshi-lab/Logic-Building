/*
1.Write a program which accept string from user and copy the
contents of that string into another string. (Implement strcpy()
function)

Input : “Marvellous Multi OS”

Output : “Marvellous Multi OS” in another string
*/

#include<stdio.h>

void StrcpyX(char *arr1,char *arr2)
{
	if(arr1 == NULL)
	{
		return;
	}

	while(*arr1 != '\0')
	{
		*arr2 = *arr1;
		arr1++;
		arr2++;
	}

	*arr2 = '\0';
}
int main()
{
	char str1[20];
	char str2[20];

	printf("Enter the string : \t");
	scanf("%[^'\n']s",str1);

	StrcpyX(str1,str2);

	printf("Copied string is : %s",str2);

	return 0;

}