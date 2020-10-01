/*
 Accept string from user and reverse the contents of that string by
toggling the case.
Input : “aCBdef”
Output : “FEDcbA” 
*/

#include <stdio.h>

void StrRevToggle(char *arr)
{
	char *first;
	char *last;
	char temp;
	first = arr;
	last = arr;
	if(arr == NULL)
	{
		return;
	}

	while(*last != '\0')
	{
		last++;
	}
	last--;

	while(first<=last)
	{
		if((*first>='a') && (*first<='z'))
		{
			*first -= 32;
		}
		else if((*first>='A') && (*first<='Z'))
		{
			*first += 32;
		}
		if((*last>='a') && (*last<='z'))
		{
			*last -= 32;
		}
		else if((*last>='A') && (*last<='Z'))
		{
			*last += 32;
		}

		temp = *first;
		*first = *last;
		*last = temp;

		first++;
		last--;
	}

}
int main()
{
	char str[30] = {'\0'};

	printf("Enter the string : \t");
	scanf("%[^'\n']s",str);

	StrRevToggle(str);

	printf("Modified String is : %s",str);

	return 0;
}