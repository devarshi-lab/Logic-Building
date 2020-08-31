 /*
 Write a program which accept string from user reverse that string
in place.
Input : “abcd”
Output : “dcba”
Input : “abba”
Output : “abba” 
*/

#include<stdio.h>
#include<stdlib.h>

void Reverse(char *arr1,char *arr2)
{
	int i = 0,j=0,k=0;

	while(arr1[i] != '\0')
	{
		i++;
	}
	k = i-1;

	while(j < i)
	{
		arr2[j] = arr1[k];
		j++;
		k--;
	}
	arr2[j] = '\0';
}
int main()
{
	char str1[20];
	char str2[20];

	printf("Enter string : \t");
	scanf("%[^'\n']s",str);

	Reverse(str1,str2);

	printf("Modified String is %s",str2);

	return 0;
}