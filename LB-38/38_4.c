/*
Write a program which accept string from user and print below
pattern.
Input : “Marvellous”
Output : M A R V E L L O U S
		 M A R V E L L O U S
		 M A R V E L L O U S
		 M A R V E L L O U S
		 M A R V E L L O U S
		 M A R V E L L O U S
		 M A R V E L L O U S
		 M A R V E L L O U S
		 M A R V E L L O U S
		 M A R V E L L O U S

Input : “PPA”
Output : P
		 P P
		 P P A 
 */

#include<stdio.h>

void PrintPattern(char *arr)
{
	int iLimit = 0;
	char *first,*last;
	int ismall = 0;
	if(arr == NULL)
	{
		return;
	}
	first = arr;
	last = arr;

	while(*arr != '\0')
	{
		if(*arr>='a' && *arr<='z')
		{
			*arr -=32;
			ismall = 1;
		}
		arr++;
	}

	arr = first;

	while(arr[iLimit] != '\0')
	{
		iLimit++;
	}

	if(ismall == 1)
	{
		printf("Pattern printed : \n");
		while(iLimit>0)
		{
			arr = first;
			while(*arr != '\0')
			{
				printf("%c\t",*arr);
				arr++;
			}
			printf("\n");
			iLimit--;
		}
	}
	else
	{
		printf("Pattern printed : \n");
		while(*last != '\0')
		{
			arr = first;
			while(arr <= last)
			{
				printf("%c\t",*arr);
				arr++;
			}
			last++;
			printf("\n");
		}
	}

}
int main()
{
	char str[30];

	printf("Enter the word : \t");
	scanf("%s",str);

	PrintPattern(str);

	return 0;
}