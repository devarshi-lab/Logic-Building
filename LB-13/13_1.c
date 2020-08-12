/*
 Accept number from user and display below pattern.
Input : 5
Output : A B C D E 
*/

#include<stdio.h>

void pattern(int iValue)
{
	int iCnt = 0;
	char ch = 'A';

	if(iValue < 0)
	{
		iValue = -iValue;
	}

	for(iCnt = 1;iCnt <= iValue;iCnt++)
	{
		printf("%c\t",ch++);
	}
}

int main()
{
	int iNo = 0;
	
	printf("Enter a number : \t");
	scanf("%d",&iNo);

	pattern(iNo);

	return 0;
}