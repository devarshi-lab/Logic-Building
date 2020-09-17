/*
 Write a program which accept two numbers from user and display position
of common ON bits from that two numbers.
Input : 10 15 (1010 1111)
Output : 2 4 
*/

#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iValue1,UINT iValue2)
{
	int i = 1,j=0;
	while((iValue1 != 0) || (iValue2 != 0))
	{
		if((((iValue1 & 1) == 1)) && (((iValue2 & 1) == 1)))
		{
			printf("%d\t",i);
			j=1;
		}
		iValue2 = iValue2 >> 1;
		iValue1 = iValue1 >> 1;
		
		i++;
	}

	if(j == 0)
	{
		printf("There is no common bits...");
	}
}
int main()
{
	UINT iNo1 = 0,iNo2 = 0;

	printf("Enter the first number : \t");
	scanf("%d",&iNo1);

	printf("Enter the second number : \t");
	scanf("%d",&iNo2);

	CommonBits(iNo1,iNo2);

	return 0;

}