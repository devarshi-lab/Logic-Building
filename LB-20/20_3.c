/*
 Design application for school management system.
As school is primary there are 4 standards from 1 to 4.
School fees of each standard is different.
For first standard fees are 8900, for second standard 12790, for
third standard 21000 and for fourth standard fees are 23450.
We have to accept standard from user and display the
corresponding fees.

Input : 2 Output : 12790
Input : 4 Output : 23450
Input : 6 Output : Wrong input 

*/

#include<stdio.h>

int Fees(int iDivision)
{
	switch(iDivision)
	{
		case 1: return 8900;
			break;
		case 2: return 12790;
			break;
		case 3: return 21000;
			break;
		case 4: return 23450;
			break;
		default: return 0;
	}
}
int main()
{
	int iDiv = 0;
	int iRet = 0;

	printf("Enter your division : \t");
	scanf("%d",&iDiv);
	
	iRet = Fees(iDiv);
	
	if(iRet == 0)
	{
		printf("Invalid Input\n");
	}
	else
	{
		printf("Your fees are : %d\t",iRet);
	}
	return 0;
}