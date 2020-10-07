/*
Write a program which accept string from user and print below
pattern.
Input : “Marvellous”

Output : M
		 M a
		 M a r
		 M a r v
		 M a r v e
		 M a r v e l
		 M a r v e l l
		 M a r v e l l o
		 M a r v e l l o u
		 M a r v e l l o u s

Input : “PPA”

Output : P
		 P P
		 P P A 
 */

#include<stdio.h>

void PrintPattern(char *arr)
{
	char *first,*last;
	if(arr == NULL)
	{
		return;
	}
	
	first = arr;
	last = arr;

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
int main()
{
	char str[30];

	printf("Enter the word : \t");
	scanf("%s",str);

	PrintPattern(str);

	return 0;
}