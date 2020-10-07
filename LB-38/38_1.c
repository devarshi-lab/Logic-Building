/*
Write a program which accept string from user and print below
pattern.
Input : “Marvellous”

Output : M a r v e l l o u s
		 M a r v e l l o u s
		 M a r v e l l o u s
		 M a r v e l l o u s
		 M a r v e l l o u s
		 M a r v e l l o u s
		 M a r v e l l o u s
		 M a r v e l l o u s
		 M a r v e l l o u s
		 M a r v e l l o u s

Input :PPA

Output : P P A
 		 P P A
 		 P P A 
 */

#include<stdio.h>

void PrintPattern(char *arr)
{
	int iLimit = 0;
	char *first;
	if(arr == NULL)
	{
		return;
	}
	first = arr;

	while(arr[iLimit] != '\0')
	{
		iLimit++;
	}

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
int main()
{
	char str[30];

	printf("Enter the word : \t");
	scanf("%s",str);

	PrintPattern(str);

	return 0;
}