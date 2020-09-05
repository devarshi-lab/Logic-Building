/*
Write a program which accept string from user and copy the
contents of that string into another string. (Implement strncpy() function)

Input : “Marvellous Multi OS”
		10

Output : "Marvellous"

Note : If third parameter is greater than the size of source string then
copy whole string into destination.
*/

#include<stdio.h>

void StrnCpyx(char *arr1,char *arr2,int iValue)
{
	int i=0,j=0;
	if(arr1 == NULL)
	{
		return;
	}

	/*while(arr1[i] != '\0')
	{
		i++;
	}

	if(iValue < i)
	{
		while(j<iValue)
		{
			*arr2 = *arr1;
			j++;
			arr2++;
			arr1++;
		}
	}
	else
	{
		while(*arr1 != '\0')
		{
			*arr2 = *arr1;
			arr1++;
			arr2++;
		}
	}*/

	while((*arr1 != '\0') && (iValue != 0))
	{
		*arr2 = *arr1;
		arr1++;
		arr2++;
		iValue--;
	}

	*arr2 = '\0';
}
int main()
{
	char str1[20];
	char str2[20];
	int iNo = 0;

	printf("Enter the String : ");
	scanf("%[^'\n']s",str1);

	printf("Enter the number : \t");
	scanf("%d",&iNo);

	StrnCpyx(str1,str2,iNo);

	printf("Modified String is : %s",str2);

	return 0;
}