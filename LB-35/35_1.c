/*
Write a program which accept one number from user and count number of
ON (1) bits in it without using % and / operator.
Input :  11
Output :  3
*/
#include<stdio.h>

int CountOne(int iValue)
{
	int iMask = 0X00000001;
	int count = 0;
	int i=0;
	int iMaskX = 0;

	/*for(i = 0;i<32;i++)
	{
		iMaskX = iMask << i;
		if((iMaskX & iValue) == iMaskX)
		{
			count++;
		}
	}*/

	while(iValue != 0)
	{
		if((iValue & 1) == 1)
		{
			count++;
		}
		iValue = iValue >> 1;
	}
	return count;
}
int main()
{
	int iNo = 0;
	int iRet = 0;

	printf("Enter the number : \t");
	scanf("%d",&iNo);

	iRet = CountOne(iNo);

	printf("Number of on bits is : %d\n",iRet);

	return 0;
}