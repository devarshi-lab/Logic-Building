/*
 Write a program which accept string from user and reverse each
word in place.
Input : “Marvellous Multi OS”
Output : “suollevraM itluM SO” 
*/

#include <stdio.h>

void RevWord(char *arr)
{
	int iMax = 0;
	int l =0;
	int k =0;
	char temp = '\0';
	int i =0,j=0;
	if(arr == NULL)
	{
		return;
	}

	while(1)
	{	
		while((arr[j] != ' ')&&(arr[j] != '\0'))
		{
			j++;
		}
		k=j;
		j--;
		while(i<=j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
		i=k+1;
		j = k+1;
		if(arr[k] == '\0')
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