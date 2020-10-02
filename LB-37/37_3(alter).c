/*
 Write a program which accept string from user and reverse each
word in place.
Input : “Marvellous Multi OS”
Output : “suollevraM itluM SO” 
*/

#include <stdio.h>

void RevWord(char *arr)
{
	char *k;
	char temp = '\0';
	char *first,*last;
	if(arr == NULL)
	{
		return;
	}

	first = arr;
	last = arr;

	while(1)
	{	
		while((*last != ' ')&&(*last != '\0'))
		{
			last++;
		}
		k=last;
		last--;
		while(first<=last)
		{
			temp = *first;
			*first = *last;
			*last = temp;
			first++;
			last--;
		}
		first=k+1;
		last = k+1;
		if(*k == '\0')
		{
			break;
		}
	}



}
int main()
{
	char str[50] = {'\0'};
	int iRet = 0;

	printf("Enter the string : \t");
	scanf("%[^'\n']s",str);

	RevWord(str);

	printf("Modified string is : %s\n",str);

	return 0;
}